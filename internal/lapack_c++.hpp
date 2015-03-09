#ifndef _LAWRAP_INTERNAL_LAPACK_CPP_HPP_
#define _LAWRAP_INTERNAL_LAPACK_CPP_HPP_

#ifndef _LAWRAP_LAPACK_H_
#error "This file must only be included through lapack.h."
#endif

/*
 * C++ wrappers
 */
namespace LAWrap
{

inline integer getrf( integer m, integer n, float* a, integer lda,
                    integer* ipiv )
{
    return sgetrf(m, n, a, lda, ipiv);
}

inline integer getrf( integer m, integer n, double* a, integer lda,
                    integer* ipiv )
{
    return dgetrf(m, n, a, lda, ipiv);
}

inline integer getrf( integer m, integer n, scomplex* a, integer lda,
                    integer* ipiv )
{
    return cgetrf(m, n, a, lda, ipiv);
}

inline integer getrf( integer m, integer n, dcomplex* a, integer lda,
                    integer* ipiv )
{
    return zgetrf(m, n, a, lda, ipiv);
}

inline integer gbtrf( integer m, integer n, integer kl,
                    integer ku, float* ab, integer ldab,
                    integer* ipiv )
{
    return sgbtrf(m, n, kl, ku, ab, ldab, ipiv);
}

inline integer gbtrf( integer m, integer n, integer kl,
                    integer ku, double* ab, integer ldab,
                    integer* ipiv )
{
    return dgbtrf(m, n, kl, ku, ab, ldab, ipiv);
}

inline integer gbtrf( integer m, integer n, integer kl,
                    integer ku, scomplex* ab, integer ldab,
                    integer* ipiv )
{
    return cgbtrf(m, n, kl, ku, ab, ldab, ipiv);
}

inline integer gbtrf( integer m, integer n, integer kl,
                    integer ku, dcomplex* ab, integer ldab,
                    integer* ipiv )
{
    return zgbtrf(m, n, kl, ku, ab, ldab, ipiv);
}

inline integer gttrf( integer n, float* dl, float* d, float* du,
                    float* du2, integer* ipiv )
{
    return sgttrf(n, dl, d, du, du2, ipiv);
}

inline integer gttrf( integer n, double* dl, double* d, double* du,
                    double* du2, integer* ipiv )
{
    return dgttrf(n, dl, d, du, du2, ipiv);
}

inline integer gttrf( integer n, scomplex* dl, scomplex* d, scomplex* du,
                    scomplex* du2, integer* ipiv )
{
    return cgttrf(n, dl, d, du, du2, ipiv);
}

inline integer gttrf( integer n, dcomplex* dl, dcomplex* d, dcomplex* du,
                    dcomplex* du2, integer* ipiv )
{
    return zgttrf(n, dl, d, du, du2, ipiv);
}

inline integer potrf( char uplo, integer n, float* a, integer lda )
{
    return spotrf(uplo, n, a, lda);
}

inline integer potrf( char uplo, integer n, double* a, integer lda )
{
    return dpotrf(uplo, n, a, lda);
}

inline integer potrf( char uplo, integer n, scomplex* a, integer lda )
{
    return cpotrf(uplo, n, a, lda);
}

inline integer potrf( char uplo, integer n, dcomplex* a, integer lda )
{
    return zpotrf(uplo, n, a, lda);
}

inline integer pstrf( char uplo, integer n, float* a, integer lda,
                    integer* piv, integer& rank, float tol)
{
    return spstrf(uplo, n, a, lda, piv, &rank, tol);
}

inline integer pstrf( char uplo, integer n, double* a, integer lda,
                    integer* piv, integer& rank, double tol)
{
    return dpstrf(uplo, n, a, lda, piv, &rank, tol);
}

inline integer pstrf( char uplo, integer n, scomplex* a, integer lda,
                    integer* piv, integer& rank, float tol)
{
    return cpstrf(uplo, n, a, lda, piv, &rank, tol);
}

inline integer pstrf( char uplo, integer n, dcomplex* a, integer lda,
                    integer* piv, integer& rank, double tol)
{
    return zpstrf(uplo, n, a, lda, piv, &rank, tol);
}

inline integer pftrf( char transr, char uplo, integer n, float* a )
{
    return spftrf(transr, uplo, n, a);
}

inline integer pftrf( char transr, char uplo, integer n, double* a )
{
    return dpftrf(transr, uplo, n, a);
}

inline integer pftrf( char transr, char uplo, integer n, scomplex* a )
{
    return cpftrf(transr, uplo, n, a);
}

inline integer pftrf( char transr, char uplo, integer n, dcomplex* a )
{
    return zpftrf(transr, uplo, n, a);
}

inline integer pptrf( char uplo, integer n, float* ap )
{
    return spptrf(uplo, n, ap);
}

inline integer pptrf( char uplo, integer n, double* ap )
{
    return dpptrf(uplo, n, ap);
}

inline integer pptrf( char uplo, integer n, scomplex* ap )
{
    return cpptrf(uplo, n, ap);
}

inline integer pptrf( char uplo, integer n, dcomplex* ap )
{
    return zpptrf(uplo, n, ap);
}

inline integer pbtrf( char uplo, integer n, integer kd, float* ab,
                    integer ldab )
{
    return spbtrf(uplo, n, kd, ab, ldab);
}

inline integer pbtrf( char uplo, integer n, integer kd, double* ab,
                    integer ldab )
{
    return dpbtrf(uplo, n, kd, ab, ldab);
}

inline integer pbtrf( char uplo, integer n, integer kd, scomplex* ab,
                    integer ldab )
{
    return cpbtrf(uplo, n, kd, ab, ldab);
}

inline integer pbtrf( char uplo, integer n, integer kd, dcomplex* ab,
                    integer ldab )
{
    return zpbtrf(uplo, n, kd, ab, ldab);
}

inline integer pttrf( integer n, float* d, float* e )
{
    return spttrf(n, d, e);
}

inline integer pttrf( integer n, double* d, double* e )
{
    return dpttrf(n, d, e);
}

inline integer pttrf( integer n, float* d, scomplex* e )
{
    return cpttrf(n, d, e);
}

inline integer pttrf( integer n, double* d, dcomplex* e )
{
    return zpttrf(n, d, e);
}

inline integer sytrf( char uplo, integer n, float* a, integer lda,
                    integer* ipiv)
{
    return ssytrf(uplo, n, a, lda, ipiv);
}

inline integer sytrf( char uplo, integer n, double* a, integer lda,
                    integer* ipiv)
{
    return dsytrf(uplo, n, a, lda, ipiv);
}

inline integer sytrf( char uplo, integer n, scomplex* a, integer lda,
                    integer* ipiv)
{
    return csytrf(uplo, n, a, lda, ipiv);
}

inline integer sytrf( char uplo, integer n, dcomplex* a, integer lda,
                    integer* ipiv)
{
    return zsytrf(uplo, n, a, lda, ipiv);
}

inline integer hetrf( char uplo, integer n, float* a, integer lda,
                    integer* ipiv)
{
    return ssytrf(uplo, n, a, lda, ipiv);
}

inline integer hetrf( char uplo, integer n, double* a, integer lda,
                    integer* ipiv)
{
    return dsytrf(uplo, n, a, lda, ipiv);
}

inline integer hetrf( char uplo, integer n, scomplex* a, integer lda,
                    integer* ipiv)
{
    return chetrf(uplo, n, a, lda, ipiv);
}

inline integer hetrf( char uplo, integer n, dcomplex* a, integer lda,
                    integer* ipiv)
{
    return zhetrf(uplo, n, a, lda, ipiv);
}

inline integer sptrf( char uplo, integer n, float* ap, integer* ipiv )
{
    return ssptrf(uplo, n, ap, ipiv);
}

inline integer sptrf( char uplo, integer n, double* ap, integer* ipiv )
{
    return dsptrf(uplo, n, ap, ipiv);
}

inline integer sptrf( char uplo, integer n, scomplex* ap, integer* ipiv )
{
    return csptrf(uplo, n, ap, ipiv);
}

inline integer sptrf( char uplo, integer n, dcomplex* ap, integer* ipiv )
{
    return zsptrf(uplo, n, ap, ipiv);
}

inline integer hptrf( char uplo, integer n, float* ap, integer* ipiv )
{
    return ssptrf(uplo, n, ap, ipiv);
}

inline integer hptrf( char uplo, integer n, double* ap, integer* ipiv )
{
    return dsptrf(uplo, n, ap, ipiv);
}

inline integer hptrf( char uplo, integer n, scomplex* ap, integer* ipiv )
{
    return chptrf(uplo, n, ap, ipiv);
}

inline integer hptrf( char uplo, integer n, dcomplex* ap, integer* ipiv )
{
    return zhptrf(uplo, n, ap, ipiv);
}

inline integer getrs( char trans, integer n, integer nrhs,
                    const float* a, integer lda, const integer* ipiv,
                    float* b, integer ldb )
{
    return sgetrs(trans, n, nrhs, a, lda, ipiv, b, ldb);
}

inline integer getrs( char trans, integer n, integer nrhs,
                    const double* a, integer lda, const integer* ipiv,
                    double* b, integer ldb )
{
    return dgetrs(trans, n, nrhs, a, lda, ipiv, b, ldb);
}

inline integer getrs( char trans, integer n, integer nrhs,
                    const scomplex* a, integer lda, const integer* ipiv,
                    scomplex* b, integer ldb )
{
    return cgetrs(trans, n, nrhs, a, lda, ipiv, b, ldb);
}

inline integer getrs( char trans, integer n, integer nrhs,
                    const dcomplex* a, integer lda, const integer* ipiv,
                    dcomplex* b, integer ldb )
{
    return zgetrs(trans, n, nrhs, a, lda, ipiv, b, ldb);
}

inline integer gbtrs( char trans, integer n, integer kl, integer ku,
                    integer nrhs, const float* ab, integer ldab,
                    const integer* ipiv, float* b, integer ldb )
{
    return sgbtrs(trans, n, kl, ku, nrhs, ab, ldab, ipiv, b, ldb);
}

inline integer gbtrs( char trans, integer n, integer kl, integer ku,
                    integer nrhs, const double* ab, integer ldab,
                    const integer* ipiv, double* b, integer ldb )
{
    return dgbtrs(trans, n, kl, ku, nrhs, ab, ldab, ipiv, b, ldb);
}

inline integer gbtrs( char trans, integer n, integer kl, integer ku,
                    integer nrhs, const scomplex* ab, integer ldab,
                    const integer* ipiv, scomplex* b, integer ldb )
{
    return cgbtrs(trans, n, kl, ku, nrhs, ab, ldab, ipiv, b, ldb);
}

inline integer gbtrs( char trans, integer n, integer kl, integer ku,
                    integer nrhs, const dcomplex* ab, integer ldab,
                    const integer* ipiv, dcomplex* b, integer ldb )
{
    return zgbtrs(trans, n, kl, ku, nrhs, ab, ldab, ipiv, b, ldb);
}

inline integer gttrs( char trans, integer n, integer nrhs,
                    const float* dl, const float* d, const float* du,
                    const float* du2, const integer* ipiv, float* b,
                    integer ldb )
{
    return sgttrs(trans, n, nrhs, dl, d, du, du2, ipiv, b, ldb);
}

inline integer gttrs( char trans, integer n, integer nrhs,
                    const double* dl, const double* d, const double* du,
                    const double* du2, const integer* ipiv, double* b,
                    integer ldb )
{
    return dgttrs(trans, n, nrhs, dl, d, du, du2, ipiv, b, ldb);
}

inline integer gttrs( char trans, integer n, integer nrhs,
                    const scomplex* dl, const scomplex* d, const scomplex* du,
                    const scomplex* du2, const integer* ipiv, scomplex* b,
                    integer ldb )
{
    return cgttrs(trans, n, nrhs, dl, d, du, du2, ipiv, b, ldb);
}

inline integer gttrs( char trans, integer n, integer nrhs,
                    const dcomplex* dl, const dcomplex* d, const dcomplex* du,
                    const dcomplex* du2, const integer* ipiv, dcomplex* b,
                    integer ldb )
{
    return zgttrs(trans, n, nrhs, dl, d, du, du2, ipiv, b, ldb);
}

inline integer potrs( char uplo, integer n, integer nrhs,
                    const float* a, integer lda, float* b,
                    integer ldb )
{
    return spotrs(uplo, n, nrhs, a, lda, b, ldb);
}

inline integer potrs( char uplo, integer n, integer nrhs,
                    const double* a, integer lda, double* b,
                    integer ldb )
{
    return dpotrs(uplo, n, nrhs, a, lda, b, ldb);
}

inline integer potrs( char uplo, integer n, integer nrhs,
                    const scomplex* a, integer lda, scomplex* b,
                    integer ldb )
{
    return cpotrs(uplo, n, nrhs, a, lda, b, ldb);
}

inline integer potrs( char uplo, integer n, integer nrhs,
                    const dcomplex* a, integer lda, dcomplex* b,
                    integer ldb )
{
    return zpotrs(uplo, n, nrhs, a, lda, b, ldb);
}

inline integer pftrs( char transr, char uplo, integer n, integer nrhs,
                    const float* a, float* b, integer ldb )
{
    return spftrs(transr, uplo, n, nrhs, a, b, ldb);
}

inline integer pftrs( char transr, char uplo, integer n, integer nrhs,
                    const double* a, double* b, integer ldb )
{
    return dpftrs(transr, uplo, n, nrhs, a, b, ldb);
}

inline integer pftrs( char transr, char uplo, integer n, integer nrhs,
                    const scomplex* a, scomplex* b, integer ldb )
{
    return cpftrs(transr, uplo, n, nrhs, a, b, ldb);
}

inline integer pftrs( char transr, char uplo, integer n, integer nrhs,
                    const dcomplex* a, dcomplex* b, integer ldb )
{
    return zpftrs(transr, uplo, n, nrhs, a, b, ldb);
}

inline integer pptrs( char uplo, integer n, integer nrhs,
                    const float* ap, float* b, integer ldb )
{
    return spptrs(uplo, n, nrhs, ap, b, ldb);
}

inline integer pptrs( char uplo, integer n, integer nrhs,
                    const double* ap, double* b, integer ldb )
{
    return dpptrs(uplo, n, nrhs, ap, b, ldb);
}

inline integer pptrs( char uplo, integer n, integer nrhs,
                    const scomplex* ap, scomplex* b, integer ldb )
{
    return cpptrs(uplo, n, nrhs, ap, b, ldb);
}

inline integer pptrs( char uplo, integer n, integer nrhs,
                    const dcomplex* ap, dcomplex* b, integer ldb )
{
    return zpptrs(uplo, n, nrhs, ap, b, ldb);
}

inline integer pbtrs( char uplo, integer n, integer kd, integer nrhs,
                    const float* ab, integer ldab, float* b,
                    integer ldb )
{
    return spbtrs(uplo, n, kd, nrhs, ab, ldab, b, ldb);
}

inline integer pbtrs( char uplo, integer n, integer kd, integer nrhs,
                    const double* ab, integer ldab, double* b,
                    integer ldb )
{
    return dpbtrs(uplo, n, kd, nrhs, ab, ldab, b, ldb);
}

inline integer pbtrs( char uplo, integer n, integer kd, integer nrhs,
                    const scomplex* ab, integer ldab, scomplex* b,
                    integer ldb )
{
    return cpbtrs(uplo, n, kd, nrhs, ab, ldab, b, ldb);
}

inline integer pbtrs( char uplo, integer n, integer kd, integer nrhs,
                    const dcomplex* ab, integer ldab, dcomplex* b,
                    integer ldb )
{
    return zpbtrs(uplo, n, kd, nrhs, ab, ldab, b, ldb);
}

inline integer pttrs( integer n, integer nrhs, const float* d,
                    const float* e, float* b, integer ldb )
{
    return spttrs(n, nrhs, d, e, b, ldb);
}

inline integer pttrs( integer n, integer nrhs, const double* d,
                    const double* e, double* b, integer ldb )
{
    return dpttrs(n, nrhs, d, e, b, ldb);
}

inline integer pttrs( integer n, integer nrhs, const float* d,
                    const scomplex* e, scomplex* b, integer ldb )
{
    return cpttrs(n, nrhs, d, e, b, ldb);
}

inline integer pttrs( integer n, integer nrhs, const double* d,
                    const dcomplex* e, dcomplex* b, integer ldb )
{
    return zpttrs(n, nrhs, d, e, b, ldb);
}

inline integer sytrs( char uplo, integer n, integer nrhs,
                    const float* a, integer lda, const integer* ipiv,
                    float* b, integer ldb )
{
    return ssytrs(uplo, n, nrhs, a, lda, ipiv, b, ldb);
}

inline integer sytrs( char uplo, integer n, integer nrhs,
                    const double* a, integer lda, const integer* ipiv,
                    double* b, integer ldb )
{
    return dsytrs(uplo, n, nrhs, a, lda, ipiv, b, ldb);
}

inline integer sytrs( char uplo, integer n, integer nrhs,
                    const scomplex* a, integer lda, const integer* ipiv,
                    scomplex* b, integer ldb )
{
    return csytrs(uplo, n, nrhs, a, lda, ipiv, b, ldb);
}

inline integer sytrs( char uplo, integer n, integer nrhs,
                    const dcomplex* a, integer lda, const integer* ipiv,
                    dcomplex* b, integer ldb )
{
    return zsytrs(uplo, n, nrhs, a, lda, ipiv, b, ldb);
}

inline integer hetrs( char uplo, integer n, integer nrhs,
                    const float* a, integer lda, const integer* ipiv,
                    float* b, integer ldb )
{
    return ssytrs(uplo, n, nrhs, a, lda, ipiv, b, ldb);
}

inline integer hetrs( char uplo, integer n, integer nrhs,
                    const double* a, integer lda, const integer* ipiv,
                    double* b, integer ldb )
{
    return dsytrs(uplo, n, nrhs, a, lda, ipiv, b, ldb);
}

inline integer hetrs( char uplo, integer n, integer nrhs,
                    const scomplex* a, integer lda, const integer* ipiv,
                    scomplex* b, integer ldb )
{
    return chetrs(uplo, n, nrhs, a, lda, ipiv, b, ldb);
}

inline integer hetrs( char uplo, integer n, integer nrhs,
                    const dcomplex* a, integer lda, const integer* ipiv,
                    dcomplex* b, integer ldb )
{
    return zhetrs(uplo, n, nrhs, a, lda, ipiv, b, ldb);
}

inline integer sptrs( char uplo, integer n, integer nrhs,
                    const float* ap, const integer* ipiv, float* b,
                    integer ldb )
{
    return ssptrs(uplo, n, nrhs, ap, ipiv, b, ldb);
}

inline integer sptrs( char uplo, integer n, integer nrhs,
                    const double* ap, const integer* ipiv, double* b,
                    integer ldb )
{
    return dsptrs(uplo, n, nrhs, ap, ipiv, b, ldb);
}

inline integer sptrs( char uplo, integer n, integer nrhs,
                    const scomplex* ap, const integer* ipiv, scomplex* b,
                    integer ldb )
{
    return csptrs(uplo, n, nrhs, ap, ipiv, b, ldb);
}

inline integer sptrs( char uplo, integer n, integer nrhs,
                    const dcomplex* ap, const integer* ipiv, dcomplex* b,
                    integer ldb )
{
    return zsptrs(uplo, n, nrhs, ap, ipiv, b, ldb);
}

inline integer hptrs( char uplo, integer n, integer nrhs,
                    const float* ap, const integer* ipiv, float* b,
                    integer ldb )
{
    return ssptrs(uplo, n, nrhs, ap, ipiv, b, ldb);
}

inline integer hptrs( char uplo, integer n, integer nrhs,
                    const double* ap, const integer* ipiv, double* b,
                    integer ldb )
{
    return dsptrs(uplo, n, nrhs, ap, ipiv, b, ldb);
}

inline integer hptrs( char uplo, integer n, integer nrhs,
                    const scomplex* ap, const integer* ipiv, scomplex* b,
                    integer ldb )
{
    return chptrs(uplo, n, nrhs, ap, ipiv, b, ldb);
}

inline integer hptrs( char uplo, integer n, integer nrhs,
                    const dcomplex* ap, const integer* ipiv, dcomplex* b,
                    integer ldb )
{
    return zhptrs(uplo, n, nrhs, ap, ipiv, b, ldb);
}

inline integer trtrs( char uplo, char trans, char diag, integer n,
                    integer nrhs, const float* a, integer lda,
                    float* b, integer ldb )
{
    return strtrs(uplo, trans, diag, n, nrhs, a, lda, b, ldb);
}

inline integer trtrs( char uplo, char trans, char diag, integer n,
                    integer nrhs, const double* a, integer lda,
                    double* b, integer ldb )
{
    return dtrtrs(uplo, trans, diag, n, nrhs, a, lda, b, ldb);
}

inline integer trtrs( char uplo, char trans, char diag, integer n,
                    integer nrhs, const scomplex* a, integer lda,
                    scomplex* b, integer ldb )
{
    return ctrtrs(uplo, trans, diag, n, nrhs, a, lda, b, ldb);
}

inline integer trtrs( char uplo, char trans, char diag, integer n,
                    integer nrhs, const dcomplex* a, integer lda,
                    dcomplex* b, integer ldb )
{
    return ztrtrs(uplo, trans, diag, n, nrhs, a, lda, b, ldb);
}

inline integer tptrs( char uplo, char trans, char diag, integer n,
                    integer nrhs, const float* ap, float* b,
                    integer ldb )
{
    return stptrs(uplo, trans, diag, n, nrhs, ap, b, ldb);
}

inline integer tptrs( char uplo, char trans, char diag, integer n,
                    integer nrhs, const double* ap, double* b,
                    integer ldb )
{
    return dtptrs(uplo, trans, diag, n, nrhs, ap, b, ldb);
}

inline integer tptrs( char uplo, char trans, char diag, integer n,
                    integer nrhs, const scomplex* ap, scomplex* b,
                    integer ldb )
{
    return ctptrs(uplo, trans, diag, n, nrhs, ap, b, ldb);
}

inline integer tptrs( char uplo, char trans, char diag, integer n,
                    integer nrhs, const dcomplex* ap, dcomplex* b,
                    integer ldb )
{
    return ztptrs(uplo, trans, diag, n, nrhs, ap, b, ldb);
}

inline integer tbtrs( char uplo, char trans, char diag, integer n,
                    integer kd, integer nrhs, const float* ab,
                    integer ldab, float* b, integer ldb )
{
    return stbtrs(uplo, trans, diag, n, kd, nrhs, ab, ldab, b, ldb);
}

inline integer tbtrs( char uplo, char trans, char diag, integer n,
                    integer kd, integer nrhs, const double* ab,
                    integer ldab, double* b, integer ldb )
{
    return dtbtrs(uplo, trans, diag, n, kd, nrhs, ab, ldab, b, ldb);
}

inline integer tbtrs( char uplo, char trans, char diag, integer n,
                    integer kd, integer nrhs, const scomplex* ab,
                    integer ldab, scomplex* b, integer ldb )
{
    return ctbtrs(uplo, trans, diag, n, kd, nrhs, ab, ldab, b, ldb);
}

inline integer tbtrs( char uplo, char trans, char diag, integer n,
                    integer kd, integer nrhs, const dcomplex* ab,
                    integer ldab, dcomplex* b, integer ldb )
{
    return ztbtrs(uplo, trans, diag, n, kd, nrhs, ab, ldab, b, ldb);
}

inline integer gecon( char norm, integer n, const float* a, integer lda,
                    float anorm, float& rcond)
{
    return sgecon(norm, n, a, lda, anorm, &rcond);
}

inline integer gecon( char norm, integer n, const double* a, integer lda,
                    double anorm, double& rcond)
{
    return dgecon(norm, n, a, lda, anorm, &rcond);
}

inline integer gecon( char norm, integer n, const scomplex* a, integer lda,
                    float anorm, float& rcond)
{
    return cgecon(norm, n, a, lda, anorm, &rcond);
}

inline integer gecon( char norm, integer n, const dcomplex* a, integer lda,
                    double anorm, double& rcond)
{
    return zgecon(norm, n, a, lda, anorm, &rcond);
}

inline integer gbcon( char norm, integer n, integer kl, integer ku,
                    const float* ab, integer ldab, const integer* ipiv,
                    float anorm, float& rcond)
{
    return sgbcon(norm, n, kl, ku, ab, ldab, ipiv, anorm, &rcond);
}

inline integer gbcon( char norm, integer n, integer kl, integer ku,
                    const double* ab, integer ldab, const integer* ipiv,
                    double anorm, double& rcond)
{
    return dgbcon(norm, n, kl, ku, ab, ldab, ipiv, anorm, &rcond);
}

inline integer gbcon( char norm, integer n, integer kl, integer ku,
                    const scomplex* ab, integer ldab, const integer* ipiv,
                    float anorm, float& rcond)
{
    return cgbcon(norm, n, kl, ku, ab, ldab, ipiv, anorm, &rcond);
}

inline integer gbcon( char norm, integer n, integer kl, integer ku,
                    const dcomplex* ab, integer ldab, const integer* ipiv,
                    double anorm, double& rcond)
{
    return zgbcon(norm, n, kl, ku, ab, ldab, ipiv, anorm, &rcond);
}

inline integer gtcon( char norm, integer n, const float* dl,
                    const float* d, const float* du, const float* du2,
                    const integer* ipiv, float anorm, float& rcond)
{
    return sgtcon(norm, n, dl, d, du, du2, ipiv, anorm, &rcond);
}

inline integer gtcon( char norm, integer n, const double* dl,
                    const double* d, const double* du, const double* du2,
                    const integer* ipiv, double anorm, double& rcond)
{
    return dgtcon(norm, n, dl, d, du, du2, ipiv, anorm, &rcond);
}

inline integer gtcon( char norm, integer n, const scomplex* dl,
                    const scomplex* d, const scomplex* du, const scomplex* du2,
                    const integer* ipiv, float anorm, float& rcond)
{
    return cgtcon(norm, n, dl, d, du, du2, ipiv, anorm, &rcond);
}

inline integer gtcon( char norm, integer n, const dcomplex* dl,
                    const dcomplex* d, const dcomplex* du, const dcomplex* du2,
                    const integer* ipiv, double anorm, double& rcond)
{
    return zgtcon(norm, n, dl, d, du, du2, ipiv, anorm, &rcond);
}

inline integer pocon( char uplo, integer n, const float* a, integer lda,
                    float anorm, float& rcond)
{
    return spocon(uplo, n, a, lda, anorm, &rcond);
}

inline integer pocon( char uplo, integer n, const double* a, integer lda,
                    double anorm, double& rcond)
{
    return dpocon(uplo, n, a, lda, anorm, &rcond);
}

inline integer pocon( char uplo, integer n, const scomplex* a, integer lda,
                    float anorm, float& rcond)
{
    return cpocon(uplo, n, a, lda, anorm, &rcond);
}

inline integer pocon( char uplo, integer n, const dcomplex* a, integer lda,
                    double anorm, double& rcond)
{
    return zpocon(uplo, n, a, lda, anorm, &rcond);
}

inline integer ppcon( char uplo, integer n, const float* ap, float anorm, float& rcond)
{
    return sppcon(uplo, n, ap, anorm, &rcond);
}

inline integer ppcon( char uplo, integer n, const double* ap, double anorm, double& rcond)
{
    return dppcon(uplo, n, ap, anorm, &rcond);
}

inline integer ppcon( char uplo, integer n, const scomplex* ap, float anorm, float& rcond)
{
    return cppcon(uplo, n, ap, anorm, &rcond);
}

inline integer ppcon( char uplo, integer n, const dcomplex* ap, double anorm, double& rcond)
{
    return zppcon(uplo, n, ap, anorm, &rcond);
}

inline integer pbcon( char uplo, integer n, integer kd, const float* ab,
                    integer ldab, float anorm, float& rcond)
{
    return spbcon(uplo, n, kd, ab, ldab, anorm, &rcond);
}

inline integer pbcon( char uplo, integer n, integer kd, const double* ab,
                    integer ldab, double anorm, double& rcond)
{
    return dpbcon(uplo, n, kd, ab, ldab, anorm, &rcond);
}

inline integer pbcon( char uplo, integer n, integer kd, const scomplex* ab,
                    integer ldab, float anorm, float& rcond)
{
    return cpbcon(uplo, n, kd, ab, ldab, anorm, &rcond);
}

inline integer pbcon( char uplo, integer n, integer kd, const dcomplex* ab,
                    integer ldab, double anorm, double& rcond)
{
    return zpbcon(uplo, n, kd, ab, ldab, anorm, &rcond);
}

inline integer ptcon( integer n, const float* d, const float* e,
                    float anorm, float& rcond)
{
    return sptcon(n, d, e, anorm, &rcond);
}

inline integer ptcon( integer n, const double* d, const double* e,
                    double anorm, double& rcond)
{
    return dptcon(n, d, e, anorm, &rcond);
}

inline integer ptcon( integer n, const float* d, const scomplex* e,
                    float anorm, float& rcond)
{
    return cptcon(n, d, e, anorm, &rcond);
}

inline integer ptcon( integer n, const double* d, const dcomplex* e,
                    double anorm, double& rcond)
{
    return zptcon(n, d, e, anorm, &rcond);
}

inline integer sycon( char uplo, integer n, const float* a, integer lda,
                    const integer* ipiv, float anorm, float& rcond)
{
    return ssycon(uplo, n, a, lda, ipiv, anorm, &rcond);
}

inline integer sycon( char uplo, integer n, const double* a, integer lda,
                    const integer* ipiv, double anorm, double& rcond)
{
    return dsycon(uplo, n, a, lda, ipiv, anorm, &rcond);
}

inline integer sycon( char uplo, integer n, const scomplex* a, integer lda,
                    const integer* ipiv, float anorm, float& rcond)
{
    return csycon(uplo, n, a, lda, ipiv, anorm, &rcond);
}

inline integer sycon( char uplo, integer n, const dcomplex* a, integer lda,
                    const integer* ipiv, double anorm, double& rcond)
{
    return zsycon(uplo, n, a, lda, ipiv, anorm, &rcond);
}

inline integer hecon( char uplo, integer n, const float* a, integer lda,
                    const integer* ipiv, float anorm, float& rcond)
{
    return ssycon(uplo, n, a, lda, ipiv, anorm, &rcond);
}

inline integer hecon( char uplo, integer n, const double* a, integer lda,
                    const integer* ipiv, double anorm, double& rcond)
{
    return dsycon(uplo, n, a, lda, ipiv, anorm, &rcond);
}

inline integer hecon( char uplo, integer n, const scomplex* a, integer lda,
                    const integer* ipiv, float anorm, float& rcond)
{
    return checon(uplo, n, a, lda, ipiv, anorm, &rcond);
}

inline integer hecon( char uplo, integer n, const dcomplex* a, integer lda,
                    const integer* ipiv, double anorm, double& rcond)
{
    return zhecon(uplo, n, a, lda, ipiv, anorm, &rcond);
}

inline integer spcon( char uplo, integer n, const float* ap,
                    const integer* ipiv, float anorm, float& rcond)
{
    return sspcon(uplo, n, ap, ipiv, anorm, &rcond);
}

inline integer spcon( char uplo, integer n, const double* ap,
                    const integer* ipiv, double anorm, double& rcond)
{
    return dspcon(uplo, n, ap, ipiv, anorm, &rcond);
}

inline integer spcon( char uplo, integer n, const scomplex* ap,
                    const integer* ipiv, float anorm, float& rcond)
{
    return cspcon(uplo, n, ap, ipiv, anorm, &rcond);
}

inline integer spcon( char uplo, integer n, const dcomplex* ap,
                    const integer* ipiv, double anorm, double& rcond)
{
    return zspcon(uplo, n, ap, ipiv, anorm, &rcond);
}

inline integer hpcon( char uplo, integer n, const float* ap,
                    const integer* ipiv, float anorm, float& rcond)
{
    return sspcon(uplo, n, ap, ipiv, anorm, &rcond);
}

inline integer hpcon( char uplo, integer n, const double* ap,
                    const integer* ipiv, double anorm, double& rcond)
{
    return dspcon(uplo, n, ap, ipiv, anorm, &rcond);
}

inline integer hpcon( char uplo, integer n, const scomplex* ap,
                    const integer* ipiv, float anorm, float& rcond)
{
    return chpcon(uplo, n, ap, ipiv, anorm, &rcond);
}

inline integer hpcon( char uplo, integer n, const dcomplex* ap,
                    const integer* ipiv, double anorm, double& rcond)
{
    return zhpcon(uplo, n, ap, ipiv, anorm, &rcond);
}

inline integer trcon( char norm, char uplo, char diag, integer n,
                    const float* a, integer lda, float& rcond)
{
    return strcon(norm, uplo, diag, n, a, lda, &rcond);
}

inline integer trcon( char norm, char uplo, char diag, integer n,
                    const double* a, integer lda, double& rcond)
{
    return dtrcon(norm, uplo, diag, n, a, lda, &rcond);
}

inline integer trcon( char norm, char uplo, char diag, integer n,
                    const scomplex* a, integer lda, float& rcond)
{
    return ctrcon(norm, uplo, diag, n, a, lda, &rcond);
}

inline integer trcon( char norm, char uplo, char diag, integer n,
                    const dcomplex* a, integer lda, double& rcond)
{
    return ztrcon(norm, uplo, diag, n, a, lda, &rcond);
}

inline integer tpcon( char norm, char uplo, char diag, integer n,
                    const float* ap, float& rcond)
{
    return stpcon(norm, uplo, diag, n, ap, &rcond);
}

inline integer tpcon( char norm, char uplo, char diag, integer n,
                    const double* ap, double& rcond)
{
    return dtpcon(norm, uplo, diag, n, ap, &rcond);
}

inline integer tpcon( char norm, char uplo, char diag, integer n,
                    const scomplex* ap, float& rcond)
{
    return ctpcon(norm, uplo, diag, n, ap, &rcond);
}

inline integer tpcon( char norm, char uplo, char diag, integer n,
                    const dcomplex* ap, double& rcond)
{
    return ztpcon(norm, uplo, diag, n, ap, &rcond);
}

inline integer tbcon( char norm, char uplo, char diag, integer n,
                    integer kd, const float* ab, integer ldab, float& rcond)
{
    return stbcon(norm, uplo, diag, n, kd, ab, ldab, &rcond);
}

inline integer tbcon( char norm, char uplo, char diag, integer n,
                    integer kd, const double* ab, integer ldab, double& rcond)
{
    return dtbcon(norm, uplo, diag, n, kd, ab, ldab, &rcond);
}

inline integer tbcon( char norm, char uplo, char diag, integer n,
                    integer kd, const scomplex* ab, integer ldab, float& rcond)
{
    return ctbcon(norm, uplo, diag, n, kd, ab, ldab, &rcond);
}

inline integer tbcon( char norm, char uplo, char diag, integer n,
                    integer kd, const dcomplex* ab, integer ldab, double& rcond)
{
    return ztbcon(norm, uplo, diag, n, kd, ab, ldab, &rcond);
}

inline integer gerfs( char trans, integer n, integer nrhs,
                    const float* a, integer lda, const float* af,
                    integer ldaf, const integer* ipiv, const float* b,
                    integer ldb, float* x, integer ldx, float* ferr,
                    float* berr)
{
    return sgerfs(trans, n, nrhs, a, lda, af, ldaf, ipiv, b, ldb, x, ldx, ferr, berr);
}

inline integer gerfs( char trans, integer n, integer nrhs,
                    const double* a, integer lda, const double* af,
                    integer ldaf, const integer* ipiv, const double* b,
                    integer ldb, double* x, integer ldx, double* ferr,
                    double* berr)
{
    return dgerfs(trans, n, nrhs, a, lda, af, ldaf, ipiv, b, ldb, x, ldx, ferr, berr);
}

inline integer gerfs( char trans, integer n, integer nrhs,
                    const scomplex* a, integer lda, const scomplex* af,
                    integer ldaf, const integer* ipiv, const scomplex* b,
                    integer ldb, scomplex* x, integer ldx, float* ferr,
                    float* berr)
{
    return cgerfs(trans, n, nrhs, a, lda, af, ldaf, ipiv, b, ldb, x, ldx, ferr, berr);
}

inline integer gerfs( char trans, integer n, integer nrhs,
                    const dcomplex* a, integer lda, const dcomplex* af,
                    integer ldaf, const integer* ipiv, const dcomplex* b,
                    integer ldb, dcomplex* x, integer ldx, double* ferr,
                    double* berr)
{
    return zgerfs(trans, n, nrhs, a, lda, af, ldaf, ipiv, b, ldb, x, ldx, ferr, berr);
}

inline integer gerfsx( char trans, char equed, integer n, integer nrhs,
                     const float* a, integer lda, const float* af,
                     integer ldaf, const integer* ipiv, const float* r,
                     const float* c, const float* b, integer ldb,
                     float* x, integer ldx, float& rcond, float* berr,
                     integer n_err_bnds, float* err_bnds_norm,
                     float* err_bnds_comp, integer nparams, float* params)
{
    return sgerfsx(trans, equed, n, nrhs, a, lda, af, ldaf, ipiv, r, c, b, ldb, x, ldx,
                   &rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer gerfsx( char trans, char equed, integer n, integer nrhs,
                     const double* a, integer lda, const double* af,
                     integer ldaf, const integer* ipiv, const double* r,
                     const double* c, const double* b, integer ldb,
                     double* x, integer ldx, double& rcond, double* berr,
                     integer n_err_bnds, double* err_bnds_norm,
                     double* err_bnds_comp, integer nparams, double* params)
{
    return dgerfsx(trans, equed, n, nrhs, a, lda, af, ldaf, ipiv, r, c, b, ldb, x, ldx,
                   &rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer gerfsx( char trans, char equed, integer n, integer nrhs,
                     const scomplex* a, integer lda, const scomplex* af,
                     integer ldaf, const integer* ipiv, const float* r,
                     const float* c, const scomplex* b, integer ldb,
                     scomplex* x, integer ldx, float& rcond, float* berr,
                     integer n_err_bnds, float* err_bnds_norm,
                     float* err_bnds_comp, integer nparams, float* params)
{
    return cgerfsx(trans, equed, n, nrhs, a, lda, af, ldaf, ipiv, r, c, b, ldb, x, ldx,
                   &rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer gerfsx( char trans, char equed, integer n, integer nrhs,
                     const dcomplex* a, integer lda, const dcomplex* af,
                     integer ldaf, const integer* ipiv, const double* r,
                     const double* c, const dcomplex* b, integer ldb,
                     dcomplex* x, integer ldx, double& rcond, double* berr,
                     integer n_err_bnds, double* err_bnds_norm,
                     double* err_bnds_comp, integer nparams, double* params)
{
    return zgerfsx(trans, equed, n, nrhs, a, lda, af, ldaf, ipiv, r, c, b, ldb, x, ldx,
                   &rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer gbrfs( char trans, integer n, integer kl, integer ku,
                    integer nrhs, const float* ab, integer ldab,
                    const float* afb, integer ldafb,
                    const integer* ipiv, const float* b, integer ldb,
                    float* x, integer ldx, float* ferr, float* berr)
{
    return sgbrfs(trans, n, kl, ku, nrhs, ab, ldab, afb, ldafb, ipiv, b, ldb, x, ldx, ferr, berr);
}

inline integer gbrfs( char trans, integer n, integer kl, integer ku,
                    integer nrhs, const double* ab, integer ldab,
                    const double* afb, integer ldafb,
                    const integer* ipiv, const double* b, integer ldb,
                    double* x, integer ldx, double* ferr, double* berr)
{
    return dgbrfs(trans, n, kl, ku, nrhs, ab, ldab, afb, ldafb, ipiv, b, ldb, x, ldx, ferr, berr);
}

inline integer gbrfs( char trans, integer n, integer kl, integer ku,
                    integer nrhs, const scomplex* ab, integer ldab,
                    const scomplex* afb, integer ldafb,
                    const integer* ipiv, const scomplex* b, integer ldb,
                    scomplex* x, integer ldx, float* ferr, float* berr)
{
    return cgbrfs(trans, n, kl, ku, nrhs, ab, ldab, afb, ldafb, ipiv, b, ldb, x, ldx, ferr, berr);
}

inline integer gbrfs( char trans, integer n, integer kl, integer ku,
                    integer nrhs, const dcomplex* ab, integer ldab,
                    const dcomplex* afb, integer ldafb,
                    const integer* ipiv, const dcomplex* b, integer ldb,
                    dcomplex* x, integer ldx, double* ferr, double* berr)
{
    return zgbrfs(trans, n, kl, ku, nrhs, ab, ldab, afb, ldafb, ipiv, b, ldb, x, ldx, ferr, berr);
}

inline integer gbrfsx( char trans, char equed, integer n, integer kl,
                     integer ku, integer nrhs, const float* ab,
                     integer ldab, const float* afb, integer ldafb,
                     const integer* ipiv, const float* r, const float* c,
                     const float* b, integer ldb, float* x,
                     integer ldx, float& rcond, float* berr,
                     integer n_err_bnds, float* err_bnds_norm,
                     float* err_bnds_comp, integer nparams, float* params)
{
    return sgbrfsx(trans, equed, n, kl, ku, nrhs, ab, ldab, afb, ldafb, ipiv, r, c, b, ldb, x, ldx,
                   &rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer gbrfsx( char trans, char equed, integer n, integer kl,
                     integer ku, integer nrhs, const double* ab,
                     integer ldab, const double* afb, integer ldafb,
                     const integer* ipiv, const double* r, const double* c,
                     const double* b, integer ldb, double* x,
                     integer ldx, double& rcond, double* berr,
                     integer n_err_bnds, double* err_bnds_norm,
                     double* err_bnds_comp, integer nparams, double* params)
{
    return dgbrfsx(trans, equed, n, kl, ku, nrhs, ab, ldab, afb, ldafb, ipiv, r, c, b, ldb, x, ldx,
                   &rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer gbrfsx( char trans, char equed, integer n, integer kl,
                     integer ku, integer nrhs, const scomplex* ab,
                     integer ldab, const scomplex* afb, integer ldafb,
                     const integer* ipiv, const float* r, const float* c,
                     const scomplex* b, integer ldb, scomplex* x,
                     integer ldx, float& rcond, float* berr,
                     integer n_err_bnds, float* err_bnds_norm,
                     float* err_bnds_comp, integer nparams, float* params)
{
    return cgbrfsx(trans, equed, n, kl, ku, nrhs, ab, ldab, afb, ldafb, ipiv, r, c, b, ldb, x, ldx,
                   &rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer gbrfsx( char trans, char equed, integer n, integer kl,
                     integer ku, integer nrhs, const dcomplex* ab,
                     integer ldab, const dcomplex* afb, integer ldafb,
                     const integer* ipiv, const double* r, const double* c,
                     const dcomplex* b, integer ldb, dcomplex* x,
                     integer ldx, double& rcond, double* berr,
                     integer n_err_bnds, double* err_bnds_norm,
                     double* err_bnds_comp, integer nparams, double* params)
{
    return zgbrfsx(trans, equed, n, kl, ku, nrhs, ab, ldab, afb, ldafb, ipiv, r, c, b, ldb, x, ldx,
                   &rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer gtrfs( char trans, integer n, integer nrhs,
                    const float* dl, const float* d, const float* du,
                    const float* dlf, const float* df, const float* duf,
                    const float* du2, const integer* ipiv, const float* b,
                    integer ldb, float* x, integer ldx, float* ferr,
                    float* berr)
{
    return sgtrfs(trans, n, nrhs, dl, d, du, dlf, df, duf, du2, ipiv, b, ldb, x, ldx, ferr, berr);
}

inline integer gtrfs( char trans, integer n, integer nrhs,
                    const double* dl, const double* d, const double* du,
                    const double* dlf, const double* df, const double* duf,
                    const double* du2, const integer* ipiv, const double* b,
                    integer ldb, double* x, integer ldx, double* ferr,
                    double* berr)
{
    return dgtrfs(trans, n, nrhs, dl, d, du, dlf, df, duf, du2, ipiv, b, ldb, x, ldx, ferr, berr);
}

inline integer gtrfs( char trans, integer n, integer nrhs,
                    const scomplex* dl, const scomplex* d, const scomplex* du,
                    const scomplex* dlf, const scomplex* df, const scomplex* duf,
                    const scomplex* du2, const integer* ipiv, const scomplex* b,
                    integer ldb, scomplex* x, integer ldx, float* ferr,
                    float* berr)
{
    return cgtrfs(trans, n, nrhs, dl, d, du, dlf, df, duf, du2, ipiv, b, ldb, x, ldx, ferr, berr);
}

inline integer gtrfs( char trans, integer n, integer nrhs,
                    const dcomplex* dl, const dcomplex* d, const dcomplex* du,
                    const dcomplex* dlf, const dcomplex* df, const dcomplex* duf,
                    const dcomplex* du2, const integer* ipiv, const dcomplex* b,
                    integer ldb, dcomplex* x, integer ldx, double* ferr,
                    double* berr)
{
    return zgtrfs(trans, n, nrhs, dl, d, du, dlf, df, duf, du2, ipiv, b, ldb, x, ldx, ferr, berr);
}

inline integer porfs( char uplo, integer n, integer nrhs,
                    const float* a, integer lda, const float* af,
                    integer ldaf, const float* b, integer ldb,
                    float* x, integer ldx, float* ferr, float* berr)
{
    return sporfs(uplo, n, nrhs, a, lda, af, ldaf, b, ldb, x, ldx, ferr, berr);
}

inline integer porfs( char uplo, integer n, integer nrhs,
                    const double* a, integer lda, const double* af,
                    integer ldaf, const double* b, integer ldb,
                    double* x, integer ldx, double* ferr, double* berr)
{
    return dporfs(uplo, n, nrhs, a, lda, af, ldaf, b, ldb, x, ldx, ferr, berr);
}

inline integer porfs( char uplo, integer n, integer nrhs,
                    const scomplex* a, integer lda, const scomplex* af,
                    integer ldaf, const scomplex* b, integer ldb,
                    scomplex* x, integer ldx, float* ferr, float* berr)
{
    return cporfs(uplo, n, nrhs, a, lda, af, ldaf, b, ldb, x, ldx, ferr, berr);
}

inline integer porfs( char uplo, integer n, integer nrhs,
                    const dcomplex* a, integer lda, const dcomplex* af,
                    integer ldaf, const dcomplex* b, integer ldb,
                    dcomplex* x, integer ldx, double* ferr, double* berr)
{
    return zporfs(uplo, n, nrhs, a, lda, af, ldaf, b, ldb, x, ldx, ferr, berr);
}

inline integer porfsx( char uplo, char equed, integer n, integer nrhs,
                     const float* a, integer lda, const float* af,
                     integer ldaf, const float* s, const float* b,
                     integer ldb, float* x, integer ldx, float& rcond,
                     float* berr, integer n_err_bnds,
                     float* err_bnds_norm, float* err_bnds_comp,
                     integer nparams, float* params)
{
    return sporfsx(uplo, equed, n, nrhs, a, lda, af, ldaf, s, b, ldx, x, ldx,
                   &rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer porfsx( char uplo, char equed, integer n, integer nrhs,
                     const double* a, integer lda, const double* af,
                     integer ldaf, const double* s, const double* b,
                     integer ldb, double* x, integer ldx, double& rcond,
                     double* berr, integer n_err_bnds,
                     double* err_bnds_norm, double* err_bnds_comp,
                     integer nparams, double* params)
{
    return dporfsx(uplo, equed, n, nrhs, a, lda, af, ldaf, s, b, ldx, x, ldx,
                   &rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer porfsx( char uplo, char equed, integer n, integer nrhs,
                     const scomplex* a, integer lda, const scomplex* af,
                     integer ldaf, const float* s, const scomplex* b,
                     integer ldb, scomplex* x, integer ldx, float& rcond,
                     float* berr, integer n_err_bnds,
                     float* err_bnds_norm, float* err_bnds_comp,
                     integer nparams, float* params)
{
    return cporfsx(uplo, equed, n, nrhs, a, lda, af, ldaf, s, b, ldx, x, ldx,
                   &rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer porfsx( char uplo, char equed, integer n, integer nrhs,
                     const dcomplex* a, integer lda, const dcomplex* af,
                     integer ldaf, const double* s, const dcomplex* b,
                     integer ldb, dcomplex* x, integer ldx, double& rcond,
                     double* berr, integer n_err_bnds,
                     double* err_bnds_norm, double* err_bnds_comp,
                     integer nparams, double* params)
{
    return zporfsx(uplo, equed, n, nrhs, a, lda, af, ldaf, s, b, ldx, x, ldx,
                   &rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer pprfs( char uplo, integer n, integer nrhs,
                    const float* ap, const float* afp, const float* b,
                    integer ldb, float* x, integer ldx, float* ferr,
                    float* berr)
{
    return spprfs(uplo, n, nrhs, ap, afp, b, ldb, x, ldx, ferr, berr);
}

inline integer pprfs( char uplo, integer n, integer nrhs,
                    const double* ap, const double* afp, const double* b,
                    integer ldb, double* x, integer ldx, double* ferr,
                    double* berr)
{
    return dpprfs(uplo, n, nrhs, ap, afp, b, ldb, x, ldx, ferr, berr);
}

inline integer pprfs( char uplo, integer n, integer nrhs,
                    const scomplex* ap, const scomplex* afp, const scomplex* b,
                    integer ldb, scomplex* x, integer ldx, float* ferr,
                    float* berr)
{
    return cpprfs(uplo, n, nrhs, ap, afp, b, ldb, x, ldx, ferr, berr);
}

inline integer pprfs( char uplo, integer n, integer nrhs,
                    const dcomplex* ap, const dcomplex* afp, const dcomplex* b,
                    integer ldb, dcomplex* x, integer ldx, double* ferr,
                    double* berr)
{
    return zpprfs(uplo, n, nrhs, ap, afp, b, ldb, x, ldx, ferr, berr);
}

inline integer pbrfs( char uplo, integer n, integer kd, integer nrhs,
                    const float* ab, integer ldab, const float* afb,
                    integer ldafb, const float* b, integer ldb,
                    float* x, integer ldx, float* ferr, float* berr)
{
    return spbrfs(uplo, n, kd, nrhs, ab, ldab, afb, ldafb, b, ldb, x, ldx, ferr, berr);
}

inline integer pbrfs( char uplo, integer n, integer kd, integer nrhs,
                    const double* ab, integer ldab, const double* afb,
                    integer ldafb, const double* b, integer ldb,
                    double* x, integer ldx, double* ferr, double* berr)
{
    return dpbrfs(uplo, n, kd, nrhs, ab, ldab, afb, ldafb, b, ldb, x, ldx, ferr, berr);
}

inline integer pbrfs( char uplo, integer n, integer kd, integer nrhs,
                    const scomplex* ab, integer ldab, const scomplex* afb,
                    integer ldafb, const scomplex* b, integer ldb,
                    scomplex* x, integer ldx, float* ferr, float* berr)
{
    return cpbrfs(uplo, n, kd, nrhs, ab, ldab, afb, ldafb, b, ldb, x, ldx, ferr, berr);
}

inline integer pbrfs( char uplo, integer n, integer kd, integer nrhs,
                    const dcomplex* ab, integer ldab, const dcomplex* afb,
                    integer ldafb, const dcomplex* b, integer ldb,
                    dcomplex* x, integer ldx, double* ferr, double* berr)
{
    return zpbrfs(uplo, n, kd, nrhs, ab, ldab, afb, ldafb, b, ldb, x, ldx, ferr, berr);
}

inline integer ptrfs( integer n, integer nrhs, const float* d,
                    const float* e, const float* df, const float* ef,
                    const float* b, integer ldb, float* x,
                    integer ldx, float* ferr, float* berr)
{
    return sptrfs(n, nrhs, d, e, df, ef, b, ldb, x, ldx, ferr, berr);
}

inline integer ptrfs( integer n, integer nrhs, const double* d,
                    const double* e, const double* df, const double* ef,
                    const double* b, integer ldb, double* x,
                    integer ldx, double* ferr, double* berr)
{
    return dptrfs(n, nrhs, d, e, df, ef, b, ldb, x, ldx, ferr, berr);
}

inline integer ptrfs( integer n, integer nrhs, const float* d,
                    const scomplex* e, const float* df, const scomplex* ef,
                    const scomplex* b, integer ldb, scomplex* x,
                    integer ldx, float* ferr, float* berr)
{
    return cptrfs(n, nrhs, d, e, df, ef, b, ldb, x, ldx, ferr, berr);
}

inline integer ptrfs( integer n, integer nrhs, const double* d,
                    const dcomplex* e, const double* df, const dcomplex* ef,
                    const dcomplex* b, integer ldb, dcomplex* x,
                    integer ldx, double* ferr, double* berr)
{
    return zptrfs(n, nrhs, d, e, df, ef, b, ldb, x, ldx, ferr, berr);
}

inline integer syrfs( char uplo, integer n, integer nrhs,
                    const float* a, integer lda, const float* af,
                    integer ldaf, const integer* ipiv, const float* b,
                    integer ldb, float* x, integer ldx, float* ferr,
                    float* berr)
{
    return ssyrfs(uplo, n, nrhs, a, lda, af, ldaf, ipiv, b, ldb, x, ldx, ferr, berr);
}

inline integer syrfs( char uplo, integer n, integer nrhs,
                    const double* a, integer lda, const double* af,
                    integer ldaf, const integer* ipiv, const double* b,
                    integer ldb, double* x, integer ldx, double* ferr,
                    double* berr)
{
    return dsyrfs(uplo, n, nrhs, a, lda, af, ldaf, ipiv, b, ldb, x, ldx, ferr, berr);
}

inline integer syrfs( char uplo, integer n, integer nrhs,
                    const scomplex* a, integer lda, const scomplex* af,
                    integer ldaf, const integer* ipiv, const scomplex* b,
                    integer ldb, scomplex* x, integer ldx, float* ferr,
                    float* berr)
{
    return csyrfs(uplo, n, nrhs, a, lda, af, ldaf, ipiv, b, ldb, x, ldx, ferr, berr);
}

inline integer syrfs( char uplo, integer n, integer nrhs,
                    const dcomplex* a, integer lda, const dcomplex* af,
                    integer ldaf, const integer* ipiv, const dcomplex* b,
                    integer ldb, dcomplex* x, integer ldx, double* ferr,
                    double* berr)
{
    return zsyrfs(uplo, n, nrhs, a, lda, af, ldaf, ipiv, b, ldb, x, ldx, ferr, berr);
}

inline integer herfs( char uplo, integer n, integer nrhs,
                    const float* a, integer lda, const float* af,
                    integer ldaf, const integer* ipiv, const float* b,
                    integer ldb, float* x, integer ldx, float* ferr,
                    float* berr)
{
    return ssyrfs(uplo, n, nrhs, a, lda, af, ldaf, ipiv, b, ldb, x, ldx, ferr, berr);
}

inline integer herfs( char uplo, integer n, integer nrhs,
                    const double* a, integer lda, const double* af,
                    integer ldaf, const integer* ipiv, const double* b,
                    integer ldb, double* x, integer ldx, double* ferr,
                    double* berr)
{
    return dsyrfs(uplo, n, nrhs, a, lda, af, ldaf, ipiv, b, ldb, x, ldx, ferr, berr);
}

inline integer herfs( char uplo, integer n, integer nrhs,
                    const scomplex* a, integer lda, const scomplex* af,
                    integer ldaf, const integer* ipiv, const scomplex* b,
                    integer ldb, scomplex* x, integer ldx, float* ferr,
                    float* berr)
{
    return cherfs(uplo, n, nrhs, a, lda, af, ldaf, ipiv, b, ldb, x, ldx, ferr, berr);
}

inline integer herfs( char uplo, integer n, integer nrhs,
                    const dcomplex* a, integer lda, const dcomplex* af,
                    integer ldaf, const integer* ipiv, const dcomplex* b,
                    integer ldb, dcomplex* x, integer ldx, double* ferr,
                    double* berr)
{
    return zherfs(uplo, n, nrhs, a, lda, af, ldaf, ipiv, b, ldb, x, ldx, ferr, berr);
}

inline integer syrfsx( char uplo, char equed, integer n, integer nrhs,
                     const float* a, integer lda, const float* af,
                     integer ldaf, const integer* ipiv, const float* s,
                     const float* b, integer ldb, float* x,
                     integer ldx, float& rcond, float* berr,
                     integer n_err_bnds, float* err_bnds_norm,
                     float* err_bnds_comp, integer nparams, float* params)
{
    return ssyrfsx(uplo, equed, n, nrhs, a, lda, af, ldaf, ipiv, s, b, ldb, x, ldx,
                   &rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer syrfsx( char uplo, char equed, integer n, integer nrhs,
                     const double* a, integer lda, const double* af,
                     integer ldaf, const integer* ipiv, const double* s,
                     const double* b, integer ldb, double* x,
                     integer ldx, double& rcond, double* berr,
                     integer n_err_bnds, double* err_bnds_norm,
                     double* err_bnds_comp, integer nparams, double* params)
{
    return dsyrfsx(uplo, equed, n, nrhs, a, lda, af, ldaf, ipiv, s, b, ldb, x, ldx,
                   &rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer syrfsx( char uplo, char equed, integer n, integer nrhs,
                     const scomplex* a, integer lda, const scomplex* af,
                     integer ldaf, const integer* ipiv, const float* s,
                     const scomplex* b, integer ldb, scomplex* x,
                     integer ldx, float& rcond, float* berr,
                     integer n_err_bnds, float* err_bnds_norm,
                     float* err_bnds_comp, integer nparams, float* params)
{
    return csyrfsx(uplo, equed, n, nrhs, a, lda, af, ldaf, ipiv, s, b, ldb, x, ldx,
                   &rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer syrfsx( char uplo, char equed, integer n, integer nrhs,
                     const dcomplex* a, integer lda, const dcomplex* af,
                     integer ldaf, const integer* ipiv, const double* s,
                     const dcomplex* b, integer ldb, dcomplex* x,
                     integer ldx, double& rcond, double* berr,
                     integer n_err_bnds, double* err_bnds_norm,
                     double* err_bnds_comp, integer nparams, double* params)
{
    return zsyrfsx(uplo, equed, n, nrhs, a, lda, af, ldaf, ipiv, s, b, ldb, x, ldx,
                   &rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer herfsx( char uplo, char equed, integer n, integer nrhs,
                     const float* a, integer lda, const float* af,
                     integer ldaf, const integer* ipiv, const float* s,
                     const float* b, integer ldb, float* x,
                     integer ldx, float& rcond, float* berr,
                     integer n_err_bnds, float* err_bnds_norm,
                     float* err_bnds_comp, integer nparams, float* params)
{
    return ssyrfsx(uplo, equed, n, nrhs, a, lda, af, ldaf, ipiv, s, b, ldb, x, ldx,
                   &rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer herfsx( char uplo, char equed, integer n, integer nrhs,
                     const double* a, integer lda, const double* af,
                     integer ldaf, const integer* ipiv, const double* s,
                     const double* b, integer ldb, double* x,
                     integer ldx, double& rcond, double* berr,
                     integer n_err_bnds, double* err_bnds_norm,
                     double* err_bnds_comp, integer nparams, double* params)
{
    return dsyrfsx(uplo, equed, n, nrhs, a, lda, af, ldaf, ipiv, s, b, ldb, x, ldx,
                   &rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer herfsx( char uplo, char equed, integer n, integer nrhs,
                     const scomplex* a, integer lda, const scomplex* af,
                     integer ldaf, const integer* ipiv, const float* s,
                     const scomplex* b, integer ldb, scomplex* x,
                     integer ldx, float& rcond, float* berr,
                     integer n_err_bnds, float* err_bnds_norm,
                     float* err_bnds_comp, integer nparams, float* params)
{
    return cherfsx(uplo, equed, n, nrhs, a, lda, af, ldaf, ipiv, s, b, ldb, x, ldx,
                   &rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer herfsx( char uplo, char equed, integer n, integer nrhs,
                     const dcomplex* a, integer lda, const dcomplex* af,
                     integer ldaf, const integer* ipiv, const double* s,
                     const dcomplex* b, integer ldb, dcomplex* x,
                     integer ldx, double& rcond, double* berr,
                     integer n_err_bnds, double* err_bnds_norm,
                     double* err_bnds_comp, integer nparams, double* params)
{
    return zherfsx(uplo, equed, n, nrhs, a, lda, af, ldaf, ipiv, s, b, ldb, x, ldx,
                   &rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer sprfs( char uplo, integer n, integer nrhs,
                    const float* ap, const float* afp, const integer* ipiv,
                    const float* b, integer ldb, float* x,
                    integer ldx, float* ferr, float* berr)
{
    return ssprfs(uplo, n, nrhs, ap, afp, ipiv, b, ldb, x, ldx, ferr, berr);
}

inline integer sprfs( char uplo, integer n, integer nrhs,
                    const double* ap, const double* afp, const integer* ipiv,
                    const double* b, integer ldb, double* x,
                    integer ldx, double* ferr, double* berr)
{
    return dsprfs(uplo, n, nrhs, ap, afp, ipiv, b, ldb, x, ldx, ferr, berr);
}

inline integer sprfs( char uplo, integer n, integer nrhs,
                    const scomplex* ap, const scomplex* afp, const integer* ipiv,
                    const scomplex* b, integer ldb, scomplex* x,
                    integer ldx, float* ferr, float* berr)
{
    return csprfs(uplo, n, nrhs, ap, afp, ipiv, b, ldb, x, ldx, ferr, berr);
}

inline integer sprfs( char uplo, integer n, integer nrhs,
                    const dcomplex* ap, const dcomplex* afp, const integer* ipiv,
                    const dcomplex* b, integer ldb, dcomplex* x,
                    integer ldx, double* ferr, double* berr)
{
    return zsprfs(uplo, n, nrhs, ap, afp, ipiv, b, ldb, x, ldx, ferr, berr);
}

inline integer hprfs( char uplo, integer n, integer nrhs,
                    const float* ap, const float* afp, const integer* ipiv,
                    const float* b, integer ldb, float* x,
                    integer ldx, float* ferr, float* berr)
{
    return ssprfs(uplo, n, nrhs, ap, afp, ipiv, b, ldb, x, ldx, ferr, berr);
}

inline integer hprfs( char uplo, integer n, integer nrhs,
                    const double* ap, const double* afp, const integer* ipiv,
                    const double* b, integer ldb, double* x,
                    integer ldx, double* ferr, double* berr)
{
    return dsprfs(uplo, n, nrhs, ap, afp, ipiv, b, ldb, x, ldx, ferr, berr);
}

inline integer hprfs( char uplo, integer n, integer nrhs,
                    const scomplex* ap, const scomplex* afp, const integer* ipiv,
                    const scomplex* b, integer ldb, scomplex* x,
                    integer ldx, float* ferr, float* berr)
{
    return chprfs(uplo, n, nrhs, ap, afp, ipiv, b, ldb, x, ldx, ferr, berr);
}

inline integer hprfs( char uplo, integer n, integer nrhs,
                    const dcomplex* ap, const dcomplex* afp, const integer* ipiv,
                    const dcomplex* b, integer ldb, dcomplex* x,
                    integer ldx, double* ferr, double* berr)
{
    return zhprfs(uplo, n, nrhs, ap, afp, ipiv, b, ldb, x, ldx, ferr, berr);
}

inline integer trrfs( char uplo, char trans, char diag, integer n,
                    integer nrhs, const float* a, integer lda,
                    const float* b, integer ldb, const float* x,
                    integer ldx, float* ferr, float* berr)
{
    return strrfs(uplo, trans, diag, n, nrhs, a, lda, b, ldb, x, ldx, ferr, berr);
}

inline integer trrfs( char uplo, char trans, char diag, integer n,
                    integer nrhs, const double* a, integer lda,
                    const double* b, integer ldb, const double* x,
                    integer ldx, double* ferr, double* berr)
{
    return dtrrfs(uplo, trans, diag, n, nrhs, a, lda, b, ldb, x, ldx, ferr, berr);
}

inline integer trrfs( char uplo, char trans, char diag, integer n,
                    integer nrhs, const scomplex* a, integer lda,
                    const scomplex* b, integer ldb, const scomplex* x,
                    integer ldx, float* ferr, float* berr)
{
    return ctrrfs(uplo, trans, diag, n, nrhs, a, lda, b, ldb, x, ldx, ferr, berr);
}

inline integer trrfs( char uplo, char trans, char diag, integer n,
                    integer nrhs, const dcomplex* a, integer lda,
                    const dcomplex* b, integer ldb, const dcomplex* x,
                    integer ldx, double* ferr, double* berr)
{
    return ztrrfs(uplo, trans, diag, n, nrhs, a, lda, b, ldb, x, ldx, ferr, berr);
}

inline integer tprfs( char uplo, char trans, char diag, integer n,
                    integer nrhs, const float* ap, const float* b,
                    integer ldb, const float* x, integer ldx,
                    float* ferr, float* berr)
{
    return stprfs(uplo, trans, diag, n, nrhs, ap, b, ldb, x, ldx, ferr, berr);
}

inline integer tprfs( char uplo, char trans, char diag, integer n,
                    integer nrhs, const double* ap, const double* b,
                    integer ldb, const double* x, integer ldx,
                    double* ferr, double* berr)
{
    return dtprfs(uplo, trans, diag, n, nrhs, ap, b, ldb, x, ldx, ferr, berr);
}

inline integer tprfs( char uplo, char trans, char diag, integer n,
                    integer nrhs, const scomplex* ap, const scomplex* b,
                    integer ldb, const scomplex* x, integer ldx,
                    float* ferr, float* berr)
{
    return ctprfs(uplo, trans, diag, n, nrhs, ap, b, ldb, x, ldx, ferr, berr);
}

inline integer tprfs( char uplo, char trans, char diag, integer n,
                    integer nrhs, const dcomplex* ap, const dcomplex* b,
                    integer ldb, const dcomplex* x, integer ldx,
                    double* ferr, double* berr)
{
    return ztprfs(uplo, trans, diag, n, nrhs, ap, b, ldb, x, ldx, ferr, berr);
}

inline integer tbrfs( char uplo, char trans, char diag, integer n,
                    integer kd, integer nrhs, const float* ab,
                    integer ldab, const float* b, integer ldb,
                    const float* x, integer ldx, float* ferr,
                    float* berr)
{
    return stbrfs(uplo, trans, diag, n, kd, nrhs, ab, ldab, b, ldb, x, ldx, ferr, berr);
}

inline integer tbrfs( char uplo, char trans, char diag, integer n,
                    integer kd, integer nrhs, const double* ab,
                    integer ldab, const double* b, integer ldb,
                    const double* x, integer ldx, double* ferr,
                    double* berr)
{
    return dtbrfs(uplo, trans, diag, n, kd, nrhs, ab, ldab, b, ldb, x, ldx, ferr, berr);
}

inline integer tbrfs( char uplo, char trans, char diag, integer n,
                    integer kd, integer nrhs, const scomplex* ab,
                    integer ldab, const scomplex* b, integer ldb,
                    const scomplex* x, integer ldx, float* ferr,
                    float* berr)
{
    return ctbrfs(uplo, trans, diag, n, kd, nrhs, ab, ldab, b, ldb, x, ldx, ferr, berr);
}

inline integer tbrfs( char uplo, char trans, char diag, integer n,
                    integer kd, integer nrhs, const dcomplex* ab,
                    integer ldab, const dcomplex* b, integer ldb,
                    const dcomplex* x, integer ldx, double* ferr,
                    double* berr)
{
    return ztbrfs(uplo, trans, diag, n, kd, nrhs, ab, ldab, b, ldb, x, ldx, ferr, berr);
}

inline integer getri( integer n, float* a, integer lda,
                    const integer* ipiv)
{
    return sgetri(n, a, lda, ipiv);
}

inline integer getri( integer n, double* a, integer lda,
                    const integer* ipiv)
{
    return dgetri(n, a, lda, ipiv);
}

inline integer getri( integer n, scomplex* a, integer lda,
                    const integer* ipiv)
{
    return cgetri(n, a, lda, ipiv);
}

inline integer getri( integer n, dcomplex* a, integer lda,
                    const integer* ipiv)
{
    return zgetri(n, a, lda, ipiv);
}

inline integer potri( char uplo, integer n, float* a, integer lda )
{
    return spotri(uplo, n, a, lda);
}

inline integer potri( char uplo, integer n, double* a, integer lda )
{
    return dpotri(uplo, n, a, lda);
}

inline integer potri( char uplo, integer n, scomplex* a, integer lda )
{
    return cpotri(uplo, n, a, lda);
}

inline integer potri( char uplo, integer n, dcomplex* a, integer lda )
{
    return zpotri(uplo, n, a, lda);
}

inline integer pftri( char transr, char uplo, integer n, float* a )
{
    return spftri(transr, uplo, n, a);
}

inline integer pftri( char transr, char uplo, integer n, double* a )
{
    return dpftri(transr, uplo, n, a);
}

inline integer pftri( char transr, char uplo, integer n, scomplex* a )
{
    return cpftri(transr, uplo, n, a);
}

inline integer pftri( char transr, char uplo, integer n, dcomplex* a )
{
    return zpftri(transr, uplo, n, a);
}

inline integer pptri( char uplo, integer n, float* ap )
{
    return spptri(uplo, n, ap);
}

inline integer pptri( char uplo, integer n, double* ap )
{
    return dpptri(uplo, n, ap);
}

inline integer pptri( char uplo, integer n, scomplex* ap )
{
    return cpptri(uplo, n, ap);
}

inline integer pptri( char uplo, integer n, dcomplex* ap )
{
    return zpptri(uplo, n, ap);
}

inline integer sytri( char uplo, integer n, float* a, integer lda,
                    const integer* ipiv)
{
    return ssytri(uplo, n, a, lda, ipiv);
}

inline integer sytri( char uplo, integer n, double* a, integer lda,
                    const integer* ipiv)
{
    return dsytri(uplo, n, a, lda, ipiv);
}

inline integer sytri( char uplo, integer n, scomplex* a, integer lda,
                    const integer* ipiv)
{
    return csytri(uplo, n, a, lda, ipiv);
}

inline integer sytri( char uplo, integer n, dcomplex* a, integer lda,
                    const integer* ipiv)
{
    return zsytri(uplo, n, a, lda, ipiv);
}

inline integer hetri( char uplo, integer n, float* a, integer lda,
                    const integer* ipiv)
{
    return ssytri(uplo, n, a, lda, ipiv);
}

inline integer hetri( char uplo, integer n, double* a, integer lda,
                    const integer* ipiv)
{
    return dsytri(uplo, n, a, lda, ipiv);
}

inline integer hetri( char uplo, integer n, scomplex* a, integer lda,
                    const integer* ipiv)
{
    return chetri(uplo, n, a, lda, ipiv);
}

inline integer hetri( char uplo, integer n, dcomplex* a, integer lda,
                    const integer* ipiv)
{
    return zhetri(uplo, n, a, lda, ipiv);
}

inline integer sptri( char uplo, integer n, float* ap,
                    const integer* ipiv)
{
    return ssptri(uplo, n, ap, ipiv);
}

inline integer sptri( char uplo, integer n, double* ap,
                    const integer* ipiv)
{
    return dsptri(uplo, n, ap, ipiv);
}

inline integer sptri( char uplo, integer n, scomplex* ap,
                    const integer* ipiv)
{
    return csptri(uplo, n, ap, ipiv);
}

inline integer sptri( char uplo, integer n, dcomplex* ap,
                    const integer* ipiv)
{
    return zsptri(uplo, n, ap, ipiv);
}

inline integer hptri( char uplo, integer n, float* ap,
                    const integer* ipiv)
{
    return ssptri(uplo, n, ap, ipiv);
}

inline integer hptri( char uplo, integer n, double* ap,
                    const integer* ipiv)
{
    return dsptri(uplo, n, ap, ipiv);
}

inline integer hptri( char uplo, integer n, scomplex* ap,
                    const integer* ipiv)
{
    return chptri(uplo, n, ap, ipiv);
}

inline integer hptri( char uplo, integer n, dcomplex* ap,
                    const integer* ipiv)
{
    return zhptri(uplo, n, ap, ipiv);
}

inline integer trtri( char uplo, char diag, integer n, float* a,
                    integer lda )
{
    return strtri(uplo, diag, n, a, lda);
}

inline integer trtri( char uplo, char diag, integer n, double* a,
                    integer lda )
{
    return dtrtri(uplo, diag, n, a, lda);
}

inline integer trtri( char uplo, char diag, integer n, scomplex* a,
                    integer lda )
{
    return ctrtri(uplo, diag, n, a, lda);
}

inline integer trtri( char uplo, char diag, integer n, dcomplex* a,
                    integer lda )
{
    return ztrtri(uplo, diag, n, a, lda);
}

inline integer tftri( char transr, char uplo, char diag, integer n,
                    float* a )
{
    return stftri(transr, uplo, diag, n, a);
}

inline integer tftri( char transr, char uplo, char diag, integer n,
                    double* a )
{
    return dtftri(transr, uplo, diag, n, a);
}

inline integer tftri( char transr, char uplo, char diag, integer n,
                    scomplex* a )
{
    return ctftri(transr, uplo, diag, n, a);
}

inline integer tftri( char transr, char uplo, char diag, integer n,
                    dcomplex* a )
{
    return ztftri(transr, uplo, diag, n, a);
}

inline integer tptri( char uplo, char diag, integer n, float* ap )
{
    return stptri(uplo, diag, n, ap);
}

inline integer tptri( char uplo, char diag, integer n, double* ap )
{
    return dtptri(uplo, diag, n, ap);
}

inline integer tptri( char uplo, char diag, integer n, scomplex* ap )
{
    return ctptri(uplo, diag, n, ap);
}

inline integer tptri( char uplo, char diag, integer n, dcomplex* ap )
{
    return ztptri(uplo, diag, n, ap);
}

inline integer geequ( integer m, integer n, const float* a,
                    integer lda, float* r, float* c, float& rowcnd,
                    float& colcnd, float& amax )
{
    return sgeequ(m, n, a, lda, r, c, &rowcnd, &colcnd, &amax);
}

inline integer geequ( integer m, integer n, const double* a,
                    integer lda, double* r, double* c, double& rowcnd,
                    double& colcnd, double& amax )
{
    return dgeequ(m, n, a, lda, r, c, &rowcnd, &colcnd, &amax);
}

inline integer geequ( integer m, integer n, const scomplex* a,
                    integer lda, float* r, float* c, float& rowcnd,
                    float& colcnd, float& amax )
{
    return cgeequ(m, n, a, lda, r, c, &rowcnd, &colcnd, &amax);
}

inline integer geequ( integer m, integer n, const dcomplex* a,
                    integer lda, double* r, double* c, double& rowcnd,
                    double& colcnd, double& amax )
{
    return zgeequ(m, n, a, lda, r, c, &rowcnd, &colcnd, &amax);
}

inline integer geequb( integer m, integer n, const float* a,
                     integer lda, float* r, float* c, float& rowcnd,
                     float& colcnd, float& amax )
{
    return sgeequb(m, n, a, lda, r, c, &rowcnd, &colcnd, &amax);
}

inline integer geequb( integer m, integer n, const double* a,
                     integer lda, double* r, double* c, double& rowcnd,
                     double& colcnd, double& amax )
{
    return dgeequb(m, n, a, lda, r, c, &rowcnd, &colcnd, &amax);
}

inline integer geequb( integer m, integer n, const scomplex* a,
                     integer lda, float* r, float* c, float& rowcnd,
                     float& colcnd, float& amax )
{
    return cgeequb(m, n, a, lda, r, c, &rowcnd, &colcnd, &amax);
}

inline integer geequb( integer m, integer n, const dcomplex* a,
                     integer lda, double* r, double* c, double& rowcnd,
                     double& colcnd, double& amax )
{
    return zgeequb(m, n, a, lda, r, c, &rowcnd, &colcnd, &amax);
}

inline integer gbequ( integer m, integer n, integer kl,
                    integer ku, const float* ab, integer ldab,
                    float* r, float* c, float& rowcnd, float& colcnd,
                    float& amax )
{
    return sgbequ(m, n, kl, ku, ab, ldab, r, c, &rowcnd, &colcnd, &amax);
}

inline integer gbequ( integer m, integer n, integer kl,
                    integer ku, const double* ab, integer ldab,
                    double* r, double* c, double& rowcnd, double& colcnd,
                    double& amax )
{
    return dgbequ(m, n, kl, ku, ab, ldab, r, c, &rowcnd, &colcnd, &amax);
}

inline integer gbequ( integer m, integer n, integer kl,
                    integer ku, const scomplex* ab, integer ldab,
                    float* r, float* c, float& rowcnd, float& colcnd,
                    float& amax )
{
    return cgbequ(m, n, kl, ku, ab, ldab, r, c, &rowcnd, &colcnd, &amax);
}

inline integer gbequ( integer m, integer n, integer kl,
                    integer ku, const dcomplex* ab, integer ldab,
                    double* r, double* c, double& rowcnd, double& colcnd,
                    double& amax )
{
    return zgbequ(m, n, kl, ku, ab, ldab, r, c, &rowcnd, &colcnd, &amax);
}

inline integer gbequb( integer m, integer n, integer kl,
                     integer ku, const float* ab, integer ldab,
                     float* r, float* c, float& rowcnd, float& colcnd,
                     float& amax )
{
    return sgbequb(m, n, kl, ku, ab, ldab, r, c, &rowcnd, &colcnd, &amax);
}

inline integer gbequb( integer m, integer n, integer kl,
                     integer ku, const double* ab, integer ldab,
                     double* r, double* c, double& rowcnd, double& colcnd,
                     double& amax )
{
    return dgbequb(m, n, kl, ku, ab, ldab, r, c, &rowcnd, &colcnd, &amax);
}

inline integer gbequb( integer m, integer n, integer kl,
                     integer ku, const scomplex* ab, integer ldab,
                     float* r, float* c, float& rowcnd, float& colcnd,
                     float& amax )
{
    return cgbequb(m, n, kl, ku, ab, ldab, r, c, &rowcnd, &colcnd, &amax);
}

inline integer gbequb( integer m, integer n, integer kl,
                     integer ku, const dcomplex* ab, integer ldab,
                     double* r, double* c, double& rowcnd, double& colcnd,
                     double& amax )
{
    return zgbequb(m, n, kl, ku, ab, ldab, r, c, &rowcnd, &colcnd, &amax);
}

inline integer poequ( integer n, const float* a, integer lda, float* s,
                    float& scond, float& amax )
{
    return spoequ(n, a, lda, s, &scond, &amax);
}

inline integer poequ( integer n, const double* a, integer lda, double* s,
                    double& scond, double& amax )
{
    return dpoequ(n, a, lda, s, &scond, &amax);
}

inline integer poequ( integer n, const scomplex* a, integer lda, float* s,
                    float& scond, float& amax )
{
    return cpoequ(n, a, lda, s, &scond, &amax);
}

inline integer poequ( integer n, const dcomplex* a, integer lda, double* s,
                    double& scond, double& amax )
{
    return zpoequ(n, a, lda, s, &scond, &amax);
}

inline integer poequb( integer n, const float* a, integer lda, float* s,
                     float& scond, float& amax )
{
    return spoequb(n, a, lda, s, &scond, &amax);
}

inline integer poequb( integer n, const double* a, integer lda, double* s,
                     double& scond, double& amax )
{
    return dpoequb(n, a, lda, s, &scond, &amax);
}

inline integer poequb( integer n, const scomplex* a, integer lda, float* s,
                    float& scond, float& amax )
{
    return cpoequb(n, a, lda, s, &scond, &amax);
}

inline integer poequb( integer n, const dcomplex* a, integer lda, double* s,
                     double& scond, double& amax )
{
    return zpoequb(n, a, lda, s, &scond, &amax);
}

inline integer ppequ( char uplo, integer n, const float* ap, float* s,
                    float& scond, float& amax )
{
    return sppequ(uplo, n, ap, s, &scond, &amax);
}

inline integer ppequ( char uplo, integer n, const double* ap, double* s,
                    double& scond, double& amax )
{
    return dppequ(uplo, n, ap, s, &scond, &amax);
}

inline integer ppequ( char uplo, integer n, const scomplex* ap, float* s,
                    float& scond, float& amax )
{
    return cppequ(uplo, n, ap, s, &scond, &amax);
}

inline integer ppequ( char uplo, integer n, const dcomplex* ap, double* s,
                    double& scond, double& amax )
{
    return zppequ(uplo, n, ap, s, &scond, &amax);
}

inline integer pbequ( char uplo, integer n, integer kd, const float* ab,
                    integer ldab, float* s, float& scond, float& amax )
{
    return spbequ(uplo, n, kd, ab, ldab, s, &scond, &amax);
}

inline integer pbequ( char uplo, integer n, integer kd, const double* ab,
                    integer ldab, double* s, double& scond, double& amax )
{
    return dpbequ(uplo, n, kd, ab, ldab, s, &scond, &amax);
}

inline integer pbequ( char uplo, integer n, integer kd, const scomplex* ab,
                    integer ldab, float* s, float& scond, float& amax )
{
    return cpbequ(uplo, n, kd, ab, ldab, s, &scond, &amax);
}

inline integer pbequ( char uplo, integer n, integer kd, const dcomplex* ab,
                    integer ldab, double* s, double& scond, double& amax )
{
    return zpbequ(uplo, n, kd, ab, ldab, s, &scond, &amax);
}

inline integer syequb( char uplo, integer n, const float* a,
                     integer lda, float* s, float& scond, float& amax)
{
    return ssyequb(uplo, n, a, lda, s, &scond, &amax);
}

inline integer syequb( char uplo, integer n, const double* a,
                     integer lda, double* s, double& scond, double& amax)
{
    return dsyequb(uplo, n, a, lda, s, &scond, &amax);
}

inline integer syequb( char uplo, integer n, const scomplex* a,
                     integer lda, float* s, float& scond, float& amax)
{
    return csyequb(uplo, n, a, lda, s, &scond, &amax);
}

inline integer syequb( char uplo, integer n, const dcomplex* a,
                     integer lda, double* s, double& scond, double& amax)
{
    return zsyequb(uplo, n, a, lda, s, &scond, &amax);
}

inline integer heequb( char uplo, integer n, const float* a,
                     integer lda, float* s, float& scond, float& amax)
{
    return ssyequb(uplo, n, a, lda, s, &scond, &amax);
}

inline integer heequb( char uplo, integer n, const double* a,
                     integer lda, double* s, double& scond, double& amax)
{
    return dsyequb(uplo, n, a, lda, s, &scond, &amax);
}

inline integer heequb( char uplo, integer n, const scomplex* a,
                     integer lda, float* s, float& scond, float& amax)
{
    return cheequb(uplo, n, a, lda, s, &scond, &amax);
}

inline integer heequb( char uplo, integer n, const dcomplex* a,
                     integer lda, double* s, double& scond, double& amax)
{
    return zheequb(uplo, n, a, lda, s, &scond, &amax);
}

inline integer gesv( integer n, integer nrhs, float* a, integer lda,
                   integer* ipiv, float* b, integer ldb )
{
    return sgesv(n, nrhs, a, lda, ipiv, b, ldb);
}

inline integer gesv( integer n, integer nrhs, double* a, integer lda,
                   integer* ipiv, double* b, integer ldb )
{
    return dgesv(n, nrhs, a, lda, ipiv, b, ldb);
}

inline integer gesv( integer n, integer nrhs, scomplex* a, integer lda,
                   integer* ipiv, scomplex* b, integer ldb )
{
    return cgesv(n, nrhs, a, lda, ipiv, b, ldb);
}

inline integer gesv( integer n, integer nrhs, dcomplex* a, integer lda,
                   integer* ipiv, dcomplex* b, integer ldb )
{
    return zgesv(n, nrhs, a, lda, ipiv, b, ldb);
}

inline integer gesv( integer n, integer nrhs, double* a, integer lda,
                    integer* ipiv, double* b, integer ldb, double* x,
                    integer ldx, integer& iter )
{
    return dsgesv(n, nrhs, a, lda, ipiv, b, ldb, x, ldx, &iter);
}

inline integer gesv( integer n, integer nrhs, dcomplex* a, integer lda,
                    integer* ipiv, dcomplex* b, integer ldb, dcomplex* x,
                    integer ldx, integer& iter )
{
    return zcgesv(n, nrhs, a, lda, ipiv, b, ldb, x, ldx, &iter);
}

inline integer gesvx( char fact, char trans, integer n, integer nrhs,
                    float* a, integer lda, float* af, integer ldaf,
                    integer* ipiv, char* equed, float* r, float* c,
                    float* b, integer ldb, float* x, integer ldx,
                    float& rcond, float* ferr, float* berr)
{
    return sgesvx(fact, trans, n, nrhs, a, lda, af, ldaf, ipiv, equed, r, c,
                  b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer gesvx( char fact, char trans, integer n, integer nrhs,
                    double* a, integer lda, double* af, integer ldaf,
                    integer* ipiv, char* equed, double* r, double* c,
                    double* b, integer ldb, double* x, integer ldx,
                    double& rcond, double* ferr, double* berr)
{
    return dgesvx(fact, trans, n, nrhs, a, lda, af, ldaf, ipiv, equed, r, c,
                  b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer gesvx( char fact, char trans, integer n, integer nrhs,
                    scomplex* a, integer lda, scomplex* af, integer ldaf,
                    integer* ipiv, char* equed, float* r, float* c,
                    scomplex* b, integer ldb, scomplex* x, integer ldx,
                    float& rcond, float* ferr, float* berr)
{
    return cgesvx(fact, trans, n, nrhs, a, lda, af, ldaf, ipiv, equed, r, c,
                  b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer gesvx( char fact, char trans, integer n, integer nrhs,
                    dcomplex* a, integer lda, dcomplex* af, integer ldaf,
                    integer* ipiv, char* equed, double* r, double* c,
                    dcomplex* b, integer ldb, dcomplex* x, integer ldx,
                    double& rcond, double* ferr, double* berr)
{
    return zgesvx(fact, trans, n, nrhs, a, lda, af, ldaf, ipiv, equed, r, c,
                  b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer gesvxx( char fact, char trans, integer n, integer nrhs,
                    float* a, integer lda, float* af, integer ldaf,
                     integer* ipiv, char* equed, float* r, float* c,
                     float* b, integer ldb, float* x, integer ldx,
                     float& rcond, float& rpvgrw, float* berr,
                     integer n_err_bnds, float* err_bnds_norm,
                     float* err_bnds_comp, integer nparams, float* params)
{
    return sgesvxx(fact, trans, n, nrhs, a, lda, af, ldaf, ipiv, equed, r, c, b, ldb, x, ldx,
                   &rcond, &rpvgrw, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer gesvxx( char fact, char trans, integer n, integer nrhs,
                     double* a, integer lda, double* af, integer ldaf,
                     integer* ipiv, char* equed, double* r, double* c,
                     double* b, integer ldb, double* x, integer ldx,
                     double& rcond, double& rpvgrw, double* berr,
                     integer n_err_bnds, double* err_bnds_norm,
                     double* err_bnds_comp, integer nparams, double* params)
{
    return dgesvxx(fact, trans, n, nrhs, a, lda, af, ldaf, ipiv, equed, r, c, b, ldb, x, ldx,
                   &rcond, &rpvgrw, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer gesvxx( char fact, char trans, integer n, integer nrhs,
                     scomplex* a, integer lda, scomplex* af, integer ldaf,
                     integer* ipiv, char* equed, float* r, float* c,
                     scomplex* b, integer ldb, scomplex* x, integer ldx,
                     float& rcond, float& rpvgrw, float* berr,
                     integer n_err_bnds, float* err_bnds_norm,
                     float* err_bnds_comp, integer nparams, float* params)
{
    return cgesvxx(fact, trans, n, nrhs, a, lda, af, ldaf, ipiv, equed, r, c, b, ldb, x, ldx,
                   &rcond, &rpvgrw, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer gesvxx( char fact, char trans, integer n, integer nrhs,
                    dcomplex* a, integer lda, dcomplex* af, integer ldaf,
                     integer* ipiv, char* equed, double* r, double* c,
                     dcomplex* b, integer ldb, dcomplex* x, integer ldx,
                     double& rcond, double& rpvgrw, double* berr,
                     integer n_err_bnds, double* err_bnds_norm,
                     double* err_bnds_comp, integer nparams, double* params)
{
    return zgesvxx(fact, trans, n, nrhs, a, lda, af, ldaf, ipiv, equed, r, c, b, ldb, x, ldx,
                   &rcond, &rpvgrw, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer gbsv( integer n, integer kl, integer ku,
                   integer nrhs, float* ab, integer ldab,
                   integer* ipiv, float* b, integer ldb )
{
    return sgbsv(n, kl, ku, nrhs, ab, ldab, ipiv, b, ldb);
}

inline integer gbsv( integer n, integer kl, integer ku,
                   integer nrhs, double* ab, integer ldab,
                   integer* ipiv, double* b, integer ldb )
{
    return dgbsv(n, kl, ku, nrhs, ab, ldab, ipiv, b, ldb);
}

inline integer gbsv( integer n, integer kl, integer ku,
                   integer nrhs, scomplex* ab, integer ldab,
                   integer* ipiv, scomplex* b, integer ldb )
{
    return cgbsv(n, kl, ku, nrhs, ab, ldab, ipiv, b, ldb);
}

inline integer gbsv( integer n, integer kl, integer ku,
                   integer nrhs, dcomplex* ab, integer ldab,
                   integer* ipiv, dcomplex* b, integer ldb )
{
    return zgbsv(n, kl, ku, nrhs, ab, ldab, ipiv, b, ldb);
}

inline integer gbsvx( char fact, char trans, integer n, integer kl,
                    integer ku, integer nrhs, float* ab,
                    integer ldab, float* afb, integer ldafb,
                    integer* ipiv, char* equed, float* r, float* c,
                    float* b, integer ldb, float* x, integer ldx,
                    float& rcond, float* ferr, float* berr)
{
    return sgbsvx(fact, trans, n, kl, ku, nrhs, ab, ldab, afb, ldafb, ipiv, equed, r, c,
                  b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer gbsvx( char fact, char trans, integer n, integer kl,
                    integer ku, integer nrhs, double* ab,
                    integer ldab, double* afb, integer ldafb,
                    integer* ipiv, char* equed, double* r, double* c,
                    double* b, integer ldb, double* x, integer ldx,
                    double& rcond, double* ferr, double* berr)
{
    return dgbsvx(fact, trans, n, kl, ku, nrhs, ab, ldab, afb, ldafb, ipiv, equed, r, c,
                  b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer gbsvx( char fact, char trans, integer n, integer kl,
                    integer ku, integer nrhs, scomplex* ab,
                    integer ldab, scomplex* afb, integer ldafb,
                    integer* ipiv, char* equed, float* r, float* c,
                    scomplex* b, integer ldb, scomplex* x, integer ldx,
                    float& rcond, float* ferr, float* berr)
{
    return cgbsvx(fact, trans, n, kl, ku, nrhs, ab, ldab, afb, ldafb, ipiv, equed, r, c,
                  b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer gbsvx( char fact, char trans, integer n, integer kl,
                    integer ku, integer nrhs, dcomplex* ab,
                    integer ldab, dcomplex* afb, integer ldafb,
                    integer* ipiv, char* equed, double* r, double* c,
                    dcomplex* b, integer ldb, dcomplex* x, integer ldx,
                    double& rcond, double* ferr, double* berr)
{
    return zgbsvx(fact, trans, n, kl, ku, nrhs, ab, ldab, afb, ldafb, ipiv, equed, r, c,
                  b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer gbsvxx( char fact, char trans, integer n, integer kl,
                     integer ku, integer nrhs, float* ab,
                     integer ldab, float* afb, integer ldafb,
                     integer* ipiv, char* equed, float* r, float* c,
                     float* b, integer ldb, float* x, integer ldx,
                     float& rcond, float& rpvgrw, float* berr,
                     integer n_err_bnds, float* err_bnds_norm,
                     float* err_bnds_comp, integer nparams, float* params)
{
    return sgbsvxx(fact, trans, n, kl, ku, nrhs, ab, ldab, afb, ldafb, ipiv, equed, r, c, b, ldb, x, ldx,
                   &rcond, &rpvgrw, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer gbsvxx( char fact, char trans, integer n, integer kl,
                     integer ku, integer nrhs, double* ab,
                     integer ldab, double* afb, integer ldafb,
                     integer* ipiv, char* equed, double* r, double* c,
                     double* b, integer ldb, double* x, integer ldx,
                     double& rcond, double& rpvgrw, double* berr,
                     integer n_err_bnds, double* err_bnds_norm,
                     double* err_bnds_comp, integer nparams, double* params)
{
    return dgbsvxx(fact, trans, n, kl, ku, nrhs, ab, ldab, afb, ldafb, ipiv, equed, r, c, b, ldb, x, ldx,
                   &rcond, &rpvgrw, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer gbsvxx( char fact, char trans, integer n, integer kl,
                     integer ku, integer nrhs, scomplex* ab,
                     integer ldab, scomplex* afb, integer ldafb,
                     integer* ipiv, char* equed, float* r, float* c,
                     scomplex* b, integer ldb, scomplex* x, integer ldx,
                     float& rcond, float& rpvgrw, float* berr,
                     integer n_err_bnds, float* err_bnds_norm,
                     float* err_bnds_comp, integer nparams, float* params)
{
    return cgbsvxx(fact, trans, n, kl, ku, nrhs, ab, ldab, afb, ldafb, ipiv, equed, r, c, b, ldb, x, ldx,
                   &rcond, &rpvgrw, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer gbsvxx( char fact, char trans, integer n, integer kl,
                     integer ku, integer nrhs, dcomplex* ab,
                     integer ldab, dcomplex* afb, integer ldafb,
                     integer* ipiv, char* equed, double* r, double* c,
                     dcomplex* b, integer ldb, dcomplex* x, integer ldx,
                     double& rcond, double& rpvgrw, double* berr,
                     integer n_err_bnds, double* err_bnds_norm,
                     double* err_bnds_comp, integer nparams, double* params)
{
    return zgbsvxx(fact, trans, n, kl, ku, nrhs, ab, ldab, afb, ldafb, ipiv, equed, r, c, b, ldb, x, ldx,
                   &rcond, &rpvgrw, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer gtsv( integer n, integer nrhs, float* dl, float* d,
                   float* du, float* b, integer ldb )
{
    return sgtsv(n, nrhs, dl, d, du, b, ldb);
}

inline integer gtsv( integer n, integer nrhs, double* dl, double* d,
                   double* du, double* b, integer ldb )
{
    return dgtsv(n, nrhs, dl, d, du, b, ldb);
}

inline integer gtsv( integer n, integer nrhs, scomplex* dl, scomplex* d,
                   scomplex* du, scomplex* b, integer ldb )
{
    return cgtsv(n, nrhs, dl, d, du, b, ldb);
}

inline integer gtsv( integer n, integer nrhs, dcomplex* dl, dcomplex* d,
                   dcomplex* du, dcomplex* b, integer ldb )
{
    return zgtsv(n, nrhs, dl, d, du, b, ldb);
}

inline integer gtsvx( char fact, char trans, integer n, integer nrhs,
                    const float* dl, const float* d, const float* du,
                    float* dlf, float* df, float* duf, float* du2,
                    integer* ipiv, const float* b, integer ldb,
                    float* x, integer ldx, float& rcond, float* ferr,
                    float* berr)
{
    return sgtsvx(fact, trans, n, nrhs, dl, d, du, dlf, df, duf, du2, ipiv,
                  b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer gtsvx( char fact, char trans, integer n, integer nrhs,
                    const double* dl, const double* d, const double* du,
                    double* dlf, double* df, double* duf, double* du2,
                    integer* ipiv, const double* b, integer ldb,
                    double* x, integer ldx, double& rcond, double* ferr,
                    double* berr)
{
    return dgtsvx(fact, trans, n, nrhs, dl, d, du, dlf, df, duf, du2, ipiv,
                  b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer gtsvx( char fact, char trans, integer n, integer nrhs,
                    const scomplex* dl, const scomplex* d, const scomplex* du,
                    scomplex* dlf, scomplex* df, scomplex* duf, scomplex* du2,
                    integer* ipiv, const scomplex* b, integer ldb,
                    scomplex* x, integer ldx, float& rcond, float* ferr,
                    float* berr)
{
    return cgtsvx(fact, trans, n, nrhs, dl, d, du, dlf, df, duf, du2, ipiv,
                  b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer gtsvx( char fact, char trans, integer n, integer nrhs,
                    const dcomplex* dl, const dcomplex* d, const dcomplex* du,
                    dcomplex* dlf, dcomplex* df, dcomplex* duf, dcomplex* du2,
                    integer* ipiv, const dcomplex* b, integer ldb,
                    dcomplex* x, integer ldx, double& rcond, double* ferr,
                    double* berr)
{
    return zgtsvx(fact, trans, n, nrhs, dl, d, du, dlf, df, duf, du2, ipiv,
                  b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer posv( char uplo, integer n, integer nrhs, float* a,
                   integer lda, float* b, integer ldb )
{
    return sposv(uplo, n, nrhs, a, lda, b, ldb);
}

inline integer posv( char uplo, integer n, integer nrhs, double* a,
                   integer lda, double* b, integer ldb )
{
    return dposv(uplo, n, nrhs, a, lda, b, ldb);
}

inline integer posv( char uplo, integer n, integer nrhs, scomplex* a,
                   integer lda, scomplex* b, integer ldb )
{
    return cposv(uplo, n, nrhs, a, lda, b, ldb);
}

inline integer posv( char uplo, integer n, integer nrhs, dcomplex* a,
                   integer lda, dcomplex* b, integer ldb )
{
    return zposv(uplo, n, nrhs, a, lda, b, ldb);
}

inline integer posv( char uplo, integer n, integer nrhs, double* a,
                    integer lda, double* b, integer ldb, double* x,
                    integer ldx, integer& iter )
{
    return dsposv(uplo, n, nrhs, a, lda, b, ldb, x, ldx, &iter);
}

inline integer posv( char uplo, integer n, integer nrhs, dcomplex* a,
                    integer lda, dcomplex* b, integer ldb, dcomplex* x,
                    integer ldx, integer& iter )
{
    return zcposv(uplo, n, nrhs, a, lda, b, ldb, x, ldx, &iter);
}

inline integer posvx( char fact, char uplo, integer n, integer nrhs,
                    float* a, integer lda, float* af, integer ldaf,
                    char* equed, float* s, float* b, integer ldb,
                    float* x, integer ldx, float& rcond, float* ferr,
                    float* berr)
{
    return sposvx(fact, uplo, n, nrhs, a, lda, af, ldaf, equed, s, b, ldb,
                  x, ldx, &rcond, ferr, berr);
}

inline integer posvx( char fact, char uplo, integer n, integer nrhs,
                    double* a, integer lda, double* af, integer ldaf,
                    char* equed, double* s, double* b, integer ldb,
                    double* x, integer ldx, double& rcond, double* ferr,
                    double* berr)
{
    return dposvx(fact, uplo, n, nrhs, a, lda, af, ldaf, equed, s, b, ldb,
                  x, ldx, &rcond, ferr, berr);
}

inline integer posvx( char fact, char uplo, integer n, integer nrhs,
                    scomplex* a, integer lda, scomplex* af, integer ldaf,
                    char* equed, float* s, scomplex* b, integer ldb,
                    scomplex* x, integer ldx, float& rcond, float* ferr,
                    float* berr)
{
    return cposvx(fact, uplo, n, nrhs, a, lda, af, ldaf, equed, s, b, ldb,
                  x, ldx, &rcond, ferr, berr);
}

inline integer posvx( char fact, char uplo, integer n, integer nrhs,
                    dcomplex* a, integer lda, dcomplex* af, integer ldaf,
                    char* equed, double* s, dcomplex* b, integer ldb,
                    dcomplex* x, integer ldx, double& rcond, double* ferr,
                    double* berr)
{
    return zposvx(fact, uplo, n, nrhs, a, lda, af, ldaf, equed, s, b, ldb,
                  x, ldx, &rcond, ferr, berr);
}

inline integer posvxx( char fact, char uplo, integer n, integer nrhs,
                    float* a, integer lda, float* af, integer ldaf,
                     char* equed, float* s, float* b, integer ldb,
                     float* x, integer ldx, float& rcond, float& rpvgrw,
                     float* berr, integer n_err_bnds,
                     float* err_bnds_norm, float* err_bnds_comp,
                     integer nparams, float* params)
{
    return sposvxx(fact, uplo, n, nrhs, a, lda, af, ldaf, equed, s, b, ldb, x, ldx,
                   &rcond, &rpvgrw, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer posvxx( char fact, char uplo, integer n, integer nrhs,
                     double* a, integer lda, double* af, integer ldaf,
                     char* equed, double* s, double* b, integer ldb,
                     double* x, integer ldx, double& rcond, double& rpvgrw,
                     double* berr, integer n_err_bnds,
                     double* err_bnds_norm, double* err_bnds_comp,
                     integer nparams, double* params)
{
    return dposvxx(fact, uplo, n, nrhs, a, lda, af, ldaf, equed, s, b, ldb, x, ldx,
                   &rcond, &rpvgrw, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer posvxx( char fact, char uplo, integer n, integer nrhs,
                     scomplex* a, integer lda, scomplex* af, integer ldaf,
                     char* equed, float* s, scomplex* b, integer ldb,
                     scomplex* x, integer ldx, float& rcond, float& rpvgrw,
                     float* berr, integer n_err_bnds,
                     float* err_bnds_norm, float* err_bnds_comp,
                     integer nparams, float* params)
{
    return cposvxx(fact, uplo, n, nrhs, a, lda, af, ldaf, equed, s, b, ldb, x, ldx,
                   &rcond, &rpvgrw, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer posvxx( char fact, char uplo, integer n, integer nrhs,
                     dcomplex* a, integer lda, dcomplex* af, integer ldaf,
                     char* equed, double* s, dcomplex* b, integer ldb,
                     dcomplex* x, integer ldx, double& rcond, double& rpvgrw,
                     double* berr, integer n_err_bnds,
                     double* err_bnds_norm, double* err_bnds_comp,
                     integer nparams, double* params)
{
    return zposvxx(fact, uplo, n, nrhs, a, lda, af, ldaf, equed, s, b, ldb, x, ldx,
                   &rcond, &rpvgrw, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer ppsv( char uplo, integer n, integer nrhs, float* ap,
                    float* b, integer ldb )
{
    return sppsv(uplo, n, nrhs, ap, b, ldb);
}

inline integer ppsv( char uplo, integer n, integer nrhs, double* ap,
                   double* b, integer ldb )
{
    return dppsv(uplo, n, nrhs, ap, b, ldb);
}

inline integer ppsv( char uplo, integer n, integer nrhs, scomplex* ap,
                   scomplex* b, integer ldb )
{
    return cppsv(uplo, n, nrhs, ap, b, ldb);
}

inline integer ppsv( char uplo, integer n, integer nrhs, dcomplex* ap,
                   dcomplex* b, integer ldb )
{
    return zppsv(uplo, n, nrhs, ap, b, ldb);
}

inline integer ppsvx( char fact, char uplo, integer n, integer nrhs,
                    float* ap, float* afp, char* equed, float* s, float* b,
                    integer ldb, float* x, integer ldx, float& rcond,
                    float* ferr, float* berr)
{
    return sppsvx(fact, uplo, n, nrhs, ap, afp, equed, s, b, ldb, x, ldx,
                  &rcond, ferr, berr);
}

inline integer ppsvx( char fact, char uplo, integer n, integer nrhs,
                    double* ap, double* afp, char* equed, double* s, double* b,
                    integer ldb, double* x, integer ldx, double& rcond,
                    double* ferr, double* berr)
{
    return dppsvx(fact, uplo, n, nrhs, ap, afp, equed, s, b, ldb, x, ldx,
                  &rcond, ferr, berr);
}

inline integer ppsvx( char fact, char uplo, integer n, integer nrhs,
                    scomplex* ap, scomplex* afp, char* equed, float* s, scomplex* b,
                    integer ldb, scomplex* x, integer ldx, float& rcond,
                    float* ferr, float* berr)
{
    return cppsvx(fact, uplo, n, nrhs, ap, afp, equed, s, b, ldb, x, ldx,
                  &rcond, ferr, berr);
}

inline integer ppsvx( char fact, char uplo, integer n, integer nrhs,
                    dcomplex* ap, dcomplex* afp, char* equed, double* s, dcomplex* b,
                    integer ldb, dcomplex* x, integer ldx, double& rcond,
                    double* ferr, double* berr)
{
    return zppsvx(fact, uplo, n, nrhs, ap, afp, equed, s, b, ldb, x, ldx,
                  &rcond, ferr, berr);
}

inline integer pbsv( char uplo, integer n, integer kd, integer nrhs,
                   float* ab, integer ldab, float* b, integer ldb )
{
    return spbsv(uplo, n, kd, nrhs, ab, ldab, b, ldb);
}

inline integer pbsv( char uplo, integer n, integer kd, integer nrhs,
                   double* ab, integer ldab, double* b, integer ldb )
{
    return dpbsv(uplo, n, kd, nrhs, ab, ldab, b, ldb);
}

inline integer pbsv( char uplo, integer n, integer kd, integer nrhs,
                   scomplex* ab, integer ldab, scomplex* b, integer ldb )
{
    return cpbsv(uplo, n, kd, nrhs, ab, ldab, b, ldb);
}

inline integer pbsv( char uplo, integer n, integer kd, integer nrhs,
                   dcomplex* ab, integer ldab, dcomplex* b, integer ldb )
{
    return zpbsv(uplo, n, kd, nrhs, ab, ldab, b, ldb);
}

inline integer pbsvx( char fact, char uplo, integer n, integer kd,
                    integer nrhs, float* ab, integer ldab, float* afb,
                    integer ldafb, char* equed, float* s, float* b,
                    integer ldb, float* x, integer ldx, float& rcond,
                    float* ferr, float* berr)
{
    return spbsvx(fact, uplo, n, kd, nrhs, ab, ldab, afb, ldafb, equed, s, b, ldb,
                  x, ldx, &rcond, ferr, berr);
}

inline integer pbsvx( char fact, char uplo, integer n, integer kd,
                    integer nrhs, double* ab, integer ldab, double* afb,
                    integer ldafb, char* equed, double* s, double* b,
                    integer ldb, double* x, integer ldx, double& rcond,
                    double* ferr, double* berr)
{
    return dpbsvx(fact, uplo, n, kd, nrhs, ab, ldab, afb, ldafb, equed, s, b, ldb,
                  x, ldx, &rcond, ferr, berr);
}

inline integer pbsvx( char fact, char uplo, integer n, integer kd,
                    integer nrhs, scomplex* ab, integer ldab, scomplex* afb,
                    integer ldafb, char* equed, float* s, scomplex* b,
                    integer ldb, scomplex* x, integer ldx, float& rcond,
                    float* ferr, float* berr)
{
    return cpbsvx(fact, uplo, n, kd, nrhs, ab, ldab, afb, ldafb, equed, s, b, ldb,
                  x, ldx, &rcond, ferr, berr);
}

inline integer pbsvx( char fact, char uplo, integer n, integer kd,
                    integer nrhs, dcomplex* ab, integer ldab, dcomplex* afb,
                    integer ldafb, char* equed, double* s, dcomplex* b,
                    integer ldb, dcomplex* x, integer ldx, double& rcond,
                    double* ferr, double* berr)
{
    return zpbsvx(fact, uplo, n, kd, nrhs, ab, ldab, afb, ldafb, equed, s, b, ldb,
                  x, ldx, &rcond, ferr, berr);
}

inline integer ptsv( integer n, integer nrhs, float* d, float* e,
                   float* b, integer ldb )
{
    return sptsv(n, nrhs, d, e, b, ldb);
}

inline integer ptsv( integer n, integer nrhs, double* d, double* e,
                   double* b, integer ldb )
{
    return dptsv(n, nrhs, d, e, b, ldb);
}

inline integer ptsv( integer n, integer nrhs, float* d, scomplex* e,
                   scomplex* b, integer ldb )
{
    return cptsv(n, nrhs, d, e, b, ldb);
}

inline integer ptsv( integer n, integer nrhs, double* d, dcomplex* e,
                   dcomplex* b, integer ldb )
{
    return zptsv(n, nrhs, d, e, b, ldb);
}

inline integer ptsvx( char fact, integer n, integer nrhs,
                    const float* d, const float* e, float* df, float* ef,
                    const float* b, integer ldb, float* x,
                    integer ldx, float& rcond, float* ferr, float* berr)
{
    return sptsvx(fact, n, nrhs, d, e, df, ef, b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer ptsvx( char fact, integer n, integer nrhs,
                    const double* d, const double* e, double* df, double* ef,
                    const double* b, integer ldb, double* x,
                    integer ldx, double& rcond, double* ferr, double* berr)
{
    return dptsvx(fact, n, nrhs, d, e, df, ef, b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer ptsvx( char fact, integer n, integer nrhs,
                    const float* d, const scomplex* e, float* df, scomplex* ef,
                    const scomplex* b, integer ldb, scomplex* x,
                    integer ldx, float& rcond, float* ferr, float* berr)
{
    return cptsvx(fact, n, nrhs, d, e, df, ef, b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer ptsvx( char fact, integer n, integer nrhs,
                    const double* d, const dcomplex* e, double* df, dcomplex* ef,
                    const dcomplex* b, integer ldb, dcomplex* x,
                    integer ldx, double& rcond, double* ferr, double* berr)
{
    return zptsvx(fact, n, nrhs, d, e, df, ef, b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer sysv( char uplo, integer n, integer nrhs, float* a,
                   integer lda, integer* ipiv, float* b,
                   integer ldb)
{
    return ssysv(uplo, n, nrhs, a, lda, ipiv, b, ldb);
}

inline integer sysv( char uplo, integer n, integer nrhs, double* a,
                   integer lda, integer* ipiv, double* b,
                   integer ldb)
{
    return dsysv(uplo, n, nrhs, a, lda, ipiv, b, ldb);
}

inline integer sysv( char uplo, integer n, integer nrhs, scomplex* a,
                   integer lda, integer* ipiv, scomplex* b,
                   integer ldb)
{
    return csysv(uplo, n, nrhs, a, lda, ipiv, b, ldb);
}

inline integer sysv( char uplo, integer n, integer nrhs, dcomplex* a,
                   integer lda, integer* ipiv, dcomplex* b,
                   integer ldb)
{
    return zsysv(uplo, n, nrhs, a, lda, ipiv, b, ldb);
}

inline integer hesv( char uplo, integer n, integer nrhs, float* a,
                   integer lda, integer* ipiv, float* b,
                   integer ldb)
{
    return ssysv(uplo, n, nrhs, a, lda, ipiv, b, ldb);
}

inline integer hesv( char uplo, integer n, integer nrhs, double* a,
                   integer lda, integer* ipiv, double* b,
                   integer ldb)
{
    return dsysv(uplo, n, nrhs, a, lda, ipiv, b, ldb);
}

inline integer hesv( char uplo, integer n, integer nrhs, scomplex* a,
                   integer lda, integer* ipiv, scomplex* b,
                   integer ldb)
{
    return chesv(uplo, n, nrhs, a, lda, ipiv, b, ldb);
}

inline integer hesv( char uplo, integer n, integer nrhs, dcomplex* a,
                   integer lda, integer* ipiv, dcomplex* b,
                   integer ldb)
{
    return zhesv(uplo, n, nrhs, a, lda, ipiv, b, ldb);
}

inline integer sysvx( char fact, char uplo, integer n, integer nrhs,
                    const float* a, integer lda, float* af,
                    integer ldaf, integer* ipiv, const float* b,
                    integer ldb, float* x, integer ldx, float& rcond,
                    float* ferr, float* berr)
{
    return ssysvx(fact, uplo, n, nrhs, a, lda, af, ldaf, ipiv, b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer sysvx( char fact, char uplo, integer n, integer nrhs,
                    const double* a, integer lda, double* af,
                    integer ldaf, integer* ipiv, const double* b,
                    integer ldb, double* x, integer ldx, double& rcond,
                    double* ferr, double* berr)
{
    return dsysvx(fact, uplo, n, nrhs, a, lda, af, ldaf, ipiv, b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer sysvx( char fact, char uplo, integer n, integer nrhs,
                    const scomplex* a, integer lda, scomplex* af,
                    integer ldaf, integer* ipiv, const scomplex* b,
                    integer ldb, scomplex* x, integer ldx, float& rcond,
                    float* ferr, float* berr)
{
    return csysvx(fact, uplo, n, nrhs, a, lda, af, ldaf, ipiv, b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer sysvx( char fact, char uplo, integer n, integer nrhs,
                    const dcomplex* a, integer lda, dcomplex* af,
                    integer ldaf, integer* ipiv, const dcomplex* b,
                    integer ldb, dcomplex* x, integer ldx, double& rcond,
                    double* ferr, double* berr)
{
    return zsysvx(fact, uplo, n, nrhs, a, lda, af, ldaf, ipiv, b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer hesvx( char fact, char uplo, integer n, integer nrhs,
                    const float* a, integer lda, float* af,
                    integer ldaf, integer* ipiv, const float* b,
                    integer ldb, float* x, integer ldx, float& rcond,
                    float* ferr, float* berr)
{
    return ssysvx(fact, uplo, n, nrhs, a, lda, af, ldaf, ipiv, b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer hesvx( char fact, char uplo, integer n, integer nrhs,
                    const double* a, integer lda, double* af,
                    integer ldaf, integer* ipiv, const double* b,
                    integer ldb, double* x, integer ldx, double& rcond,
                    double* ferr, double* berr)
{
    return dsysvx(fact, uplo, n, nrhs, a, lda, af, ldaf, ipiv, b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer hesvx( char fact, char uplo, integer n, integer nrhs,
                    const scomplex* a, integer lda, scomplex* af,
                    integer ldaf, integer* ipiv, const scomplex* b,
                    integer ldb, scomplex* x, integer ldx, float& rcond,
                    float* ferr, float* berr)
{
    return chesvx(fact, uplo, n, nrhs, a, lda, af, ldaf, ipiv, b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer hesvx( char fact, char uplo, integer n, integer nrhs,
                    const dcomplex* a, integer lda, dcomplex* af,
                    integer ldaf, integer* ipiv, const dcomplex* b,
                    integer ldb, dcomplex* x, integer ldx, double& rcond,
                    double* ferr, double* berr)
{
    return zhesvx(fact, uplo, n, nrhs, a, lda, af, ldaf, ipiv, b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer sysvxx( char fact, char uplo, integer n, integer nrhs,
                     float* a, integer lda, float* af, integer ldaf,
                     integer* ipiv, char* equed, float* s, float* b,
                     integer ldb, float* x, integer ldx, float& rcond,
                     float& rpvgrw, float* berr, integer n_err_bnds,
                     float* err_bnds_norm, float* err_bnds_comp,
                     integer nparams, float* params)
{
    return ssysvxx(fact, uplo, n, nrhs, a, lda, af, ldaf, ipiv, equed, s, b, ldb, x, ldx,
                   &rcond, &rpvgrw, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer sysvxx( char fact, char uplo, integer n, integer nrhs,
                     double* a, integer lda, double* af, integer ldaf,
                     integer* ipiv, char* equed, double* s, double* b,
                     integer ldb, double* x, integer ldx, double& rcond,
                     double& rpvgrw, double* berr, integer n_err_bnds,
                     double* err_bnds_norm, double* err_bnds_comp,
                     integer nparams, double* params)
{
    return dsysvxx(fact, uplo, n, nrhs, a, lda, af, ldaf, ipiv, equed, s, b, ldb, x, ldx,
                   &rcond, &rpvgrw, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer sysvxx( char fact, char uplo, integer n, integer nrhs,
                     scomplex* a, integer lda, scomplex* af, integer ldaf,
                     integer* ipiv, char* equed, float* s, scomplex* b,
                     integer ldb, scomplex* x, integer ldx, float& rcond,
                     float& rpvgrw, float* berr, integer n_err_bnds,
                     float* err_bnds_norm, float* err_bnds_comp,
                     integer nparams, float* params)
{
    return csysvxx(fact, uplo, n, nrhs, a, lda, af, ldaf, ipiv, equed, s, b, ldb, x, ldx,
                   &rcond, &rpvgrw, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer sysvxx( char fact, char uplo, integer n, integer nrhs,
                     dcomplex* a, integer lda, dcomplex* af, integer ldaf,
                     integer* ipiv, char* equed, double* s, dcomplex* b,
                     integer ldb, dcomplex* x, integer ldx, double& rcond,
                     double& rpvgrw, double* berr, integer n_err_bnds,
                     double* err_bnds_norm, double* err_bnds_comp,
                     integer nparams, double* params)
{
    return zsysvxx(fact, uplo, n, nrhs, a, lda, af, ldaf, ipiv, equed, s, b, ldb, x, ldx,
                   &rcond, &rpvgrw, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer hesvxx( char fact, char uplo, integer n, integer nrhs,
                     float* a, integer lda, float* af, integer ldaf,
                     integer* ipiv, char* equed, float* s, float* b,
                     integer ldb, float* x, integer ldx, float& rcond,
                     float& rpvgrw, float* berr, integer n_err_bnds,
                     float* err_bnds_norm, float* err_bnds_comp,
                     integer nparams, float* params)
{
    return ssysvxx(fact, uplo, n, nrhs, a, lda, af, ldaf, ipiv, equed, s, b, ldb, x, ldx,
                   &rcond, &rpvgrw, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer hesvxx( char fact, char uplo, integer n, integer nrhs,
                     double* a, integer lda, double* af, integer ldaf,
                     integer* ipiv, char* equed, double* s, double* b,
                     integer ldb, double* x, integer ldx, double& rcond,
                     double& rpvgrw, double* berr, integer n_err_bnds,
                     double* err_bnds_norm, double* err_bnds_comp,
                     integer nparams, double* params)
{
    return dsysvxx(fact, uplo, n, nrhs, a, lda, af, ldaf, ipiv, equed, s, b, ldb, x, ldx,
                   &rcond, &rpvgrw, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer hesvxx( char fact, char uplo, integer n, integer nrhs,
                     scomplex* a, integer lda, scomplex* af, integer ldaf,
                     integer* ipiv, char* equed, float* s, scomplex* b,
                     integer ldb, scomplex* x, integer ldx, float& rcond,
                     float& rpvgrw, float* berr, integer n_err_bnds,
                     float* err_bnds_norm, float* err_bnds_comp,
                     integer nparams, float* params)
{
    return chesvxx(fact, uplo, n, nrhs, a, lda, af, ldaf, ipiv, equed, s, b, ldb, x, ldx,
                   &rcond, &rpvgrw, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer hesvxx( char fact, char uplo, integer n, integer nrhs,
                     dcomplex* a, integer lda, dcomplex* af, integer ldaf,
                     integer* ipiv, char* equed, double* s, dcomplex* b,
                     integer ldb, dcomplex* x, integer ldx, double& rcond,
                     double& rpvgrw, double* berr, integer n_err_bnds,
                     double* err_bnds_norm, double* err_bnds_comp,
                     integer nparams, double* params)
{
    return zhesvxx(fact, uplo, n, nrhs, a, lda, af, ldaf, ipiv, equed, s, b, ldb, x, ldx,
                   &rcond, &rpvgrw, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);
}

inline integer spsv( char uplo, integer n, integer nrhs, float* ap,
                   integer* ipiv, float* b, integer ldb )
{
    return sspsv(uplo, n, nrhs, ap, ipiv, b, ldb);
}

inline integer spsv( char uplo, integer n, integer nrhs, double* ap,
                   integer* ipiv, double* b, integer ldb )
{
    return dspsv(uplo, n, nrhs, ap, ipiv, b, ldb);
}

inline integer spsv( char uplo, integer n, integer nrhs, scomplex* ap,
                   integer* ipiv, scomplex* b, integer ldb )
{
    return cspsv(uplo, n, nrhs, ap, ipiv, b, ldb);
}

inline integer spsv( char uplo, integer n, integer nrhs, dcomplex* ap,
                   integer* ipiv, dcomplex* b, integer ldb )
{
    return zspsv(uplo, n, nrhs, ap, ipiv, b, ldb);
}

inline integer hpsv( char uplo, integer n, integer nrhs, float* ap,
                   integer* ipiv, float* b, integer ldb )
{
    return sspsv(uplo, n, nrhs, ap, ipiv, b, ldb);
}

inline integer hpsv( char uplo, integer n, integer nrhs, double* ap,
                   integer* ipiv, double* b, integer ldb )
{
    return dspsv(uplo, n, nrhs, ap, ipiv, b, ldb);
}

inline integer hpsv( char uplo, integer n, integer nrhs, scomplex* ap,
                   integer* ipiv, scomplex* b, integer ldb )
{
    return chpsv(uplo, n, nrhs, ap, ipiv, b, ldb);
}

inline integer hpsv( char uplo, integer n, integer nrhs, dcomplex* ap,
                   integer* ipiv, dcomplex* b, integer ldb )
{
    return zhpsv(uplo, n, nrhs, ap, ipiv, b, ldb);
}

inline integer spsvx( char fact, char uplo, integer n, integer nrhs,
                    const float* ap, float* afp, integer* ipiv,
                    const float* b, integer ldb, float* x,
                    integer ldx, float& rcond, float* ferr, float* berr)
{
    return sspsvx(fact, uplo, n, nrhs, ap, afp, ipiv, b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer spsvx( char fact, char uplo, integer n, integer nrhs,
                    const double* ap, double* afp, integer* ipiv,
                    const double* b, integer ldb, double* x,
                    integer ldx, double& rcond, double* ferr, double* berr)
{
    return dspsvx(fact, uplo, n, nrhs, ap, afp, ipiv, b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer spsvx( char fact, char uplo, integer n, integer nrhs,
                    const scomplex* ap, scomplex* afp, integer* ipiv,
                    const scomplex* b, integer ldb, scomplex* x,
                    integer ldx, float& rcond, float* ferr, float* berr)
{
    return cspsvx(fact, uplo, n, nrhs, ap, afp, ipiv, b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer spsvx( char fact, char uplo, integer n, integer nrhs,
                    const dcomplex* ap, dcomplex* afp, integer* ipiv,
                    const dcomplex* b, integer ldb, dcomplex* x,
                    integer ldx, double& rcond, double* ferr, double* berr)
{
    return zspsvx(fact, uplo, n, nrhs, ap, afp, ipiv, b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer hpsvx( char fact, char uplo, integer n, integer nrhs,
                    const float* ap, float* afp, integer* ipiv,
                    const float* b, integer ldb, float* x,
                    integer ldx, float& rcond, float* ferr, float* berr)
{
    return sspsvx(fact, uplo, n, nrhs, ap, afp, ipiv, b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer hpsvx( char fact, char uplo, integer n, integer nrhs,
                    const double* ap, double* afp, integer* ipiv,
                    const double* b, integer ldb, double* x,
                    integer ldx, double& rcond, double* ferr, double* berr)
{
    return dspsvx(fact, uplo, n, nrhs, ap, afp, ipiv, b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer hpsvx( char fact, char uplo, integer n, integer nrhs,
                    const scomplex* ap, scomplex* afp, integer* ipiv,
                    const scomplex* b, integer ldb, scomplex* x,
                    integer ldx, float& rcond, float* ferr, float* berr)
{
    return chpsvx(fact, uplo, n, nrhs, ap, afp, ipiv, b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer hpsvx( char fact, char uplo, integer n, integer nrhs,
                    const dcomplex* ap, dcomplex* afp, integer* ipiv,
                    const dcomplex* b, integer ldb, dcomplex* x,
                    integer ldx, double& rcond, double* ferr, double* berr)
{
    return zhpsvx(fact, uplo, n, nrhs, ap, afp, ipiv, b, ldb, x, ldx, &rcond, ferr, berr);
}

inline integer geqrf( integer m, integer n, float* a, integer lda,
                    float* tau)
{
    return sgeqrf(m, n, a, lda, tau);
}

inline integer geqrf( integer m, integer n, double* a, integer lda,
                    double* tau)
{
    return dgeqrf(m, n, a, lda, tau);
}

inline integer geqrf( integer m, integer n, scomplex* a, integer lda,
                    scomplex* tau)
{
    return cgeqrf(m, n, a, lda, tau);
}

inline integer geqrf( integer m, integer n, dcomplex* a, integer lda,
                    dcomplex* tau)
{
    return zgeqrf(m, n, a, lda, tau);
}

inline integer geqpf( integer m, integer n, float* a, integer lda,
                    integer* jpvt, float* tau)
{
    return sgeqpf(m, n, a, lda, jpvt, tau);
}

inline integer geqpf( integer m, integer n, double* a, integer lda,
                    integer* jpvt, double* tau)
{
    return dgeqpf(m, n, a, lda, jpvt, tau);
}

inline integer geqpf( integer m, integer n, scomplex* a, integer lda,
                    integer* jpvt, scomplex* tau)
{
    return cgeqpf(m, n, a, lda, jpvt, tau);
}

inline integer geqpf( integer m, integer n, dcomplex* a, integer lda,
                    integer* jpvt, dcomplex* tau)
{
    return zgeqpf(m, n, a, lda, jpvt, tau);
}

inline integer geqp3( integer m, integer n, float* a, integer lda,
                    integer* jpvt, float* tau)
{
    return sgeqp3(m, n, a, lda, jpvt, tau);
}

inline integer geqp3( integer m, integer n, double* a, integer lda,
                    integer* jpvt, double* tau)
{
    return dgeqp3(m, n, a, lda, jpvt, tau);
}

inline integer geqp3( integer m, integer n, scomplex* a, integer lda,
                    integer* jpvt, scomplex* tau)
{
    return cgeqp3(m, n, a, lda, jpvt, tau);
}

inline integer geqp3( integer m, integer n, dcomplex* a, integer lda,
                    integer* jpvt, dcomplex* tau)
{
    return zgeqp3(m, n, a, lda, jpvt, tau);
}

inline integer ungqr( integer m, integer n, integer k, float* a,
                    integer lda, const float* tau)
{
    return sorgqr(m, n, k, a, lda, tau);
}

inline integer ungqr( integer m, integer n, integer k, double* a,
                    integer lda, const double* tau)
{
    return dorgqr(m, n, k, a, lda, tau);
}

inline integer ungqr( integer m, integer n, integer k, scomplex* a,
                    integer lda, const scomplex* tau)
{
    return cungqr(m, n, k, a, lda, tau);
}

inline integer ungqr( integer m, integer n, integer k, dcomplex* a,
                    integer lda, const dcomplex* tau)
{
    return zungqr(m, n, k, a, lda, tau);
}

inline integer unmqr( char side, char trans, integer m, integer n,
                    integer k, const float* a, integer lda,
                    const float* tau, float* c, integer ldc)
{
    return sormqr(side, trans, m, n, k, a, lda, tau, c, ldc);
}

inline integer unmqr( char side, char trans, integer m, integer n,
                    integer k, const double* a, integer lda,
                    const double* tau, double* c, integer ldc)
{
    return dormqr(side, trans, m, n, k, a, lda, tau, c, ldc);
}

inline integer unmqr( char side, char trans, integer m, integer n,
                    integer k, const scomplex* a, integer lda,
                    const scomplex* tau, scomplex* c, integer ldc)
{
    return cunmqr(side, trans, m, n, k, a, lda, tau, c, ldc);
}

inline integer unmqr( char side, char trans, integer m, integer n,
                    integer k, const dcomplex* a, integer lda,
                    const dcomplex* tau, dcomplex* c, integer ldc)
{
    return zunmqr(side, trans, m, n, k, a, lda, tau, c, ldc);
}

inline integer gelqf( integer m, integer n, float* a, integer lda,
                    float* tau)
{
    return sgelqf(m, n, a, lda, tau);
}

inline integer gelqf( integer m, integer n, double* a, integer lda,
                    double* tau)
{
    return dgelqf(m, n, a, lda, tau);
}

inline integer gelqf( integer m, integer n, scomplex* a, integer lda,
                    scomplex* tau)
{
    return cgelqf(m, n, a, lda, tau);
}

inline integer gelqf( integer m, integer n, dcomplex* a, integer lda,
                    dcomplex* tau)
{
    return zgelqf(m, n, a, lda, tau);
}

inline integer unglq( integer m, integer n, integer k, float* a,
                    integer lda, const float* tau)
{
    return sorglq(m, n, k, a, lda, tau);
}

inline integer unglq( integer m, integer n, integer k, double* a,
                    integer lda, const double* tau)
{
    return dorglq(m, n, k, a, lda, tau);
}

inline integer unglq( integer m, integer n, integer k, scomplex* a,
                    integer lda, const scomplex* tau)
{
    return cunglq(m, n, k, a, lda, tau);
}

inline integer unglq( integer m, integer n, integer k, dcomplex* a,
                    integer lda, const dcomplex* tau)
{
    return zunglq(m, n, k, a, lda, tau);
}

inline integer unmlq( char side, char trans, integer m, integer n,
                    integer k, const float* a, integer lda,
                    const float* tau, float* c, integer ldc)
{
    return sormlq(side, trans, m, n, k, a, lda, tau, c, ldc);
}

inline integer unmlq( char side, char trans, integer m, integer n,
                    integer k, const double* a, integer lda,
                    const double* tau, double* c, integer ldc)
{
    return dormlq(side, trans, m, n, k, a, lda, tau, c, ldc);
}

inline integer unmlq( char side, char trans, integer m, integer n,
                    integer k, const scomplex* a, integer lda,
                    const scomplex* tau, scomplex* c, integer ldc)
{
    return cunmlq(side, trans, m, n, k, a, lda, tau, c, ldc);
}

inline integer unmlq( char side, char trans, integer m, integer n,
                    integer k, const dcomplex* a, integer lda,
                    const dcomplex* tau, dcomplex* c, integer ldc)
{
    return zunmlq(side, trans, m, n, k, a, lda, tau, c, ldc);
}

inline integer geqlf( integer m, integer n, float* a, integer lda,
                    float* tau)
{
    return sgeqlf(m, n, a, lda, tau);
}

inline integer geqlf( integer m, integer n, double* a, integer lda,
                    double* tau)
{
    return dgeqlf(m, n, a, lda, tau);
}

inline integer geqlf( integer m, integer n, scomplex* a, integer lda,
                    scomplex* tau)
{
    return cgeqlf(m, n, a, lda, tau);
}

inline integer geqlf( integer m, integer n, dcomplex* a, integer lda,
                    dcomplex* tau)
{
    return zgeqlf(m, n, a, lda, tau);
}

inline integer ungql( integer m, integer n, integer k, float* a,
                    integer lda, const float* tau)
{
    return sorgql(m, n, k, a, lda, tau);
}

inline integer ungql( integer m, integer n, integer k, double* a,
                    integer lda, const double* tau)
{
    return dorgql(m, n, k, a, lda, tau);
}

inline integer ungql( integer m, integer n, integer k, scomplex* a,
                    integer lda, const scomplex* tau)
{
    return cungql(m, n, k, a, lda, tau);
}

inline integer ungql( integer m, integer n, integer k, dcomplex* a,
                    integer lda, const dcomplex* tau)
{
    return zungql(m, n, k, a, lda, tau);
}

inline integer unmql( char side, char trans, integer m, integer n,
                    integer k, const float* a, integer lda,
                    const float* tau, float* c, integer ldc)
{
    return sormql(side, trans, m, n, k, a, lda, tau, c, ldc);
}

inline integer unmql( char side, char trans, integer m, integer n,
                    integer k, const double* a, integer lda,
                    const double* tau, double* c, integer ldc)
{
    return dormql(side, trans, m, n, k, a, lda, tau, c, ldc);
}

inline integer unmql( char side, char trans, integer m, integer n,
                    integer k, const scomplex* a, integer lda,
                    const scomplex* tau, scomplex* c, integer ldc)
{
    return cunmql(side, trans, m, n, k, a, lda, tau, c, ldc);
}

inline integer unmql( char side, char trans, integer m, integer n,
                    integer k, const dcomplex* a, integer lda,
                    const dcomplex* tau, dcomplex* c, integer ldc)
{
    return zunmql(side, trans, m, n, k, a, lda, tau, c, ldc);
}

inline integer gerqf( integer m, integer n, float* a, integer lda,
                    float* tau)
{
    return sgerqf(m, n, a, lda, tau);
}

inline integer gerqf( integer m, integer n, double* a, integer lda,
                    double* tau)
{
    return dgerqf(m, n, a, lda, tau);
}

inline integer gerqf( integer m, integer n, scomplex* a, integer lda,
                    scomplex* tau)
{
    return cgerqf(m, n, a, lda, tau);
}

inline integer gerqf( integer m, integer n, dcomplex* a, integer lda,
                    dcomplex* tau)
{
    return zgerqf(m, n, a, lda, tau);
}

inline integer ungrq( integer m, integer n, integer k, float* a,
                    integer lda, const float* tau)
{
    return sorgrq(m, n, k, a, lda, tau);
}

inline integer ungrq( integer m, integer n, integer k, double* a,
                    integer lda, const double* tau)
{
    return dorgrq(m, n, k, a, lda, tau);
}

inline integer ungrq( integer m, integer n, integer k, scomplex* a,
                    integer lda, const scomplex* tau)
{
    return cungrq(m, n, k, a, lda, tau);
}

inline integer ungrq( integer m, integer n, integer k, dcomplex* a,
                    integer lda, const dcomplex* tau)
{
    return zungrq(m, n, k, a, lda, tau);
}

inline integer unmrq( char side, char trans, integer m, integer n,
                    integer k, const float* a, integer lda,
                    const float* tau, float* c, integer ldc)
{
    return sormrq(side, trans, m, n, k, a, lda, tau, c, ldc);
}

inline integer unmrq( char side, char trans, integer m, integer n,
                    integer k, const double* a, integer lda,
                    const double* tau, double* c, integer ldc)
{
    return dormrq(side, trans, m, n, k, a, lda, tau, c, ldc);
}

inline integer unmrq( char side, char trans, integer m, integer n,
                    integer k, const scomplex* a, integer lda,
                    const scomplex* tau, scomplex* c, integer ldc)
{
    return cunmrq(side, trans, m, n, k, a, lda, tau, c, ldc);
}

inline integer unmrq( char side, char trans, integer m, integer n,
                    integer k, const dcomplex* a, integer lda,
                    const dcomplex* tau, dcomplex* c, integer ldc)
{
    return zunmrq(side, trans, m, n, k, a, lda, tau, c, ldc);
}

inline integer tzrzf( integer m, integer n, float* a, integer lda,
                    float* tau)
{
    return stzrzf(m, n, a, lda, tau);
}

inline integer tzrzf( integer m, integer n, double* a, integer lda,
                    double* tau)
{
    return dtzrzf(m, n, a, lda, tau);
}

inline integer tzrzf( integer m, integer n, scomplex* a, integer lda,
                    scomplex* tau)
{
    return ctzrzf(m, n, a, lda, tau);
}

inline integer tzrzf( integer m, integer n, dcomplex* a, integer lda,
                    dcomplex* tau)
{
    return ztzrzf(m, n, a, lda, tau);
}

inline integer unmrz( char side, char trans, integer m, integer n,
                    integer k, integer l, const float* a,
                    integer lda, const float* tau, float* c,
                    integer ldc)
{
    return sormrz(side, trans, m, n, k, l, a, lda, tau, c, ldc);
}

inline integer unmrz( char side, char trans, integer m, integer n,
                    integer k, integer l, const double* a,
                    integer lda, const double* tau, double* c,
                    integer ldc)
{
    return dormrz(side, trans, m, n, k, l, a, lda, tau, c, ldc);
}

inline integer unmrz( char side, char trans, integer m, integer n,
                    integer k, integer l, const scomplex* a,
                    integer lda, const scomplex* tau, scomplex* c,
                    integer ldc)
{
    return cunmrz(side, trans, m, n, k, l, a, lda, tau, c, ldc);
}

inline integer unmrz( char side, char trans, integer m, integer n,
                    integer k, integer l, const dcomplex* a,
                    integer lda, const dcomplex* tau, dcomplex* c,
                    integer ldc)
{
    return zunmrz(side, trans, m, n, k, l, a, lda, tau, c, ldc);
}

inline integer ggqrf( integer n, integer m, integer p, float* a,
                    integer lda, float* taua, float* b, integer ldb,
                    float* taub)
{
    return sggqrf(n, m, p, a, lda, taua, b, ldb, taub);
}

inline integer ggqrf( integer n, integer m, integer p, double* a,
                    integer lda, double* taua, double* b, integer ldb,
                    double* taub)
{
    return dggqrf(n, m, p, a, lda, taua, b, ldb, taub);
}

inline integer ggqrf( integer n, integer m, integer p, scomplex* a,
                    integer lda, scomplex* taua, scomplex* b, integer ldb,
                    scomplex* taub)
{
    return cggqrf(n, m, p, a, lda, taua, b, ldb, taub);
}

inline integer ggqrf( integer n, integer m, integer p, dcomplex* a,
                    integer lda, dcomplex* taua, dcomplex* b, integer ldb,
                    dcomplex* taub)
{
    return zggqrf(n, m, p, a, lda, taua, b, ldb, taub);
}

inline integer ggrqf( integer m, integer p, integer n, float* a,
                    integer lda, float* taua, float* b, integer ldb,
                    float* taub)
{
    return sggrqf(m, p, n, a, lda, taua, b, ldb, taub);
}

inline integer ggrqf( integer m, integer p, integer n, double* a,
                    integer lda, double* taua, double* b, integer ldb,
                    double* taub)
{
    return dggrqf(m, p, n, a, lda, taua, b, ldb, taub);
}

inline integer ggrqf( integer m, integer p, integer n, scomplex* a,
                    integer lda, scomplex* taua, scomplex* b, integer ldb,
                    scomplex* taub)
{
    return cggrqf(m, p, n, a, lda, taua, b, ldb, taub);
}

inline integer ggrqf( integer m, integer p, integer n, dcomplex* a,
                    integer lda, dcomplex* taua, dcomplex* b, integer ldb,
                    dcomplex* taub)
{
    return zggrqf(m, p, n, a, lda, taua, b, ldb, taub);
}

inline integer gebrd( integer m, integer n, float* a, integer lda,
                    float* d, float* e, float* tauq, float* taup)
{
    return sgebrd(m, n, a, lda, d, e, tauq, taup);
}

inline integer gebrd( integer m, integer n, double* a, integer lda,
                    double* d, double* e, double* tauq, double* taup)
{
    return dgebrd(m, n, a, lda, d, e, tauq, taup);
}

inline integer gebrd( integer m, integer n, scomplex* a, integer lda,
                    float* d, float* e, scomplex* tauq, scomplex* taup)
{
    return cgebrd(m, n, a, lda, d, e, tauq, taup);
}

inline integer gebrd( integer m, integer n, dcomplex* a, integer lda,
                    double* d, double* e, dcomplex* tauq, dcomplex* taup)
{
    return zgebrd(m, n, a, lda, d, e, tauq, taup);
}

inline integer gbbrd( char vect, integer m, integer n, integer ncc,
                    integer kl, integer ku, float* ab,
                    integer ldab, float* d, float* e, float* q,
                    integer ldq, float* pt, integer ldpt, float* c,
                    integer ldc)
{
    return sgbbrd(vect, m, n, ncc, kl, ku, ab, ldab, d, e, q, ldq, pt, ldpt, c, ldc);
}

inline integer gbbrd( char vect, integer m, integer n, integer ncc,
                    integer kl, integer ku, double* ab,
                    integer ldab, double* d, double* e, double* q,
                    integer ldq, double* pt, integer ldpt, double* c,
                    integer ldc)
{
    return dgbbrd(vect, m, n, ncc, kl, ku, ab, ldab, d, e, q, ldq, pt, ldpt, c, ldc);
}

inline integer gbbrd( char vect, integer m, integer n, integer ncc,
                    integer kl, integer ku, scomplex* ab,
                    integer ldab, float* d, float* e, scomplex* q,
                    integer ldq, scomplex* pt, integer ldpt, scomplex* c,
                    integer ldc)
{
    return cgbbrd(vect, m, n, ncc, kl, ku, ab, ldab, d, e, q, ldq, pt, ldpt, c, ldc);
}

inline integer gbbrd( char vect, integer m, integer n, integer ncc,
                    integer kl, integer ku, dcomplex* ab,
                    integer ldab, double* d, double* e, dcomplex* q,
                    integer ldq, dcomplex* pt, integer ldpt, dcomplex* c,
                    integer ldc)
{
    return zgbbrd(vect, m, n, ncc, kl, ku, ab, ldab, d, e, q, ldq, pt, ldpt, c, ldc);
}

inline integer ungbr( char vect, integer m, integer n, integer k,
                    float* a, integer lda, const float* tau)
{
    return sorgbr(vect, m, n, k, a, lda, tau);
}

inline integer ungbr( char vect, integer m, integer n, integer k,
                    double* a, integer lda, const double* tau)
{
    return dorgbr(vect, m, n, k, a, lda, tau);
}

inline integer ungbr( char vect, integer m, integer n, integer k,
                    scomplex* a, integer lda, const scomplex* tau)
{
    return cungbr(vect, m, n, k, a, lda, tau);
}

inline integer ungbr( char vect, integer m, integer n, integer k,
                    dcomplex* a, integer lda, const dcomplex* tau)
{
    return zungbr(vect, m, n, k, a, lda, tau);
}

inline integer unmbr( char vect, char side, char trans, integer m,
                    integer n, integer k, const float* a,
                    integer lda, const float* tau, float* c,
                    integer ldc)
{
    return sormbr(vect, side, trans, m, n, k, a, lda, tau, c, ldc);
}

inline integer unmbr( char vect, char side, char trans, integer m,
                    integer n, integer k, const double* a,
                    integer lda, const double* tau, double* c,
                    integer ldc)
{
    return dormbr(vect, side, trans, m, n, k, a, lda, tau, c, ldc);
}

inline integer unmbr( char vect, char side, char trans, integer m,
                    integer n, integer k, const scomplex* a,
                    integer lda, const scomplex* tau, scomplex* c,
                    integer ldc)
{
    return cunmbr(vect, side, trans, m, n, k, a, lda, tau, c, ldc);
}

inline integer unmbr( char vect, char side, char trans, integer m,
                    integer n, integer k, const dcomplex* a,
                    integer lda, const dcomplex* tau, dcomplex* c,
                    integer ldc)
{
    return zunmbr(vect, side, trans, m, n, k, a, lda, tau, c, ldc);
}

inline integer bdsqr( char uplo, integer n, integer ncvt,
                    integer nru, integer ncc, float* d, float* e,
                    float* vt, integer ldvt, float* u, integer ldu,
                    float* c, integer ldc)
{
    return sbdsqr(uplo, n, ncvt, nru, ncc, d, e, vt, ldvt, u, ldu, c, ldc);
}

inline integer bdsqr( char uplo, integer n, integer ncvt,
                    integer nru, integer ncc, double* d, double* e,
                    double* vt, integer ldvt, double* u, integer ldu,
                    double* c, integer ldc)
{
    return dbdsqr(uplo, n, ncvt, nru, ncc, d, e, vt, ldvt, u, ldu, c, ldc);
}

inline integer bdsqr( char uplo, integer n, integer ncvt,
                    integer nru, integer ncc, float* d, float* e,
                    scomplex* vt, integer ldvt, scomplex* u, integer ldu,
                    scomplex* c, integer ldc)
{
    return cbdsqr(uplo, n, ncvt, nru, ncc, d, e, vt, ldvt, u, ldu, c, ldc);
}

inline integer bdsqr( char uplo, integer n, integer ncvt,
                    integer nru, integer ncc, double* d, double* e,
                    dcomplex* vt, integer ldvt, dcomplex* u, integer ldu,
                    dcomplex* c, integer ldc)
{
    return zbdsqr(uplo, n, ncvt, nru, ncc, d, e, vt, ldvt, u, ldu, c, ldc);
}

inline integer bdsdc( char uplo, char compq, integer n, float* d,
                    float* e, float* u, integer ldu, float* vt,
                    integer ldvt, float* q, integer* iq)
{
    return sbdsdc(uplo, compq, n, d, e, u, ldu, vt, ldvt, q, iq);
}

inline integer bdsdc( char uplo, char compq, integer n, double* d,
                    double* e, double* u, integer ldu, double* vt,
                    integer ldvt, double* q, integer* iq)
{
    return dbdsdc(uplo, compq, n, d, e, u, ldu, vt, ldvt, q, iq);
}

inline integer hetrd( char uplo, integer n, float* a, integer lda,
                    float* d, float* e, float* tau)
{
    return ssytrd(uplo, n, a, lda, d, e, tau);
}

inline integer hetrd( char uplo, integer n, double* a, integer lda,
                    double* d, double* e, double* tau)
{
    return dsytrd(uplo, n, a, lda, d, e, tau);
}

inline integer hetrd( char uplo, integer n, scomplex* a, integer lda,
                    float* d, float* e, scomplex* tau)
{
    return chetrd(uplo, n, a, lda, d, e, tau);
}

inline integer hetrd( char uplo, integer n, dcomplex* a, integer lda,
                    double* d, double* e, dcomplex* tau)
{
    return zhetrd(uplo, n, a, lda, d, e, tau);
}

inline integer ungtr( char uplo, integer n, float* a, integer lda,
                    const float* tau)
{
    return sorgtr(uplo, n, a, lda, tau);
}

inline integer ungtr( char uplo, integer n, double* a, integer lda,
                    const double* tau)
{
    return dorgtr(uplo, n, a, lda, tau);
}

inline integer ungtr( char uplo, integer n, scomplex* a, integer lda,
                    const scomplex* tau)
{
    return cungtr(uplo, n, a, lda, tau);
}

inline integer ungtr( char uplo, integer n, dcomplex* a, integer lda,
                    const dcomplex* tau)
{
    return zungtr(uplo, n, a, lda, tau);
}

inline integer unmtr( char side, char uplo, char trans, integer m,
                    integer n, const float* a, integer lda,
                    const float* tau, float* c, integer ldc)
{
    return sormtr(side, uplo, trans, m, n, a, lda, tau, c, ldc);
}

inline integer unmtr( char side, char uplo, char trans, integer m,
                    integer n, const double* a, integer lda,
                    const double* tau, double* c, integer ldc)
{
    return dormtr(side, uplo, trans, m, n, a, lda, tau, c, ldc);
}

inline integer unmtr( char side, char uplo, char trans, integer m,
                    integer n, const scomplex* a, integer lda,
                    const scomplex* tau, scomplex* c, integer ldc)
{
    return cunmtr(side, uplo, trans, m, n, a, lda, tau, c, ldc);
}

inline integer unmtr( char side, char uplo, char trans, integer m,
                    integer n, const dcomplex* a, integer lda,
                    const dcomplex* tau, dcomplex* c, integer ldc)
{
    return zunmtr(side, uplo, trans, m, n, a, lda, tau, c, ldc);
}

inline integer hptrd( char uplo, integer n, float* ap, float* d, float* e,
                    float* tau )
{
    return ssptrd(uplo, n, ap, d, e, tau);
}

inline integer hptrd( char uplo, integer n, double* ap, double* d, double* e,
                    double* tau )
{
    return dsptrd(uplo, n, ap, d, e, tau);
}

inline integer hptrd( char uplo, integer n, scomplex* ap, float* d, float* e,
                    scomplex* tau )
{
    return chptrd(uplo, n, ap, d, e, tau);
}

inline integer hptrd( char uplo, integer n, dcomplex* ap, double* d, double* e,
                    dcomplex* tau )
{
    return zhptrd(uplo, n, ap, d, e, tau);
}

inline integer upgtr( char uplo, integer n, const float* ap,
                    const float* tau, float* q, integer ldq)
{
    return sopgtr(uplo, n, ap, tau, q, ldq);
}

inline integer upgtr( char uplo, integer n, const double* ap,
                    const double* tau, double* q, integer ldq)
{
    return dopgtr(uplo, n, ap, tau, q, ldq);
}

inline integer upgtr( char uplo, integer n, const scomplex* ap,
                    const scomplex* tau, scomplex* q, integer ldq)
{
    return cupgtr(uplo, n, ap, tau, q, ldq);
}

inline integer upgtr( char uplo, integer n, const dcomplex* ap,
                    const dcomplex* tau, dcomplex* q, integer ldq)
{
    return zupgtr(uplo, n, ap, tau, q, ldq);
}

inline integer upmtr( char side, char uplo, char trans, integer m,
                    integer n, const float* ap, const float* tau,
                    float* c, integer ldc)
{
    return sopmtr(side, uplo, trans, m, n, ap, tau, c, ldc);
}

inline integer upmtr( char side, char uplo, char trans, integer m,
                    integer n, const double* ap, const double* tau,
                    double* c, integer ldc)
{
    return dopmtr(side, uplo, trans, m, n, ap, tau, c, ldc);
}

inline integer upmtr( char side, char uplo, char trans, integer m,
                    integer n, const scomplex* ap, const scomplex* tau,
                    scomplex* c, integer ldc)
{
    return cupmtr(side, uplo, trans, m, n, ap, tau, c, ldc);
}

inline integer upmtr( char side, char uplo, char trans, integer m,
                    integer n, const dcomplex* ap, const dcomplex* tau,
                    dcomplex* c, integer ldc)
{
    return zupmtr(side, uplo, trans, m, n, ap, tau, c, ldc);
}

inline integer hbtrd( char vect, char uplo, integer n, integer kd,
                    float* ab, integer ldab, float* d, float* e,
                    float* q, integer ldq)
{
    return ssbtrd(vect, uplo, n, kd, ab, ldab, d, e, q, ldq);
}

inline integer hbtrd( char vect, char uplo, integer n, integer kd,
                    double* ab, integer ldab, double* d, double* e,
                    double* q, integer ldq)
{
    return dsbtrd(vect, uplo, n, kd, ab, ldab, d, e, q, ldq);
}

inline integer hbtrd( char vect, char uplo, integer n, integer kd,
                    scomplex* ab, integer ldab, float* d, float* e,
                    scomplex* q, integer ldq)
{
    return chbtrd(vect, uplo, n, kd, ab, ldab, d, e, q, ldq);
}

inline integer hbtrd( char vect, char uplo, integer n, integer kd,
                    dcomplex* ab, integer ldab, double* d, double* e,
                    dcomplex* q, integer ldq)
{
    return zhbtrd(vect, uplo, n, kd, ab, ldab, d, e, q, ldq);
}

inline integer sterf( integer n, float* d, float* e )
{
    return ssterf(n, d, e);
}

inline integer sterf( integer n, double* d, double* e )
{
    return dsterf(n, d, e);
}

inline integer steqr( char compz, integer n, float* d, float* e, float* z,
                    integer ldz)
{
    return ssteqr(compz, n, d, e, z, ldz);
}

inline integer steqr( char compz, integer n, double* d, double* e, double* z,
                    integer ldz)
{
    return dsteqr(compz, n, d, e, z, ldz);
}

inline integer steqr( char compz, integer n, float* d, float* e, scomplex* z,
                    integer ldz)
{
    return csteqr(compz, n, d, e, z, ldz);
}

inline integer steqr( char compz, integer n, double* d, double* e, dcomplex* z,
                    integer ldz)
{
    return zsteqr(compz, n, d, e, z, ldz);
}

inline integer stemr( char jobz, char range, integer n, float* d,
                    float* e, float vl, float vu, integer il,
                    integer iu, integer& m, float* w, float* z,
                    integer ldz, integer nzc, integer* isuppz,
                    logical& tryrac)
{
    return sstemr(jobz, range, n, d, e, vl, vu, il, iu, &m, w, z, ldz, nzc, isuppz, &tryrac);
}

inline integer stemr( char jobz, char range, integer n, double* d,
                    double* e, double vl, double vu, integer il,
                    integer iu, integer& m, double* w, double* z,
                    integer ldz, integer nzc, integer* isuppz,
                    logical& tryrac)
{
    return dstemr(jobz, range, n, d, e, vl, vu, il, iu, &m, w, z, ldz, nzc, isuppz, &tryrac);
}

inline integer stemr( char jobz, char range, integer n, float* d,
                    float* e, float vl, float vu, integer il,
                    integer iu, integer& m, float* w, scomplex* z,
                    integer ldz, integer nzc, integer* isuppz,
                    logical& tryrac)
{
    return cstemr(jobz, range, n, d, e, vl, vu, il, iu, &m, w, z, ldz, nzc, isuppz, &tryrac);
}

inline integer stemr( char jobz, char range, integer n, double* d,
                    double* e, double vl, double vu, integer il,
                    integer iu, integer& m, double* w, dcomplex* z,
                    integer ldz, integer nzc, integer* isuppz,
                    logical& tryrac)
{
    return zstemr(jobz, range, n, d, e, vl, vu, il, iu, &m, w, z, ldz, nzc, isuppz, &tryrac);
}

inline integer stedc( char compz, integer n, float* d, float* e, float* z,
                    integer ldz)
{
    return sstedc(compz, n, d, e, z, ldz);
}

inline integer stedc( char compz, integer n, double* d, double* e, double* z,
                    integer ldz)
{
    return dstedc(compz, n, d, e, z, ldz);
}

inline integer stedc( char compz, integer n, float* d, float* e, scomplex* z,
                    integer ldz)
{
    return cstedc(compz, n, d, e, z, ldz);
}

inline integer stedc( char compz, integer n, double* d, double* e, dcomplex* z,
                    integer ldz)
{
    return zstedc(compz, n, d, e, z, ldz);
}

inline integer stegr( char jobz, char range, integer n, float* d,
                    float* e, float vl, float vu, integer il,
                    integer iu, float abstol, integer& m, float* w,
                    float* z, integer ldz, integer* isuppz)
{
    return sstegr(jobz, range, n, d, e, vl, vu, il, iu, abstol, &m, w, z, ldz, isuppz);
}

inline integer stegr( char jobz, char range, integer n, double* d,
                    double* e, double vl, double vu, integer il,
                    integer iu, double abstol, integer& m, double* w,
                    double* z, integer ldz, integer* isuppz)
{
    return dstegr(jobz, range, n, d, e, vl, vu, il, iu, abstol, &m, w, z, ldz, isuppz);
}

inline integer stegr( char jobz, char range, integer n, float* d,
                    float* e, float vl, float vu, integer il,
                    integer iu, float abstol, integer& m, float* w,
                    scomplex* z, integer ldz, integer* isuppz)
{
    return cstegr(jobz, range, n, d, e, vl, vu, il, iu, abstol, &m, w, z, ldz, isuppz);
}

inline integer stegr( char jobz, char range, integer n, double* d,
                    double* e, double vl, double vu, integer il,
                    integer iu, double abstol, integer& m, double* w,
                    dcomplex* z, integer ldz, integer* isuppz)
{
    return zstegr(jobz, range, n, d, e, vl, vu, il, iu, abstol, &m, w, z, ldz, isuppz);
}

inline integer pteqr( char compz, integer n, float* d, float* e, float* z,
                    integer ldz)
{
    return spteqr(compz, n, d, e, z, ldz);
}

inline integer pteqr( char compz, integer n, double* d, double* e, double* z,
                    integer ldz)
{
    return dpteqr(compz, n, d, e, z, ldz);
}

inline integer pteqr( char compz, integer n, float* d, float* e, scomplex* z,
                    integer ldz)
{
    return cpteqr(compz, n, d, e, z, ldz);
}

inline integer pteqr( char compz, integer n, double* d, double* e, dcomplex* z,
                    integer ldz)
{
    return zpteqr(compz, n, d, e, z, ldz);
}

inline integer stebz( char range, char order, integer n, float vl,
                    float vu, integer il, integer iu, float abstol,
                    const float* d, const float* e, integer& m,
                    integer& nsplit, float* w, integer* iblock,
                    integer* isplit)
{
    return sstebz(range, order, n, vl, vu, il, iu, abstol, d, e, &m, &nsplit, w, iblock, isplit);
}

inline integer stebz( char range, char order, integer n, double vl,
                    double vu, integer il, integer iu, double abstol,
                    const double* d, const double* e, integer& m,
                    integer& nsplit, double* w, integer* iblock,
                    integer* isplit)
{
    return dstebz(range, order, n, vl, vu, il, iu, abstol, d, e, &m, &nsplit, w, iblock, isplit);
}

inline integer stein( integer n, const float* d, const float* e,
                    integer m, const float* w, const integer* iblock,
                    const integer* isplit, float* z, integer ldz,
                    integer* ifailv )
{
    return sstein(n, d, e, m, w, iblock, isplit, z, ldz, ifailv);
}

inline integer stein( integer n, const double* d, const double* e,
                    integer m, const double* w, const integer* iblock,
                    const integer* isplit, double* z, integer ldz,
                    integer* ifailv )
{
    return dstein(n, d, e, m, w, iblock, isplit, z, ldz, ifailv);
}

inline integer stein( integer n, const float* d, const float* e,
                    integer m, const float* w, const integer* iblock,
                    const integer* isplit, scomplex* z, integer ldz,
                    integer* ifailv )
{
    return cstein(n, d, e, m, w, iblock, isplit, z, ldz, ifailv);
}

inline integer stein( integer n, const double* d, const double* e,
                    integer m, const double* w, const integer* iblock,
                    const integer* isplit, dcomplex* z, integer ldz,
                    integer* ifailv )
{
    return zstein(n, d, e, m, w, iblock, isplit, z, ldz, ifailv);
}

inline integer disna( char job, integer m, integer n, const float* d,
                    float* sep )
{
    return sdisna(job, m, n, d, sep);
}

inline integer disna( char job, integer m, integer n, const double* d,
                    double* sep )
{
    return ddisna(job, m, n, d, sep);
}

inline integer hegst( integer itype, char uplo, integer n, float* a,
                    integer lda, const float* b, integer ldb )
{
    return ssygst(itype, uplo, n, a, lda, b, ldb);
}

inline integer hegst( integer itype, char uplo, integer n, double* a,
                    integer lda, const double* b, integer ldb )
{
    return dsygst(itype, uplo, n, a, lda, b, ldb);
}

inline integer hegst( integer itype, char uplo, integer n, scomplex* a,
                    integer lda, const scomplex* b, integer ldb )
{
    return chegst(itype, uplo, n, a, lda, b, ldb);
}

inline integer hegst( integer itype, char uplo, integer n, dcomplex* a,
                    integer lda, const dcomplex* b, integer ldb )
{
    return zhegst(itype, uplo, n, a, lda, b, ldb);
}

inline integer hpgst( integer itype, char uplo, integer n, float* ap,
                    const float* bp )
{
    return sspgst(itype, uplo, n, ap, bp);
}

inline integer hpgst( integer itype, char uplo, integer n, double* ap,
                    const double* bp )
{
    return dspgst(itype, uplo, n, ap, bp);
}

inline integer hpgst( integer itype, char uplo, integer n, scomplex* ap,
                    const scomplex* bp )
{
    return chpgst(itype, uplo, n, ap, bp);
}

inline integer hpgst( integer itype, char uplo, integer n, dcomplex* ap,
                    const dcomplex* bp )
{
    return zhpgst(itype, uplo, n, ap, bp);
}

inline integer hbgst( char vect, char uplo, integer n, integer ka,
                    integer kb, float* ab, integer ldab,
                    const float* bb, integer ldbb, float* x,
                    integer ldx)
{
    return ssbgst(vect, uplo, n, ka, kb, ab, ldab, bb, ldbb, x, ldx);
}

inline integer hbgst( char vect, char uplo, integer n, integer ka,
                    integer kb, double* ab, integer ldab,
                    const double* bb, integer ldbb, double* x,
                    integer ldx)
{
    return dsbgst(vect, uplo, n, ka, kb, ab, ldab, bb, ldbb, x, ldx);
}

inline integer hbgst( char vect, char uplo, integer n, integer ka,
                    integer kb, scomplex* ab, integer ldab,
                    const scomplex* bb, integer ldbb, scomplex* x,
                    integer ldx)
{
    return chbgst(vect, uplo, n, ka, kb, ab, ldab, bb, ldbb, x, ldx);
}

inline integer hbgst( char vect, char uplo, integer n, integer ka,
                    integer kb, dcomplex* ab, integer ldab,
                    const dcomplex* bb, integer ldbb, dcomplex* x,
                    integer ldx)
{
    return zhbgst(vect, uplo, n, ka, kb, ab, ldab, bb, ldbb, x, ldx);
}

inline integer pbstf( char uplo, integer n, integer kb, float* bb,
                    integer ldbb )
{
    return spbstf(uplo, n, kb, bb, ldbb);
}

inline integer pbstf( char uplo, integer n, integer kb, double* bb,
                    integer ldbb )
{
    return dpbstf(uplo, n, kb, bb, ldbb);
}

inline integer pbstf( char uplo, integer n, integer kb, scomplex* bb,
                    integer ldbb )
{
    return cpbstf(uplo, n, kb, bb, ldbb);
}

inline integer pbstf( char uplo, integer n, integer kb, dcomplex* bb,
                    integer ldbb )
{
    return zpbstf(uplo, n, kb, bb, ldbb);
}

inline integer gehrd( integer n, integer ilo, integer ihi, float* a,
                    integer lda, float* tau)
{
    return sgehrd(n, ilo, ihi, a, lda, tau);
}

inline integer gehrd( integer n, integer ilo, integer ihi, double* a,
                    integer lda, double* tau)
{
    return dgehrd(n, ilo, ihi, a, lda, tau);
}

inline integer gehrd( integer n, integer ilo, integer ihi, scomplex* a,
                    integer lda, scomplex* tau)
{
    return cgehrd(n, ilo, ihi, a, lda, tau);
}

inline integer gehrd( integer n, integer ilo, integer ihi, dcomplex* a,
                    integer lda, dcomplex* tau)
{
    return zgehrd(n, ilo, ihi, a, lda, tau);
}

inline integer unghr( integer n, integer ilo, integer ihi, float* a,
                    integer lda, const float* tau)
{
    return sorghr(n, ilo, ihi, a, lda, tau);
}

inline integer unghr( integer n, integer ilo, integer ihi, double* a,
                    integer lda, const double* tau)
{
    return dorghr(n, ilo, ihi, a, lda, tau);
}

inline integer unghr( integer n, integer ilo, integer ihi, scomplex* a,
                    integer lda, const scomplex* tau)
{
    return cunghr(n, ilo, ihi, a, lda, tau);
}

inline integer unghr( integer n, integer ilo, integer ihi, dcomplex* a,
                    integer lda, const dcomplex* tau)
{
    return zunghr(n, ilo, ihi, a, lda, tau);
}

inline integer unmhr( char side, char trans, integer m, integer n,
                    integer ilo, integer ihi, const float* a,
                    integer lda, const float* tau, float* c,
                    integer ldc)
{
    return sormhr(side, trans, m, n, ilo, ihi, a, lda, tau, c, ldc);
}

inline integer unmhr( char side, char trans, integer m, integer n,
                    integer ilo, integer ihi, const double* a,
                    integer lda, const double* tau, double* c,
                    integer ldc)
{
    return dormhr(side, trans, m, n, ilo, ihi, a, lda, tau, c, ldc);
}

inline integer unmhr( char side, char trans, integer m, integer n,
                    integer ilo, integer ihi, const scomplex* a,
                    integer lda, const scomplex* tau, scomplex* c,
                    integer ldc)
{
    return cunmhr(side, trans, m, n, ilo, ihi, a, lda, tau, c, ldc);
}

inline integer unmhr( char side, char trans, integer m, integer n,
                    integer ilo, integer ihi, const dcomplex* a,
                    integer lda, const dcomplex* tau, dcomplex* c,
                    integer ldc)
{
    return zunmhr(side, trans, m, n, ilo, ihi, a, lda, tau, c, ldc);
}

inline integer gebal( char job, integer n, float* a, integer lda,
                    integer& ilo, integer& ihi, float* scale )
{
    return sgebal(job, n, a, lda, &ilo, &ihi, scale);
}

inline integer gebal( char job, integer n, double* a, integer lda,
                    integer& ilo, integer& ihi, double* scale )
{
    return dgebal(job, n, a, lda, &ilo, &ihi, scale);
}

inline integer gebal( char job, integer n, scomplex* a, integer lda,
                    integer& ilo, integer& ihi, float* scale )
{
    return cgebal(job, n, a, lda, &ilo, &ihi, scale);
}

inline integer gebal( char job, integer n, dcomplex* a, integer lda,
                    integer& ilo, integer& ihi, double* scale )
{
    return zgebal(job, n, a, lda, &ilo, &ihi, scale);
}

inline integer gebak( char job, char side, integer n, integer ilo,
                    integer ihi, const float* scale, integer m,
                    float* v, integer ldv )
{
    return sgebak(job, side, n, ilo, ihi, scale, m, v, ldv);
}

inline integer gebak( char job, char side, integer n, integer ilo,
                    integer ihi, const double* scale, integer m,
                    double* v, integer ldv )
{
    return dgebak(job, side, n, ilo, ihi, scale, m, v, ldv);
}

inline integer gebak( char job, char side, integer n, integer ilo,
                    integer ihi, const float* scale, integer m,
                    scomplex* v, integer ldv )
{
    return cgebak(job, side, n, ilo, ihi, scale, m, v, ldv);
}

inline integer gebak( char job, char side, integer n, integer ilo,
                    integer ihi, const double* scale, integer m,
                    dcomplex* v, integer ldv )
{
    return zgebak(job, side, n, ilo, ihi, scale, m, v, ldv);
}

inline integer hseqr( char job, char compz, integer n, integer ilo,
                    integer ihi, float* h, integer ldh, scomplex* w,
                    float* z, integer ldz)
{
    return shseqr(job, compz, n, ilo, ihi, h, ldh, w, z, ldz);
}

inline integer hseqr( char job, char compz, integer n, integer ilo,
                    integer ihi, double* h, integer ldh, dcomplex* w,
                    double* z, integer ldz)
{
    return dhseqr(job, compz, n, ilo, ihi, h, ldh, w, z, ldz);
}

inline integer hseqr( char job, char compz, integer n, integer ilo,
                    integer ihi, scomplex* h, integer ldh, scomplex* w,
                    scomplex* z, integer ldz)
{
    return chseqr(job, compz, n, ilo, ihi, h, ldh, w, z, ldz);
}

inline integer hseqr( char job, char compz, integer n, integer ilo,
                    integer ihi, dcomplex* h, integer ldh, dcomplex* w,
                    dcomplex* z, integer ldz)
{
    return zhseqr(job, compz, n, ilo, ihi, h, ldh, w, z, ldz);
}

inline integer hsein( char job, char eigsrc, char initv,
                    logical* select, integer n, const float* h,
                    integer ldh, const scomplex* w, float* vl,
                    integer ldvl, float* vr, integer ldvr,
                    integer mm, integer& m,
                    integer* ifaill, integer* ifailr )
{
    return shsein(job, eigsrc, initv, select, n, h, ldh, w, vl, ldvl, vr, ldvr, mm, &m, ifaill, ifailr);
}

inline integer hsein( char job, char eigsrc, char initv,
                    logical* select, integer n, const double* h,
                    integer ldh, const dcomplex* w, double* vl,
                    integer ldvl, double* vr, integer ldvr,
                    integer mm, integer& m,
                    integer* ifaill, integer* ifailr )
{
    return dhsein(job, eigsrc, initv, select, n, h, ldh, w, vl, ldvl, vr, ldvr, mm, &m, ifaill, ifailr);
}

inline integer hsein( char job, char eigsrc, char initv,
                    logical* select, integer n, const scomplex* h,
                    integer ldh, scomplex* w, scomplex* vl,
                    integer ldvl, scomplex* vr, integer ldvr,
                    integer mm, integer& m,
                    integer* ifaill, integer* ifailr )
{
    return chsein(job, eigsrc, initv, select, n, h, ldh, w, vl, ldvl, vr, ldvr, mm, &m, ifaill, ifailr);
}

inline integer hsein( char job, char eigsrc, char initv,
                    logical* select, integer n, const dcomplex* h,
                    integer ldh, dcomplex* w, dcomplex* vl,
                    integer ldvl, dcomplex* vr, integer ldvr,
                    integer mm, integer& m,
                    integer* ifaill, integer* ifailr )
{
    return zhsein(job, eigsrc, initv, select, n, h, ldh, w, vl, ldvl, vr, ldvr, mm, &m, ifaill, ifailr);
}

inline integer trevc( char side, char howmny, const logical* select,
                    integer n, const float* t, integer ldt, float* vl,
                    integer ldvl, float* vr, integer ldvr,
                    integer mm, integer& m)
{
    return strevc(side, howmny, select, n, t, ldt, vl, ldvl, vr, ldvr, mm, &m);
}

inline integer trevc( char side, char howmny, const logical* select,
                    integer n, const double* t, integer ldt, double* vl,
                    integer ldvl, double* vr, integer ldvr,
                    integer mm, integer& m)
{
    return dtrevc(side, howmny, select, n, t, ldt, vl, ldvl, vr, ldvr, mm, &m);
}

inline integer trevc( char side, char howmny, const logical* select,
                    integer n, const scomplex* t, integer ldt, scomplex* vl,
                    integer ldvl, scomplex* vr, integer ldvr,
                    integer mm, integer& m)
{
    return ctrevc(side, howmny, select, n, t, ldt, vl, ldvl, vr, ldvr, mm, &m);
}

inline integer trevc( char side, char howmny, const logical* select,
                    integer n, const dcomplex* t, integer ldt, dcomplex* vl,
                    integer ldvl, dcomplex* vr, integer ldvr,
                    integer mm, integer& m)
{
    return ztrevc(side, howmny, select, n, t, ldt, vl, ldvl, vr, ldvr, mm, &m);
}

inline integer trsna( char job, char howmny, const logical* select,
                    integer n, const float* t, integer ldt,
                    const float* vl, integer ldvl, const float* vr,
                    integer ldvr, float* s, float* sep, integer mm,
                    integer& m)
{
    return strsna(job, howmny, select, n, t, ldt, vl, ldvl, vr, ldvr, s, sep, mm, &m);
}

inline integer trsna( char job, char howmny, const logical* select,
                    integer n, const double* t, integer ldt,
                    const double* vl, integer ldvl, const double* vr,
                    integer ldvr, double* s, double* sep, integer mm,
                    integer& m)
{
    return dtrsna(job, howmny, select, n, t, ldt, vl, ldvl, vr, ldvr, s, sep, mm, &m);
}

inline integer trsna( char job, char howmny, const logical* select,
                    integer n, const scomplex* t, integer ldt,
                    const scomplex* vl, integer ldvl, const scomplex* vr,
                    integer ldvr, float* s, float* sep, integer mm,
                    integer& m)
{
    return ctrsna(job, howmny, select, n, t, ldt, vl, ldvl, vr, ldvr, s, sep, mm, &m);
}

inline integer trsna( char job, char howmny, const logical* select,
                    integer n, const dcomplex* t, integer ldt,
                    const dcomplex* vl, integer ldvl, const dcomplex* vr,
                    integer ldvr, double* s, double* sep, integer mm,
                    integer& m)
{
    return ztrsna(job, howmny, select, n, t, ldt, vl, ldvl, vr, ldvr, s, sep, mm, &m);
}

inline integer trexc( char compq, integer n, float* t, integer ldt,
                    float* q, integer ldq, integer& ifst,
                    integer& ilst)
{
    return strexc(compq, n, t, ldt, q, ldq, &ifst, &ilst);
}

inline integer trexc( char compq, integer n, double* t, integer ldt,
                    double* q, integer ldq, integer& ifst,
                    integer& ilst)
{
    return dtrexc(compq, n, t, ldt, q, ldq, &ifst, &ilst);
}

inline integer trexc( char compq, integer n, scomplex* t, integer ldt,
                    scomplex* q, integer ldq, integer& ifst,
                    integer& ilst)
{
    return ctrexc(compq, n, t, ldt, q, ldq, &ifst, &ilst);
}

inline integer trexc( char compq, integer n, dcomplex* t, integer ldt,
                    dcomplex* q, integer ldq, integer& ifst,
                    integer& ilst)
{
    return ztrexc(compq, n, t, ldt, q, ldq, &ifst, &ilst);
}

inline integer trsen( char job, char compq, const logical* select,
                    integer n, float* t, integer ldt, float* q,
                    integer ldq, scomplex* w, integer& m,
                    float& s, float& sep)
{
    return strsen(job, compq, select, n, t, ldt, q, ldq, w, &m, &s, &sep);
}

inline integer trsen( char job, char compq, const logical* select,
                    integer n, double* t, integer ldt, double* q,
                    integer ldq, dcomplex* w, integer& m,
                    double& s, double& sep)
{
    return dtrsen(job, compq, select, n, t, ldt, q, ldq, w, &m, &s, &sep);
}

inline integer trsen( char job, char compq, const logical* select,
                    integer n, scomplex* t, integer ldt, scomplex* q,
                    integer ldq, scomplex* w, integer& m,
                    float& s, float& sep)
{
    return ctrsen(job, compq, select, n, t, ldt, q, ldq, w, &m, &s, &sep);
}

inline integer trsen( char job, char compq, const logical* select,
                    integer n, dcomplex* t, integer ldt, dcomplex* q,
                    integer ldq, dcomplex* w, integer& m,
                    double& s, double& sep)
{
    return ztrsen(job, compq, select, n, t, ldt, q, ldq, w, &m, &s, &sep);
}

inline integer trsyl( char trana, char tranb, integer isgn, integer m,
                    integer n, const float* a, integer lda,
                    const float* b, integer ldb, float* c,
                    integer ldc, float& scale )
{
    return strsyl(trana, tranb, isgn, m, n, a, lda, b, ldb, c, ldc, &scale);
}

inline integer trsyl( char trana, char tranb, integer isgn, integer m,
                    integer n, const double* a, integer lda,
                    const double* b, integer ldb, double* c,
                    integer ldc, double& scale )
{
    return dtrsyl(trana, tranb, isgn, m, n, a, lda, b, ldb, c, ldc, &scale);
}

inline integer trsyl( char trana, char tranb, integer isgn, integer m,
                    integer n, const scomplex* a, integer lda,
                    const scomplex* b, integer ldb, scomplex* c,
                    integer ldc, float& scale )
{
    return ctrsyl(trana, tranb, isgn, m, n, a, lda, b, ldb, c, ldc, &scale);
}

inline integer trsyl( char trana, char tranb, integer isgn, integer m,
                    integer n, const dcomplex* a, integer lda,
                    const dcomplex* b, integer ldb, dcomplex* c,
                    integer ldc, double& scale )
{
    return ztrsyl(trana, tranb, isgn, m, n, a, lda, b, ldb, c, ldc, &scale);
}

inline integer gghrd( char compq, char compz, integer n, integer ilo,
                    integer ihi, float* a, integer lda, float* b,
                    integer ldb, float* q, integer ldq, float* z,
                    integer ldz )
{
    return sgghrd(compq, compz, n, ilo, ihi, a, lda, b, ldb, q, ldq, z, ldz);
}

inline integer gghrd( char compq, char compz, integer n, integer ilo,
                    integer ihi, double* a, integer lda, double* b,
                    integer ldb, double* q, integer ldq, double* z,
                    integer ldz )
{
    return dgghrd(compq, compz, n, ilo, ihi, a, lda, b, ldb, q, ldq, z, ldz);
}

inline integer gghrd( char compq, char compz, integer n, integer ilo,
                    integer ihi, scomplex* a, integer lda, scomplex* b,
                    integer ldb, scomplex* q, integer ldq, scomplex* z,
                    integer ldz )
{
    return cgghrd(compq, compz, n, ilo, ihi, a, lda, b, ldb, q, ldq, z, ldz);
}

inline integer gghrd( char compq, char compz, integer n, integer ilo,
                    integer ihi, dcomplex* a, integer lda, dcomplex* b,
                    integer ldb, dcomplex* q, integer ldq, dcomplex* z,
                    integer ldz )
{
    return zgghrd(compq, compz, n, ilo, ihi, a, lda, b, ldb, q, ldq, z, ldz);
}

inline integer ggbal( char job, integer n, float* a, integer lda,
                    float* b, integer ldb, integer& ilo,
                    integer& ihi, float* lscale, float* rscale)
{
    return sggbal(job, n, a, lda, b, ldb, &ilo, &ihi, lscale, rscale);
}

inline integer ggbal( char job, integer n, double* a, integer lda,
                    double* b, integer ldb, integer& ilo,
                    integer& ihi, double* lscale, double* rscale)
{
    return dggbal(job, n, a, lda, b, ldb, &ilo, &ihi, lscale, rscale);
}

inline integer ggbal( char job, integer n, scomplex* a, integer lda,
                    scomplex* b, integer ldb, integer& ilo,
                    integer& ihi, float* lscale, float* rscale)
{
    return cggbal(job, n, a, lda, b, ldb, &ilo, &ihi, lscale, rscale);
}

inline integer ggbal( char job, integer n, dcomplex* a, integer lda,
                    dcomplex* b, integer ldb, integer& ilo,
                    integer& ihi, double* lscale, double* rscale)
{
    return zggbal(job, n, a, lda, b, ldb, &ilo, &ihi, lscale, rscale);
}

inline integer ggbak( char job, char side, integer n, integer ilo,
                    integer ihi, const float* lscale, const float* rscale,
                    integer m, float* v, integer ldv )
{
    return sggbak(job, side, n, ilo, ihi, lscale, rscale, m, v, ldv);
}

inline integer ggbak( char job, char side, integer n, integer ilo,
                    integer ihi, const double* lscale, const double* rscale,
                    integer m, double* v, integer ldv )
{
    return dggbak(job, side, n, ilo, ihi, lscale, rscale, m, v, ldv);
}

inline integer ggbak( char job, char side, integer n, integer ilo,
                    integer ihi, const float* lscale, const float* rscale,
                    integer m, scomplex* v, integer ldv )
{
    return cggbak(job, side, n, ilo, ihi, lscale, rscale, m, v, ldv);
}

inline integer ggbak( char job, char side, integer n, integer ilo,
                    integer ihi, const double* lscale, const double* rscale,
                    integer m, dcomplex* v, integer ldv )
{
    return zggbak(job, side, n, ilo, ihi, lscale, rscale, m, v, ldv);
}

inline integer hgeqz( char job, char compq, char compz, integer n,
                    integer ilo, integer ihi, float* h,
                    integer ldh, float* t, integer ldt, scomplex* alpha,
                    float* beta, float* q, integer ldq,
                    float* z, integer ldz)
{
    return shgeqz(job, compq, compz, n, ilo, ihi, h, ldh, t, ldt, alpha, beta, q, ldq, z, ldz);
}

inline integer hgeqz( char job, char compq, char compz, integer n,
                    integer ilo, integer ihi, double* h,
                    integer ldh, double* t, integer ldt, dcomplex* alpha,
                    double* beta, double* q, integer ldq,
                    double* z, integer ldz)
{
    return dhgeqz(job, compq, compz, n, ilo, ihi, h, ldh, t, ldt, alpha, beta, q, ldq, z, ldz);
}

inline integer hgeqz( char job, char compq, char compz, integer n,
                    integer ilo, integer ihi, scomplex* h,
                    integer ldh, scomplex* t, integer ldt, scomplex* alpha,
                    scomplex* beta, scomplex* q, integer ldq,
                    scomplex* z, integer ldz)
{
    return chgeqz(job, compq, compz, n, ilo, ihi, h, ldh, t, ldt, alpha, beta, q, ldq, z, ldz);
}

inline integer hgeqz( char job, char compq, char compz, integer n,
                    integer ilo, integer ihi, dcomplex* h,
                    integer ldh, dcomplex* t, integer ldt, dcomplex* alpha,
                    dcomplex* beta, dcomplex* q, integer ldq,
                    dcomplex* z, integer ldz)
{
    return zhgeqz(job, compq, compz, n, ilo, ihi, h, ldh, t, ldt, alpha, beta, q, ldq, z, ldz);
}

inline integer tgevc( char side, char howmny, const logical* select,
                    integer n, const float* s, integer lds,
                    const float* p, integer ldp, float* vl,
                    integer ldvl, float* vr, integer ldvr,
                    integer mm, integer& m)
{
    return stgevc(side, howmny, select, n, s, lds, p, ldp, vl, ldvl, vr, ldvr, mm, &m);
}

inline integer tgevc( char side, char howmny, const logical* select,
                    integer n, const double* s, integer lds,
                    const double* p, integer ldp, double* vl,
                    integer ldvl, double* vr, integer ldvr,
                    integer mm, integer& m)
{
    return dtgevc(side, howmny, select, n, s, lds, p, ldp, vl, ldvl, vr, ldvr, mm, &m);
}

inline integer tgevc( char side, char howmny, const logical* select,
                    integer n, const scomplex* s, integer lds,
                    const scomplex* p, integer ldp, scomplex* vl,
                    integer ldvl, scomplex* vr, integer ldvr,
                    integer mm, integer& m)
{
    return ctgevc(side, howmny, select, n, s, lds, p, ldp, vl, ldvl, vr, ldvr, mm, &m);
}

inline integer tgevc( char side, char howmny, const logical* select,
                    integer n, const dcomplex* s, integer lds,
                    const dcomplex* p, integer ldp, dcomplex* vl,
                    integer ldvl, dcomplex* vr, integer ldvr,
                    integer mm, integer& m)
{
    return ztgevc(side, howmny, select, n, s, lds, p, ldp, vl, ldvl, vr, ldvr, mm, &m);
}

inline integer tgexc( logical wantq, logical wantz, integer n,
                    float* a, integer lda, float* b, integer ldb,
                    float* q, integer ldq, float* z, integer ldz,
                    integer& ifst, integer& ilst)
{
    return stgexc(wantq, wantz, n, a, lda, b, ldb, q, ldq, z, ldz, &ifst, &ilst);
}

inline integer tgexc( logical wantq, logical wantz, integer n,
                    double* a, integer lda, double* b, integer ldb,
                    double* q, integer ldq, double* z, integer ldz,
                    integer& ifst, integer& ilst)
{
    return dtgexc(wantq, wantz, n, a, lda, b, ldb, q, ldq, z, ldz, &ifst, &ilst);
}

inline integer tgexc( logical wantq, logical wantz, integer n,
                    scomplex* a, integer lda, scomplex* b, integer ldb,
                    scomplex* q, integer ldq, scomplex* z, integer ldz,
                    integer& ifst, integer& ilst)
{
    return ctgexc(wantq, wantz, n, a, lda, b, ldb, q, ldq, z, ldz, &ifst, &ilst);
}

inline integer tgexc( logical wantq, logical wantz, integer n,
                    dcomplex* a, integer lda, dcomplex* b, integer ldb,
                    dcomplex* q, integer ldq, dcomplex* z, integer ldz,
                    integer& ifst, integer& ilst)
{
    return ztgexc(wantq, wantz, n, a, lda, b, ldb, q, ldq, z, ldz, &ifst, &ilst);
}

inline integer tgsen( integer ijob, logical wantq,
                    logical wantz, const logical* select,
                    integer n, float* a, integer lda, float* b,
                    integer ldb, scomplex* alpha,
                    float* beta, float* q, integer ldq, float* z,
                    integer ldz, integer& m, float& pl, float& pr,
                    float* dif)
{
    return stgsen(ijob, wantq, wantz, select, n, a, lda, b, ldb, alpha, beta, q, ldq, z, ldz, &m, &pl, &pr, dif);
}

inline integer tgsen( integer ijob, logical wantq,
                    logical wantz, const logical* select,
                    integer n, double* a, integer lda, double* b,
                    integer ldb, dcomplex* alpha,
                    double* beta, double* q, integer ldq, double* z,
                    integer ldz, integer& m, double& pl, double& pr,
                    double* dif)
{
    return dtgsen(ijob, wantq, wantz, select, n, a, lda, b, ldb, alpha, beta, q, ldq, z, ldz, &m, &pl, &pr, dif);
}

inline integer tgsen( integer ijob, logical wantq,
                    logical wantz, const logical* select,
                    integer n, scomplex* a, integer lda, scomplex* b,
                    integer ldb, scomplex* alpha,
                    scomplex* beta, scomplex* q, integer ldq, scomplex* z,
                    integer ldz, integer& m, float& pl, float& pr,
                    float* dif)
{
    return ctgsen(ijob, wantq, wantz, select, n, a, lda, b, ldb, alpha, beta, q, ldq, z, ldz, &m, &pl, &pr, dif);
}

inline integer tgsen( integer ijob, logical wantq,
                    logical wantz, const logical* select,
                    integer n, dcomplex* a, integer lda, dcomplex* b,
                    integer ldb, dcomplex* alpha,
                    dcomplex* beta, dcomplex* q, integer ldq, dcomplex* z,
                    integer ldz, integer& m, double& pl, double& pr,
                    double* dif)
{
    return ztgsen(ijob, wantq, wantz, select, n, a, lda, b, ldb, alpha, beta, q, ldq, z, ldz, &m, &pl, &pr, dif);
}

inline integer tgsyl( char trans, integer ijob, integer m, integer n,
                    const float* a, integer lda, const float* b,
                    integer ldb, float* c, integer ldc,
                    const float* d, integer ldd, const float* e,
                    integer lde, float* f, integer ldf, float& scale,
                    float& dif)
{
    return stgsyl(trans, ijob, m, n, a, lda, b, ldb, c, ldc, d, ldd, e, lde, f, ldf, &scale, &dif);
}

inline integer tgsyl( char trans, integer ijob, integer m, integer n,
                    const double* a, integer lda, const double* b,
                    integer ldb, double* c, integer ldc,
                    const double* d, integer ldd, const double* e,
                    integer lde, double* f, integer ldf, double& scale,
                    double& dif)
{
    return dtgsyl(trans, ijob, m, n, a, lda, b, ldb, c, ldc, d, ldd, e, lde, f, ldf, &scale, &dif);
}

inline integer tgsyl( char trans, integer ijob, integer m, integer n,
                    const scomplex* a, integer lda, const scomplex* b,
                    integer ldb, scomplex* c, integer ldc,
                    const scomplex* d, integer ldd, const scomplex* e,
                    integer lde, scomplex* f, integer ldf, float& scale,
                    float& dif)
{
    return ctgsyl(trans, ijob, m, n, a, lda, b, ldb, c, ldc, d, ldd, e, lde, f, ldf, &scale, &dif);
}

inline integer tgsyl( char trans, integer ijob, integer m, integer n,
                    const dcomplex* a, integer lda, const dcomplex* b,
                    integer ldb, dcomplex* c, integer ldc,
                    const dcomplex* d, integer ldd, const dcomplex* e,
                    integer lde, dcomplex* f, integer ldf, double& scale,
                    double& dif)
{
    return ztgsyl(trans, ijob, m, n, a, lda, b, ldb, c, ldc, d, ldd, e, lde, f, ldf, &scale, &dif);
}

inline integer tgsna( char job, char howmny, const logical* select,
                    integer n, const float* a, integer lda,
                    const float* b, integer ldb, const float* vl,
                    integer ldvl, const float* vr, integer ldvr,
                    float* s, float* dif, integer mm, integer& m)
{
    return stgsna(job, howmny, select, n, a, lda, b, ldb, vl, ldvl, vr, ldvr, s, dif, mm, &m);
}

inline integer tgsna( char job, char howmny, const logical* select,
                    integer n, const double* a, integer lda,
                    const double* b, integer ldb, const double* vl,
                    integer ldvl, const double* vr, integer ldvr,
                    double* s, double* dif, integer mm, integer& m)
{
    return dtgsna(job, howmny, select, n, a, lda, b, ldb, vl, ldvl, vr, ldvr, s, dif, mm, &m);
}

inline integer tgsna( char job, char howmny, const logical* select,
                    integer n, const scomplex* a, integer lda,
                    const scomplex* b, integer ldb, const scomplex* vl,
                    integer ldvl, const scomplex* vr, integer ldvr,
                    float* s, float* dif, integer mm, integer& m)
{
    return ctgsna(job, howmny, select, n, a, lda, b, ldb, vl, ldvl, vr, ldvr, s, dif, mm, &m);
}

inline integer tgsna( char job, char howmny, const logical* select,
                    integer n, const dcomplex* a, integer lda,
                    const dcomplex* b, integer ldb, const dcomplex* vl,
                    integer ldvl, const dcomplex* vr, integer ldvr,
                    double* s, double* dif, integer mm, integer& m)
{
    return ztgsna(job, howmny, select, n, a, lda, b, ldb, vl, ldvl, vr, ldvr, s, dif, mm, &m);
}

inline integer ggsvp( char jobu, char jobv, char jobq, integer m,
                    integer p, integer n, float* a, integer lda,
                    float* b, integer ldb, float tola, float tolb,
                    integer* k, integer* l, float* u, integer ldu,
                    float* v, integer ldv, float* q, integer ldq)
{
    return sggsvp(jobu, jobv, jobq, m, p, n, a, lda, b, ldb, tola, tolb, k, l, u, ldu, v, ldv, q, ldq);
}

inline integer ggsvp( char jobu, char jobv, char jobq, integer m,
                    integer p, integer n, double* a, integer lda,
                    double* b, integer ldb, double tola, double tolb,
                    integer* k, integer* l, double* u, integer ldu,
                    double* v, integer ldv, double* q, integer ldq)
{
    return dggsvp(jobu, jobv, jobq, m, p, n, a, lda, b, ldb, tola, tolb, k, l, u, ldu, v, ldv, q, ldq);
}

inline integer ggsvp( char jobu, char jobv, char jobq, integer m,
                    integer p, integer n, scomplex* a, integer lda,
                    scomplex* b, integer ldb, float tola, float tolb,
                    integer* k, integer* l, scomplex* u, integer ldu,
                    scomplex* v, integer ldv, scomplex* q, integer ldq)
{
    return cggsvp(jobu, jobv, jobq, m, p, n, a, lda, b, ldb, tola, tolb, k, l, u, ldu, v, ldv, q, ldq);
}

inline integer ggsvp( char jobu, char jobv, char jobq, integer m,
                    integer p, integer n, dcomplex* a, integer lda,
                    dcomplex* b, integer ldb, double tola, double tolb,
                    integer* k, integer* l, dcomplex* u, integer ldu,
                    dcomplex* v, integer ldv, dcomplex* q, integer ldq)
{
    return zggsvp(jobu, jobv, jobq, m, p, n, a, lda, b, ldb, tola, tolb, k, l, u, ldu, v, ldv, q, ldq);
}

inline integer tgsja( char jobu, char jobv, char jobq, integer m,
                    integer p, integer n, integer k, integer l,
                    float* a, integer lda, float* b, integer ldb,
                    float tola, float tolb, float* alpha, float* beta,
                    float* u, integer ldu, float* v, integer ldv,
                    float* q, integer ldq, integer& ncycle )
{
    return stgsja(jobu, jobv, jobq, m, p, n, k, l, a, lda, b, ldb, tola, tolb, alpha, beta, u, ldu, v, ldv, q, ldq, &ncycle);
}

inline integer tgsja( char jobu, char jobv, char jobq, integer m,
                    integer p, integer n, integer k, integer l,
                    double* a, integer lda, double* b, integer ldb,
                    double tola, double tolb, double* alpha, double* beta,
                    double* u, integer ldu, double* v, integer ldv,
                    double* q, integer ldq, integer& ncycle )
{
    return dtgsja(jobu, jobv, jobq, m, p, n, k, l, a, lda, b, ldb, tola, tolb, alpha, beta, u, ldu, v, ldv, q, ldq, &ncycle);
}

inline integer tgsja( char jobu, char jobv, char jobq, integer m,
                    integer p, integer n, integer k, integer l,
                    scomplex* a, integer lda, scomplex* b, integer ldb,
                    float tola, float tolb, float* alpha, float* beta,
                    scomplex* u, integer ldu, scomplex* v, integer ldv,
                    scomplex* q, integer ldq, integer& ncycle )
{
    return ctgsja(jobu, jobv, jobq, m, p, n, k, l, a, lda, b, ldb, tola, tolb, alpha, beta, u, ldu, v, ldv, q, ldq, &ncycle);
}

inline integer tgsja( char jobu, char jobv, char jobq, integer m,
                    integer p, integer n, integer k, integer l,
                    dcomplex* a, integer lda, dcomplex* b, integer ldb,
                    double tola, double tolb, double* alpha, double* beta,
                    dcomplex* u, integer ldu, dcomplex* v, integer ldv,
                    dcomplex* q, integer ldq, integer& ncycle )
{
    return ztgsja(jobu, jobv, jobq, m, p, n, k, l, a, lda, b, ldb, tola, tolb, alpha, beta, u, ldu, v, ldv, q, ldq, &ncycle);
}

inline integer gels( char trans, integer m, integer n, integer nrhs,
                   float* a, integer lda, float* b, integer ldb)
{
    return sgels(trans, m, n, nrhs, a, lda, b, ldb);
}

inline integer gels( char trans, integer m, integer n, integer nrhs,
                   double* a, integer lda, double* b, integer ldb)
{
    return dgels(trans, m, n, nrhs, a, lda, b, ldb);
}

inline integer gels( char trans, integer m, integer n, integer nrhs,
                   scomplex* a, integer lda, scomplex* b, integer ldb)
{
    return cgels(trans, m, n, nrhs, a, lda, b, ldb);
}

inline integer gels( char trans, integer m, integer n, integer nrhs,
                   dcomplex* a, integer lda, dcomplex* b, integer ldb)
{
    return zgels(trans, m, n, nrhs, a, lda, b, ldb);
}

inline integer gelsy( integer m, integer n, integer nrhs, float* a,
                    integer lda, float* b, integer ldb,
                    integer* jpvt, float rcond, integer& rank)
{
    return sgelsy(m, n, nrhs, a, lda, b, ldb, jpvt, rcond, &rank);
}

inline integer gelsy( integer m, integer n, integer nrhs, double* a,
                    integer lda, double* b, integer ldb,
                    integer* jpvt, double rcond, integer& rank)
{
    return dgelsy(m, n, nrhs, a, lda, b, ldb, jpvt, rcond, &rank);
}

inline integer gelsy( integer m, integer n, integer nrhs, scomplex* a,
                    integer lda, scomplex* b, integer ldb,
                    integer* jpvt, float rcond, integer& rank)
{
    return cgelsy(m, n, nrhs, a, lda, b, ldb, jpvt, rcond, &rank);
}

inline integer gelsy( integer m, integer n, integer nrhs, dcomplex* a,
                    integer lda, dcomplex* b, integer ldb,
                    integer* jpvt, double rcond, integer& rank)
{
    return zgelsy(m, n, nrhs, a, lda, b, ldb, jpvt, rcond, &rank);
}

inline integer gelss( integer m, integer n, integer nrhs, float* a,
                    integer lda, float* b, integer ldb, float* s,
                    float rcond, integer& rank)
{
    return sgelss(m, n, nrhs, a, lda, b, ldb, s, rcond, &rank);
}

inline integer gelss( integer m, integer n, integer nrhs, double* a,
                    integer lda, double* b, integer ldb, double* s,
                    double rcond, integer& rank)
{
    return dgelss(m, n, nrhs, a, lda, b, ldb, s, rcond, &rank);
}

inline integer gelss( integer m, integer n, integer nrhs, scomplex* a,
                    integer lda, scomplex* b, integer ldb, float* s,
                    float rcond, integer& rank)
{
    return cgelss(m, n, nrhs, a, lda, b, ldb, s, rcond, &rank);
}

inline integer gelss( integer m, integer n, integer nrhs, dcomplex* a,
                    integer lda, dcomplex* b, integer ldb, double* s,
                    double rcond, integer& rank)
{
    return zgelss(m, n, nrhs, a, lda, b, ldb, s, rcond, &rank);
}

inline integer gglse( integer m, integer n, integer p, float* a,
                    integer lda, float* b, integer ldb, float* c,
                    float* d, float* x)
{
    return sgglse(m, n, p, a, lda, b, ldb, c, d, x);
}

inline integer gglse( integer m, integer n, integer p, double* a,
                    integer lda, double* b, integer ldb, double* c,
                    double* d, double* x)
{
    return dgglse(m, n, p, a, lda, b, ldb, c, d, x);
}

inline integer gglse( integer m, integer n, integer p, scomplex* a,
                    integer lda, scomplex* b, integer ldb, scomplex* c,
                    scomplex* d, scomplex* x)
{
    return cgglse(m, n, p, a, lda, b, ldb, c, d, x);
}

inline integer gglse( integer m, integer n, integer p, dcomplex* a,
                    integer lda, dcomplex* b, integer ldb, dcomplex* c,
                    dcomplex* d, dcomplex* x)
{
    return zgglse(m, n, p, a, lda, b, ldb, c, d, x);
}

inline integer ggglm( integer n, integer m, integer p, float* a,
                    integer lda, float* b, integer ldb, float* d,
                    float* x, float* y)
{
    return sggglm(n, m, p, a, lda, b, ldb, d, x, y);
}

inline integer ggglm( integer n, integer m, integer p, double* a,
                    integer lda, double* b, integer ldb, double* d,
                    double* x, double* y)
{
    return dggglm(n, m, p, a, lda, b, ldb, d, x, y);
}

inline integer ggglm( integer n, integer m, integer p, scomplex* a,
                    integer lda, scomplex* b, integer ldb, scomplex* d,
                    scomplex* x, scomplex* y)
{
    return cggglm(n, m, p, a, lda, b, ldb, d, x, y);
}

inline integer ggglm( integer n, integer m, integer p, dcomplex* a,
                    integer lda, dcomplex* b, integer ldb, dcomplex* d,
                    dcomplex* x, dcomplex* y)
{
    return zggglm(n, m, p, a, lda, b, ldb, d, x, y);
}

inline integer heev( char jobz, char uplo, integer n, float* a,
                   integer lda, float* w)
{
    return ssyev(jobz, uplo, n, a, lda, w);
}

inline integer heev( char jobz, char uplo, integer n, double* a,
                   integer lda, double* w)
{
    return dsyev(jobz, uplo, n, a, lda, w);
}

inline integer heev( char jobz, char uplo, integer n, scomplex* a,
                   integer lda, float* w)
{
    return cheev(jobz, uplo, n, a, lda, w);
}

inline integer heev( char jobz, char uplo, integer n, dcomplex* a,
                   integer lda, double* w)
{
    return zheev(jobz, uplo, n, a, lda, w);
}

inline integer heevd( char jobz, char uplo, integer n, float* a,
                    integer lda, float* w)
{
    return ssyevd(jobz, uplo, n, a, lda, w);
}

inline integer heevd( char jobz, char uplo, integer n, double* a,
                    integer lda, double* w)
{
    return dsyevd(jobz, uplo, n, a, lda, w);
}

inline integer heevd( char jobz, char uplo, integer n, scomplex* a,
                    integer lda, float* w)
{
    return cheevd(jobz, uplo, n, a, lda, w);
}

inline integer heevd( char jobz, char uplo, integer n, dcomplex* a,
                    integer lda, double* w)
{
    return zheevd(jobz, uplo, n, a, lda, w);
}

inline integer heevx( char jobz, char range, char uplo, integer n,
                    float* a, integer lda, float vl, float vu,
                    integer il, integer iu, float abstol,
                    integer& m, float* w, float* z, integer ldz,
                    integer* ifail )
{
    return ssyevx(jobz, range, uplo, n, a, lda, vl, vu, il, iu, abstol, &m, w, z, ldz, ifail);
}

inline integer heevx( char jobz, char range, char uplo, integer n,
                    double* a, integer lda, double vl, double vu,
                    integer il, integer iu, double abstol,
                    integer& m, double* w, double* z, integer ldz,
                    integer* ifail )
{
    return dsyevx(jobz, range, uplo, n, a, lda, vl, vu, il, iu, abstol, &m, w, z, ldz, ifail);
}

inline integer heevx( char jobz, char range, char uplo, integer n,
                    scomplex* a, integer lda, float vl, float vu,
                    integer il, integer iu, float abstol,
                    integer& m, float* w, scomplex* z, integer ldz,
                    integer* ifail )
{
    return cheevx(jobz, range, uplo, n, a, lda, vl, vu, il, iu, abstol, &m, w, z, ldz, ifail);
}

inline integer heevx( char jobz, char range, char uplo, integer n,
                    dcomplex* a, integer lda, double vl, double vu,
                    integer il, integer iu, double abstol,
                    integer& m, double* w, dcomplex* z, integer ldz,
                    integer* ifail )
{
    return zheevx(jobz, range, uplo, n, a, lda, vl, vu, il, iu, abstol, &m, w, z, ldz, ifail);
}

inline integer heevr( char jobz, char range, char uplo, integer n,
                    float* a, integer lda, float vl, float vu,
                    integer il, integer iu, float abstol,
                    integer& m, float* w, float* z, integer ldz,
                    integer* isuppz)
{
    return ssyevr(jobz, range, uplo, n, a, lda, vl, vu, il, iu, abstol, &m, w, z, ldz, isuppz);
}

inline integer heevr( char jobz, char range, char uplo, integer n,
                    double* a, integer lda, double vl, double vu,
                    integer il, integer iu, double abstol,
                    integer& m, double* w, double* z, integer ldz,
                    integer* isuppz)
{
    return dsyevr(jobz, range, uplo, n, a, lda, vl, vu, il, iu, abstol, &m, w, z, ldz, isuppz);
}

inline integer heevr( char jobz, char range, char uplo, integer n,
                    scomplex* a, integer lda, float vl, float vu,
                    integer il, integer iu, float abstol,
                    integer& m, float* w, scomplex* z, integer ldz,
                    integer* isuppz)
{
    return cheevr(jobz, range, uplo, n, a, lda, vl, vu, il, iu, abstol, &m, w, z, ldz, isuppz);
}

inline integer heevr( char jobz, char range, char uplo, integer n,
                    dcomplex* a, integer lda, double vl, double vu,
                    integer il, integer iu, double abstol,
                    integer& m, double* w, dcomplex* z, integer ldz,
                    integer* isuppz)
{
    return zheevr(jobz, range, uplo, n, a, lda, vl, vu, il, iu, abstol, &m, w, z, ldz, isuppz);
}

inline integer hpev( char jobz, char uplo, integer n, float* ap, float* w,
                   float* z, integer ldz)
{
    return sspev(jobz, uplo, n, ap, w, z, ldz);
}

inline integer hpev( char jobz, char uplo, integer n, double* ap, double* w,
                   double* z, integer ldz)
{
    return dspev(jobz, uplo, n, ap, w, z, ldz);
}

inline integer hpev( char jobz, char uplo, integer n, scomplex* ap, float* w,
                   scomplex* z, integer ldz)
{
    return chpev(jobz, uplo, n, ap, w, z, ldz);
}

inline integer hpev( char jobz, char uplo, integer n, dcomplex* ap, double* w,
                   dcomplex* z, integer ldz)
{
    return zhpev(jobz, uplo, n, ap, w, z, ldz);
}

inline integer hpevd( char jobz, char uplo, integer n, float* ap,
                    float* w, float* z, integer ldz)
{
    return sspevd(jobz, uplo, n, ap, w, z, ldz);
}

inline integer hpevd( char jobz, char uplo, integer n, double* ap,
                    double* w, double* z, integer ldz)
{
    return dspevd(jobz, uplo, n, ap, w, z, ldz);
}

inline integer hpevd( char jobz, char uplo, integer n, scomplex* ap,
                    float* w, scomplex* z, integer ldz)
{
    return chpevd(jobz, uplo, n, ap, w, z, ldz);
}

inline integer hpevd( char jobz, char uplo, integer n, dcomplex* ap,
                    double* w, dcomplex* z, integer ldz)
{
    return zhpevd(jobz, uplo, n, ap, w, z, ldz);
}

inline integer hpevx( char jobz, char range, char uplo, integer n,
                    float* ap, float vl, float vu, integer il,
                    integer iu, float abstol, integer& m, float* w,
                    float* z, integer ldz, integer* ifail )
{
    return sspevx(jobz, range, uplo, n, ap, vl, vu, il, iu, abstol, &m, w, z, ldz, ifail);
}

inline integer hpevx( char jobz, char range, char uplo, integer n,
                    double* ap, double vl, double vu, integer il,
                    integer iu, double abstol, integer& m, double* w,
                    double* z, integer ldz, integer* ifail )
{
    return dspevx(jobz, range, uplo, n, ap, vl, vu, il, iu, abstol, &m, w, z, ldz, ifail);
}

inline integer hpevx( char jobz, char range, char uplo, integer n,
                    scomplex* ap, float vl, float vu, integer il,
                    integer iu, float abstol, integer& m, float* w,
                    scomplex* z, integer ldz, integer* ifail )
{
    return chpevx(jobz, range, uplo, n, ap, vl, vu, il, iu, abstol, &m, w, z, ldz, ifail);
}

inline integer hpevx( char jobz, char range, char uplo, integer n,
                    dcomplex* ap, double vl, double vu, integer il,
                    integer iu, double abstol, integer& m, double* w,
                    dcomplex* z, integer ldz, integer* ifail )
{
    return zhpevx(jobz, range, uplo, n, ap, vl, vu, il, iu, abstol, &m, w, z, ldz, ifail);
}

inline integer hbev( char jobz, char uplo, integer n, integer kd,
                   float* ab, integer ldab, float* w, float* z,
                   integer ldz)
{
    return ssbev(jobz, uplo, n, kd, ab, ldab, w, z, ldz);
}

inline integer hbev( char jobz, char uplo, integer n, integer kd,
                   double* ab, integer ldab, double* w, double* z,
                   integer ldz)
{
    return dsbev(jobz, uplo, n, kd, ab, ldab, w, z, ldz);
}

inline integer hbev( char jobz, char uplo, integer n, integer kd,
                   scomplex* ab, integer ldab, float* w, scomplex* z,
                   integer ldz)
{
    return chbev(jobz, uplo, n, kd, ab, ldab, w, z, ldz);
}

inline integer hbev( char jobz, char uplo, integer n, integer kd,
                   dcomplex* ab, integer ldab, double* w, dcomplex* z,
                   integer ldz)
{
    return zhbev(jobz, uplo, n, kd, ab, ldab, w, z, ldz);
}

inline integer hbevd( char jobz, char uplo, integer n, integer kd,
                    float* ab, integer ldab, float* w, float* z,
                    integer ldz)
{
    return ssbevd(jobz, uplo, n, kd, ab, ldab, w, z, ldz);
}

inline integer hbevd( char jobz, char uplo, integer n, integer kd,
                    double* ab, integer ldab, double* w, double* z,
                    integer ldz)
{
    return dsbevd(jobz, uplo, n, kd, ab, ldab, w, z, ldz);
}

inline integer hbevd( char jobz, char uplo, integer n, integer kd,
                    scomplex* ab, integer ldab, float* w, scomplex* z,
                    integer ldz)
{
    return chbevd(jobz, uplo, n, kd, ab, ldab, w, z, ldz);
}

inline integer hbevd( char jobz, char uplo, integer n, integer kd,
                    dcomplex* ab, integer ldab, double* w, dcomplex* z,
                    integer ldz)
{
    return zhbevd(jobz, uplo, n, kd, ab, ldab, w, z, ldz);
}

inline integer hbevx( char jobz, char range, char uplo, integer n,
                    integer kd, float* ab, integer ldab, float* q,
                    integer ldq, float vl, float vu, integer il,
                    integer iu, float abstol, integer& m, float* w,
                    float* z, integer ldz, integer* ifail )
{
    return ssbevx(jobz, range, uplo, n, kd, ab, ldab, q, ldq, vl, vu, il, iu, abstol, &m, w, z, ldz, ifail);
}

inline integer hbevx( char jobz, char range, char uplo, integer n,
                    integer kd, double* ab, integer ldab, double* q,
                    integer ldq, double vl, double vu, integer il,
                    integer iu, double abstol, integer& m, double* w,
                    double* z, integer ldz, integer* ifail )
{
    return dsbevx(jobz, range, uplo, n, kd, ab, ldab, q, ldq, vl, vu, il, iu, abstol, &m, w, z, ldz, ifail);
}

inline integer hbevx( char jobz, char range, char uplo, integer n,
                    integer kd, scomplex* ab, integer ldab, scomplex* q,
                    integer ldq, float vl, float vu, integer il,
                    integer iu, float abstol, integer& m, float* w,
                    scomplex* z, integer ldz, integer* ifail )
{
    return chbevx(jobz, range, uplo, n, kd, ab, ldab, q, ldq, vl, vu, il, iu, abstol, &m, w, z, ldz, ifail);
}

inline integer hbevx( char jobz, char range, char uplo, integer n,
                    integer kd, dcomplex* ab, integer ldab, dcomplex* q,
                    integer ldq, double vl, double vu, integer il,
                    integer iu, double abstol, integer& m, double* w,
                    dcomplex* z, integer ldz, integer* ifail )
{
    return zhbevx(jobz, range, uplo, n, kd, ab, ldab, q, ldq, vl, vu, il, iu, abstol, &m, w, z, ldz, ifail);
}

inline integer stev( char jobz, integer n, float* d, float* e, float* z,
                   integer ldz)
{
    return sstev(jobz, n, d, e, z, ldz);
}

inline integer stev( char jobz, integer n, double* d, double* e, double* z,
                   integer ldz)
{
    return dstev(jobz, n, d, e, z, ldz);
}

inline integer stevd( char jobz, integer n, float* d, float* e, float* z,
                    integer ldz)
{
    return sstevd(jobz, n, d, e, z, ldz);
}

inline integer stevd( char jobz, integer n, double* d, double* e, double* z,
                    integer ldz)
{
    return dstevd(jobz, n, d, e, z, ldz);
}

inline integer stevx( char jobz, char range, integer n, float* d,
                    float* e, float vl, float vu, integer il,
                    integer iu, float abstol, integer& m, float* w,
                    float* z, integer ldz, integer* ifail )
{
    return sstevx(jobz, range, n, d, e, vl, vu, il, iu, abstol, &m, w, z, ldz, ifail);
}

inline integer stevx( char jobz, char range, integer n, double* d,
                    double* e, double vl, double vu, integer il,
                    integer iu, double abstol, integer& m, double* w,
                    double* z, integer ldz, integer* ifail )
{
    return dstevx(jobz, range, n, d, e, vl, vu, il, iu, abstol, &m, w, z, ldz, ifail);
}

inline integer stevr( char jobz, char range, integer n, float* d,
                    float* e, float vl, float vu, integer il,
                    integer iu, float abstol, integer& m, float* w,
                    float* z, integer ldz, integer* isuppz)
{
    return sstevr(jobz, range, n, d, e, vl, vu, il, iu, abstol, &m, w, z, ldz, isuppz);
}

inline integer stevr( char jobz, char range, integer n, double* d,
                    double* e, double vl, double vu, integer il,
                    integer iu, double abstol, integer& m, double* w,
                    double* z, integer ldz, integer* isuppz)
{
    return dstevr(jobz, range, n, d, e, vl, vu, il, iu, abstol, &m, w, z, ldz, isuppz);
}

inline integer geev( char jobvl, char jobvr, integer n, float* a,
                   integer lda, scomplex* w, float* vl,
                   integer ldvl, float* vr, integer ldvr)
{
    return sgeev(jobvl, jobvr, n, a, lda, w, vl, ldvl, vr, ldvr);
}

inline integer geev( char jobvl, char jobvr, integer n, double* a,
                   integer lda, dcomplex* w, double* vl,
                   integer ldvl, double* vr, integer ldvr)
{
    return dgeev(jobvl, jobvr, n, a, lda, w, vl, ldvl, vr, ldvr);
}

inline integer geev( char jobvl, char jobvr, integer n, scomplex* a,
                   integer lda, scomplex* w, scomplex* vl,
                   integer ldvl, scomplex* vr, integer ldvr)
{
    return cgeev(jobvl, jobvr, n, a, lda, w, vl, ldvl, vr, ldvr);
}

inline integer geev( char jobvl, char jobvr, integer n, dcomplex* a,
                   integer lda, dcomplex* w, dcomplex* vl,
                   integer ldvl, dcomplex* vr, integer ldvr)
{
    return zgeev(jobvl, jobvr, n, a, lda, w, vl, ldvl, vr, ldvr);
}

inline integer geevx( char balanc, char jobvl, char jobvr, char sense,
                    integer n, float* a, integer lda, scomplex* w,
                    float* vl, integer ldvl, float* vr,
                    integer ldvr, integer& ilo, integer& ihi,
                    float* scale, float& abnrm, float* rconde,
                    float* rcondv)
{
    return sgeevx(balanc, jobvl, jobvr, sense, n, a, lda, w, vl, ldvl, vr, ldvr, &ilo, &ihi, scale, &abnrm, rconde, rcondv);
}

inline integer geevx( char balanc, char jobvl, char jobvr, char sense,
                    integer n, double* a, integer lda, dcomplex* w,
                    double* vl, integer ldvl, double* vr,
                    integer ldvr, integer& ilo, integer& ihi,
                    double* scale, double& abnrm, double* rconde,
                    double* rcondv)
{
    return dgeevx(balanc, jobvl, jobvr, sense, n, a, lda, w, vl, ldvl, vr, ldvr, &ilo, &ihi, scale, &abnrm, rconde, rcondv);
}

inline integer geevx( char balanc, char jobvl, char jobvr, char sense,
                    integer n, scomplex* a, integer lda, scomplex* w,
                    scomplex* vl, integer ldvl, scomplex* vr,
                    integer ldvr, integer& ilo, integer& ihi,
                    float* scale, float& abnrm, float* rconde,
                    float* rcondv)
{
    return cgeevx(balanc, jobvl, jobvr, sense, n, a, lda, w, vl, ldvl, vr, ldvr, &ilo, &ihi, scale, &abnrm, rconde, rcondv);
}

inline integer geevx( char balanc, char jobvl, char jobvr, char sense,
                    integer n, dcomplex* a, integer lda, dcomplex* w,
                    dcomplex* vl, integer ldvl, dcomplex* vr,
                    integer ldvr, integer& ilo, integer& ihi,
                    double* scale, double& abnrm, double* rconde,
                    double* rcondv)
{
    return zgeevx(balanc, jobvl, jobvr, sense, n, a, lda, w, vl, ldvl, vr, ldvr, &ilo, &ihi, scale, &abnrm, rconde, rcondv);
}

inline integer gesvd( char jobu, char jobvt, integer m, integer n,
                    float* a, integer lda, float* s, float* u,
                    integer ldu, float* vt, integer ldvt)
{
    return sgesvd(jobu, jobvt, m, n, a, lda, s, u, ldu, vt, ldvt);
}

inline integer gesvd( char jobu, char jobvt, integer m, integer n,
                    double* a, integer lda, double* s, double* u,
                    integer ldu, double* vt, integer ldvt)
{
    return dgesvd(jobu, jobvt, m, n, a, lda, s, u, ldu, vt, ldvt);
}

inline integer gesvd( char jobu, char jobvt, integer m, integer n,
                    scomplex* a, integer lda, float* s, scomplex* u,
                    integer ldu, scomplex* vt, integer ldvt)
{
    return cgesvd(jobu, jobvt, m, n, a, lda, s, u, ldu, vt, ldvt);
}

inline integer gesvd( char jobu, char jobvt, integer m, integer n,
                    dcomplex* a, integer lda, double* s, dcomplex* u,
                    integer ldu, dcomplex* vt, integer ldvt)
{
    return zgesvd(jobu, jobvt, m, n, a, lda, s, u, ldu, vt, ldvt);
}

inline integer gesdd( char jobz, integer m, integer n, float* a,
                    integer lda, float* s, float* u, integer ldu,
                    float* vt, integer ldvt)
{
    return sgesdd(jobz, m, n, a, lda, s, u, ldu, vt, ldvt);
}

inline integer gesdd( char jobz, integer m, integer n, double* a,
                    integer lda, double* s, double* u, integer ldu,
                    double* vt, integer ldvt)
{
    return dgesdd(jobz, m, n, a, lda, s, u, ldu, vt, ldvt);
}

inline integer gesdd( char jobz, integer m, integer n, scomplex* a,
                    integer lda, float* s, scomplex* u, integer ldu,
                    scomplex* vt, integer ldvt)
{
    return cgesdd(jobz, m, n, a, lda, s, u, ldu, vt, ldvt);
}

inline integer gesdd( char jobz, integer m, integer n, dcomplex* a,
                    integer lda, double* s, dcomplex* u, integer ldu,
                    dcomplex* vt, integer ldvt)
{
    return zgesdd(jobz, m, n, a, lda, s, u, ldu, vt, ldvt);
}

inline integer gejsv( char joba, char jobu, char jobv, char jobr, char jobt,
                    char jobp, integer m, integer n, float* a,
                    integer lda, float* sva, float* u, integer ldu,
                    float* v, integer ldv)
{
    return sgejsv(joba, jobu, jobv, jobr, jobt, jobp, m, n, a, lda, sva, u, ldu, v, ldv);
}

inline integer gejsv( char joba, char jobu, char jobv, char jobr, char jobt,
                    char jobp, integer m, integer n, double* a,
                    integer lda, double* sva, double* u, integer ldu,
                    double* v, integer ldv)
{
    return dgejsv(joba, jobu, jobv, jobr, jobt, jobp, m, n, a, lda, sva, u, ldu, v, ldv);
}

inline integer gesvj( char joba, char jobu, char jobv, integer m,
                    integer n, float* a, integer lda, float* sva,
                    integer mv, float* v, integer ldv)
{
    return sgesvj(joba, jobu, jobv, m, n, a, lda, sva, mv, v, ldv);
}

inline integer gesvj( char joba, char jobu, char jobv, integer m,
                    integer n, double* a, integer lda, double* sva,
                    integer mv, double* v, integer ldv)
{
    return dgesvj(joba, jobu, jobv, m, n, a, lda, sva, mv, v, ldv);
}

inline integer ggsvd( char jobu, char jobv, char jobq, integer m,
                    integer n, integer p, integer& k, integer& l,
                    float* a, integer lda, float* b, integer ldb,
                    float* alpha, float* beta, float* u, integer ldu,
                    float* v, integer ldv, float* q, integer ldq)
{
    return sggsvd(jobu, jobv, jobq, m, n, p, &k, &l, a, lda, b, ldb, alpha, beta, u, ldu, v, ldv, q, ldq);
}

inline integer ggsvd( char jobu, char jobv, char jobq, integer m,
                    integer n, integer p, integer& k, integer& l,
                    double* a, integer lda, double* b, integer ldb,
                    double* alpha, double* beta, double* u, integer ldu,
                    double* v, integer ldv, double* q, integer ldq)
{
    return dggsvd(jobu, jobv, jobq, m, n, p, &k, &l, a, lda, b, ldb, alpha, beta, u, ldu, v, ldv, q, ldq);
}

inline integer ggsvd( char jobu, char jobv, char jobq, integer m,
                    integer n, integer p, integer& k, integer& l,
                    scomplex* a, integer lda, scomplex* b, integer ldb,
                    float* alpha, float* beta, scomplex* u, integer ldu,
                    scomplex* v, integer ldv, scomplex* q, integer ldq)
{
    return cggsvd(jobu, jobv, jobq, m, n, p, &k, &l, a, lda, b, ldb, alpha, beta, u, ldu, v, ldv, q, ldq);
}

inline integer ggsvd( char jobu, char jobv, char jobq, integer m,
                    integer n, integer p, integer& k, integer& l,
                    dcomplex* a, integer lda, dcomplex* b, integer ldb,
                    double* alpha, double* beta, dcomplex* u, integer ldu,
                    dcomplex* v, integer ldv, dcomplex* q, integer ldq)
{
    return zggsvd(jobu, jobv, jobq, m, n, p, &k, &l, a, lda, b, ldb, alpha, beta, u, ldu, v, ldv, q, ldq);
}

inline integer hegv( integer itype, char jobz, char uplo, integer n,
                   float* a, integer lda, float* b, integer ldb,
                   float* w)
{
    return ssygv(itype, jobz, uplo, n, a, lda, b, ldb, w);
}

inline integer hegv( integer itype, char jobz, char uplo, integer n,
                   double* a, integer lda, double* b, integer ldb,
                   double* w)
{
    return dsygv(itype, jobz, uplo, n, a, lda, b, ldb, w);
}

inline integer hegv( integer itype, char jobz, char uplo, integer n,
                   scomplex* a, integer lda, scomplex* b, integer ldb,
                   float* w)
{
    return chegv(itype, jobz, uplo, n, a, lda, b, ldb, w);
}

inline integer hegv( integer itype, char jobz, char uplo, integer n,
                   dcomplex* a, integer lda, dcomplex* b, integer ldb,
                   double* w)
{
    return zhegv(itype, jobz, uplo, n, a, lda, b, ldb, w);
}

inline integer hegvd( integer itype, char jobz, char uplo, integer n,
                    float* a, integer lda, float* b, integer ldb,
                    float* w)
{
    return ssygvd(itype, jobz, uplo, n, a, lda, b, ldb, w);
}

inline integer hegvd( integer itype, char jobz, char uplo, integer n,
                    double* a, integer lda, double* b, integer ldb,
                    double* w)
{
    return dsygvd(itype, jobz, uplo, n, a, lda, b, ldb, w);
}

inline integer hegvd( integer itype, char jobz, char uplo, integer n,
                    scomplex* a, integer lda, scomplex* b, integer ldb,
                    float* w)
{
    return chegvd(itype, jobz, uplo, n, a, lda, b, ldb, w);
}

inline integer hegvd( integer itype, char jobz, char uplo, integer n,
                    dcomplex* a, integer lda, dcomplex* b, integer ldb,
                    double* w)
{
    return zhegvd(itype, jobz, uplo, n, a, lda, b, ldb, w);
}

inline integer hegvx( integer itype, char jobz, char range, char uplo,
                    integer n, float* a, integer lda, float* b,
                    integer ldb, float vl, float vu, integer il,
                    integer iu, float abstol, integer& m, float* w,
                    float* z, integer ldz, integer* ifail )
{
    return ssygvx(itype, jobz, range, uplo, n, a, lda, b, ldb, vl, vu, il, iu, abstol, &m, w, z, ldz, ifail);
}

inline integer hegvx( integer itype, char jobz, char range, char uplo,
                    integer n, double* a, integer lda, double* b,
                    integer ldb, double vl, double vu, integer il,
                    integer iu, double abstol, integer& m, double* w,
                    double* z, integer ldz, integer* ifail )
{
    return dsygvx(itype, jobz, range, uplo, n, a, lda, b, ldb, vl, vu, il, iu, abstol, &m, w, z, ldz, ifail);
}

inline integer hegvx( integer itype, char jobz, char range, char uplo,
                    integer n, scomplex* a, integer lda, scomplex* b,
                    integer ldb, float vl, float vu, integer il,
                    integer iu, float abstol, integer& m, float* w,
                    scomplex* z, integer ldz, integer* ifail )
{
    return chegvx(itype, jobz, range, uplo, n, a, lda, b, ldb, vl, vu, il, iu, abstol, &m, w, z, ldz, ifail);
}

inline integer hegvx( integer itype, char jobz, char range, char uplo,
                    integer n, dcomplex* a, integer lda, dcomplex* b,
                    integer ldb, double vl, double vu, integer il,
                    integer iu, double abstol, integer& m, double* w,
                    dcomplex* z, integer ldz, integer* ifail )
{
    return zhegvx(itype, jobz, range, uplo, n, a, lda, b, ldb, vl, vu, il, iu, abstol, &m, w, z, ldz, ifail);
}

inline integer hpgv( integer itype, char jobz, char uplo, integer n,
                    float* ap, float* bp, float* w, float* z,
                   integer ldz)
{
    return sspgv(itype, jobz, uplo, n, ap, bp, w, z, ldz);
}

inline integer hpgv( integer itype, char jobz, char uplo, integer n,
                   double* ap, double* bp, double* w, double* z,
                   integer ldz)
{
    return dspgv(itype, jobz, uplo, n, ap, bp, w, z, ldz);
}

inline integer hpgv( integer itype, char jobz, char uplo, integer n,
                   scomplex* ap, scomplex* bp, float* w, scomplex* z,
                   integer ldz)
{
    return chpgv(itype, jobz, uplo, n, ap, bp, w, z, ldz);
}

inline integer hpgv( integer itype, char jobz, char uplo, integer n,
                   dcomplex* ap, dcomplex* bp, double* w, dcomplex* z,
                   integer ldz)
{
    return zhpgv(itype, jobz, uplo, n, ap, bp, w, z, ldz);
}

inline integer hpgvd( integer itype, char jobz, char uplo, integer n,
                    float* ap, float* bp, float* w, float* z,
                    integer ldz)
{
    return sspgvd(itype, jobz, uplo, n, ap, bp, w, z, ldz);
}

inline integer hpgvd( integer itype, char jobz, char uplo, integer n,
                    double* ap, double* bp, double* w, double* z,
                    integer ldz)
{
    return dspgvd(itype, jobz, uplo, n, ap, bp, w, z, ldz);
}

inline integer hpgvd( integer itype, char jobz, char uplo, integer n,
                    scomplex* ap, scomplex* bp, float* w, scomplex* z,
                    integer ldz)
{
    return chpgvd(itype, jobz, uplo, n, ap, bp, w, z, ldz);
}

inline integer hpgvd( integer itype, char jobz, char uplo, integer n,
                    dcomplex* ap, dcomplex* bp, double* w, dcomplex* z,
                    integer ldz)
{
    return zhpgvd(itype, jobz, uplo, n, ap, bp, w, z, ldz);
}

inline integer hpgvx( integer itype, char jobz, char range, char uplo,
                    integer n, float* ap, float* bp, float vl,
                    float vu, integer il, integer iu, float abstol,
                    integer& m, float* w, float* z, integer ldz,
                    integer* ifail )
{
    return sspgvx(itype, jobz, range, uplo, n, ap, bp, vl, vu, il, iu, abstol, &m, w, z, ldz, ifail);
}

inline integer hpgvx( integer itype, char jobz, char range, char uplo,
                    integer n, double* ap, double* bp, double vl,
                    double vu, integer il, integer iu, double abstol,
                    integer& m, double* w, double* z, integer ldz,
                    integer* ifail )
{
    return dspgvx(itype, jobz, range, uplo, n, ap, bp, vl, vu, il, iu, abstol, &m, w, z, ldz, ifail);
}

inline integer hpgvx( integer itype, char jobz, char range, char uplo,
                    integer n, scomplex* ap, scomplex* bp, float vl,
                    float vu, integer il, integer iu, float abstol,
                    integer& m, float* w, scomplex* z, integer ldz,
                    integer* ifail )
{
    return chpgvx(itype, jobz, range, uplo, n, ap, bp, vl, vu, il, iu, abstol, &m, w, z, ldz, ifail);
}

inline integer hpgvx( integer itype, char jobz, char range, char uplo,
                    integer n, dcomplex* ap, dcomplex* bp, double vl,
                    double vu, integer il, integer iu, double abstol,
                    integer& m, double* w, dcomplex* z, integer ldz,
                    integer* ifail )
{
    return zhpgvx(itype, jobz, range, uplo, n, ap, bp, vl, vu, il, iu, abstol, &m, w, z, ldz, ifail);
}

inline integer hbgv( char jobz, char uplo, integer n, integer ka,
                   integer kb, float* ab, integer ldab, float* bb,
                   integer ldbb, float* w, float* z, integer ldz)
{
    return ssbgv(jobz, uplo, n, ka, kb, ab, ldab, bb, ldbb, w, z, ldz);
}

inline integer hbgv( char jobz, char uplo, integer n, integer ka,
                   integer kb, double* ab, integer ldab, double* bb,
                   integer ldbb, double* w, double* z, integer ldz)
{
    return dsbgv(jobz, uplo, n, ka, kb, ab, ldab, bb, ldbb, w, z, ldz);
}

inline integer hbgv( char jobz, char uplo, integer n, integer ka,
                   integer kb, scomplex* ab, integer ldab, scomplex* bb,
                   integer ldbb, float* w, scomplex* z, integer ldz)
{
    return chbgv(jobz, uplo, n, ka, kb, ab, ldab, bb, ldbb, w, z, ldz);
}

inline integer hbgv( char jobz, char uplo, integer n, integer ka,
                   integer kb, dcomplex* ab, integer ldab, dcomplex* bb,
                   integer ldbb, double* w, dcomplex* z, integer ldz)
{
    return zhbgv(jobz, uplo, n, ka, kb, ab, ldab, bb, ldbb, w, z, ldz);
}

inline integer hbgvd( char jobz, char uplo, integer n, integer ka,
                    integer kb, float* ab, integer ldab, float* bb,
                    integer ldbb, float* w, float* z, integer ldz)
{
    return ssbgvd(jobz, uplo, n, ka, kb, ab, ldab, bb, ldbb, w, z, ldz);
}

inline integer hbgvd( char jobz, char uplo, integer n, integer ka,
                    integer kb, double* ab, integer ldab, double* bb,
                    integer ldbb, double* w, double* z, integer ldz)
{
    return dsbgvd(jobz, uplo, n, ka, kb, ab, ldab, bb, ldbb, w, z, ldz);
}

inline integer hbgvd( char jobz, char uplo, integer n, integer ka,
                    integer kb, scomplex* ab, integer ldab, scomplex* bb,
                    integer ldbb, float* w, scomplex* z, integer ldz)
{
    return chbgvd(jobz, uplo, n, ka, kb, ab, ldab, bb, ldbb, w, z, ldz);
}

inline integer hbgvd( char jobz, char uplo, integer n, integer ka,
                    integer kb, dcomplex* ab, integer ldab, dcomplex* bb,
                    integer ldbb, double* w, dcomplex* z, integer ldz)
{
    return zhbgvd(jobz, uplo, n, ka, kb, ab, ldab, bb, ldbb, w, z, ldz);
}

inline integer hbgvx( char jobz, char range, char uplo, integer n,
                    integer ka, integer kb, float* ab,
                    integer ldab, float* bb, integer ldbb, float* q,
                    integer ldq, float vl, float vu, integer il,
                    integer iu, float abstol, integer& m, float* w,
                    float* z, integer ldz, integer* ifail )
{
    return ssbgvx(jobz, range, uplo, n, ka, kb, ab, ldab, bb, ldbb, q, ldq, vl, vu, il, iu, abstol, &m, w, z, ldz, ifail);
}

inline integer hbgvx( char jobz, char range, char uplo, integer n,
                    integer ka, integer kb, double* ab,
                    integer ldab, double* bb, integer ldbb, double* q,
                    integer ldq, double vl, double vu, integer il,
                    integer iu, double abstol, integer& m, double* w,
                    double* z, integer ldz, integer* ifail )
{
    return dsbgvx(jobz, range, uplo, n, ka, kb, ab, ldab, bb, ldbb, q, ldq, vl, vu, il, iu, abstol, &m, w, z, ldz, ifail);
}

inline integer hbgvx( char jobz, char range, char uplo, integer n,
                    integer ka, integer kb, scomplex* ab,
                    integer ldab, scomplex* bb, integer ldbb, scomplex* q,
                    integer ldq, float vl, float vu, integer il,
                    integer iu, float abstol, integer& m, float* w,
                    scomplex* z, integer ldz, integer* ifail )
{
    return chbgvx(jobz, range, uplo, n, ka, kb, ab, ldab, bb, ldbb, q, ldq, vl, vu, il, iu, abstol, &m, w, z, ldz, ifail);
}

inline integer hbgvx( char jobz, char range, char uplo, integer n,
                    integer ka, integer kb, dcomplex* ab,
                    integer ldab, dcomplex* bb, integer ldbb, dcomplex* q,
                    integer ldq, double vl, double vu, integer il,
                    integer iu, double abstol, integer& m, double* w,
                    dcomplex* z, integer ldz, integer* ifail )
{
    return zhbgvx(jobz, range, uplo, n, ka, kb, ab, ldab, bb, ldbb, q, ldq, vl, vu, il, iu, abstol, &m, w, z, ldz, ifail);
}

inline integer ggev( char jobvl, char jobvr, integer n, float* a,
                   integer lda, float* b, integer ldb, scomplex* alpha,
                   float* beta, float* vl, integer ldvl,
                   float* vr, integer ldvr)
{
    return sggev(jobvl, jobvr, n, a, lda, b, ldb, alpha, beta, vl, ldvl, vr, ldvr);
}

inline integer ggev( char jobvl, char jobvr, integer n, double* a,
                   integer lda, double* b, integer ldb, dcomplex* alpha,
                   double* beta, double* vl, integer ldvl,
                   double* vr, integer ldvr)
{
    return dggev(jobvl, jobvr, n, a, lda, b, ldb, alpha, beta, vl, ldvl, vr, ldvr);
}

inline integer ggev( char jobvl, char jobvr, integer n, scomplex* a,
                   integer lda, scomplex* b, integer ldb, scomplex* alpha,
                   scomplex* beta, scomplex* vl, integer ldvl,
                   scomplex* vr, integer ldvr)
{
    return cggev(jobvl, jobvr, n, a, lda, b, ldb, alpha, beta, vl, ldvl, vr, ldvr);
}

inline integer ggev( char jobvl, char jobvr, integer n, dcomplex* a,
                   integer lda, dcomplex* b, integer ldb, dcomplex* alpha,
                   dcomplex* beta, dcomplex* vl, integer ldvl,
                   dcomplex* vr, integer ldvr)
{
    return zggev(jobvl, jobvr, n, a, lda, b, ldb, alpha, beta, vl, ldvl, vr, ldvr);
}

inline integer ggevx( char balanc, char jobvl, char jobvr, char sense,
                    integer n, float* a, integer lda, float* b,
                    integer ldb, scomplex* alpha,
                    float* beta, float* vl, integer ldvl, float* vr,
                    integer ldvr, integer& ilo, integer& ihi,
                    float* lscale, float* rscale, float& abnrm,
                    float& bbnrm, float* rconde, float* rcondv)
{
    return sggevx(balanc, jobvl, jobvr, sense, n, a, lda, b, ldb, alpha, beta, vl, ldvl, vr, ldvr,
                  &ilo, &ihi, lscale, rscale, &abnrm, &bbnrm, rconde, rcondv);
}

inline integer ggevx( char balanc, char jobvl, char jobvr, char sense,
                    integer n, double* a, integer lda, double* b,
                    integer ldb, dcomplex* alpha,
                    double* beta, double* vl, integer ldvl, double* vr,
                    integer ldvr, integer& ilo, integer& ihi,
                    double* lscale, double* rscale, double& abnrm,
                    double& bbnrm, double* rconde, double* rcondv)
{
    return dggevx(balanc, jobvl, jobvr, sense, n, a, lda, b, ldb, alpha, beta, vl, ldvl, vr, ldvr,
                  &ilo, &ihi, lscale, rscale, &abnrm, &bbnrm, rconde, rcondv);
}

inline integer ggevx( char balanc, char jobvl, char jobvr, char sense,
                    integer n, scomplex* a, integer lda, scomplex* b,
                    integer ldb, scomplex* alpha,
                    scomplex* beta, scomplex* vl, integer ldvl, scomplex* vr,
                    integer ldvr, integer& ilo, integer& ihi,
                    float* lscale, float* rscale, float& abnrm,
                    float& bbnrm, float* rconde, float* rcondv)
{
    return cggevx(balanc, jobvl, jobvr, sense, n, a, lda, b, ldb, alpha, beta, vl, ldvl, vr, ldvr,
                  &ilo, &ihi, lscale, rscale, &abnrm, &bbnrm, rconde, rcondv);
}

inline integer ggevx( char balanc, char jobvl, char jobvr, char sense,
                    integer n, dcomplex* a, integer lda, dcomplex* b,
                    integer ldb, dcomplex* alpha,
                    dcomplex* beta, dcomplex* vl, integer ldvl, dcomplex* vr,
                    integer ldvr, integer& ilo, integer& ihi,
                    double* lscale, double* rscale, double& abnrm,
                    double& bbnrm, double* rconde, double* rcondv)
{
    return zggevx(balanc, jobvl, jobvr, sense, n, a, lda, b, ldb, alpha, beta, vl, ldvl, vr, ldvr,
                  &ilo, &ihi, lscale, rscale, &abnrm, &bbnrm, rconde, rcondv);
}

inline void hfrk( char transr, char uplo, char trans, integer n,
                   integer k, float alpha, const float* a,
                   integer lda, float beta, float* c )
{
    ssfrk(transr, uplo, trans, n, k, alpha, a, lda, beta, c);
}

inline void hfrk( char transr, char uplo, char trans, integer n,
                   integer k, double alpha, const double* a,
                   integer lda, double beta, double* c )
{
    dsfrk(transr, uplo, trans, n, k, alpha, a, lda, beta, c);
}

inline void hfrk( char transr, char uplo, char trans, integer n,
                   integer k, float alpha, const scomplex* a,
                   integer lda, float beta, scomplex* c )
{
    chfrk(transr, uplo, trans, n, k, alpha, a, lda, beta, c);
}

inline void hfrk( char transr, char uplo, char trans, integer n,
                   integer k, double alpha, const dcomplex* a,
                   integer lda, double beta, dcomplex* c )
{
    zhfrk(transr, uplo, trans, n, k, alpha, a, lda, beta, c);
}

inline void tfsm( char transr, char side, char uplo, char trans,
                   char diag, integer m, integer n, float alpha,
                   const float* a, float* b, integer ldb )
{
    stfsm(transr, side, uplo, trans, diag, m, n, alpha, a, b, ldb);
}

inline void tfsm( char transr, char side, char uplo, char trans,
                   char diag, integer m, integer n, double alpha,
                   const double* a, double* b, integer ldb )
{
    dtfsm(transr, side, uplo, trans, diag, m, n, alpha, a, b, ldb);
}

inline void tfsm( char transr, char side, char uplo, char trans,
                   char diag, integer m, integer n, scomplex alpha,
                   const scomplex* a, scomplex* b, integer ldb )
{
    ctfsm(transr, side, uplo, trans, diag, m, n, alpha, a, b, ldb);
}

inline void tfsm( char transr, char side, char uplo, char trans,
                   char diag, integer m, integer n, dcomplex alpha,
                   const dcomplex* a, dcomplex* b, integer ldb )
{
    ztfsm(transr, side, uplo, trans, diag, m, n, alpha, a, b, ldb);
}

inline integer tfttp( char transr, char uplo, integer n, const float* arf,
                    float* ap )
{
    return stfttp(transr, uplo, n, arf, ap);
}

inline integer tfttp( char transr, char uplo, integer n, const double* arf,
                    double* ap )
{
    return dtfttp(transr, uplo, n, arf, ap);
}

inline integer tfttp( char transr, char uplo, integer n, const scomplex* arf,
                    scomplex* ap )
{
    return ctfttp(transr, uplo, n, arf, ap);
}

inline integer tfttp( char transr, char uplo, integer n, const dcomplex* arf,
                    dcomplex* ap )
{
    return ztfttp(transr, uplo, n, arf, ap);
}

inline integer tfttr( char transr, char uplo, integer n, const float* arf,
                    float* a, integer lda )
{
    return stfttr(transr, uplo, n, arf, a, lda);
}

inline integer tfttr( char transr, char uplo, integer n, const double* arf,
                    double* a, integer lda )
{
    return dtfttr(transr, uplo, n, arf, a, lda);
}

inline integer tfttr( char transr, char uplo, integer n, const scomplex* arf,
                    scomplex* a, integer lda )
{
    return ctfttr(transr, uplo, n, arf, a, lda);
}

inline integer tfttr( char transr, char uplo, integer n, const dcomplex* arf,
                    dcomplex* a, integer lda )
{
    return ztfttr(transr, uplo, n, arf, a, lda);
}

inline integer tpttf( char transr, char uplo, integer n, const float* ap,
                    float* arf )
{
    return stpttf(transr, uplo, n, ap, arf);
}

inline integer tpttf( char transr, char uplo, integer n, const double* ap,
                    double* arf )
{
    return dtpttf(transr, uplo, n, ap, arf);
}

inline integer tpttf( char transr, char uplo, integer n, const scomplex* ap,
                    scomplex* arf )
{
    return ctpttf(transr, uplo, n, ap, arf);
}

inline integer tpttf( char transr, char uplo, integer n, const dcomplex* ap,
                    dcomplex* arf )
{
    return ztpttf(transr, uplo, n, ap, arf);
}

inline integer tpttr( char uplo, integer n, const float* ap, float* a,
                    integer lda )
{
    return stpttr(uplo, n, ap, a, lda);
}

inline integer tpttr( char uplo, integer n, const double* ap, double* a,
                    integer lda )
{
    return dtpttr(uplo, n, ap, a, lda);
}

inline integer tpttr( char uplo, integer n, const scomplex* ap, scomplex* a,
                    integer lda )
{
    return ctpttr(uplo, n, ap, a, lda);
}

inline integer tpttr( char uplo, integer n, const dcomplex* ap, dcomplex* a,
                    integer lda )
{
    return ztpttr(uplo, n, ap, a, lda);
}

inline integer trttf( char transr, char uplo, integer n, const float* a,
                    integer lda, float* arf )
{
    return strttf(transr, uplo, n, a, lda, arf);
}

inline integer trttf( char transr, char uplo, integer n, const double* a,
                    integer lda, double* arf )
{
    return dtrttf(transr, uplo, n, a, lda, arf);
}

inline integer trttf( char transr, char uplo, integer n, const scomplex* a,
                    integer lda, scomplex* arf )
{
    return ctrttf(transr, uplo, n, a, lda, arf);
}

inline integer trttf( char transr, char uplo, integer n, const dcomplex* a,
                    integer lda, dcomplex* arf )
{
    return ztrttf(transr, uplo, n, a, lda, arf);
}

inline integer trttp( char uplo, integer n, const float* a, integer lda,
                    float* ap )
{
    return strttp(uplo, n, a, lda, ap);
}

inline integer trttp( char uplo, integer n, const double* a, integer lda,
                    double* ap )
{
    return dtrttp(uplo, n, a, lda, ap);
}

inline integer trttp( char uplo, integer n, const scomplex* a, integer lda,
                    scomplex* ap )
{
    return ctrttp(uplo, n, a, lda, ap);
}

inline integer trttp( char uplo, integer n, const dcomplex* a, integer lda,
                    dcomplex* ap )
{
    return ztrttp(uplo, n, a, lda, ap);
}

inline integer geqrfp( integer m, integer n, float* a, integer lda,
                     float* tau)
{
    return sgeqrfp(m, n, a, lda, tau);
}

inline integer geqrfp( integer m, integer n, double* a, integer lda,
                     double* tau)
{
    return dgeqrfp(m, n, a, lda, tau);
}

inline integer geqrfp( integer m, integer n, scomplex* a, integer lda,
                     scomplex* tau)
{
    return cgeqrfp(m, n, a, lda, tau);
}

inline integer geqrfp( integer m, integer n, dcomplex* a, integer lda,
                     dcomplex* tau)
{
    return zgeqrfp(m, n, a, lda, tau);
}

}

#endif
