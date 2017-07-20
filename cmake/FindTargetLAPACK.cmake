# FindTargetLAPACK.cmake
# ----------------------
#
# LAPACK cmake module to wrap FindLAPACK.cmake in a target.
#
# This module sets the following variables in your project: ::
#
#   TargetLAPACK_FOUND - true if BLAS/LAPACK found on the system
#   TargetLAPACK_MESSAGE - status message with BLAS/LAPACK library path list
#
# This module *unsets* the following conventional LAPACK variables so as
#   to force using the target: ::
#
#   LAPACK_FOUND
#   LAPACK_LIBRARIES
#

set(PN TargetLAPACK)

# 1st precedence - libraries passed in through -DLAPACK_LIBRARIES
if (LAPACK_LIBRARIES)
    if (NOT ${PN}_FIND_QUIETLY)
        message (STATUS "LAPACK detection suppressed.")
    endif()

    add_library (tgt::lapack INTERFACE IMPORTED)
    set_property (TARGET tgt::lapack PROPERTY INTERFACE_LINK_LIBRARIES ${LAPACK_LIBRARIES})
    if (LAPACK_INCLUDE_DIRS)
        set_property (TARGET tgt::lapack PROPERTY INTERFACE_INCLUDE_DIRECTORIES ${LAPACK_INCLUDE_DIRS})
    endif()
else()
    # 2nd precedence - target already prepared and findable in TargetLAPACKConfig.cmake
    find_package (TargetLAPACK QUIET CONFIG)
    if (TARGET tgt::lapack)
        if (NOT ${PN}_FIND_QUIETLY)
            message (STATUS "TargetLAPACKConfig detected.")
        endif()
    else()
        # 3rd precedence - usual variables from FindLAPACK.cmake
        find_package (LAPACK QUIET MODULE)
        if (NOT ${PN}_FIND_QUIETLY)
            message (STATUS "LAPACK detected.")
        endif()
    
        add_library (tgt::lapack INTERFACE IMPORTED)
        set_property (TARGET tgt::lapack PROPERTY INTERFACE_LINK_LIBRARIES ${LAPACK_LIBRARIES})

        unset (LAPACK_FOUND)
        unset (LAPACK_LIBRARIES)
    endif()
endif()    

string(ASCII 27 Esc)
set(ColourReset "${Esc}[m")
set(Cyan        "${Esc}[36m")

get_property (_ill TARGET tgt::lapack PROPERTY INTERFACE_LINK_LIBRARIES)
get_property (_iid TARGET tgt::lapack PROPERTY INTERFACE_INCLUDE_DIRECTORIES)
if ((TARGET tgt::blas) AND (TARGET tgt::lapk))
    get_property (_illb TARGET tgt::blas PROPERTY INTERFACE_LINK_LIBRARIES)
    get_property (_illl TARGET tgt::lapk PROPERTY INTERFACE_LINK_LIBRARIES)
    get_property (_iid TARGET tgt::blas PROPERTY INTERFACE_INCLUDE_DIRECTORIES)
endif()

# <<  Examine library list for MKL-ness  >>
foreach(_l IN LISTS _ill _illb _illl)
    if(${_l} MATCHES "mkl")
        set(_isMKL " MKL")
        set_property (TARGET tgt::lapack PROPERTY INTERFACE_COMPILE_DEFINITIONS USING_LAPACK_MKL)
        break()
    endif()
endforeach()

if(NOT _iid)
else()
    set(_hasINCL " +headers")
endif()

set (${PN}_MESSAGE "${Cyan}Found LAPACK${_isMKL}${_hasINCL}${ColourReset}: ${_ill}")
if ((TARGET tgt::blas) AND (TARGET tgt::lapk))
    set (${PN}_MESSAGE "${Cyan}Found LAPACK${_isMKL}${_hasINCL}${ColourReset}: ${_illl};${_illb}")
endif()

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args (${PN} DEFAULT_MSG ${PN}_MESSAGE)
