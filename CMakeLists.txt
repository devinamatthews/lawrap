cmake_minimum_required(VERSION 3.0)
# project_VERSION* variables populated from project(... VERSION x.x.x) string
cmake_policy(SET CMP0048 NEW)

project(LAWrap
        VERSION 0.1
        LANGUAGES C CXX)
set(LAWrap_AUTHORS      "Devin A. Matthews")
set(LAWrap_DESCRIPTION  "Thin C and C++ wrappers around the Fortran BLAS and LAPACK interfaces, meant to simplify usage and increase robustness while maintaining as low-level an interface as possible")
set(LAWrap_URL          "https://github.com/devinamatthews/lawrap")
set(LAWrap_LICENSE      "BSD 3-clause")

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

################################# Main Project #################################
include(GNUInstallDirs)
include(CMakePackageConfigHelpers)

set(PN ${PROJECT_NAME})

# <<<  Build  >>>

add_library(lawrap INTERFACE)

# <<<  Install  >>>

install(FILES fortran.h blas.h lapack.h
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/lawrap)
install(DIRECTORY internal
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/lawrap)
install(TARGETS lawrap
        EXPORT "${PN}Targets")

# <<<  Export Interface  >>>

if(APPLE)
    target_link_libraries(lawrap INTERFACE "-undefined dynamic_lookup")
endif()

target_compile_definitions(lawrap INTERFACE USING_${PN})
target_include_directories(lawrap INTERFACE $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)

# <<<  Export Config  >>>

# GNUInstallDirs "DATADIR" wrong here; CMake search path wants "share".
set(CMAKECONFIG_INSTALL_DIR "share/cmake/${PN}")
configure_package_config_file(cmake/${PN}Config.cmake.in
                              "${CMAKE_CURRENT_BINARY_DIR}/${PN}Config.cmake"
                              INSTALL_DESTINATION ${CMAKECONFIG_INSTALL_DIR})
# Remove CMAKE_SIZEOF_VOID_P from ConfigVersion.cmake since the library does
# not depend on architecture specific settings or libraries.
set(_LAWRAP_CMAKE_SIZEOF_VOID_P ${CMAKE_SIZEOF_VOID_P})
unset(CMAKE_SIZEOF_VOID_P)
write_basic_package_version_file(${CMAKE_CURRENT_BINARY_DIR}/${PN}ConfigVersion.cmake
                                 VERSION ${${PN}_VERSION}
                                 COMPATIBILITY AnyNewerVersion)
set(CMAKE_SIZEOF_VOID_P ${_LAWRAP_CMAKE_SIZEOF_VOID_P})
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/${PN}Config.cmake
              ${CMAKE_CURRENT_BINARY_DIR}/${PN}ConfigVersion.cmake
              cmake/FindTargetLAPACK.cmake
        DESTINATION ${CMAKECONFIG_INSTALL_DIR})
install(EXPORT "${PN}Targets"
        NAMESPACE "${PN}::"
        DESTINATION ${CMAKECONFIG_INSTALL_DIR})
