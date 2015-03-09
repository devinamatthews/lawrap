#ifndef _LAWRAP_INTERNAL_LAPACK_F77_H_
#define _LAWRAP_INTERNAL_LAPACK_F77_H_

#ifndef _LAWRAP_LAPACK_H_
#error "This file must only be included through lapack.h."
#endif

#ifdef __cplusplus
extern "C"
{
#endif

/*
 * FORTRAN prototypes
 */
void FC_FUNC(sgetrf,SGETRF)( integer* m, integer* n, float* a, integer* lda,
                    integer* ipiv, integer *info );

void FC_FUNC(dgetrf,DGETRF)( integer* m, integer* n, double* a, integer* lda,
                    integer* ipiv, integer *info );

void FC_FUNC(cgetrf,CGETRF)( integer* m, integer* n, scomplex* a, integer* lda,
                    integer* ipiv, integer *info );

void FC_FUNC(zgetrf,ZGETRF)( integer* m, integer* n, dcomplex* a, integer* lda,
                    integer* ipiv, integer *info );

void FC_FUNC(sgbtrf,SGBTRF)( integer* m, integer* n, integer* kl,
                    integer* ku, float* ab, integer* ldab,
                    integer* ipiv, integer *info );

void FC_FUNC(dgbtrf,DGBTRF)( integer* m, integer* n, integer* kl,
                    integer* ku, double* ab, integer* ldab,
                    integer* ipiv, integer *info );

void FC_FUNC(cgbtrf,CGBTRF)( integer* m, integer* n, integer* kl,
                    integer* ku, scomplex* ab, integer* ldab,
                    integer* ipiv, integer *info );

void FC_FUNC(zgbtrf,ZGBTRF)( integer* m, integer* n, integer* kl,
                    integer* ku, dcomplex* ab, integer* ldab,
                    integer* ipiv, integer *info );

void FC_FUNC(sgttrf,SGTTRF)( integer* n, float* dl, float* d, float* du,
                    float* du2, integer* ipiv, integer *info );

void FC_FUNC(dgttrf,DGTTRF)( integer* n, double* dl, double* d, double* du,
                    double* du2, integer* ipiv, integer *info );

void FC_FUNC(cgttrf,CGTTRF)( integer* n, scomplex* dl, scomplex* d, scomplex* du,
                    scomplex* du2, integer* ipiv, integer *info );

void FC_FUNC(zgttrf,ZGTTRF)( integer* n, dcomplex* dl, dcomplex* d, dcomplex* du,
                    dcomplex* du2, integer* ipiv, integer *info );

void FC_FUNC(spotrf,SPOTRF)( char* uplo, integer* n, float* a, integer* lda,
                    integer *info );

void FC_FUNC(dpotrf,DPOTRF)( char* uplo, integer* n, double* a, integer* lda,
                    integer *info );

void FC_FUNC(cpotrf,CPOTRF)( char* uplo, integer* n, scomplex* a, integer* lda,
                    integer *info );

void FC_FUNC(zpotrf,ZPOTRF)( char* uplo, integer* n, dcomplex* a, integer* lda,
                    integer *info );

void FC_FUNC(spstrf,SPSTRF)( char* uplo, integer* n, float* a, integer* lda,
                    integer* piv, integer* rank, float* tol,
                    float* work, integer *info );

void FC_FUNC(dpstrf,DPSTRF)( char* uplo, integer* n, double* a, integer* lda,
                    integer* piv, integer* rank, double* tol,
                    double* work, integer *info );

void FC_FUNC(cpstrf,CPSTRF)( char* uplo, integer* n, scomplex* a, integer* lda,
                    integer* piv, integer* rank, float* tol,
                    float* work, integer *info );

void FC_FUNC(zpstrf,ZPSTRF)( char* uplo, integer* n, dcomplex* a, integer* lda,
                    integer* piv, integer* rank, double* tol,
                    double* work, integer *info );

void FC_FUNC(spftrf,SPFTRF)( char* transr, char* uplo, integer* n, float* a,
                    integer *info );

void FC_FUNC(dpftrf,DPFTRF)( char* transr, char* uplo, integer* n, double* a,
                    integer *info );

void FC_FUNC(cpftrf,CPFTRF)( char* transr, char* uplo, integer* n, scomplex* a,
                    integer *info );

void FC_FUNC(zpftrf,ZPFTRF)( char* transr, char* uplo, integer* n, dcomplex* a,
                    integer *info );

void FC_FUNC(spptrf,SPPTRF)( char* uplo, integer* n, float* ap, integer *info );

void FC_FUNC(dpptrf,DPPTRF)( char* uplo, integer* n, double* ap, integer *info );

void FC_FUNC(cpptrf,CPPTRF)( char* uplo, integer* n, scomplex* ap, integer *info );

void FC_FUNC(zpptrf,ZPPTRF)( char* uplo, integer* n, dcomplex* ap, integer *info );

void FC_FUNC(spbtrf,SPBTRF)( char* uplo, integer* n, integer* kd, float* ab,
                    integer* ldab, integer *info );

void FC_FUNC(dpbtrf,DPBTRF)( char* uplo, integer* n, integer* kd, double* ab,
                    integer* ldab, integer *info );

void FC_FUNC(cpbtrf,CPBTRF)( char* uplo, integer* n, integer* kd, scomplex* ab,
                    integer* ldab, integer *info );

void FC_FUNC(zpbtrf,ZPBTRF)( char* uplo, integer* n, integer* kd, dcomplex* ab,
                    integer* ldab, integer *info );

void FC_FUNC(spttrf,SPTTRF)( integer* n, float* d, float* e, integer *info );

void FC_FUNC(dpttrf,DPTTRF)( integer* n, double* d, double* e, integer *info );

void FC_FUNC(cpttrf,CPTTRF)( integer* n, float* d, scomplex* e, integer *info );

void FC_FUNC(zpttrf,ZPTTRF)( integer* n, double* d, dcomplex* e, integer *info );

void FC_FUNC(ssytrf,SSYTRF)( char* uplo, integer* n, float* a, integer* lda,
                    integer* ipiv, float* work, integer* lwork,
                    integer *info );

void FC_FUNC(dsytrf,DSYTRF)( char* uplo, integer* n, double* a, integer* lda,
                    integer* ipiv, double* work, integer* lwork,
                    integer *info );

void FC_FUNC(csytrf,CSYTRF)( char* uplo, integer* n, scomplex* a, integer* lda,
                    integer* ipiv, scomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(zsytrf,ZSYTRF)( char* uplo, integer* n, dcomplex* a, integer* lda,
                    integer* ipiv, dcomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(chetrf,CHETRF)( char* uplo, integer* n, scomplex* a, integer* lda,
                    integer* ipiv, scomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(zhetrf,ZHETRF)( char* uplo, integer* n, dcomplex* a, integer* lda,
                    integer* ipiv, dcomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(ssptrf,SSPTRF)( char* uplo, integer* n, float* ap, integer* ipiv,
                    integer *info );

void FC_FUNC(dsptrf,DSPTRF)( char* uplo, integer* n, double* ap, integer* ipiv,
                    integer *info );

void FC_FUNC(csptrf,CSPTRF)( char* uplo, integer* n, scomplex* ap, integer* ipiv,
                    integer *info );

void FC_FUNC(zsptrf,ZSPTRF)( char* uplo, integer* n, dcomplex* ap, integer* ipiv,
                    integer *info );

void FC_FUNC(chptrf,CHPTRF)( char* uplo, integer* n, scomplex* ap, integer* ipiv,
                    integer *info );

void FC_FUNC(zhptrf,ZHPTRF)( char* uplo, integer* n, dcomplex* ap, integer* ipiv,
                    integer *info );

void FC_FUNC(sgetrs,SGETRS)( char* trans, integer* n, integer* nrhs,
                    const float* a, integer* lda, const integer* ipiv,
                    float* b, integer* ldb, integer *info );

void FC_FUNC(dgetrs,DGETRS)( char* trans, integer* n, integer* nrhs,
                    const double* a, integer* lda, const integer* ipiv,
                    double* b, integer* ldb, integer *info );

void FC_FUNC(cgetrs,CGETRS)( char* trans, integer* n, integer* nrhs,
                    const scomplex* a, integer* lda, const integer* ipiv,
                    scomplex* b, integer* ldb, integer *info );

void FC_FUNC(zgetrs,ZGETRS)( char* trans, integer* n, integer* nrhs,
                    const dcomplex* a, integer* lda, const integer* ipiv,
                    dcomplex* b, integer* ldb, integer *info );

void FC_FUNC(sgbtrs,SGBTRS)( char* trans, integer* n, integer* kl, integer* ku,
                    integer* nrhs, const float* ab, integer* ldab,
                    const integer* ipiv, float* b, integer* ldb,
                    integer *info );

void FC_FUNC(dgbtrs,DGBTRS)( char* trans, integer* n, integer* kl, integer* ku,
                    integer* nrhs, const double* ab, integer* ldab,
                    const integer* ipiv, double* b, integer* ldb,
                    integer *info );

void FC_FUNC(cgbtrs,CGBTRS)( char* trans, integer* n, integer* kl, integer* ku,
                    integer* nrhs, const scomplex* ab, integer* ldab,
                    const integer* ipiv, scomplex* b, integer* ldb,
                    integer *info );

void FC_FUNC(zgbtrs,ZGBTRS)( char* trans, integer* n, integer* kl, integer* ku,
                    integer* nrhs, const dcomplex* ab, integer* ldab,
                    const integer* ipiv, dcomplex* b, integer* ldb,
                    integer *info );

void FC_FUNC(sgttrs,SGTTRS)( char* trans, integer* n, integer* nrhs,
                    const float* dl, const float* d, const float* du,
                    const float* du2, const integer* ipiv, float* b,
                    integer* ldb, integer *info );

void FC_FUNC(dgttrs,DGTTRS)( char* trans, integer* n, integer* nrhs,
                    const double* dl, const double* d, const double* du,
                    const double* du2, const integer* ipiv, double* b,
                    integer* ldb, integer *info );

void FC_FUNC(cgttrs,CGTTRS)( char* trans, integer* n, integer* nrhs,
                    const scomplex* dl, const scomplex* d, const scomplex* du,
                    const scomplex* du2, const integer* ipiv, scomplex* b,
                    integer* ldb, integer *info );

void FC_FUNC(zgttrs,ZGTTRS)( char* trans, integer* n, integer* nrhs,
                    const dcomplex* dl, const dcomplex* d, const dcomplex* du,
                    const dcomplex* du2, const integer* ipiv, dcomplex* b,
                    integer* ldb, integer *info );

void FC_FUNC(spotrs,SPOTRS)( char* uplo, integer* n, integer* nrhs,
                    const float* a, integer* lda, float* b,
                    integer* ldb, integer *info );

void FC_FUNC(dpotrs,DPOTRS)( char* uplo, integer* n, integer* nrhs,
                    const double* a, integer* lda, double* b,
                    integer* ldb, integer *info );

void FC_FUNC(cpotrs,CPOTRS)( char* uplo, integer* n, integer* nrhs,
                    const scomplex* a, integer* lda, scomplex* b,
                    integer* ldb, integer *info );

void FC_FUNC(zpotrs,ZPOTRS)( char* uplo, integer* n, integer* nrhs,
                    const dcomplex* a, integer* lda, dcomplex* b,
                    integer* ldb, integer *info );

void FC_FUNC(spftrs,SPFTRS)( char* transr, char* uplo, integer* n, integer* nrhs,
                    const float* a, float* b, integer* ldb,
                    integer *info );

void FC_FUNC(dpftrs,DPFTRS)( char* transr, char* uplo, integer* n, integer* nrhs,
                    const double* a, double* b, integer* ldb,
                    integer *info );

void FC_FUNC(cpftrs,CPFTRS)( char* transr, char* uplo, integer* n, integer* nrhs,
                    const scomplex* a, scomplex* b, integer* ldb,
                    integer *info );

void FC_FUNC(zpftrs,ZPFTRS)( char* transr, char* uplo, integer* n, integer* nrhs,
                    const dcomplex* a, dcomplex* b, integer* ldb,
                    integer *info );

void FC_FUNC(spptrs,SPPTRS)( char* uplo, integer* n, integer* nrhs,
                    const float* ap, float* b, integer* ldb,
                    integer *info );

void FC_FUNC(dpptrs,DPPTRS)( char* uplo, integer* n, integer* nrhs,
                    const double* ap, double* b, integer* ldb,
                    integer *info );

void FC_FUNC(cpptrs,CPPTRS)( char* uplo, integer* n, integer* nrhs,
                    const scomplex* ap, scomplex* b, integer* ldb,
                    integer *info );

void FC_FUNC(zpptrs,ZPPTRS)( char* uplo, integer* n, integer* nrhs,
                    const dcomplex* ap, dcomplex* b, integer* ldb,
                    integer *info );

void FC_FUNC(spbtrs,SPBTRS)( char* uplo, integer* n, integer* kd, integer* nrhs,
                    const float* ab, integer* ldab, float* b,
                    integer* ldb, integer *info );

void FC_FUNC(dpbtrs,DPBTRS)( char* uplo, integer* n, integer* kd, integer* nrhs,
                    const double* ab, integer* ldab, double* b,
                    integer* ldb, integer *info );

void FC_FUNC(cpbtrs,CPBTRS)( char* uplo, integer* n, integer* kd, integer* nrhs,
                    const scomplex* ab, integer* ldab, scomplex* b,
                    integer* ldb, integer *info );

void FC_FUNC(zpbtrs,ZPBTRS)( char* uplo, integer* n, integer* kd, integer* nrhs,
                    const dcomplex* ab, integer* ldab, dcomplex* b,
                    integer* ldb, integer *info );

void FC_FUNC(spttrs,SPTTRS)( integer* n, integer* nrhs, const float* d,
                    const float* e, float* b, integer* ldb,
                    integer *info );

void FC_FUNC(dpttrs,DPTTRS)( integer* n, integer* nrhs, const double* d,
                    const double* e, double* b, integer* ldb,
                    integer *info );

void FC_FUNC(cpttrs,CPTTRS)( integer* n, integer* nrhs, const float* d,
                    const scomplex* e, scomplex* b, integer* ldb,
                    integer *info );

void FC_FUNC(zpttrs,ZPTTRS)( integer* n, integer* nrhs, const double* d,
                    const dcomplex* e, dcomplex* b, integer* ldb,
                    integer *info );

void FC_FUNC(ssytrs,SSYTRS)( char* uplo, integer* n, integer* nrhs,
                    const float* a, integer* lda, const integer* ipiv,
                    float* b, integer* ldb, integer *info );

void FC_FUNC(dsytrs,DSYTRS)( char* uplo, integer* n, integer* nrhs,
                    const double* a, integer* lda, const integer* ipiv,
                    double* b, integer* ldb, integer *info );

void FC_FUNC(csytrs,CSYTRS)( char* uplo, integer* n, integer* nrhs,
                    const scomplex* a, integer* lda, const integer* ipiv,
                    scomplex* b, integer* ldb, integer *info );

void FC_FUNC(zsytrs,ZSYTRS)( char* uplo, integer* n, integer* nrhs,
                    const dcomplex* a, integer* lda, const integer* ipiv,
                    dcomplex* b, integer* ldb, integer *info );

void FC_FUNC(chetrs,CHETRS)( char* uplo, integer* n, integer* nrhs,
                    const scomplex* a, integer* lda, const integer* ipiv,
                    scomplex* b, integer* ldb, integer *info );

void FC_FUNC(zhetrs,ZHETRS)( char* uplo, integer* n, integer* nrhs,
                    const dcomplex* a, integer* lda, const integer* ipiv,
                    dcomplex* b, integer* ldb, integer *info );

void FC_FUNC(ssptrs,SSPTRS)( char* uplo, integer* n, integer* nrhs,
                    const float* ap, const integer* ipiv, float* b,
                    integer* ldb, integer *info );

void FC_FUNC(dsptrs,DSPTRS)( char* uplo, integer* n, integer* nrhs,
                    const double* ap, const integer* ipiv, double* b,
                    integer* ldb, integer *info );

void FC_FUNC(csptrs,CSPTRS)( char* uplo, integer* n, integer* nrhs,
                    const scomplex* ap, const integer* ipiv, scomplex* b,
                    integer* ldb, integer *info );

void FC_FUNC(zsptrs,ZSPTRS)( char* uplo, integer* n, integer* nrhs,
                    const dcomplex* ap, const integer* ipiv, dcomplex* b,
                    integer* ldb, integer *info );

void FC_FUNC(chptrs,CHPTRS)( char* uplo, integer* n, integer* nrhs,
                    const scomplex* ap, const integer* ipiv, scomplex* b,
                    integer* ldb, integer *info );

void FC_FUNC(zhptrs,ZHPTRS)( char* uplo, integer* n, integer* nrhs,
                    const dcomplex* ap, const integer* ipiv, dcomplex* b,
                    integer* ldb, integer *info );

void FC_FUNC(strtrs,STRTRS)( char* uplo, char* trans, char* diag, integer* n,
                    integer* nrhs, const float* a, integer* lda,
                    float* b, integer* ldb, integer *info );

void FC_FUNC(dtrtrs,DTRTRS)( char* uplo, char* trans, char* diag, integer* n,
                    integer* nrhs, const double* a, integer* lda,
                    double* b, integer* ldb, integer *info );

void FC_FUNC(ctrtrs,CTRTRS)( char* uplo, char* trans, char* diag, integer* n,
                    integer* nrhs, const scomplex* a, integer* lda,
                    scomplex* b, integer* ldb, integer *info );

void FC_FUNC(ztrtrs,ZTRTRS)( char* uplo, char* trans, char* diag, integer* n,
                    integer* nrhs, const dcomplex* a, integer* lda,
                    dcomplex* b, integer* ldb, integer *info );

void FC_FUNC(stptrs,STPTRS)( char* uplo, char* trans, char* diag, integer* n,
                    integer* nrhs, const float* ap, float* b,
                    integer* ldb, integer *info );

void FC_FUNC(dtptrs,DTPTRS)( char* uplo, char* trans, char* diag, integer* n,
                    integer* nrhs, const double* ap, double* b,
                    integer* ldb, integer *info );

void FC_FUNC(ctptrs,CTPTRS)( char* uplo, char* trans, char* diag, integer* n,
                    integer* nrhs, const scomplex* ap, scomplex* b,
                    integer* ldb, integer *info );

void FC_FUNC(ztptrs,ZTPTRS)( char* uplo, char* trans, char* diag, integer* n,
                    integer* nrhs, const dcomplex* ap, dcomplex* b,
                    integer* ldb, integer *info );

void FC_FUNC(stbtrs,STBTRS)( char* uplo, char* trans, char* diag, integer* n,
                    integer* kd, integer* nrhs, const float* ab,
                    integer* ldab, float* b, integer* ldb,
                    integer *info );

void FC_FUNC(dtbtrs,DTBTRS)( char* uplo, char* trans, char* diag, integer* n,
                    integer* kd, integer* nrhs, const double* ab,
                    integer* ldab, double* b, integer* ldb,
                    integer *info );

void FC_FUNC(ctbtrs,CTBTRS)( char* uplo, char* trans, char* diag, integer* n,
                    integer* kd, integer* nrhs, const scomplex* ab,
                    integer* ldab, scomplex* b, integer* ldb,
                    integer *info );

void FC_FUNC(ztbtrs,ZTBTRS)( char* uplo, char* trans, char* diag, integer* n,
                    integer* kd, integer* nrhs, const dcomplex* ab,
                    integer* ldab, dcomplex* b, integer* ldb,
                    integer *info );

void FC_FUNC(sgecon,SGECON)( char* norm, integer* n, const float* a, integer* lda,
                    float* anorm, float* rcond, float* work,
                    integer* iwork, integer *info );

void FC_FUNC(dgecon,DGECON)( char* norm, integer* n, const double* a, integer* lda,
                    double* anorm, double* rcond, double* work,
                    integer* iwork, integer *info );

void FC_FUNC(cgecon,CGECON)( char* norm, integer* n, const scomplex* a, integer* lda,
                    float* anorm, float* rcond, scomplex* work,
                    float* rwork, integer *info );

void FC_FUNC(zgecon,ZGECON)( char* norm, integer* n, const dcomplex* a, integer* lda,
                    double* anorm, double* rcond, dcomplex* work,
                    double* rwork, integer *info );

void FC_FUNC(sgbcon,SGBCON)( char* norm, integer* n, integer* kl, integer* ku,
                    const float* ab, integer* ldab, const integer* ipiv,
                    float* anorm, float* rcond, float* work,
                    integer* iwork, integer *info );

void FC_FUNC(dgbcon,DGBCON)( char* norm, integer* n, integer* kl, integer* ku,
                    const double* ab, integer* ldab, const integer* ipiv,
                    double* anorm, double* rcond, double* work,
                    integer* iwork, integer *info );

void FC_FUNC(cgbcon,CGBCON)( char* norm, integer* n, integer* kl, integer* ku,
                    const scomplex* ab, integer* ldab, const integer* ipiv,
                    float* anorm, float* rcond, scomplex* work,
                    float* rwork, integer *info );

void FC_FUNC(zgbcon,ZGBCON)( char* norm, integer* n, integer* kl, integer* ku,
                    const dcomplex* ab, integer* ldab, const integer* ipiv,
                    double* anorm, double* rcond, dcomplex* work,
                    double* rwork, integer *info );

void FC_FUNC(sgtcon,SGTCON)( char* norm, integer* n, const float* dl,
                    const float* d, const float* du, const float* du2,
                    const integer* ipiv, float* anorm, float* rcond,
                    float* work, integer* iwork, integer *info );

void FC_FUNC(dgtcon,DGTCON)( char* norm, integer* n, const double* dl,
                    const double* d, const double* du, const double* du2,
                    const integer* ipiv, double* anorm, double* rcond,
                    double* work, integer* iwork, integer *info );

void FC_FUNC(cgtcon,CGTCON)( char* norm, integer* n, const scomplex* dl,
                    const scomplex* d, const scomplex* du, const scomplex* du2,
                    const integer* ipiv, float* anorm, float* rcond,
                    scomplex* work, integer *info );

void FC_FUNC(zgtcon,ZGTCON)( char* norm, integer* n, const dcomplex* dl,
                    const dcomplex* d, const dcomplex* du, const dcomplex* du2,
                    const integer* ipiv, double* anorm, double* rcond,
                    dcomplex* work, integer *info );

void FC_FUNC(spocon,SPOCON)( char* uplo, integer* n, const float* a, integer* lda,
                    float* anorm, float* rcond, float* work,
                    integer* iwork, integer *info );

void FC_FUNC(dpocon,DPOCON)( char* uplo, integer* n, const double* a, integer* lda,
                    double* anorm, double* rcond, double* work,
                    integer* iwork, integer *info );

void FC_FUNC(cpocon,CPOCON)( char* uplo, integer* n, const scomplex* a, integer* lda,
                    float* anorm, float* rcond, scomplex* work,
                    float* rwork, integer *info );

void FC_FUNC(zpocon,ZPOCON)( char* uplo, integer* n, const dcomplex* a, integer* lda,
                    double* anorm, double* rcond, dcomplex* work,
                    double* rwork, integer *info );

void FC_FUNC(sppcon,SPPCON)( char* uplo, integer* n, const float* ap, float* anorm,
                    float* rcond, float* work, integer* iwork,
                    integer *info );

void FC_FUNC(dppcon,DPPCON)( char* uplo, integer* n, const double* ap, double* anorm,
                    double* rcond, double* work, integer* iwork,
                    integer *info );

void FC_FUNC(cppcon,CPPCON)( char* uplo, integer* n, const scomplex* ap, float* anorm,
                    float* rcond, scomplex* work, float* rwork,
                    integer *info );

void FC_FUNC(zppcon,ZPPCON)( char* uplo, integer* n, const dcomplex* ap, double* anorm,
                    double* rcond, dcomplex* work, double* rwork,
                    integer *info );

void FC_FUNC(spbcon,SPBCON)( char* uplo, integer* n, integer* kd, const float* ab,
                    integer* ldab, float* anorm, float* rcond,
                    float* work, integer* iwork, integer *info );

void FC_FUNC(dpbcon,DPBCON)( char* uplo, integer* n, integer* kd, const double* ab,
                    integer* ldab, double* anorm, double* rcond,
                    double* work, integer* iwork, integer *info );

void FC_FUNC(cpbcon,CPBCON)( char* uplo, integer* n, integer* kd, const scomplex* ab,
                    integer* ldab, float* anorm, float* rcond,
                    scomplex* work, float* iwork, integer *info );

void FC_FUNC(zpbcon,ZPBCON)( char* uplo, integer* n, integer* kd, const dcomplex* ab,
                    integer* ldab, double* anorm, double* rcond,
                    dcomplex* work, double* iwork, integer *info );

void FC_FUNC(sptcon,SPTCON)( integer* n, const float* d, const float* e,
                    float* anorm, float* rcond, float* work,
                    integer *info );

void FC_FUNC(dptcon,DPTCON)( integer* n, const double* d, const double* e,
                    double* anorm, double* rcond, double* work,
                    integer *info );

void FC_FUNC(cptcon,CPTCON)( integer* n, const float* d, const scomplex* e,
                    float* anorm, float* rcond, float* work,
                    integer *info );

void FC_FUNC(zptcon,ZPTCON)( integer* n, const double* d, const dcomplex* e,
                    double* anorm, double* rcond, double* work,
                    integer *info );

void FC_FUNC(ssycon,SSYCON)( char* uplo, integer* n, const float* a, integer* lda,
                    const integer* ipiv, float* anorm, float* rcond,
                    float* work, integer* iwork, integer *info );

void FC_FUNC(dsycon,DSYCON)( char* uplo, integer* n, const double* a, integer* lda,
                    const integer* ipiv, double* anorm, double* rcond,
                    double* work, integer* iwork, integer *info );

void FC_FUNC(csycon,CSYCON)( char* uplo, integer* n, const scomplex* a, integer* lda,
                    const integer* ipiv, float* anorm, float* rcond,
                    scomplex* work, integer *info );

void FC_FUNC(zsycon,ZSYCON)( char* uplo, integer* n, const dcomplex* a, integer* lda,
                    const integer* ipiv, double* anorm, double* rcond,
                    dcomplex* work, integer *info );

void FC_FUNC(checon,CHECON)( char* uplo, integer* n, const scomplex* a, integer* lda,
                    const integer* ipiv, float* anorm, float* rcond,
                    scomplex* work, integer *info );

void FC_FUNC(zhecon,ZHECON)( char* uplo, integer* n, const dcomplex* a, integer* lda,
                    const integer* ipiv, double* anorm, double* rcond,
                    dcomplex* work, integer *info );

void FC_FUNC(sspcon,SSPCON)( char* uplo, integer* n, const float* ap,
                    const integer* ipiv, float* anorm, float* rcond,
                    float* work, integer* iwork, integer *info );

void FC_FUNC(dspcon,DSPCON)( char* uplo, integer* n, const double* ap,
                    const integer* ipiv, double* anorm, double* rcond,
                    double* work, integer* iwork, integer *info );

void FC_FUNC(cspcon,CSPCON)( char* uplo, integer* n, const scomplex* ap,
                    const integer* ipiv, float* anorm, float* rcond,
                    scomplex* work, integer *info );

void FC_FUNC(zspcon,ZSPCON)( char* uplo, integer* n, const dcomplex* ap,
                    const integer* ipiv, double* anorm, double* rcond,
                    dcomplex* work, integer *info );

void FC_FUNC(chpcon,CHPCON)( char* uplo, integer* n, const scomplex* ap,
                    const integer* ipiv, float* anorm, float* rcond,
                    scomplex* work, integer *info );

void FC_FUNC(zhpcon,ZHPCON)( char* uplo, integer* n, const dcomplex* ap,
                    const integer* ipiv, double* anorm, double* rcond,
                    dcomplex* work, integer *info );

void FC_FUNC(strcon,STRCON)( char* norm, char* uplo, char* diag, integer* n,
                    const float* a, integer* lda, float* rcond,
                    float* work, integer* iwork, integer *info );

void FC_FUNC(dtrcon,DTRCON)( char* norm, char* uplo, char* diag, integer* n,
                    const double* a, integer* lda, double* rcond,
                    double* work, integer* iwork, integer *info );

void FC_FUNC(ctrcon,CTRCON)( char* norm, char* uplo, char* diag, integer* n,
                    const scomplex* a, integer* lda, float* rcond,
                    scomplex* work, float* rwork, integer *info );

void FC_FUNC(ztrcon,ZTRCON)( char* norm, char* uplo, char* diag, integer* n,
                    const dcomplex* a, integer* lda, double* rcond,
                    dcomplex* work, double* rwork, integer *info );

void FC_FUNC(stpcon,STPCON)( char* norm, char* uplo, char* diag, integer* n,
                    const float* ap, float* rcond, float* work,
                    integer* iwork, integer *info );

void FC_FUNC(dtpcon,DTPCON)( char* norm, char* uplo, char* diag, integer* n,
                    const double* ap, double* rcond, double* work,
                    integer* iwork, integer *info );

void FC_FUNC(ctpcon,CTPCON)( char* norm, char* uplo, char* diag, integer* n,
                    const scomplex* ap, float* rcond, scomplex* work,
                    float* rwork, integer *info );

void FC_FUNC(ztpcon,ZTPCON)( char* norm, char* uplo, char* diag, integer* n,
                    const dcomplex* ap, double* rcond, dcomplex* work,
                    double* rwork, integer *info );

void FC_FUNC(stbcon,STBCON)( char* norm, char* uplo, char* diag, integer* n,
                    integer* kd, const float* ab, integer* ldab,
                    float* rcond, float* work, integer* iwork,
                    integer *info );

void FC_FUNC(dtbcon,DTBCON)( char* norm, char* uplo, char* diag, integer* n,
                    integer* kd, const double* ab, integer* ldab,
                    double* rcond, double* work, integer* iwork,
                    integer *info );

void FC_FUNC(ctbcon,CTBCON)( char* norm, char* uplo, char* diag, integer* n,
                    integer* kd, const scomplex* ab, integer* ldab,
                    float* rcond, scomplex* work, float* rwork,
                    integer *info );

void FC_FUNC(ztbcon,ZTBCON)( char* norm, char* uplo, char* diag, integer* n,
                    integer* kd, const dcomplex* ab, integer* ldab,
                    double* rcond, dcomplex* work, double* rwork,
                    integer *info );

void FC_FUNC(sgerfs,SGERFS)( char* trans, integer* n, integer* nrhs,
                    const float* a, integer* lda, const float* af,
                    integer* ldaf, const integer* ipiv, const float* b,
                    integer* ldb, float* x, integer* ldx, float* ferr,
                    float* berr, float* work, integer* iwork,
                    integer *info );

void FC_FUNC(dgerfs,DGERFS)( char* trans, integer* n, integer* nrhs,
                    const double* a, integer* lda, const double* af,
                    integer* ldaf, const integer* ipiv, const double* b,
                    integer* ldb, double* x, integer* ldx, double* ferr,
                    double* berr, double* work, integer* iwork,
                    integer *info );

void FC_FUNC(cgerfs,CGERFS)( char* trans, integer* n, integer* nrhs,
                    const scomplex* a, integer* lda, const scomplex* af,
                    integer* ldaf, const integer* ipiv, const scomplex* b,
                    integer* ldb, scomplex* x, integer* ldx, float* ferr,
                    float* berr, scomplex* work, float* rwork,
                    integer *info );

void FC_FUNC(zgerfs,ZGERFS)( char* trans, integer* n, integer* nrhs,
                    const dcomplex* a, integer* lda, const dcomplex* af,
                    integer* ldaf, const integer* ipiv, const dcomplex* b,
                    integer* ldb, dcomplex* x, integer* ldx, double* ferr,
                    double* berr, dcomplex* work, double* rwork,
                    integer *info );

void FC_FUNC(sgerfsx,SGERFSX)( char* trans, char* equed, integer* n, integer* nrhs,
                     const float* a, integer* lda, const float* af,
                     integer* ldaf, const integer* ipiv, const float* r,
                     const float* c, const float* b, integer* ldb,
                     float* x, integer* ldx, float* rcond, float* berr,
                     integer* n_err_bnds, float* err_bnds_norm,
                     float* err_bnds_comp, integer* nparams, float* params,
                     float* work, integer* iwork, integer *info );

void FC_FUNC(dgerfsx,DGERFSX)( char* trans, char* equed, integer* n, integer* nrhs,
                     const double* a, integer* lda, const double* af,
                     integer* ldaf, const integer* ipiv, const double* r,
                     const double* c, const double* b, integer* ldb,
                     double* x, integer* ldx, double* rcond, double* berr,
                     integer* n_err_bnds, double* err_bnds_norm,
                     double* err_bnds_comp, integer* nparams, double* params,
                     double* work, integer* iwork, integer *info );

void FC_FUNC(cgerfsx,CGERFSX)( char* trans, char* equed, integer* n, integer* nrhs,
                     const scomplex* a, integer* lda, const scomplex* af,
                     integer* ldaf, const integer* ipiv, const float* r,
                     const float* c, const scomplex* b, integer* ldb,
                     scomplex* x, integer* ldx, float* rcond, float* berr,
                     integer* n_err_bnds, float* err_bnds_norm,
                     float* err_bnds_comp, integer* nparams, float* params,
                     scomplex* work, float* rwork, integer *info );

void FC_FUNC(zgerfsx,ZGERFSX)( char* trans, char* equed, integer* n, integer* nrhs,
                     const dcomplex* a, integer* lda, const dcomplex* af,
                     integer* ldaf, const integer* ipiv, const double* r,
                     const double* c, const dcomplex* b, integer* ldb,
                     dcomplex* x, integer* ldx, double* rcond, double* berr,
                     integer* n_err_bnds, double* err_bnds_norm,
                     double* err_bnds_comp, integer* nparams, double* params,
                     dcomplex* work, double* rwork, integer *info );

void FC_FUNC(sgbrfs,SGBRFS)( char* trans, integer* n, integer* kl, integer* ku,
                    integer* nrhs, const float* ab, integer* ldab,
                    const float* afb, integer* ldafb,
                    const integer* ipiv, const float* b, integer* ldb,
                    float* x, integer* ldx, float* ferr, float* berr,
                    float* work, integer* iwork, integer *info );

void FC_FUNC(dgbrfs,DGBRFS)( char* trans, integer* n, integer* kl, integer* ku,
                    integer* nrhs, const double* ab, integer* ldab,
                    const double* afb, integer* ldafb,
                    const integer* ipiv, const double* b, integer* ldb,
                    double* x, integer* ldx, double* ferr, double* berr,
                    double* work, integer* iwork, integer *info );

void FC_FUNC(cgbrfs,CGBRFS)( char* trans, integer* n, integer* kl, integer* ku,
                    integer* nrhs, const scomplex* ab, integer* ldab,
                    const scomplex* afb, integer* ldafb,
                    const integer* ipiv, const scomplex* b, integer* ldb,
                    scomplex* x, integer* ldx, float* ferr, float* berr,
                    scomplex* work, float* rwork, integer *info );

void FC_FUNC(zgbrfs,ZGBRFS)( char* trans, integer* n, integer* kl, integer* ku,
                    integer* nrhs, const dcomplex* ab, integer* ldab,
                    const dcomplex* afb, integer* ldafb,
                    const integer* ipiv, const dcomplex* b, integer* ldb,
                    dcomplex* x, integer* ldx, double* ferr, double* berr,
                    dcomplex* work, double* rwork, integer *info );

void FC_FUNC(sgbrfsx,SGBRFSX)( char* trans, char* equed, integer* n, integer* kl,
                     integer* ku, integer* nrhs, const float* ab,
                     integer* ldab, const float* afb, integer* ldafb,
                     const integer* ipiv, const float* r, const float* c,
                     const float* b, integer* ldb, float* x,
                     integer* ldx, float* rcond, float* berr,
                     integer* n_err_bnds, float* err_bnds_norm,
                     float* err_bnds_comp, integer* nparams, float* params,
                     float* work, integer* iwork, integer *info );

void FC_FUNC(dgbrfsx,DGBRFSX)( char* trans, char* equed, integer* n, integer* kl,
                     integer* ku, integer* nrhs, const double* ab,
                     integer* ldab, const double* afb, integer* ldafb,
                     const integer* ipiv, const double* r, const double* c,
                     const double* b, integer* ldb, double* x,
                     integer* ldx, double* rcond, double* berr,
                     integer* n_err_bnds, double* err_bnds_norm,
                     double* err_bnds_comp, integer* nparams, double* params,
                     double* work, integer* iwork, integer *info );

void FC_FUNC(cgbrfsx,CGBRFSX)( char* trans, char* equed, integer* n, integer* kl,
                     integer* ku, integer* nrhs, const scomplex* ab,
                     integer* ldab, const scomplex* afb, integer* ldafb,
                     const integer* ipiv, const float* r, const float* c,
                     const scomplex* b, integer* ldb, scomplex* x,
                     integer* ldx, float* rcond, float* berr,
                     integer* n_err_bnds, float* err_bnds_norm,
                     float* err_bnds_comp, integer* nparams, float* params,
                     scomplex* work, float* rwork, integer *info );

void FC_FUNC(zgbrfsx,ZGBRFSX)( char* trans, char* equed, integer* n, integer* kl,
                     integer* ku, integer* nrhs, const dcomplex* ab,
                     integer* ldab, const dcomplex* afb, integer* ldafb,
                     const integer* ipiv, const double* r, const double* c,
                     const dcomplex* b, integer* ldb, dcomplex* x,
                     integer* ldx, double* rcond, double* berr,
                     integer* n_err_bnds, double* err_bnds_norm,
                     double* err_bnds_comp, integer* nparams, double* params,
                     dcomplex* work, double* rwork, integer *info );

void FC_FUNC(sgtrfs,SGTRFS)( char* trans, integer* n, integer* nrhs,
                    const float* dl, const float* d, const float* du,
                    const float* dlf, const float* df, const float* duf,
                    const float* du2, const integer* ipiv, const float* b,
                    integer* ldb, float* x, integer* ldx, float* ferr,
                    float* berr, float* work, integer* iwork,
                    integer *info );

void FC_FUNC(dgtrfs,DGTRFS)( char* trans, integer* n, integer* nrhs,
                    const double* dl, const double* d, const double* du,
                    const double* dlf, const double* df, const double* duf,
                    const double* du2, const integer* ipiv, const double* b,
                    integer* ldb, double* x, integer* ldx, double* ferr,
                    double* berr, double* work, integer* iwork,
                    integer *info );

void FC_FUNC(cgtrfs,CGTRFS)( char* trans, integer* n, integer* nrhs,
                    const scomplex* dl, const scomplex* d, const scomplex* du,
                    const scomplex* dlf, const scomplex* df, const scomplex* duf,
                    const scomplex* du2, const integer* ipiv, const scomplex* b,
                    integer* ldb, scomplex* x, integer* ldx, float* ferr,
                    float* berr, scomplex* work, float* rwork,
                    integer *info );

void FC_FUNC(zgtrfs,ZGTRFS)( char* trans, integer* n, integer* nrhs,
                    const dcomplex* dl, const dcomplex* d, const dcomplex* du,
                    const dcomplex* dlf, const dcomplex* df, const dcomplex* duf,
                    const dcomplex* du2, const integer* ipiv, const dcomplex* b,
                    integer* ldb, dcomplex* x, integer* ldx, double* ferr,
                    double* berr, dcomplex* work, double* rwork,
                    integer *info );

void FC_FUNC(sporfs,SPORFS)( char* uplo, integer* n, integer* nrhs,
                    const float* a, integer* lda, const float* af,
                    integer* ldaf, const float* b, integer* ldb,
                    float* x, integer* ldx, float* ferr, float* berr,
                    float* work, integer* iwork, integer *info );

void FC_FUNC(dporfs,DPORFS)( char* uplo, integer* n, integer* nrhs,
                    const double* a, integer* lda, const double* af,
                    integer* ldaf, const double* b, integer* ldb,
                    double* x, integer* ldx, double* ferr, double* berr,
                    double* work, integer* iwork, integer *info );

void FC_FUNC(cporfs,CPORFS)( char* uplo, integer* n, integer* nrhs,
                    const scomplex* a, integer* lda, const scomplex* af,
                    integer* ldaf, const scomplex* b, integer* ldb,
                    scomplex* x, integer* ldx, float* ferr, float* berr,
                    scomplex* work, float* rwork, integer *info );

void FC_FUNC(zporfs,ZPORFS)( char* uplo, integer* n, integer* nrhs,
                    const dcomplex* a, integer* lda, const dcomplex* af,
                    integer* ldaf, const dcomplex* b, integer* ldb,
                    dcomplex* x, integer* ldx, double* ferr, double* berr,
                    dcomplex* work, double* rwork, integer *info );

void FC_FUNC(sporfsx,SPORFSX)( char* uplo, char* equed, integer* n, integer* nrhs,
                     const float* a, integer* lda, const float* af,
                     integer* ldaf, const float* s, const float* b,
                     integer* ldb, float* x, integer* ldx, float* rcond,
                     float* berr, integer* n_err_bnds,
                     float* err_bnds_norm, float* err_bnds_comp,
                     integer* nparams, float* params, float* work,
                     integer* iwork, integer *info );

void FC_FUNC(dporfsx,DPORFSX)( char* uplo, char* equed, integer* n, integer* nrhs,
                     const double* a, integer* lda, const double* af,
                     integer* ldaf, const double* s, const double* b,
                     integer* ldb, double* x, integer* ldx, double* rcond,
                     double* berr, integer* n_err_bnds,
                     double* err_bnds_norm, double* err_bnds_comp,
                     integer* nparams, double* params, double* work,
                     integer* iwork, integer *info );

void FC_FUNC(cporfsx,CPORFSX)( char* uplo, char* equed, integer* n, integer* nrhs,
                     const scomplex* a, integer* lda, const scomplex* af,
                     integer* ldaf, const float* s, const scomplex* b,
                     integer* ldb, scomplex* x, integer* ldx, float* rcond,
                     float* berr, integer* n_err_bnds,
                     float* err_bnds_norm, float* err_bnds_comp,
                     integer* nparams, float* params, scomplex* work,
                     float* rwork, integer *info );

void FC_FUNC(zporfsx,ZPORFSX)( char* uplo, char* equed, integer* n, integer* nrhs,
                     const dcomplex* a, integer* lda, const dcomplex* af,
                     integer* ldaf, const double* s, const dcomplex* b,
                     integer* ldb, dcomplex* x, integer* ldx, double* rcond,
                     double* berr, integer* n_err_bnds,
                     double* err_bnds_norm, double* err_bnds_comp,
                     integer* nparams, double* params, dcomplex* work,
                     double* rwork, integer *info );

void FC_FUNC(spprfs,SPPRFS)( char* uplo, integer* n, integer* nrhs,
                    const float* ap, const float* afp, const float* b,
                    integer* ldb, float* x, integer* ldx, float* ferr,
                    float* berr, float* work, integer* iwork,
                    integer *info );

void FC_FUNC(dpprfs,DPPRFS)( char* uplo, integer* n, integer* nrhs,
                    const double* ap, const double* afp, const double* b,
                    integer* ldb, double* x, integer* ldx, double* ferr,
                    double* berr, double* work, integer* iwork,
                    integer *info );

void FC_FUNC(cpprfs,CPPRFS)( char* uplo, integer* n, integer* nrhs,
                    const scomplex* ap, const scomplex* afp, const scomplex* b,
                    integer* ldb, scomplex* x, integer* ldx, float* ferr,
                    float* berr, scomplex* work, float* rwork,
                    integer *info );

void FC_FUNC(zpprfs,ZPPRFS)( char* uplo, integer* n, integer* nrhs,
                    const dcomplex* ap, const dcomplex* afp, const dcomplex* b,
                    integer* ldb, dcomplex* x, integer* ldx, double* ferr,
                    double* berr, dcomplex* work, double* rwork,
                    integer *info );

void FC_FUNC(spbrfs,SPBRFS)( char* uplo, integer* n, integer* kd, integer* nrhs,
                    const float* ab, integer* ldab, const float* afb,
                    integer* ldafb, const float* b, integer* ldb,
                    float* x, integer* ldx, float* ferr, float* berr,
                    float* work, integer* iwork, integer *info );

void FC_FUNC(dpbrfs,DPBRFS)( char* uplo, integer* n, integer* kd, integer* nrhs,
                    const double* ab, integer* ldab, const double* afb,
                    integer* ldafb, const double* b, integer* ldb,
                    double* x, integer* ldx, double* ferr, double* berr,
                    double* work, integer* iwork, integer *info );

void FC_FUNC(cpbrfs,CPBRFS)( char* uplo, integer* n, integer* kd, integer* nrhs,
                    const scomplex* ab, integer* ldab, const scomplex* afb,
                    integer* ldafb, const scomplex* b, integer* ldb,
                    scomplex* x, integer* ldx, float* ferr, float* berr,
                    scomplex* work, float* rwork, integer *info );

void FC_FUNC(zpbrfs,ZPBRFS)( char* uplo, integer* n, integer* kd, integer* nrhs,
                    const dcomplex* ab, integer* ldab, const dcomplex* afb,
                    integer* ldafb, const dcomplex* b, integer* ldb,
                    dcomplex* x, integer* ldx, double* ferr, double* berr,
                    dcomplex* work, double* rwork, integer *info );

void FC_FUNC(sptrfs,SPTRFS)( integer* n, integer* nrhs, const float* d,
                    const float* e, const float* df, const float* ef,
                    const float* b, integer* ldb, float* x,
                    integer* ldx, float* ferr, float* berr, float* work,
                    integer *info );

void FC_FUNC(dptrfs,DPTRFS)( integer* n, integer* nrhs, const double* d,
                    const double* e, const double* df, const double* ef,
                    const double* b, integer* ldb, double* x,
                    integer* ldx, double* ferr, double* berr, double* work,
                    integer *info );

void FC_FUNC(cptrfs,CPTRFS)( integer* n, integer* nrhs, const float* d,
                    const scomplex* e, const float* df, const scomplex* ef,
                    const scomplex* b, integer* ldb, scomplex* x,
                    integer* ldx, float* ferr, float* berr, scomplex* work,
                    float* rwork, integer *info );

void FC_FUNC(zptrfs,ZPTRFS)( integer* n, integer* nrhs, const double* d,
                    const dcomplex* e, const double* df, const dcomplex* ef,
                    const dcomplex* b, integer* ldb, dcomplex* x,
                    integer* ldx, double* ferr, double* berr, dcomplex* work,
                    double* rwork, integer *info );

void FC_FUNC(ssyrfs,SSYRFS)( char* uplo, integer* n, integer* nrhs,
                    const float* a, integer* lda, const float* af,
                    integer* ldaf, const integer* ipiv, const float* b,
                    integer* ldb, float* x, integer* ldx, float* ferr,
                    float* berr, float* work, integer* iwork,
                    integer *info );

void FC_FUNC(dsyrfs,DSYRFS)( char* uplo, integer* n, integer* nrhs,
                    const double* a, integer* lda, const double* af,
                    integer* ldaf, const integer* ipiv, const double* b,
                    integer* ldb, double* x, integer* ldx, double* ferr,
                    double* berr, double* work, integer* iwork,
                    integer *info );

void FC_FUNC(csyrfs,CSYRFS)( char* uplo, integer* n, integer* nrhs,
                    const scomplex* a, integer* lda, const scomplex* af,
                    integer* ldaf, const integer* ipiv, const scomplex* b,
                    integer* ldb, scomplex* x, integer* ldx, float* ferr,
                    float* berr, scomplex* work, float* rwork,
                    integer *info );

void FC_FUNC(zsyrfs,ZSYRFS)( char* uplo, integer* n, integer* nrhs,
                    const dcomplex* a, integer* lda, const dcomplex* af,
                    integer* ldaf, const integer* ipiv, const dcomplex* b,
                    integer* ldb, dcomplex* x, integer* ldx, double* ferr,
                    double* berr, dcomplex* work, double* rwork,
                    integer *info );

void FC_FUNC(cherfs,CHERFS)( char* uplo, integer* n, integer* nrhs,
                    const scomplex* a, integer* lda, const scomplex* af,
                    integer* ldaf, const integer* ipiv, const scomplex* b,
                    integer* ldb, scomplex* x, integer* ldx, float* ferr,
                    float* berr, scomplex* work, float* rwork,
                    integer *info );

void FC_FUNC(zherfs,ZHERFS)( char* uplo, integer* n, integer* nrhs,
                    const dcomplex* a, integer* lda, const dcomplex* af,
                    integer* ldaf, const integer* ipiv, const dcomplex* b,
                    integer* ldb, dcomplex* x, integer* ldx, double* ferr,
                    double* berr, dcomplex* work, double* rwork,
                    integer *info );

void FC_FUNC(ssyrfsx,SSYRFSX)( char* uplo, char* equed, integer* n, integer* nrhs,
                     const float* a, integer* lda, const float* af,
                     integer* ldaf, const integer* ipiv, const float* s,
                     const float* b, integer* ldb, float* x,
                     integer* ldx, float* rcond, float* berr,
                     integer* n_err_bnds, float* err_bnds_norm,
                     float* err_bnds_comp, integer* nparams, float* params,
                     float* work, integer* iwork, integer *info );

void FC_FUNC(dsyrfsx,DSYRFSX)( char* uplo, char* equed, integer* n, integer* nrhs,
                     const double* a, integer* lda, const double* af,
                     integer* ldaf, const integer* ipiv, const double* s,
                     const double* b, integer* ldb, double* x,
                     integer* ldx, double* rcond, double* berr,
                     integer* n_err_bnds, double* err_bnds_norm,
                     double* err_bnds_comp, integer* nparams, double* params,
                     double* work, integer* iwork, integer *info );

void FC_FUNC(csyrfsx,CSYRFSX)( char* uplo, char* equed, integer* n, integer* nrhs,
                     const scomplex* a, integer* lda, const scomplex* af,
                     integer* ldaf, const integer* ipiv, const float* s,
                     const scomplex* b, integer* ldb, scomplex* x,
                     integer* ldx, float* rcond, float* berr,
                     integer* n_err_bnds, float* err_bnds_norm,
                     float* err_bnds_comp, integer* nparams, float* params,
                     scomplex* work, float* rwork, integer *info );

void FC_FUNC(zsyrfsx,ZSYRFSX)( char* uplo, char* equed, integer* n, integer* nrhs,
                     const dcomplex* a, integer* lda, const dcomplex* af,
                     integer* ldaf, const integer* ipiv, const double* s,
                     const dcomplex* b, integer* ldb, dcomplex* x,
                     integer* ldx, double* rcond, double* berr,
                     integer* n_err_bnds, double* err_bnds_norm,
                     double* err_bnds_comp, integer* nparams, double* params,
                     dcomplex* work, double* rwork, integer *info );

void FC_FUNC(cherfsx,CHERFSX)( char* uplo, char* equed, integer* n, integer* nrhs,
                     const scomplex* a, integer* lda, const scomplex* af,
                     integer* ldaf, const integer* ipiv, const float* s,
                     const scomplex* b, integer* ldb, scomplex* x,
                     integer* ldx, float* rcond, float* berr,
                     integer* n_err_bnds, float* err_bnds_norm,
                     float* err_bnds_comp, integer* nparams, float* params,
                     scomplex* work, float* rwork, integer *info );

void FC_FUNC(zherfsx,ZHERFSX)( char* uplo, char* equed, integer* n, integer* nrhs,
                     const dcomplex* a, integer* lda, const dcomplex* af,
                     integer* ldaf, const integer* ipiv, const double* s,
                     const dcomplex* b, integer* ldb, dcomplex* x,
                     integer* ldx, double* rcond, double* berr,
                     integer* n_err_bnds, double* err_bnds_norm,
                     double* err_bnds_comp, integer* nparams, double* params,
                     dcomplex* work, double* rwork, integer *info );

void FC_FUNC(ssprfs,SSPRFS)( char* uplo, integer* n, integer* nrhs,
                    const float* ap, const float* afp, const integer* ipiv,
                    const float* b, integer* ldb, float* x,
                    integer* ldx, float* ferr, float* berr, float* work,
                    integer* iwork, integer *info );

void FC_FUNC(dsprfs,DSPRFS)( char* uplo, integer* n, integer* nrhs,
                    const double* ap, const double* afp, const integer* ipiv,
                    const double* b, integer* ldb, double* x,
                    integer* ldx, double* ferr, double* berr, double* work,
                    integer* iwork, integer *info );

void FC_FUNC(csprfs,CSPRFS)( char* uplo, integer* n, integer* nrhs,
                    const scomplex* ap, const scomplex* afp, const integer* ipiv,
                    const scomplex* b, integer* ldb, scomplex* x,
                    integer* ldx, float* ferr, float* berr, scomplex* work,
                    float* rwork, integer *info );

void FC_FUNC(zsprfs,ZSPRFS)( char* uplo, integer* n, integer* nrhs,
                    const dcomplex* ap, const dcomplex* afp, const integer* ipiv,
                    const dcomplex* b, integer* ldb, dcomplex* x,
                    integer* ldx, double* ferr, double* berr, dcomplex* work,
                    double* rwork, integer *info );

void FC_FUNC(chprfs,CHPRFS)( char* uplo, integer* n, integer* nrhs,
                    const scomplex* ap, const scomplex* afp, const integer* ipiv,
                    const scomplex* b, integer* ldb, scomplex* x,
                    integer* ldx, float* ferr, float* berr, scomplex* work,
                    float* rwork, integer *info );

void FC_FUNC(zhprfs,ZHPRFS)( char* uplo, integer* n, integer* nrhs,
                    const dcomplex* ap, const dcomplex* afp, const integer* ipiv,
                    const dcomplex* b, integer* ldb, dcomplex* x,
                    integer* ldx, double* ferr, double* berr, dcomplex* work,
                    double* rwork, integer *info );

void FC_FUNC(strrfs,STRRFS)( char* uplo, char* trans, char* diag, integer* n,
                    integer* nrhs, const float* a, integer* lda,
                    const float* b, integer* ldb, const float* x,
                    integer* ldx, float* ferr, float* berr, float* work,
                    integer* iwork, integer *info );

void FC_FUNC(dtrrfs,DTRRFS)( char* uplo, char* trans, char* diag, integer* n,
                    integer* nrhs, const double* a, integer* lda,
                    const double* b, integer* ldb, const double* x,
                    integer* ldx, double* ferr, double* berr, double* work,
                    integer* iwork, integer *info );

void FC_FUNC(ctrrfs,CTRRFS)( char* uplo, char* trans, char* diag, integer* n,
                    integer* nrhs, const scomplex* a, integer* lda,
                    const scomplex* b, integer* ldb, const scomplex* x,
                    integer* ldx, float* ferr, float* berr, scomplex* work,
                    float* rwork, integer *info );

void FC_FUNC(ztrrfs,ZTRRFS)( char* uplo, char* trans, char* diag, integer* n,
                    integer* nrhs, const dcomplex* a, integer* lda,
                    const dcomplex* b, integer* ldb, const dcomplex* x,
                    integer* ldx, double* ferr, double* berr, dcomplex* work,
                    double* rwork, integer *info );

void FC_FUNC(stprfs,STPRFS)( char* uplo, char* trans, char* diag, integer* n,
                    integer* nrhs, const float* ap, const float* b,
                    integer* ldb, const float* x, integer* ldx,
                    float* ferr, float* berr, float* work, integer* iwork,
                    integer *info );

void FC_FUNC(dtprfs,DTPRFS)( char* uplo, char* trans, char* diag, integer* n,
                    integer* nrhs, const double* ap, const double* b,
                    integer* ldb, const double* x, integer* ldx,
                    double* ferr, double* berr, double* work, integer* iwork,
                    integer *info );

void FC_FUNC(ctprfs,CTPRFS)( char* uplo, char* trans, char* diag, integer* n,
                    integer* nrhs, const scomplex* ap, const scomplex* b,
                    integer* ldb, const scomplex* x, integer* ldx,
                    float* ferr, float* berr, scomplex* work, float* rwork,
                    integer *info );

void FC_FUNC(ztprfs,ZTPRFS)( char* uplo, char* trans, char* diag, integer* n,
                    integer* nrhs, const dcomplex* ap, const dcomplex* b,
                    integer* ldb, const dcomplex* x, integer* ldx,
                    double* ferr, double* berr, dcomplex* work, double* rwork,
                    integer *info );

void FC_FUNC(stbrfs,STBRFS)( char* uplo, char* trans, char* diag, integer* n,
                    integer* kd, integer* nrhs, const float* ab,
                    integer* ldab, const float* b, integer* ldb,
                    const float* x, integer* ldx, float* ferr,
                    float* berr, float* work, integer* iwork,
                    integer *info );

void FC_FUNC(dtbrfs,DTBRFS)( char* uplo, char* trans, char* diag, integer* n,
                    integer* kd, integer* nrhs, const double* ab,
                    integer* ldab, const double* b, integer* ldb,
                    const double* x, integer* ldx, double* ferr,
                    double* berr, double* work, integer* iwork,
                    integer *info );

void FC_FUNC(ctbrfs,CTBRFS)( char* uplo, char* trans, char* diag, integer* n,
                    integer* kd, integer* nrhs, const scomplex* ab,
                    integer* ldab, const scomplex* b, integer* ldb,
                    const scomplex* x, integer* ldx, float* ferr,
                    float* berr, scomplex* work, float* rwork,
                    integer *info );

void FC_FUNC(ztbrfs,ZTBRFS)( char* uplo, char* trans, char* diag, integer* n,
                    integer* kd, integer* nrhs, const dcomplex* ab,
                    integer* ldab, const dcomplex* b, integer* ldb,
                    const dcomplex* x, integer* ldx, double* ferr,
                    double* berr, dcomplex* work, double* rwork,
                    integer *info );

void FC_FUNC(sgetri,SGETRI)( integer* n, float* a, integer* lda,
                    const integer* ipiv, float* work, integer* lwork,
                    integer *info );

void FC_FUNC(dgetri,DGETRI)( integer* n, double* a, integer* lda,
                    const integer* ipiv, double* work, integer* lwork,
                    integer *info );

void FC_FUNC(cgetri,CGETRI)( integer* n, scomplex* a, integer* lda,
                    const integer* ipiv, scomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(zgetri,ZGETRI)( integer* n, dcomplex* a, integer* lda,
                    const integer* ipiv, dcomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(spotri,SPOTRI)( char* uplo, integer* n, float* a, integer* lda,
                    integer *info );

void FC_FUNC(dpotri,DPOTRI)( char* uplo, integer* n, double* a, integer* lda,
                    integer *info );

void FC_FUNC(cpotri,CPOTRI)( char* uplo, integer* n, scomplex* a, integer* lda,
                    integer *info );

void FC_FUNC(zpotri,ZPOTRI)( char* uplo, integer* n, dcomplex* a, integer* lda,
                    integer *info );

void FC_FUNC(spftri,SPFTRI)( char* transr, char* uplo, integer* n, float* a,
                    integer *info );

void FC_FUNC(dpftri,DPFTRI)( char* transr, char* uplo, integer* n, double* a,
                    integer *info );

void FC_FUNC(cpftri,CPFTRI)( char* transr, char* uplo, integer* n, scomplex* a,
                    integer *info );

void FC_FUNC(zpftri,ZPFTRI)( char* transr, char* uplo, integer* n, dcomplex* a,
                    integer *info );

void FC_FUNC(spptri,SPPTRI)( char* uplo, integer* n, float* ap, integer *info );

void FC_FUNC(dpptri,DPPTRI)( char* uplo, integer* n, double* ap, integer *info );

void FC_FUNC(cpptri,CPPTRI)( char* uplo, integer* n, scomplex* ap, integer *info );

void FC_FUNC(zpptri,ZPPTRI)( char* uplo, integer* n, dcomplex* ap, integer *info );

void FC_FUNC(ssytri,SSYTRI)( char* uplo, integer* n, float* a, integer* lda,
                    const integer* ipiv, float* work, integer *info );

void FC_FUNC(dsytri,DSYTRI)( char* uplo, integer* n, double* a, integer* lda,
                    const integer* ipiv, double* work, integer *info );

void FC_FUNC(csytri,CSYTRI)( char* uplo, integer* n, scomplex* a, integer* lda,
                    const integer* ipiv, scomplex* work, integer *info );

void FC_FUNC(zsytri,ZSYTRI)( char* uplo, integer* n, dcomplex* a, integer* lda,
                    const integer* ipiv, dcomplex* work, integer *info );

void FC_FUNC(chetri,CHETRI)( char* uplo, integer* n, scomplex* a, integer* lda,
                    const integer* ipiv, scomplex* work, integer *info );

void FC_FUNC(zhetri,ZHETRI)( char* uplo, integer* n, dcomplex* a, integer* lda,
                    const integer* ipiv, dcomplex* work, integer *info );

void FC_FUNC(ssptri,SSPTRI)( char* uplo, integer* n, float* ap,
                    const integer* ipiv, float* work, integer *info );

void FC_FUNC(dsptri,DSPTRI)( char* uplo, integer* n, double* ap,
                    const integer* ipiv, double* work, integer *info );

void FC_FUNC(csptri,CSPTRI)( char* uplo, integer* n, scomplex* ap,
                    const integer* ipiv, scomplex* work, integer *info );

void FC_FUNC(zsptri,ZSPTRI)( char* uplo, integer* n, dcomplex* ap,
                    const integer* ipiv, dcomplex* work, integer *info );

void FC_FUNC(chptri,CHPTRI)( char* uplo, integer* n, scomplex* ap,
                    const integer* ipiv, scomplex* work, integer *info );

void FC_FUNC(zhptri,ZHPTRI)( char* uplo, integer* n, dcomplex* ap,
                    const integer* ipiv, dcomplex* work, integer *info );

void FC_FUNC(strtri,STRTRI)( char* uplo, char* diag, integer* n, float* a,
                    integer* lda, integer *info );

void FC_FUNC(dtrtri,DTRTRI)( char* uplo, char* diag, integer* n, double* a,
                    integer* lda, integer *info );

void FC_FUNC(ctrtri,CTRTRI)( char* uplo, char* diag, integer* n, scomplex* a,
                    integer* lda, integer *info );

void FC_FUNC(ztrtri,ZTRTRI)( char* uplo, char* diag, integer* n, dcomplex* a,
                    integer* lda, integer *info );

void FC_FUNC(stftri,STFTRI)( char* transr, char* uplo, char* diag, integer* n,
                    float* a, integer *info );

void FC_FUNC(dtftri,DTFTRI)( char* transr, char* uplo, char* diag, integer* n,
                    double* a, integer *info );

void FC_FUNC(ctftri,CTFTRI)( char* transr, char* uplo, char* diag, integer* n,
                    scomplex* a, integer *info );

void FC_FUNC(ztftri,ZTFTRI)( char* transr, char* uplo, char* diag, integer* n,
                    dcomplex* a, integer *info );

void FC_FUNC(stptri,STPTRI)( char* uplo, char* diag, integer* n, float* ap,
                    integer *info );

void FC_FUNC(dtptri,DTPTRI)( char* uplo, char* diag, integer* n, double* ap,
                    integer *info );

void FC_FUNC(ctptri,CTPTRI)( char* uplo, char* diag, integer* n, scomplex* ap,
                    integer *info );

void FC_FUNC(ztptri,ZTPTRI)( char* uplo, char* diag, integer* n, dcomplex* ap,
                    integer *info );

void FC_FUNC(sgeequ,SGEEQU)( integer* m, integer* n, const float* a,
                    integer* lda, float* r, float* c, float* rowcnd,
                    float* colcnd, float* amax, integer *info );

void FC_FUNC(dgeequ,DGEEQU)( integer* m, integer* n, const double* a,
                    integer* lda, double* r, double* c, double* rowcnd,
                    double* colcnd, double* amax, integer *info );

void FC_FUNC(cgeequ,CGEEQU)( integer* m, integer* n, const scomplex* a,
                    integer* lda, float* r, float* c, float* rowcnd,
                    float* colcnd, float* amax, integer *info );

void FC_FUNC(zgeequ,ZGEEQU)( integer* m, integer* n, const dcomplex* a,
                    integer* lda, double* r, double* c, double* rowcnd,
                    double* colcnd, double* amax, integer *info );

void FC_FUNC(sgeequb,SGEEQUB)( integer* m, integer* n, const float* a,
                    integer* lda, float* r, float* c, float* rowcnd,
                    float* colcnd, float* amax, integer *info );

void FC_FUNC(dgeequb,DGEEQUB)( integer* m, integer* n, const double* a,
                    integer* lda, double* r, double* c, double* rowcnd,
                    double* colcnd, double* amax, integer *info );

void FC_FUNC(cgeequb,CGEEQUB)( integer* m, integer* n, const scomplex* a,
                    integer* lda, float* r, float* c, float* rowcnd,
                    float* colcnd, float* amax, integer *info );

void FC_FUNC(zgeequb,ZGEEQUB)( integer* m, integer* n, const dcomplex* a,
                    integer* lda, double* r, double* c, double* rowcnd,
                    double* colcnd, double* amax, integer *info );

void FC_FUNC(sgbequ,SGBEQU)( integer* m, integer* n, integer* kl,
                    integer* ku, const float* ab, integer* ldab,
                    float* r, float* c, float* rowcnd, float* colcnd,
                    float* amax, integer *info );

void FC_FUNC(dgbequ,DGBEQU)( integer* m, integer* n, integer* kl,
                    integer* ku, const double* ab, integer* ldab,
                    double* r, double* c, double* rowcnd, double* colcnd,
                    double* amax, integer *info );

void FC_FUNC(cgbequ,CGBEQU)( integer* m, integer* n, integer* kl,
                    integer* ku, const scomplex* ab, integer* ldab,
                    float* r, float* c, float* rowcnd, float* colcnd,
                    float* amax, integer *info );

void FC_FUNC(zgbequ,ZGBEQU)( integer* m, integer* n, integer* kl,
                    integer* ku, const dcomplex* ab, integer* ldab,
                    double* r, double* c, double* rowcnd, double* colcnd,
                    double* amax, integer *info );

void FC_FUNC(sgbequb,SGBEQUB)( integer* m, integer* n, integer* kl,
                    integer* ku, const float* ab, integer* ldab,
                    float* r, float* c, float* rowcnd, float* colcnd,
                    float* amax, integer *info );

void FC_FUNC(dgbequb,DGBEQUB)( integer* m, integer* n, integer* kl,
                    integer* ku, const double* ab, integer* ldab,
                    double* r, double* c, double* rowcnd, double* colcnd,
                    double* amax, integer *info );

void FC_FUNC(cgbequb,CGBEQUB)( integer* m, integer* n, integer* kl,
                    integer* ku, const scomplex* ab, integer* ldab,
                    float* r, float* c, float* rowcnd, float* colcnd,
                    float* amax, integer *info );

void FC_FUNC(zgbequb,ZGBEQUB)( integer* m, integer* n, integer* kl,
                    integer* ku, const dcomplex* ab, integer* ldab,
                    double* r, double* c, double* rowcnd, double* colcnd,
                    double* amax, integer *info );

void FC_FUNC(spoequ,SPOEQU)( integer* n, const float* a, integer* lda, float* s,
                    float* scond, float* amax, integer *info );

void FC_FUNC(dpoequ,DPOEQU)( integer* n, const double* a, integer* lda, double* s,
                    double* scond, double* amax, integer *info );

void FC_FUNC(cpoequ,CPOEQU)( integer* n, const scomplex* a, integer* lda, float* s,
                    float* scond, float* amax, integer *info );

void FC_FUNC(zpoequ,ZPOEQU)( integer* n, const dcomplex* a, integer* lda, double* s,
                    double* scond, double* amax, integer *info );

void FC_FUNC(spoequb,SPOEQUB)( integer* n, const float* a, integer* lda, float* s,
                    float* scond, float* amax, integer *info );

void FC_FUNC(dpoequb,DPOEQUB)( integer* n, const double* a, integer* lda, double* s,
                    double* scond, double* amax, integer *info );

void FC_FUNC(cpoequb,CPOEQUB)( integer* n, const scomplex* a, integer* lda, float* s,
                    float* scond, float* amax, integer *info );

void FC_FUNC(zpoequb,ZPOEQUB)( integer* n, const dcomplex* a, integer* lda, double* s,
                    double* scond, double* amax, integer *info );

void FC_FUNC(sppequ,SPPEQU)( char* uplo, integer* n, const float* ap, float* s,
                    float* scond, float* amax, integer *info );

void FC_FUNC(dppequ,DPPEQU)( char* uplo, integer* n, const double* ap, double* s,
                    double* scond, double* amax, integer *info );

void FC_FUNC(cppequ,CPPEQU)( char* uplo, integer* n, const scomplex* ap, float* s,
                    float* scond, float* amax, integer *info );

void FC_FUNC(zppequ,ZPPEQU)( char* uplo, integer* n, const dcomplex* ap, double* s,
                    double* scond, double* amax, integer *info );

void FC_FUNC(spbequ,SPBEQU)( char* uplo, integer* n, integer* kd, const float* ab,
                    integer* ldab, float* s, float* scond, float* amax,
                    integer *info );

void FC_FUNC(dpbequ,DPBEQU)( char* uplo, integer* n, integer* kd, const double* ab,
                    integer* ldab, double* s, double* scond, double* amax,
                    integer *info );

void FC_FUNC(cpbequ,CPBEQU)( char* uplo, integer* n, integer* kd, const scomplex* ab,
                    integer* ldab, float* s, float* scond, float* amax,
                    integer *info );

void FC_FUNC(zpbequ,ZPBEQU)( char* uplo, integer* n, integer* kd, const dcomplex* ab,
                    integer* ldab, double* s, double* scond, double* amax,
                    integer *info );

void FC_FUNC(ssyequb,SSYEQUB)( char* uplo, integer* n, const float* a,
                     integer* lda, float* s, float* scond, float* amax,
                     float* work, integer *info );

void FC_FUNC(dsyequb,DSYEQUB)( char* uplo, integer* n, const double* a,
                     integer* lda, double* s, double* scond, double* amax,
                     double* work, integer *info );

void FC_FUNC(csyequb,CSYEQUB)( char* uplo, integer* n, const scomplex* a,
                     integer* lda, float* s, float* scond, float* amax,
                     scomplex* work, integer *info );

void FC_FUNC(zsyequb,ZSYEQUB)( char* uplo, integer* n, const dcomplex* a,
                     integer* lda, double* s, double* scond, double* amax,
                     dcomplex* work, integer *info );

void FC_FUNC(cheequb,CHEEQUB)( char* uplo, integer* n, const scomplex* a,
                     integer* lda, float* s, float* scond, float* amax,
                     scomplex* work, integer *info );

void FC_FUNC(zheequb,ZHEEQUB)( char* uplo, integer* n, const dcomplex* a,
                     integer* lda, double* s, double* scond, double* amax,
                     dcomplex* work, integer *info );

void FC_FUNC(sgesv,SGESV)( integer* n, integer* nrhs, float* a, integer* lda,
                   integer* ipiv, float* b, integer* ldb,
                   integer *info );

void FC_FUNC(dgesv,DGESV)( integer* n, integer* nrhs, double* a, integer* lda,
                   integer* ipiv, double* b, integer* ldb,
                   integer *info );

void FC_FUNC(cgesv,CGESV)( integer* n, integer* nrhs, scomplex* a, integer* lda,
                   integer* ipiv, scomplex* b, integer* ldb,
                   integer *info );

void FC_FUNC(zgesv,ZGESV)( integer* n, integer* nrhs, dcomplex* a, integer* lda,
                   integer* ipiv, dcomplex* b, integer* ldb,
                   integer *info );

void FC_FUNC(dsgesv,DSGESV)( integer* n, integer* nrhs, double* a, integer* lda,
                    integer* ipiv, double* b, integer* ldb, double* x,
                    integer* ldx, double* work, float* swork,
                    integer* iter, integer *info );

void FC_FUNC(zcgesv,ZCGESV)( integer* n, integer* nrhs, dcomplex* a, integer* lda,
                    integer* ipiv, dcomplex* b, integer* ldb, dcomplex* x,
                    integer* ldx, dcomplex* work, scomplex* swork, double* rwork,
                    integer* iter, integer *info );

void FC_FUNC(sgesvx,SGESVX)( char* fact, char* trans, integer* n, integer* nrhs,
                    float* a, integer* lda, float* af, integer* ldaf,
                    integer* ipiv, char* equed, float* r, float* c,
                    float* b, integer* ldb, float* x, integer* ldx,
                    float* rcond, float* ferr, float* berr, float* work,
                    integer* iwork, integer *info );

void FC_FUNC(dgesvx,DGESVX)( char* fact, char* trans, integer* n, integer* nrhs,
                    double* a, integer* lda, double* af, integer* ldaf,
                    integer* ipiv, char* equed, double* r, double* c,
                    double* b, integer* ldb, double* x, integer* ldx,
                    double* rcond, double* ferr, double* berr, double* work,
                    integer* iwork, integer *info );

void FC_FUNC(cgesvx,CGESVX)( char* fact, char* trans, integer* n, integer* nrhs,
                    scomplex* a, integer* lda, scomplex* af, integer* ldaf,
                    integer* ipiv, char* equed, float* r, float* c,
                    scomplex* b, integer* ldb, scomplex* x, integer* ldx,
                    float* rcond, float* ferr, float* berr, scomplex* work,
                    float* rwork, integer *info );

void FC_FUNC(zgesvx,ZGESVX)( char* fact, char* trans, integer* n, integer* nrhs,
                    dcomplex* a, integer* lda, dcomplex* af, integer* ldaf,
                    integer* ipiv, char* equed, double* r, double* c,
                    dcomplex* b, integer* ldb, dcomplex* x, integer* ldx,
                    double* rcond, double* ferr, double* berr, dcomplex* work,
                    double* rwork, integer *info );

void FC_FUNC(sgesvxx,SGESVXX)( char* fact, char* trans, integer* n, integer* nrhs,
                     float* a, integer* lda, float* af, integer* ldaf,
                     integer* ipiv, char* equed, float* r, float* c,
                     float* b, integer* ldb, float* x, integer* ldx,
                     float* rcond, float* rpvgrw, float* berr,
                     integer* n_err_bnds, float* err_bnds_norm,
                     float* err_bnds_comp, integer* nparams, float* params,
                     float* work, integer* iwork, integer *info );

void FC_FUNC(dgesvxx,DGESVXX)( char* fact, char* trans, integer* n, integer* nrhs,
                     double* a, integer* lda, double* af, integer* ldaf,
                     integer* ipiv, char* equed, double* r, double* c,
                     double* b, integer* ldb, double* x, integer* ldx,
                     double* rcond, double* rpvgrw, double* berr,
                     integer* n_err_bnds, double* err_bnds_norm,
                     double* err_bnds_comp, integer* nparams, double* params,
                     double* work, integer* iwork, integer *info );

void FC_FUNC(cgesvxx,CGESVXX)( char* fact, char* trans, integer* n, integer* nrhs,
                     scomplex* a, integer* lda, scomplex* af, integer* ldaf,
                     integer* ipiv, char* equed, float* r, float* c,
                     scomplex* b, integer* ldb, scomplex* x, integer* ldx,
                     float* rcond, float* rpvgrw, float* berr,
                     integer* n_err_bnds, float* err_bnds_norm,
                     float* err_bnds_comp, integer* nparams, float* params,
                     scomplex* work, float* rwork, integer *info );

void FC_FUNC(zgesvxx,ZGESVXX)( char* fact, char* trans, integer* n, integer* nrhs,
                     dcomplex* a, integer* lda, dcomplex* af, integer* ldaf,
                     integer* ipiv, char* equed, double* r, double* c,
                     dcomplex* b, integer* ldb, dcomplex* x, integer* ldx,
                     double* rcond, double* rpvgrw, double* berr,
                     integer* n_err_bnds, double* err_bnds_norm,
                     double* err_bnds_comp, integer* nparams, double* params,
                     dcomplex* work, double* rwork, integer *info );

void FC_FUNC(sgbsv,SGBSV)( integer* n, integer* kl, integer* ku,
                   integer* nrhs, float* ab, integer* ldab,
                   integer* ipiv, float* b, integer* ldb,
                   integer *info );

void FC_FUNC(dgbsv,DGBSV)( integer* n, integer* kl, integer* ku,
                   integer* nrhs, double* ab, integer* ldab,
                   integer* ipiv, double* b, integer* ldb,
                   integer *info );

void FC_FUNC(cgbsv,CGBSV)( integer* n, integer* kl, integer* ku,
                   integer* nrhs, scomplex* ab, integer* ldab,
                   integer* ipiv, scomplex* b, integer* ldb,
                   integer *info );

void FC_FUNC(zgbsv,ZGBSV)( integer* n, integer* kl, integer* ku,
                   integer* nrhs, dcomplex* ab, integer* ldab,
                   integer* ipiv, dcomplex* b, integer* ldb,
                   integer *info );

void FC_FUNC(sgbsvx,SGBSVX)( char* fact, char* trans, integer* n, integer* kl,
                    integer* ku, integer* nrhs, float* ab,
                    integer* ldab, float* afb, integer* ldafb,
                    integer* ipiv, char* equed, float* r, float* c,
                    float* b, integer* ldb, float* x, integer* ldx,
                    float* rcond, float* ferr, float* berr, float* work,
                    integer* iwork, integer *info );

void FC_FUNC(dgbsvx,DGBSVX)( char* fact, char* trans, integer* n, integer* kl,
                    integer* ku, integer* nrhs, double* ab,
                    integer* ldab, double* afb, integer* ldafb,
                    integer* ipiv, char* equed, double* r, double* c,
                    double* b, integer* ldb, double* x, integer* ldx,
                    double* rcond, double* ferr, double* berr, double* work,
                    integer* iwork, integer *info );

void FC_FUNC(cgbsvx,CGBSVX)( char* fact, char* trans, integer* n, integer* kl,
                    integer* ku, integer* nrhs, scomplex* ab,
                    integer* ldab, scomplex* afb, integer* ldafb,
                    integer* ipiv, char* equed, float* r, float* c,
                    scomplex* b, integer* ldb, scomplex* x, integer* ldx,
                    float* rcond, float* ferr, float* berr, scomplex* work,
                    float* rwork, integer *info );

void FC_FUNC(zgbsvx,ZGBSVX)( char* fact, char* trans, integer* n, integer* kl,
                    integer* ku, integer* nrhs, dcomplex* ab,
                    integer* ldab, dcomplex* afb, integer* ldafb,
                    integer* ipiv, char* equed, double* r, double* c,
                    dcomplex* b, integer* ldb, dcomplex* x, integer* ldx,
                    double* rcond, double* ferr, double* berr, dcomplex* work,
                    double* rwork, integer *info );

void FC_FUNC(sgbsvxx,SGBSVXX)( char* fact, char* trans, integer* n, integer* kl,
                     integer* ku, integer* nrhs, float* ab,
                     integer* ldab, float* afb, integer* ldafb,
                     integer* ipiv, char* equed, float* r, float* c,
                     float* b, integer* ldb, float* x, integer* ldx,
                     float* rcond, float* rpvgrw, float* berr,
                     integer* n_err_bnds, float* err_bnds_norm,
                     float* err_bnds_comp, integer* nparams, float* params,
                     float* work, integer* iwork, integer *info );

void FC_FUNC(dgbsvxx,DGBSVXX)( char* fact, char* trans, integer* n, integer* kl,
                     integer* ku, integer* nrhs, double* ab,
                     integer* ldab, double* afb, integer* ldafb,
                     integer* ipiv, char* equed, double* r, double* c,
                     double* b, integer* ldb, double* x, integer* ldx,
                     double* rcond, double* rpvgrw, double* berr,
                     integer* n_err_bnds, double* err_bnds_norm,
                     double* err_bnds_comp, integer* nparams, double* params,
                     double* work, integer* iwork, integer *info );

void FC_FUNC(cgbsvxx,CGBSVXX)( char* fact, char* trans, integer* n, integer* kl,
                     integer* ku, integer* nrhs, scomplex* ab,
                     integer* ldab, scomplex* afb, integer* ldafb,
                     integer* ipiv, char* equed, float* r, float* c,
                     scomplex* b, integer* ldb, scomplex* x, integer* ldx,
                     float* rcond, float* rpvgrw, float* berr,
                     integer* n_err_bnds, float* err_bnds_norm,
                     float* err_bnds_comp, integer* nparams, float* params,
                     scomplex* work, float* rwork, integer *info );

void FC_FUNC(zgbsvxx,ZGBSVXX)( char* fact, char* trans, integer* n, integer* kl,
                     integer* ku, integer* nrhs, dcomplex* ab,
                     integer* ldab, dcomplex* afb, integer* ldafb,
                     integer* ipiv, char* equed, double* r, double* c,
                     dcomplex* b, integer* ldb, dcomplex* x, integer* ldx,
                     double* rcond, double* rpvgrw, double* berr,
                     integer* n_err_bnds, double* err_bnds_norm,
                     double* err_bnds_comp, integer* nparams, double* params,
                     dcomplex* work, double* rwork, integer *info );

void FC_FUNC(sgtsv,SGTSV)( integer* n, integer* nrhs, float* dl, float* d,
                   float* du, float* b, integer* ldb, integer *info );

void FC_FUNC(dgtsv,DGTSV)( integer* n, integer* nrhs, double* dl, double* d,
                   double* du, double* b, integer* ldb, integer *info );

void FC_FUNC(cgtsv,CGTSV)( integer* n, integer* nrhs, scomplex* dl, scomplex* d,
                    scomplex* du, scomplex* b, integer* ldb, integer *info );

void FC_FUNC(zgtsv,ZGTSV)( integer* n, integer* nrhs, dcomplex* dl, dcomplex* d,
                    dcomplex* du, dcomplex* b, integer* ldb, integer *info );

void FC_FUNC(sgtsvx,SGTSVX)( char* fact, char* trans, integer* n, integer* nrhs,
                    const float* dl, const float* d, const float* du,
                    float* dlf, float* df, float* duf, float* du2,
                    integer* ipiv, const float* b, integer* ldb,
                    float* x, integer* ldx, float* rcond, float* ferr,
                    float* berr, float* work, integer* iwork,
                    integer *info );

void FC_FUNC(dgtsvx,DGTSVX)( char* fact, char* trans, integer* n, integer* nrhs,
                    const double* dl, const double* d, const double* du,
                    double* dlf, double* df, double* duf, double* du2,
                    integer* ipiv, const double* b, integer* ldb,
                    double* x, integer* ldx, double* rcond, double* ferr,
                    double* berr, double* work, integer* iwork,
                    integer *info );

void FC_FUNC(cgtsvx,CGTSVX)( char* fact, char* trans, integer* n, integer* nrhs,
                    const scomplex* dl, const scomplex* d, const scomplex* du,
                    scomplex* dlf, scomplex* df, scomplex* duf, scomplex* du2,
                    integer* ipiv, const scomplex* b, integer* ldb,
                    scomplex* x, integer* ldx, float* rcond, float* ferr,
                    float* berr, scomplex* work, float* rwork,
                    integer *info );

void FC_FUNC(zgtsvx,ZGTSVX)( char* fact, char* trans, integer* n, integer* nrhs,
                    const dcomplex* dl, const dcomplex* d, const dcomplex* du,
                    dcomplex* dlf, dcomplex* df, dcomplex* duf, dcomplex* du2,
                    integer* ipiv, const dcomplex* b, integer* ldb,
                    dcomplex* x, integer* ldx, double* rcond, double* ferr,
                    double* berr, dcomplex* work, double* rwork,
                    integer *info );

void FC_FUNC(sposv,SPOSV)( char* uplo, integer* n, integer* nrhs, float* a,
                   integer* lda, float* b, integer* ldb,
                   integer *info );

void FC_FUNC(dposv,DPOSV)( char* uplo, integer* n, integer* nrhs, double* a,
                   integer* lda, double* b, integer* ldb,
                   integer *info );

void FC_FUNC(cposv,CPOSV)( char* uplo, integer* n, integer* nrhs, scomplex* a,
                   integer* lda, scomplex* b, integer* ldb,
                   integer *info );

void FC_FUNC(zposv,ZPOSV)( char* uplo, integer* n, integer* nrhs, dcomplex* a,
                   integer* lda, dcomplex* b, integer* ldb,
                   integer *info );

void FC_FUNC(dsposv,DSPOSV)( char* uplo, integer* n, integer* nrhs, double* a,
                    integer* lda, double* b, integer* ldb, double* x,
                    integer* ldx, double* work, float* swork,
                    integer* iter, integer *info );

void FC_FUNC(zcposv,ZCPOSV)( char* uplo, integer* n, integer* nrhs, dcomplex* a,
                    integer* lda, dcomplex* b, integer* ldb, dcomplex* x,
                    integer* ldx, dcomplex* work, scomplex* swork, double* rwork,
                    integer* iter, integer *info );

void FC_FUNC(sposvx,SPOSVX)( char* fact, char* uplo, integer* n, integer* nrhs,
                    float* a, integer* lda, float* af, integer* ldaf,
                    char* equed, float* s, float* b, integer* ldb,
                    float* x, integer* ldx, float* rcond, float* ferr,
                    float* berr, float* work, integer* iwork,
                    integer *info );

void FC_FUNC(dposvx,DPOSVX)( char* fact, char* uplo, integer* n, integer* nrhs,
                    double* a, integer* lda, double* af, integer* ldaf,
                    char* equed, double* s, double* b, integer* ldb,
                    double* x, integer* ldx, double* rcond, double* ferr,
                    double* berr, double* work, integer* iwork,
                    integer *info );

void FC_FUNC(cposvx,CPOSVX)( char* fact, char* uplo, integer* n, integer* nrhs,
                    scomplex* a, integer* lda, scomplex* af, integer* ldaf,
                    char* equed, float* s, scomplex* b, integer* ldb,
                    scomplex* x, integer* ldx, float* rcond, float* ferr,
                    float* berr, scomplex* work, float* rwork,
                    integer *info );

void FC_FUNC(zposvx,ZPOSVX)( char* fact, char* uplo, integer* n, integer* nrhs,
                    dcomplex* a, integer* lda, dcomplex* af, integer* ldaf,
                    char* equed, double* s, dcomplex* b, integer* ldb,
                    dcomplex* x, integer* ldx, double* rcond, double* ferr,
                    double* berr, dcomplex* work, double* rwork,
                    integer *info );

void FC_FUNC(sposvxx,SPOSVXX)( char* fact, char* uplo, integer* n, integer* nrhs,
                     float* a, integer* lda, float* af, integer* ldaf,
                     char* equed, float* s, float* b, integer* ldb,
                     float* x, integer* ldx, float* rcond, float* rpvgrw,
                     float* berr, integer* n_err_bnds,
                     float* err_bnds_norm, float* err_bnds_comp,
                     integer* nparams, float* params, float* work,
                     integer* iwork, integer *info );

void FC_FUNC(dposvxx,DPOSVXX)( char* fact, char* uplo, integer* n, integer* nrhs,
                     double* a, integer* lda, double* af, integer* ldaf,
                     char* equed, double* s, double* b, integer* ldb,
                     double* x, integer* ldx, double* rcond, double* rpvgrw,
                     double* berr, integer* n_err_bnds,
                     double* err_bnds_norm, double* err_bnds_comp,
                     integer* nparams, double* params, double* work,
                     integer* iwork, integer *info );

void FC_FUNC(cposvxx,CPOSVXX)( char* fact, char* uplo, integer* n, integer* nrhs,
                    scomplex* a, integer* lda, scomplex* af, integer* ldaf,
                     char* equed, float* s, scomplex* b, integer* ldb,
                     scomplex* x, integer* ldx, float* rcond, float* rpvgrw,
                     float* berr, integer* n_err_bnds,
                     float* err_bnds_norm, float* err_bnds_comp,
                     integer* nparams, float* params, scomplex* work,
                     float* rwork, integer *info );

void FC_FUNC(zposvxx,ZPOSVXX)( char* fact, char* uplo, integer* n, integer* nrhs,
                     dcomplex* a, integer* lda, dcomplex* af, integer* ldaf,
                     char* equed, double* s, dcomplex* b, integer* ldb,
                     dcomplex* x, integer* ldx, double* rcond, double* rpvgrw,
                     double* berr, integer* n_err_bnds,
                     double* err_bnds_norm, double* err_bnds_comp,
                     integer* nparams, double* params, dcomplex* work,
                     double* rwork, integer *info );

void FC_FUNC(sppsv,SPPSV)( char* uplo, integer* n, integer* nrhs, float* ap,
                   float* b, integer* ldb, integer *info );

void FC_FUNC(dppsv,DPPSV)( char* uplo, integer* n, integer* nrhs, double* ap,
                   double* b, integer* ldb, integer *info );

void FC_FUNC(cppsv,CPPSV)( char* uplo, integer* n, integer* nrhs, scomplex* ap,
                   scomplex* b, integer* ldb, integer *info );

void FC_FUNC(zppsv,ZPPSV)( char* uplo, integer* n, integer* nrhs, dcomplex* ap,
                   dcomplex* b, integer* ldb, integer *info );

void FC_FUNC(sppsvx,SPPSVX)( char* fact, char* uplo, integer* n, integer* nrhs,
                    float* ap, float* afp, char* equed, float* s, float* b,
                    integer* ldb, float* x, integer* ldx, float* rcond,
                    float* ferr, float* berr, float* work, integer* iwork,
                    integer *info );

void FC_FUNC(dppsvx,DPPSVX)( char* fact, char* uplo, integer* n, integer* nrhs,
                    double* ap, double* afp, char* equed, double* s, double* b,
                    integer* ldb, double* x, integer* ldx, double* rcond,
                    double* ferr, double* berr, double* work, integer* iwork,
                    integer *info );

void FC_FUNC(cppsvx,CPPSVX)( char* fact, char* uplo, integer* n, integer* nrhs,
                    scomplex* ap, scomplex* afp, char* equed, float* s, scomplex* b,
                    integer* ldb, scomplex* x, integer* ldx, float* rcond,
                    float* ferr, float* berr, scomplex* work, float* rwork,
                    integer *info );

void FC_FUNC(zppsvx,ZPPSVX)( char* fact, char* uplo, integer* n, integer* nrhs,
                    dcomplex* ap, dcomplex* afp, char* equed, double* s, dcomplex* b,
                    integer* ldb, dcomplex* x, integer* ldx, double* rcond,
                    double* ferr, double* berr, dcomplex* work, double* rwork,
                    integer *info );

void FC_FUNC(spbsv,SPBSV)( char* uplo, integer* n, integer* kd, integer* nrhs,
                   float* ab, integer* ldab, float* b, integer* ldb,
                   integer *info );

void FC_FUNC(dpbsv,DPBSV)( char* uplo, integer* n, integer* kd, integer* nrhs,
                   double* ab, integer* ldab, double* b, integer* ldb,
                   integer *info );

void FC_FUNC(cpbsv,CPBSV)( char* uplo, integer* n, integer* kd, integer* nrhs,
                   scomplex* ab, integer* ldab, scomplex* b, integer* ldb,
                   integer *info );

void FC_FUNC(zpbsv,ZPBSV)( char* uplo, integer* n, integer* kd, integer* nrhs,
                   dcomplex* ab, integer* ldab, dcomplex* b, integer* ldb,
                   integer *info );

void FC_FUNC(spbsvx,SPBSVX)( char* fact, char* uplo, integer* n, integer* kd,
                    integer* nrhs, float* ab, integer* ldab, float* afb,
                    integer* ldafb, char* equed, float* s, float* b,
                    integer* ldb, float* x, integer* ldx, float* rcond,
                    float* ferr, float* berr, float* work, integer* iwork,
                    integer *info );

void FC_FUNC(dpbsvx,DPBSVX)( char* fact, char* uplo, integer* n, integer* kd,
                    integer* nrhs, double* ab, integer* ldab, double* afb,
                    integer* ldafb, char* equed, double* s, double* b,
                    integer* ldb, double* x, integer* ldx, double* rcond,
                    double* ferr, double* berr, double* work, integer* iwork,
                    integer *info );

void FC_FUNC(cpbsvx,CPBSVX)( char* fact, char* uplo, integer* n, integer* kd,
                    integer* nrhs, scomplex* ab, integer* ldab, scomplex* afb,
                    integer* ldafb, char* equed, float* s, scomplex* b,
                    integer* ldb, scomplex* x, integer* ldx, float* rcond,
                    float* ferr, float* berr, scomplex* work, float* rwork,
                    integer *info );

void FC_FUNC(zpbsvx,ZPBSVX)( char* fact, char* uplo, integer* n, integer* kd,
                    integer* nrhs, dcomplex* ab, integer* ldab, dcomplex* afb,
                    integer* ldafb, char* equed, double* s, dcomplex* b,
                    integer* ldb, dcomplex* x, integer* ldx, double* rcond,
                    double* ferr, double* berr, dcomplex* work, double* rwork,
                    integer *info );

void FC_FUNC(sptsv,SPTSV)( integer* n, integer* nrhs, float* d, float* e,
                    float* b, integer* ldb, integer *info );

void FC_FUNC(dptsv,DPTSV)( integer* n, integer* nrhs, double* d, double* e,
                   double* b, integer* ldb, integer *info );

void FC_FUNC(cptsv,CPTSV)( integer* n, integer* nrhs, float* d, scomplex* e,
                   scomplex* b, integer* ldb, integer *info );

void FC_FUNC(zptsv,ZPTSV)( integer* n, integer* nrhs, double* d, dcomplex* e,
                   dcomplex* b, integer* ldb, integer *info );

void FC_FUNC(sptsvx,SPTSVX)( char* fact, integer* n, integer* nrhs,
                    const float* d, const float* e, float* df, float* ef,
                    const float* b, integer* ldb, float* x,
                    integer* ldx, float* rcond, float* ferr, float* berr,
                    float* work, integer *info );

void FC_FUNC(dptsvx,DPTSVX)( char* fact, integer* n, integer* nrhs,
                    const double* d, const double* e, double* df, double* ef,
                    const double* b, integer* ldb, double* x,
                    integer* ldx, double* rcond, double* ferr, double* berr,
                    double* work, integer *info );

void FC_FUNC(cptsvx,CPTSVX)( char* fact, integer* n, integer* nrhs,
                    const float* d, const scomplex* e, float* df, scomplex* ef,
                    const scomplex* b, integer* ldb, scomplex* x,
                    integer* ldx, float* rcond, float* ferr, float* berr,
                    scomplex* work, float* rwork, integer *info );

void FC_FUNC(zptsvx,ZPTSVX)( char* fact, integer* n, integer* nrhs,
                    const double* d, const dcomplex* e, double* df, dcomplex* ef,
                    const dcomplex* b, integer* ldb, dcomplex* x,
                    integer* ldx, double* rcond, double* ferr, double* berr,
                    dcomplex* work, double* rwork, integer *info );

void FC_FUNC(ssysv,SSYSV)( char* uplo, integer* n, integer* nrhs, float* a,
                   integer* lda, integer* ipiv, float* b,
                   integer* ldb, float* work, integer* lwork,
                   integer *info );

void FC_FUNC(dsysv,DSYSV)( char* uplo, integer* n, integer* nrhs, double* a,
                   integer* lda, integer* ipiv, double* b,
                   integer* ldb, double* work, integer* lwork,
                   integer *info );

void FC_FUNC(csysv,CSYSV)( char* uplo, integer* n, integer* nrhs, scomplex* a,
                   integer* lda, integer* ipiv, scomplex* b,
                   integer* ldb, scomplex* work, integer* lwork,
                   integer *info );

void FC_FUNC(zsysv,ZSYSV)( char* uplo, integer* n, integer* nrhs, dcomplex* a,
                   integer* lda, integer* ipiv, dcomplex* b,
                   integer* ldb, dcomplex* work, integer* lwork,
                   integer *info );

void FC_FUNC(chesv,CHESV)( char* uplo, integer* n, integer* nrhs, scomplex* a,
                   integer* lda, integer* ipiv, scomplex* b,
                   integer* ldb, scomplex* work, integer* lwork,
                   integer *info );

void FC_FUNC(zhesv,ZHESV)( char* uplo, integer* n, integer* nrhs, dcomplex* a,
                   integer* lda, integer* ipiv, dcomplex* b,
                   integer* ldb, dcomplex* work, integer* lwork,
                   integer *info );

void FC_FUNC(ssysvx,SSYSVX)( char* fact, char* uplo, integer* n, integer* nrhs,
                    const float* a, integer* lda, float* af,
                    integer* ldaf, integer* ipiv, const float* b,
                    integer* ldb, float* x, integer* ldx, float* rcond,
                    float* ferr, float* berr, float* work, integer* lwork,
                    integer* iwork, integer *info );

void FC_FUNC(dsysvx,DSYSVX)( char* fact, char* uplo, integer* n, integer* nrhs,
                    const double* a, integer* lda, double* af,
                    integer* ldaf, integer* ipiv, const double* b,
                    integer* ldb, double* x, integer* ldx, double* rcond,
                    double* ferr, double* berr, double* work, integer* lwork,
                    integer* iwork, integer *info );

void FC_FUNC(csysvx,CSYSVX)( char* fact, char* uplo, integer* n, integer* nrhs,
                    const scomplex* a, integer* lda, scomplex* af,
                    integer* ldaf, integer* ipiv, const scomplex* b,
                    integer* ldb, scomplex* x, integer* ldx, float* rcond,
                    float* ferr, float* berr, scomplex* work, integer* lwork,
                    float* rwork, integer *info );

void FC_FUNC(zsysvx,ZSYSVX)( char* fact, char* uplo, integer* n, integer* nrhs,
                    const dcomplex* a, integer* lda, dcomplex* af,
                    integer* ldaf, integer* ipiv, const dcomplex* b,
                    integer* ldb, dcomplex* x, integer* ldx, double* rcond,
                    double* ferr, double* berr, dcomplex* work, integer* lwork,
                    double* rwork, integer *info );

void FC_FUNC(chesvx,CHESVX)( char* fact, char* uplo, integer* n, integer* nrhs,
                    const scomplex* a, integer* lda, scomplex* af,
                    integer* ldaf, integer* ipiv, const scomplex* b,
                    integer* ldb, scomplex* x, integer* ldx, float* rcond,
                    float* ferr, float* berr, scomplex* work, integer* lwork,
                    float* rwork, integer *info );

void FC_FUNC(zhesvx,ZHESVX)( char* fact, char* uplo, integer* n, integer* nrhs,
                    const dcomplex* a, integer* lda, dcomplex* af,
                    integer* ldaf, integer* ipiv, const dcomplex* b,
                    integer* ldb, dcomplex* x, integer* ldx, double* rcond,
                    double* ferr, double* berr, dcomplex* work, integer* lwork,
                    double* rwork, integer *info );

void FC_FUNC(ssysvxx,SSYSVXX)( char* fact, char* uplo, integer* n, integer* nrhs,
                    float* a, integer* lda, float* af, integer* ldaf,
                     integer* ipiv, char* equed, float* s, float* b,
                     integer* ldb, float* x, integer* ldx, float* rcond,
                     float* rpvgrw, float* berr, integer* n_err_bnds,
                     float* err_bnds_norm, float* err_bnds_comp,
                     integer* nparams, float* params, float* work,
                     integer* iwork, integer *info );

void FC_FUNC(dsysvxx,DSYSVXX)( char* fact, char* uplo, integer* n, integer* nrhs,
                     double* a, integer* lda, double* af, integer* ldaf,
                     integer* ipiv, char* equed, double* s, double* b,
                     integer* ldb, double* x, integer* ldx, double* rcond,
                     double* rpvgrw, double* berr, integer* n_err_bnds,
                     double* err_bnds_norm, double* err_bnds_comp,
                     integer* nparams, double* params, double* work,
                     integer* iwork, integer *info );

void FC_FUNC(csysvxx,CSYSVXX)( char* fact, char* uplo, integer* n, integer* nrhs,
                     scomplex* a, integer* lda, scomplex* af, integer* ldaf,
                     integer* ipiv, char* equed, float* s, scomplex* b,
                     integer* ldb, scomplex* x, integer* ldx, float* rcond,
                     float* rpvgrw, float* berr, integer* n_err_bnds,
                     float* err_bnds_norm, float* err_bnds_comp,
                     integer* nparams, float* params, scomplex* work,
                     float* rwork, integer *info );

void FC_FUNC(zsysvxx,ZSYSVXX)( char* fact, char* uplo, integer* n, integer* nrhs,
                     dcomplex* a, integer* lda, dcomplex* af, integer* ldaf,
                     integer* ipiv, char* equed, double* s, dcomplex* b,
                     integer* ldb, dcomplex* x, integer* ldx, double* rcond,
                     double* rpvgrw, double* berr, integer* n_err_bnds,
                     double* err_bnds_norm, double* err_bnds_comp,
                     integer* nparams, double* params, dcomplex* work,
                     double* rwork, integer *info );

void FC_FUNC(chesvxx,CHESVXX)( char* fact, char* uplo, integer* n, integer* nrhs,
                     scomplex* a, integer* lda, scomplex* af, integer* ldaf,
                     integer* ipiv, char* equed, float* s, scomplex* b,
                     integer* ldb, scomplex* x, integer* ldx, float* rcond,
                     float* rpvgrw, float* berr, integer* n_err_bnds,
                     float* err_bnds_norm, float* err_bnds_comp,
                     integer* nparams, float* params, scomplex* work,
                     float* rwork, integer *info );

void FC_FUNC(zhesvxx,ZHESVXX)( char* fact, char* uplo, integer* n, integer* nrhs,
                     dcomplex* a, integer* lda, dcomplex* af, integer* ldaf,
                     integer* ipiv, char* equed, double* s, dcomplex* b,
                     integer* ldb, dcomplex* x, integer* ldx, double* rcond,
                     double* rpvgrw, double* berr, integer* n_err_bnds,
                     double* err_bnds_norm, double* err_bnds_comp,
                     integer* nparams, double* params, dcomplex* work,
                     double* rwork, integer *info );

void FC_FUNC(sspsv,SSPSV)( char* uplo, integer* n, integer* nrhs, float* ap,
                   integer* ipiv, float* b, integer* ldb,
                   integer *info );

void FC_FUNC(dspsv,DSPSV)( char* uplo, integer* n, integer* nrhs, double* ap,
                   integer* ipiv, double* b, integer* ldb,
                   integer *info );

void FC_FUNC(cspsv,CSPSV)( char* uplo, integer* n, integer* nrhs, scomplex* ap,
                   integer* ipiv, scomplex* b, integer* ldb,
                   integer *info );

void FC_FUNC(zspsv,ZSPSV)( char* uplo, integer* n, integer* nrhs, dcomplex* ap,
                   integer* ipiv, dcomplex* b, integer* ldb,
                   integer *info );

void FC_FUNC(chpsv,CHPSV)( char* uplo, integer* n, integer* nrhs, scomplex* ap,
                   integer* ipiv, scomplex* b, integer* ldb,
                   integer *info );

void FC_FUNC(zhpsv,ZHPSV)( char* uplo, integer* n, integer* nrhs, dcomplex* ap,
                   integer* ipiv, dcomplex* b, integer* ldb,
                   integer *info );

void FC_FUNC(sspsvx,SSPSVX)( char* fact, char* uplo, integer* n, integer* nrhs,
                    const float* ap, float* afp, integer* ipiv,
                    const float* b, integer* ldb, float* x,
                    integer* ldx, float* rcond, float* ferr, float* berr,
                    float* work, integer* iwork, integer *info );

void FC_FUNC(dspsvx,DSPSVX)( char* fact, char* uplo, integer* n, integer* nrhs,
                    const double* ap, double* afp, integer* ipiv,
                    const double* b, integer* ldb, double* x,
                    integer* ldx, double* rcond, double* ferr, double* berr,
                    double* work, integer* iwork, integer *info );

void FC_FUNC(cspsvx,CSPSVX)( char* fact, char* uplo, integer* n, integer* nrhs,
                    const scomplex* ap, scomplex* afp, integer* ipiv,
                    const scomplex* b, integer* ldb, scomplex* x,
                    integer* ldx, float* rcond, float* ferr, float* berr,
                    scomplex* work, float* rwork, integer *info );

void FC_FUNC(zspsvx,ZSPSVX)( char* fact, char* uplo, integer* n, integer* nrhs,
                    const dcomplex* ap, dcomplex* afp, integer* ipiv,
                    const dcomplex* b, integer* ldb, dcomplex* x,
                    integer* ldx, double* rcond, double* ferr, double* berr,
                    dcomplex* work, double* rwork, integer *info );

void FC_FUNC(chpsvx,CHPSVX)( char* fact, char* uplo, integer* n, integer* nrhs,
                    const scomplex* ap, scomplex* afp, integer* ipiv,
                    const scomplex* b, integer* ldb, scomplex* x,
                    integer* ldx, float* rcond, float* ferr, float* berr,
                    scomplex* work, float* rwork, integer *info );

void FC_FUNC(zhpsvx,ZHPSVX)( char* fact, char* uplo, integer* n, integer* nrhs,
                    const dcomplex* ap, dcomplex* afp, integer* ipiv,
                    const dcomplex* b, integer* ldb, dcomplex* x,
                    integer* ldx, double* rcond, double* ferr, double* berr,
                    dcomplex* work, double* rwork, integer *info );

void FC_FUNC(sgeqrf,SGEQRF)( integer* m, integer* n, float* a, integer* lda,
                    float* tau, float* work, integer* lwork,
                    integer *info );

void FC_FUNC(dgeqrf,DGEQRF)( integer* m, integer* n, double* a, integer* lda,
                    double* tau, double* work, integer* lwork,
                    integer *info );

void FC_FUNC(cgeqrf,CGEQRF)( integer* m, integer* n, scomplex* a, integer* lda,
                    scomplex* tau, scomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(zgeqrf,ZGEQRF)( integer* m, integer* n, dcomplex* a, integer* lda,
                    dcomplex* tau, dcomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(sgeqpf,SGEQPF)( integer* m, integer* n, float* a, integer* lda,
                    integer* jpvt, float* tau, float* work,
                    integer *info );

void FC_FUNC(dgeqpf,DGEQPF)( integer* m, integer* n, double* a, integer* lda,
                    integer* jpvt, double* tau, double* work,
                    integer *info );

void FC_FUNC(cgeqpf,CGEQPF)( integer* m, integer* n, scomplex* a, integer* lda,
                    integer* jpvt, scomplex* tau, scomplex* work, float* rwork,
                    integer *info );

void FC_FUNC(zgeqpf,ZGEQPF)( integer* m, integer* n, dcomplex* a, integer* lda,
                    integer* jpvt, dcomplex* tau, dcomplex* work, double* rwork,
                    integer *info );

void FC_FUNC(sgeqp3,SGEQP3)( integer* m, integer* n, float* a, integer* lda,
                    integer* jpvt, float* tau, float* work,
                    integer* lwork, integer *info );

void FC_FUNC(dgeqp3,DGEQP3)( integer* m, integer* n, double* a, integer* lda,
                    integer* jpvt, double* tau, double* work,
                    integer* lwork, integer *info );

void FC_FUNC(cgeqp3,CGEQP3)( integer* m, integer* n, scomplex* a, integer* lda,
                    integer* jpvt, scomplex* tau, scomplex* work,
                    integer* lwork, float* rwork, integer *info );

void FC_FUNC(zgeqp3,ZGEQP3)( integer* m, integer* n, dcomplex* a, integer* lda,
                    integer* jpvt, dcomplex* tau, dcomplex* work,
                    integer* lwork, double* rwork, integer *info );

void FC_FUNC(sorgqr,SORGQR)( integer* m, integer* n, integer* k, float* a,
                    integer* lda, const float* tau, float* work,
                    integer* lwork, integer *info );

void FC_FUNC(dorgqr,DORGQR)( integer* m, integer* n, integer* k, double* a,
                    integer* lda, const double* tau, double* work,
                    integer* lwork, integer *info );

void FC_FUNC(cungqr,CUNGQR)( integer* m, integer* n, integer* k, scomplex* a,
                    integer* lda, const scomplex* tau, scomplex* work,
                    integer* lwork, integer *info );

void FC_FUNC(zungqr,ZUNGQR)( integer* m, integer* n, integer* k, dcomplex* a,
                    integer* lda, const dcomplex* tau, dcomplex* work,
                    integer* lwork, integer *info );

void FC_FUNC(sormqr,SORMQR)( char* side, char* trans, integer* m, integer* n,
                    integer* k, const float* a, integer* lda,
                    const float* tau, float* c, integer* ldc, float* work,
                    integer* lwork, integer *info );

void FC_FUNC(dormqr,DORMQR)( char* side, char* trans, integer* m, integer* n,
                    integer* k, const double* a, integer* lda,
                    const double* tau, double* c, integer* ldc, double* work,
                    integer* lwork, integer *info );

void FC_FUNC(cunmqr,CUNMQR)( char* side, char* trans, integer* m, integer* n,
                    integer* k, const scomplex* a, integer* lda,
                    const scomplex* tau, scomplex* c, integer* ldc, scomplex* work,
                    integer* lwork, integer *info );

void FC_FUNC(zunmqr,ZUNMQR)( char* side, char* trans, integer* m, integer* n,
                    integer* k, const dcomplex* a, integer* lda,
                    const dcomplex* tau, dcomplex* c, integer* ldc, dcomplex* work,
                    integer* lwork, integer *info );

void FC_FUNC(sgelqf,SGELQF)( integer* m, integer* n, float* a, integer* lda,
                    float* tau, float* work, integer* lwork,
                    integer *info );

void FC_FUNC(dgelqf,DGELQF)( integer* m, integer* n, double* a, integer* lda,
                    double* tau, double* work, integer* lwork,
                    integer *info );

void FC_FUNC(cgelqf,CGELQF)( integer* m, integer* n, scomplex* a, integer* lda,
                    scomplex* tau, scomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(zgelqf,ZGELQF)( integer* m, integer* n, dcomplex* a, integer* lda,
                    dcomplex* tau, dcomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(sorglq,SORGLQ)( integer* m, integer* n, integer* k, float* a,
                    integer* lda, const float* tau, float* work,
                    integer* lwork, integer *info );

void FC_FUNC(dorglq,DORGLQ)( integer* m, integer* n, integer* k, double* a,
                    integer* lda, const double* tau, double* work,
                    integer* lwork, integer *info );

void FC_FUNC(cunglq,CUNGLQ)( integer* m, integer* n, integer* k, scomplex* a,
                    integer* lda, const scomplex* tau, scomplex* work,
                    integer* lwork, integer *info );

void FC_FUNC(zunglq,ZUNGLQ)( integer* m, integer* n, integer* k, dcomplex* a,
                    integer* lda, const dcomplex* tau, dcomplex* work,
                    integer* lwork, integer *info );

void FC_FUNC(sormlq,SORMLQ)( char* side, char* trans, integer* m, integer* n,
                    integer* k, const float* a, integer* lda,
                    const float* tau, float* c, integer* ldc, float* work,
                    integer* lwork, integer *info );

void FC_FUNC(dormlq,DORMLQ)( char* side, char* trans, integer* m, integer* n,
                    integer* k, const double* a, integer* lda,
                    const double* tau, double* c, integer* ldc, double* work,
                    integer* lwork, integer *info );

void FC_FUNC(cunmlq,CUNMLQ)( char* side, char* trans, integer* m, integer* n,
                    integer* k, const scomplex* a, integer* lda,
                    const scomplex* tau, scomplex* c, integer* ldc, scomplex* work,
                    integer* lwork, integer *info );

void FC_FUNC(zunmlq,ZUNMLQ)( char* side, char* trans, integer* m, integer* n,
                    integer* k, const dcomplex* a, integer* lda,
                    const dcomplex* tau, dcomplex* c, integer* ldc, dcomplex* work,
                    integer* lwork, integer *info );

void FC_FUNC(sgeqlf,SGEQLF)( integer* m, integer* n, float* a, integer* lda,
                    float* tau, float* work, integer* lwork,
                    integer *info );

void FC_FUNC(dgeqlf,DGEQLF)( integer* m, integer* n, double* a, integer* lda,
                    double* tau, double* work, integer* lwork,
                    integer *info );

void FC_FUNC(cgeqlf,CGEQLF)( integer* m, integer* n, scomplex* a, integer* lda,
                    scomplex* tau, scomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(zgeqlf,ZGEQLF)( integer* m, integer* n, dcomplex* a, integer* lda,
                    dcomplex* tau, dcomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(sorgql,SORGQL)( integer* m, integer* n, integer* k, float* a,
                    integer* lda, const float* tau, float* work,
                    integer* lwork, integer *info );

void FC_FUNC(dorgql,DORGQL)( integer* m, integer* n, integer* k, double* a,
                    integer* lda, const double* tau, double* work,
                    integer* lwork, integer *info );

void FC_FUNC(cungql,CUNGQL)( integer* m, integer* n, integer* k, scomplex* a,
                    integer* lda, const scomplex* tau, scomplex* work,
                    integer* lwork, integer *info );

void FC_FUNC(zungql,ZUNGQL)( integer* m, integer* n, integer* k, dcomplex* a,
                    integer* lda, const dcomplex* tau, dcomplex* work,
                    integer* lwork, integer *info );

void FC_FUNC(sormql,SORMQL)( char* side, char* trans, integer* m, integer* n,
                    integer* k, const float* a, integer* lda,
                    const float* tau, float* c, integer* ldc, float* work,
                    integer* lwork, integer *info );

void FC_FUNC(dormql,DORMQL)( char* side, char* trans, integer* m, integer* n,
                    integer* k, const double* a, integer* lda,
                    const double* tau, double* c, integer* ldc, double* work,
                    integer* lwork, integer *info );

void FC_FUNC(cunmql,CUNMQL)( char* side, char* trans, integer* m, integer* n,
                    integer* k, const scomplex* a, integer* lda,
                    const scomplex* tau, scomplex* c, integer* ldc, scomplex* work,
                    integer* lwork, integer *info );

void FC_FUNC(zunmql,ZUNMQL)( char* side, char* trans, integer* m, integer* n,
                    integer* k, const dcomplex* a, integer* lda,
                    const dcomplex* tau, dcomplex* c, integer* ldc, dcomplex* work,
                    integer* lwork, integer *info );

void FC_FUNC(sgerqf,SGERQF)( integer* m, integer* n, float* a, integer* lda,
                    float* tau, float* work, integer* lwork,
                    integer *info );

void FC_FUNC(dgerqf,DGERQF)( integer* m, integer* n, double* a, integer* lda,
                    double* tau, double* work, integer* lwork,
                    integer *info );

void FC_FUNC(cgerqf,CGERQF)( integer* m, integer* n, scomplex* a, integer* lda,
                    scomplex* tau, scomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(zgerqf,ZGERQF)( integer* m, integer* n, dcomplex* a, integer* lda,
                    dcomplex* tau, dcomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(sorgrq,SORGRQ)( integer* m, integer* n, integer* k, float* a,
                    integer* lda, const float* tau, float* work,
                    integer* lwork, integer *info );

void FC_FUNC(dorgrq,DORGRQ)( integer* m, integer* n, integer* k, double* a,
                    integer* lda, const double* tau, double* work,
                    integer* lwork, integer *info );

void FC_FUNC(cungrq,CUNGRQ)( integer* m, integer* n, integer* k, scomplex* a,
                    integer* lda, const scomplex* tau, scomplex* work,
                    integer* lwork, integer *info );

void FC_FUNC(zungrq,ZUNGRQ)( integer* m, integer* n, integer* k, dcomplex* a,
                    integer* lda, const dcomplex* tau, dcomplex* work,
                    integer* lwork, integer *info );

void FC_FUNC(sormrq,SORMRQ)( char* side, char* trans, integer* m, integer* n,
                    integer* k, const float* a, integer* lda,
                    const float* tau, float* c, integer* ldc, float* work,
                    integer* lwork, integer *info );

void FC_FUNC(dormrq,DORMRQ)( char* side, char* trans, integer* m, integer* n,
                    integer* k, const double* a, integer* lda,
                    const double* tau, double* c, integer* ldc, double* work,
                    integer* lwork, integer *info );

void FC_FUNC(cunmrq,CUNMRQ)( char* side, char* trans, integer* m, integer* n,
                    integer* k, const scomplex* a, integer* lda,
                    const scomplex* tau, scomplex* c, integer* ldc, scomplex* work,
                    integer* lwork, integer *info );

void FC_FUNC(zunmrq,ZUNMRQ)( char* side, char* trans, integer* m, integer* n,
                    integer* k, const dcomplex* a, integer* lda,
                    const dcomplex* tau, dcomplex* c, integer* ldc, dcomplex* work,
                    integer* lwork, integer *info );

void FC_FUNC(stzrzf,STZRZF)( integer* m, integer* n, float* a, integer* lda,
                    float* tau, float* work, integer* lwork,
                    integer *info );

void FC_FUNC(dtzrzf,DTZRZF)( integer* m, integer* n, double* a, integer* lda,
                    double* tau, double* work, integer* lwork,
                    integer *info );

void FC_FUNC(ctzrzf,CTZRZF)( integer* m, integer* n, scomplex* a, integer* lda,
                    scomplex* tau, scomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(ztzrzf,ZTZRZF)( integer* m, integer* n, dcomplex* a, integer* lda,
                    dcomplex* tau, dcomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(sormrz,SORMRZ)( char* side, char* trans, integer* m, integer* n,
                    integer* k, integer* l, const float* a,
                    integer* lda, const float* tau, float* c,
                    integer* ldc, float* work, integer* lwork,
                    integer *info );

void FC_FUNC(dormrz,DORMRZ)( char* side, char* trans, integer* m, integer* n,
                    integer* k, integer* l, const double* a,
                    integer* lda, const double* tau, double* c,
                    integer* ldc, double* work, integer* lwork,
                    integer *info );

void FC_FUNC(cunmrz,CUNMRZ)( char* side, char* trans, integer* m, integer* n,
                    integer* k, integer* l, const scomplex* a,
                    integer* lda, const scomplex* tau, scomplex* c,
                    integer* ldc, scomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(zunmrz,ZUNMRZ)( char* side, char* trans, integer* m, integer* n,
                    integer* k, integer* l, const dcomplex* a,
                    integer* lda, const dcomplex* tau, dcomplex* c,
                    integer* ldc, dcomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(sggqrf,SGGQRF)( integer* n, integer* m, integer* p, float* a,
                    integer* lda, float* taua, float* b, integer* ldb,
                    float* taub, float* work, integer* lwork,
                    integer *info );

void FC_FUNC(dggqrf,DGGQRF)( integer* n, integer* m, integer* p, double* a,
                    integer* lda, double* taua, double* b, integer* ldb,
                    double* taub, double* work, integer* lwork,
                    integer *info );

void FC_FUNC(cggqrf,CGGQRF)( integer* n, integer* m, integer* p, scomplex* a,
                    integer* lda, scomplex* taua, scomplex* b, integer* ldb,
                    scomplex* taub, scomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(zggqrf,ZGGQRF)( integer* n, integer* m, integer* p, dcomplex* a,
                    integer* lda, dcomplex* taua, dcomplex* b, integer* ldb,
                    dcomplex* taub, dcomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(sggrqf,SGGRQF)( integer* m, integer* p, integer* n, float* a,
                    integer* lda, float* taua, float* b, integer* ldb,
                    float* taub, float* work, integer* lwork,
                    integer *info );

void FC_FUNC(dggrqf,DGGRQF)( integer* m, integer* p, integer* n, double* a,
                    integer* lda, double* taua, double* b, integer* ldb,
                    double* taub, double* work, integer* lwork,
                    integer *info );

void FC_FUNC(cggrqf,CGGRQF)( integer* m, integer* p, integer* n, scomplex* a,
                    integer* lda, scomplex* taua, scomplex* b, integer* ldb,
                    scomplex* taub, scomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(zggrqf,ZGGRQF)( integer* m, integer* p, integer* n, dcomplex* a,
                    integer* lda, dcomplex* taua, dcomplex* b, integer* ldb,
                    dcomplex* taub, dcomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(sgebrd,SGEBRD)( integer* m, integer* n, float* a, integer* lda,
                    float* d, float* e, float* tauq, float* taup,
                    float* work, integer* lwork, integer *info );

void FC_FUNC(dgebrd,DGEBRD)( integer* m, integer* n, double* a, integer* lda,
                    double* d, double* e, double* tauq, double* taup,
                    double* work, integer* lwork, integer *info );

void FC_FUNC(cgebrd,CGEBRD)( integer* m, integer* n, scomplex* a, integer* lda,
                    float* d, float* e, scomplex* tauq, scomplex* taup,
                    scomplex* work, integer* lwork, integer *info );

void FC_FUNC(zgebrd,ZGEBRD)( integer* m, integer* n, dcomplex* a, integer* lda,
                    double* d, double* e, dcomplex* tauq, dcomplex* taup,
                    dcomplex* work, integer* lwork, integer *info );

void FC_FUNC(sgbbrd,SGBBRD)( char* vect, integer* m, integer* n, integer* ncc,
                    integer* kl, integer* ku, float* ab,
                    integer* ldab, float* d, float* e, float* q,
                    integer* ldq, float* pt, integer* ldpt, float* c,
                    integer* ldc, float* work, integer *info );

void FC_FUNC(dgbbrd,DGBBRD)( char* vect, integer* m, integer* n, integer* ncc,
                    integer* kl, integer* ku, double* ab,
                    integer* ldab, double* d, double* e, double* q,
                    integer* ldq, double* pt, integer* ldpt, double* c,
                    integer* ldc, double* work, integer *info );

void FC_FUNC(cgbbrd,CGBBRD)( char* vect, integer* m, integer* n, integer* ncc,
                    integer* kl, integer* ku, scomplex* ab,
                    integer* ldab, float* d, float* e, scomplex* q,
                    integer* ldq, scomplex* pt, integer* ldpt, scomplex* c,
                    integer* ldc, scomplex* work, float* rwork, integer *info );

void FC_FUNC(zgbbrd,ZGBBRD)( char* vect, integer* m, integer* n, integer* ncc,
                    integer* kl, integer* ku, dcomplex* ab,
                    integer* ldab, double* d, double* e, dcomplex* q,
                    integer* ldq, dcomplex* pt, integer* ldpt, dcomplex* c,
                    integer* ldc, dcomplex* work, double* rwork, integer *info );

void FC_FUNC(sorgbr,SORGBR)( char* vect, integer* m, integer* n, integer* k,
                    float* a, integer* lda, const float* tau, float* work,
                    integer* lwork, integer *info );

void FC_FUNC(dorgbr,DORGBR)( char* vect, integer* m, integer* n, integer* k,
                    double* a, integer* lda, const double* tau, double* work,
                    integer* lwork, integer *info );

void FC_FUNC(cungbr,CUNGBR)( char* vect, integer* m, integer* n, integer* k,
                    scomplex* a, integer* lda, const scomplex* tau, scomplex* work,
                    integer* lwork, integer *info );

void FC_FUNC(zungbr,ZUNGBR)( char* vect, integer* m, integer* n, integer* k,
                    dcomplex* a, integer* lda, const dcomplex* tau, dcomplex* work,
                    integer* lwork, integer *info );

void FC_FUNC(sormbr,SORMBR)( char* vect, char* side, char* trans, integer* m,
                    integer* n, integer* k, const float* a,
                    integer* lda, const float* tau, float* c,
                    integer* ldc, float* work, integer* lwork,
                    integer *info );

void FC_FUNC(dormbr,DORMBR)( char* vect, char* side, char* trans, integer* m,
                    integer* n, integer* k, const double* a,
                    integer* lda, const double* tau, double* c,
                    integer* ldc, double* work, integer* lwork,
                    integer *info );

void FC_FUNC(cunmbr,CUNMBR)( char* vect, char* side, char* trans, integer* m,
                    integer* n, integer* k, const scomplex* a,
                    integer* lda, const scomplex* tau, scomplex* c,
                    integer* ldc, scomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(zunmbr,ZUNMBR)( char* vect, char* side, char* trans, integer* m,
                    integer* n, integer* k, const dcomplex* a,
                    integer* lda, const dcomplex* tau, dcomplex* c,
                    integer* ldc, dcomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(sbdsqr,SBDSQR)( char* uplo, integer* n, integer* ncvt,
                    integer* nru, integer* ncc, float* d, float* e,
                    float* vt, integer* ldvt, float* u, integer* ldu,
                    float* c, integer* ldc, float* work,
                    integer *info );

void FC_FUNC(dbdsqr,DBDSQR)( char* uplo, integer* n, integer* ncvt,
                    integer* nru, integer* ncc, double* d, double* e,
                    double* vt, integer* ldvt, double* u, integer* ldu,
                    double* c, integer* ldc, double* work,
                    integer *info );

void FC_FUNC(cbdsqr,CBDSQR)( char* uplo, integer* n, integer* ncvt,
                    integer* nru, integer* ncc, float* d, float* e,
                    scomplex* vt, integer* ldvt, scomplex* u, integer* ldu,
                    scomplex* c, integer* ldc, float* rwork,
                    integer *info );

void FC_FUNC(zbdsqr,ZBDSQR)( char* uplo, integer* n, integer* ncvt,
                    integer* nru, integer* ncc, double* d, double* e,
                    dcomplex* vt, integer* ldvt, dcomplex* u, integer* ldu,
                    dcomplex* c, integer* ldc, double* rwork,
                    integer *info );

void FC_FUNC(sbdsdc,SBDSDC)( char* uplo, char* compq, integer* n, float* d,
                    float* e, float* u, integer* ldu, float* vt,
                    integer* ldvt, float* q, integer* iq, float* work,
                    integer* iwork, integer *info );

void FC_FUNC(dbdsdc,DBDSDC)( char* uplo, char* compq, integer* n, double* d,
                    double* e, double* u, integer* ldu, double* vt,
                    integer* ldvt, double* q, integer* iq, double* work,
                    integer* iwork, integer *info );

void FC_FUNC(ssytrd,SSYTRD)( char* uplo, integer* n, float* a, integer* lda,
                    float* d, float* e, float* tau, float* work,
                    integer* lwork, integer *info );

void FC_FUNC(dsytrd,DSYTRD)( char* uplo, integer* n, double* a, integer* lda,
                    double* d, double* e, double* tau, double* work,
                    integer* lwork, integer *info );

void FC_FUNC(chetrd,CHETRD)( char* uplo, integer* n, scomplex* a, integer* lda,
                    float* d, float* e, scomplex* tau, scomplex* work,
                    integer* lwork, integer *info );

void FC_FUNC(zhetrd,ZHETRD)( char* uplo, integer* n, dcomplex* a, integer* lda,
                    double* d, double* e, dcomplex* tau, dcomplex* work,
                    integer* lwork, integer *info );

void FC_FUNC(sorgtr,SORGTR)( char* uplo, integer* n, float* a, integer* lda,
                    const float* tau, float* work, integer* lwork,
                    integer *info );

void FC_FUNC(dorgtr,DORGTR)( char* uplo, integer* n, double* a, integer* lda,
                    const double* tau, double* work, integer* lwork,
                    integer *info );

void FC_FUNC(cungtr,CUNGTR)( char* uplo, integer* n, scomplex* a, integer* lda,
                    const scomplex* tau, scomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(zungtr,ZUNGTR)( char* uplo, integer* n, dcomplex* a, integer* lda,
                    const dcomplex* tau, dcomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(sormtr,SORMTR)( char* side, char* uplo, char* trans, integer* m,
                    integer* n, const float* a, integer* lda,
                    const float* tau, float* c, integer* ldc, float* work,
                    integer* lwork, integer *info );

void FC_FUNC(dormtr,DORMTR)( char* side, char* uplo, char* trans, integer* m,
                    integer* n, const double* a, integer* lda,
                    const double* tau, double* c, integer* ldc, double* work,
                    integer* lwork, integer *info );

void FC_FUNC(cunmtr,CUNMTR)( char* side, char* uplo, char* trans, integer* m,
                    integer* n, const scomplex* a, integer* lda,
                    const scomplex* tau, scomplex* c, integer* ldc, scomplex* work,
                    integer* lwork, integer *info );

void FC_FUNC(zunmtr,ZUNMTR)( char* side, char* uplo, char* trans, integer* m,
                    integer* n, const dcomplex* a, integer* lda,
                    const dcomplex* tau, dcomplex* c, integer* ldc, dcomplex* work,
                    integer* lwork, integer *info );

void FC_FUNC(ssptrd,SSPTRD)( char* uplo, integer* n, float* ap, float* d, float* e,
                    float* tau, integer *info );

void FC_FUNC(dsptrd,DSPTRD)( char* uplo, integer* n, double* ap, double* d, double* e,
                    double* tau, integer *info );

void FC_FUNC(chptrd,CHPTRD)( char* uplo, integer* n, scomplex* ap, float* d, float* e,
                    scomplex* tau, integer *info );

void FC_FUNC(zhptrd,ZHPTRD)( char* uplo, integer* n, dcomplex* ap, double* d, double* e,
                    dcomplex* tau, integer *info );

void FC_FUNC(sopgtr,SOPGTR)( char* uplo, integer* n, const float* ap,
                    const float* tau, float* q, integer* ldq, float* work,
                    integer *info );

void FC_FUNC(dopgtr,DOPGTR)( char* uplo, integer* n, const double* ap,
                    const double* tau, double* q, integer* ldq, double* work,
                    integer *info );

void FC_FUNC(cupgtr,CUPGTR)( char* uplo, integer* n, const scomplex* ap,
                    const scomplex* tau, scomplex* q, integer* ldq, scomplex* work,
                    integer *info );

void FC_FUNC(zupgtr,ZUPGTR)( char* uplo, integer* n, const dcomplex* ap,
                    const dcomplex* tau, dcomplex* q, integer* ldq, dcomplex* work,
                    integer *info );

void FC_FUNC(sopmtr,SOPMTR)( char* side, char* uplo, char* trans, integer* m,
                    integer* n, const float* ap, const float* tau,
                    float* c, integer* ldc, float* work,
                    integer *info );

void FC_FUNC(dopmtr,DOPMTR)( char* side, char* uplo, char* trans, integer* m,
                    integer* n, const double* ap, const double* tau,
                    double* c, integer* ldc, double* work,
                    integer *info );

void FC_FUNC(cupmtr,CUPMTR)( char* side, char* uplo, char* trans, integer* m,
                    integer* n, const scomplex* ap, const scomplex* tau,
                    scomplex* c, integer* ldc, scomplex* work,
                    integer *info );

void FC_FUNC(zupmtr,ZUPMTR)( char* side, char* uplo, char* trans, integer* m,
                    integer* n, const dcomplex* ap, const dcomplex* tau,
                    dcomplex* c, integer* ldc, dcomplex* work,
                    integer *info );

void FC_FUNC(ssbtrd,SSBTRD)( char* vect, char* uplo, integer* n, integer* kd,
                    float* ab, integer* ldab, float* d, float* e,
                    float* q, integer* ldq, float* work,
                    integer *info );

void FC_FUNC(dsbtrd,DSBTRD)( char* vect, char* uplo, integer* n, integer* kd,
                    double* ab, integer* ldab, double* d, double* e,
                    double* q, integer* ldq, double* work,
                    integer *info );

void FC_FUNC(chbtrd,CHBTRD)( char* vect, char* uplo, integer* n, integer* kd,
                    scomplex* ab, integer* ldab, float* d, float* e,
                    scomplex* q, integer* ldq, scomplex* work,
                    integer *info );

void FC_FUNC(zhbtrd,ZHBTRD)( char* vect, char* uplo, integer* n, integer* kd,
                    dcomplex* ab, integer* ldab, double* d, double* e,
                    dcomplex* q, integer* ldq, dcomplex* work,
                    integer *info );

void FC_FUNC(ssterf,SSTERF)( integer* n, float* d, float* e, integer *info );

void FC_FUNC(dsterf,DSTERF)( integer* n, double* d, double* e, integer *info );

void FC_FUNC(ssteqr,SSTEQR)( char* compz, integer* n, float* d, float* e, float* z,
                    integer* ldz, float* work, integer *info );

void FC_FUNC(dsteqr,DSTEQR)( char* compz, integer* n, double* d, double* e, double* z,
                    integer* ldz, double* work, integer *info );

void FC_FUNC(csteqr,CSTEQR)( char* compz, integer* n, float* d, float* e, scomplex* z,
                    integer* ldz, float* work, integer *info );

void FC_FUNC(zsteqr,ZSTEQR)( char* compz, integer* n, double* d, double* e, dcomplex* z,
                    integer* ldz, double* work, integer *info );

void FC_FUNC(sstemr,SSTEMR)( char* jobz, char* range, integer* n, float* d,
                    float* e, float* vl, float* vu, integer* il,
                    integer* iu, integer* m, float* w, float* z,
                    integer* ldz, integer* nzc, integer* isuppz,
                    logical* tryrac, float* work, integer* lwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(dstemr,DSTEMR)( char* jobz, char* range, integer* n, double* d,
                    double* e, double* vl, double* vu, integer* il,
                    integer* iu, integer* m, double* w, double* z,
                    integer* ldz, integer* nzc, integer* isuppz,
                    logical* tryrac, double* work, integer* lwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(cstemr,CSTEMR)( char* jobz, char* range, integer* n, float* d,
                    float* e, float* vl, float* vu, integer* il,
                    integer* iu, integer* m, float* w, scomplex* z,
                    integer* ldz, integer* nzc, integer* isuppz,
                    logical* tryrac, float* work, integer* lwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(zstemr,ZSTEMR)( char* jobz, char* range, integer* n, double* d,
                    double* e, double* vl, double* vu, integer* il,
                    integer* iu, integer* m, double* w, dcomplex* z,
                    integer* ldz, integer* nzc, integer* isuppz,
                    logical* tryrac, double* work, integer* lwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(sstedc,SSTEDC)( char* compz, integer* n, float* d, float* e, float* z,
                    integer* ldz, float* work, integer* lwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(dstedc,DSTEDC)( char* compz, integer* n, double* d, double* e, double* z,
                    integer* ldz, double* work, integer* lwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(cstedc,CSTEDC)( char* compz, integer* n, float* d, float* e, scomplex* z,
                    integer* ldz, scomplex* work, integer* lwork, float* rwork, integer* lrwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(zstedc,ZSTEDC)( char* compz, integer* n, double* d, double* e, dcomplex* z,
                    integer* ldz, dcomplex* work, integer* lwork, double* rwork, integer* lrwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(sstegr,SSTEGR)( char* jobz, char* range, integer* n, float* d,
                    float* e, float* vl, float* vu, integer* il,
                    integer* iu, float* abstol, integer* m, float* w,
                    float* z, integer* ldz, integer* isuppz,
                    float* work, integer* lwork, integer* iwork,
                    integer* liwork, integer *info );

void FC_FUNC(dstegr,DSTEGR)( char* jobz, char* range, integer* n, double* d,
                    double* e, double* vl, double* vu, integer* il,
                    integer* iu, double* abstol, integer* m, double* w,
                    double* z, integer* ldz, integer* isuppz,
                    double* work, integer* lwork, integer* iwork,
                    integer* liwork, integer *info );

void FC_FUNC(cstegr,CSTEGR)( char* jobz, char* range, integer* n, float* d,
                    float* e, float* vl, float* vu, integer* il,
                    integer* iu, float* abstol, integer* m, float* w,
                    scomplex* z, integer* ldz, integer* isuppz,
                    float* work, integer* lwork, integer* iwork,
                    integer* liwork, integer *info );

void FC_FUNC(zstegr,ZSTEGR)( char* jobz, char* range, integer* n, double* d,
                    double* e, double* vl, double* vu, integer* il,
                    integer* iu, double* abstol, integer* m, double* w,
                    dcomplex* z, integer* ldz, integer* isuppz,
                    double* work, integer* lwork, integer* iwork,
                    integer* liwork, integer *info );

void FC_FUNC(spteqr,SPTEQR)( char* compz, integer* n, float* d, float* e, float* z,
                    integer* ldz, float* work, integer *info );

void FC_FUNC(dpteqr,DPTEQR)( char* compz, integer* n, double* d, double* e, double* z,
                    integer* ldz, double* work, integer *info );

void FC_FUNC(cpteqr,CPTEQR)( char* compz, integer* n, float* d, float* e, scomplex* z,
                    integer* ldz, float* work, integer *info );

void FC_FUNC(zpteqr,ZPTEQR)( char* compz, integer* n, double* d, double* e, dcomplex* z,
                    integer* ldz, double* work, integer *info );

void FC_FUNC(sstebz,SSTEBZ)( char* range, char* order, integer* n, float* vl,
                    float* vu, integer* il, integer* iu, float* abstol,
                    const float* d, const float* e, integer* m,
                    integer* nsplit, float* w, integer* iblock,
                    integer* isplit, float* work, integer* iwork,
                    integer *info );

void FC_FUNC(dstebz,DSTEBZ)( char* range, char* order, integer* n, double* vl,
                    double* vu, integer* il, integer* iu, double* abstol,
                    const double* d, const double* e, integer* m,
                    integer* nsplit, double* w, integer* iblock,
                    integer* isplit, double* work, integer* iwork,
                    integer *info );

void FC_FUNC(sstein,SSTEIN)( integer* n, const float* d, const float* e,
                    integer* m, const float* w, const integer* iblock,
                    const integer* isplit, float* z, integer* ldz,
                    float* work, integer* iwork, integer* ifailv,
                    integer *info );

void FC_FUNC(dstein,DSTEIN)( integer* n, const double* d, const double* e,
                    integer* m, const double* w, const integer* iblock,
                    const integer* isplit, double* z, integer* ldz,
                    double* work, integer* iwork, integer* ifailv,
                    integer *info );

void FC_FUNC(cstein,CSTEIN)( integer* n, const float* d, const float* e,
                    integer* m, const float* w, const integer* iblock,
                    const integer* isplit, scomplex* z, integer* ldz,
                    float* work, integer* iwork, integer* ifailv,
                    integer *info );

void FC_FUNC(zstein,ZSTEIN)( integer* n, const double* d, const double* e,
                    integer* m, const double* w, const integer* iblock,
                    const integer* isplit, dcomplex* z, integer* ldz,
                    double* work, integer* iwork, integer* ifailv,
                    integer *info );

void FC_FUNC(sdisna,SDISNA)( char* job, integer* m, integer* n, const float* d,
                    float* sep, integer *info );

void FC_FUNC(ddisna,DDISNA)( char* job, integer* m, integer* n, const double* d,
                    double* sep, integer *info );

void FC_FUNC(ssygst,SSYGST)( integer* itype, char* uplo, integer* n, float* a,
                    integer* lda, const float* b, integer* ldb,
                    integer *info );

void FC_FUNC(dsygst,DSYGST)( integer* itype, char* uplo, integer* n, double* a,
                    integer* lda, const double* b, integer* ldb,
                    integer *info );

void FC_FUNC(chegst,CHEGST)( integer* itype, char* uplo, integer* n, scomplex* a,
                    integer* lda, const scomplex* b, integer* ldb,
                    integer *info );

void FC_FUNC(zhegst,ZHEGST)( integer* itype, char* uplo, integer* n, dcomplex* a,
                    integer* lda, const dcomplex* b, integer* ldb,
                    integer *info );

void FC_FUNC(sspgst,SSPGST)( integer* itype, char* uplo, integer* n, float* ap,
                    const float* bp, integer *info );

void FC_FUNC(dspgst,DSPGST)( integer* itype, char* uplo, integer* n, double* ap,
                    const double* bp, integer *info );

void FC_FUNC(chpgst,CHPGST)( integer* itype, char* uplo, integer* n, scomplex* ap,
                    const scomplex* bp, integer *info );

void FC_FUNC(zhpgst,ZHPGST)( integer* itype, char* uplo, integer* n, dcomplex* ap,
                    const dcomplex* bp, integer *info );

void FC_FUNC(ssbgst,SSBGST)( char* vect, char* uplo, integer* n, integer* ka,
                    integer* kb, float* ab, integer* ldab,
                    const float* bb, integer* ldbb, float* x,
                    integer* ldx, float* work, integer *info );

void FC_FUNC(dsbgst,DSBGST)( char* vect, char* uplo, integer* n, integer* ka,
                    integer* kb, double* ab, integer* ldab,
                    const double* bb, integer* ldbb, double* x,
                    integer* ldx, double* work, integer *info );

void FC_FUNC(chbgst,CHBGST)( char* vect, char* uplo, integer* n, integer* ka,
                    integer* kb, scomplex* ab, integer* ldab,
                    const scomplex* bb, integer* ldbb, scomplex* x,
                    integer* ldx, scomplex* work, float* rwork, integer *info );

void FC_FUNC(zhbgst,ZHBGST)( char* vect, char* uplo, integer* n, integer* ka,
                    integer* kb, dcomplex* ab, integer* ldab,
                    const dcomplex* bb, integer* ldbb, dcomplex* x,
                    integer* ldx, dcomplex* work, double* rwork, integer *info );

void FC_FUNC(spbstf,SPBSTF)( char* uplo, integer* n, integer* kb, float* bb,
                    integer* ldbb, integer *info );

void FC_FUNC(dpbstf,DPBSTF)( char* uplo, integer* n, integer* kb, double* bb,
                    integer* ldbb, integer *info );

void FC_FUNC(cpbstf,CPBSTF)( char* uplo, integer* n, integer* kb, scomplex* bb,
                    integer* ldbb, integer *info );

void FC_FUNC(zpbstf,ZPBSTF)( char* uplo, integer* n, integer* kb, dcomplex* bb,
                    integer* ldbb, integer *info );

void FC_FUNC(sgehrd,SGEHRD)( integer* n, integer* ilo, integer* ihi, float* a,
                    integer* lda, float* tau, float* work,
                    integer* lwork, integer *info );

void FC_FUNC(dgehrd,DGEHRD)( integer* n, integer* ilo, integer* ihi, double* a,
                    integer* lda, double* tau, double* work,
                    integer* lwork, integer *info );

void FC_FUNC(cgehrd,CGEHRD)( integer* n, integer* ilo, integer* ihi, scomplex* a,
                    integer* lda, scomplex* tau, scomplex* work,
                    integer* lwork, integer *info );

void FC_FUNC(zgehrd,ZGEHRD)( integer* n, integer* ilo, integer* ihi, dcomplex* a,
                    integer* lda, dcomplex* tau, dcomplex* work,
                    integer* lwork, integer *info );

void FC_FUNC(sorghr,SORGHR)( integer* n, integer* ilo, integer* ihi, float* a,
                    integer* lda, const float* tau, float* work,
                    integer* lwork, integer *info );

void FC_FUNC(dorghr,DORGHR)( integer* n, integer* ilo, integer* ihi, double* a,
                    integer* lda, const double* tau, double* work,
                    integer* lwork, integer *info );

void FC_FUNC(cunghr,CUNGHR)( integer* n, integer* ilo, integer* ihi, scomplex* a,
                    integer* lda, const scomplex* tau, scomplex* work,
                    integer* lwork, integer *info );

void FC_FUNC(zunghr,ZUNGHR)( integer* n, integer* ilo, integer* ihi, dcomplex* a,
                    integer* lda, const dcomplex* tau, dcomplex* work,
                    integer* lwork, integer *info );

void FC_FUNC(sormhr,SORMHR)( char* side, char* trans, integer* m, integer* n,
                    integer* ilo, integer* ihi, const float* a,
                    integer* lda, const float* tau, float* c,
                    integer* ldc, float* work, integer* lwork,
                    integer *info );

void FC_FUNC(dormhr,DORMHR)( char* side, char* trans, integer* m, integer* n,
                    integer* ilo, integer* ihi, const double* a,
                    integer* lda, const double* tau, double* c,
                    integer* ldc, double* work, integer* lwork,
                    integer *info );

void FC_FUNC(cunmhr,CUNMHR)( char* side, char* trans, integer* m, integer* n,
                    integer* ilo, integer* ihi, const scomplex* a,
                    integer* lda, const scomplex* tau, scomplex* c,
                    integer* ldc, scomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(zunmhr,ZUNMHR)( char* side, char* trans, integer* m, integer* n,
                    integer* ilo, integer* ihi, const dcomplex* a,
                    integer* lda, const dcomplex* tau, dcomplex* c,
                    integer* ldc, dcomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(sgebal,SGEBAL)( char* job, integer* n, float* a, integer* lda,
                    integer* ilo, integer* ihi, float* scale,
                    integer *info );

void FC_FUNC(dgebal,DGEBAL)( char* job, integer* n, double* a, integer* lda,
                    integer* ilo, integer* ihi, double* scale,
                    integer *info );

void FC_FUNC(cgebal,CGEBAL)( char* job, integer* n, scomplex* a, integer* lda,
                    integer* ilo, integer* ihi, float* scale,
                    integer *info );

void FC_FUNC(zgebal,ZGEBAL)( char* job, integer* n, dcomplex* a, integer* lda,
                    integer* ilo, integer* ihi, double* scale,
                    integer *info );

void FC_FUNC(sgebak,SGEBAK)( char* job, char* side, integer* n, integer* ilo,
                    integer* ihi, const float* scale, integer* m,
                    float* v, integer* ldv, integer *info );

void FC_FUNC(dgebak,DGEBAK)( char* job, char* side, integer* n, integer* ilo,
                    integer* ihi, const double* scale, integer* m,
                    double* v, integer* ldv, integer *info );

void FC_FUNC(cgebak,CGEBAK)( char* job, char* side, integer* n, integer* ilo,
                    integer* ihi, const float* scale, integer* m,
                    scomplex* v, integer* ldv, integer *info );

void FC_FUNC(zgebak,ZGEBAK)( char* job, char* side, integer* n, integer* ilo,
                    integer* ihi, const double* scale, integer* m,
                    dcomplex* v, integer* ldv, integer *info );

void FC_FUNC(shseqr,SHSEQR)( char* job, char* compz, integer* n, integer* ilo,
                    integer* ihi, float* h, integer* ldh, float* wr,
                    float* wi, float* z, integer* ldz, float* work,
                    integer* lwork, integer *info );

void FC_FUNC(dhseqr,DHSEQR)( char* job, char* compz, integer* n, integer* ilo,
                    integer* ihi, double* h, integer* ldh, double* wr,
                    double* wi, double* z, integer* ldz, double* work,
                    integer* lwork, integer *info );

void FC_FUNC(chseqr,CHSEQR)( char* job, char* compz, integer* n, integer* ilo,
                    integer* ihi, scomplex* h, integer* ldh, scomplex* w,
                    scomplex* z, integer* ldz, scomplex* work,
                    integer* lwork, integer *info );

void FC_FUNC(zhseqr,ZHSEQR)( char* job, char* compz, integer* n, integer* ilo,
                    integer* ihi, dcomplex* h, integer* ldh, dcomplex* w,
                    dcomplex* z, integer* ldz, dcomplex* work,
                    integer* lwork, integer *info );

void FC_FUNC(shsein,SHSEIN)( char* job, char* eigsrc, char* initv,
                    logical* select, integer* n, const float* h,
                    integer* ldh, float* wr, const float* wi, float* vl,
                    integer* ldvl, float* vr, integer* ldvr,
                    integer* mm, integer* m, float* work,
                    integer* ifaill, integer* ifailr, integer *info );

void FC_FUNC(dhsein,DHSEIN)( char* job, char* eigsrc, char* initv,
                    logical* select, integer* n, const double* h,
                    integer* ldh, double* wr, const double* wi, double* vl,
                    integer* ldvl, double* vr, integer* ldvr,
                    integer* mm, integer* m, double* work,
                    integer* ifaill, integer* ifailr, integer *info );

void FC_FUNC(chsein,CHSEIN)( char* job, char* eigsrc, char* initv,
                    logical* select, integer* n, const scomplex* h,
                    integer* ldh, scomplex* w, scomplex* vl,
                    integer* ldvl, scomplex* vr, integer* ldvr,
                    integer* mm, integer* m, scomplex* work, float* rwork,
                    integer* ifaill, integer* ifailr, integer *info );

void FC_FUNC(zhsein,ZHSEIN)( char* job, char* eigsrc, char* initv,
                    logical* select, integer* n, const dcomplex* h,
                    integer* ldh, dcomplex* w, dcomplex* vl,
                    integer* ldvl, dcomplex* vr, integer* ldvr,
                    integer* mm, integer* m, dcomplex* work, double* rwork,
                    integer* ifaill, integer* ifailr, integer *info );

void FC_FUNC(strevc,STREVC)( char* side, char* howmny, const logical* select,
                    integer* n, const float* t, integer* ldt, float* vl,
                    integer* ldvl, float* vr, integer* ldvr,
                    integer* mm, integer* m, float* work,
                    integer *info );

void FC_FUNC(dtrevc,DTREVC)( char* side, char* howmny, const logical* select,
                    integer* n, const double* t, integer* ldt, double* vl,
                    integer* ldvl, double* vr, integer* ldvr,
                    integer* mm, integer* m, double* work,
                    integer *info );

void FC_FUNC(ctrevc,CTREVC)( char* side, char* howmny, const logical* select,
                    integer* n, const scomplex* t, integer* ldt, scomplex* vl,
                    integer* ldvl, scomplex* vr, integer* ldvr,
                    integer* mm, integer* m, scomplex* work, float* rwork,
                    integer *info );

void FC_FUNC(ztrevc,ZTREVC)( char* side, char* howmny, const logical* select,
                    integer* n, const dcomplex* t, integer* ldt, dcomplex* vl,
                    integer* ldvl, dcomplex* vr, integer* ldvr,
                    integer* mm, integer* m, dcomplex* work, double* rwork,
                    integer *info );

void FC_FUNC(strsna,STRSNA)( char* job, char* howmny, const logical* select,
                    integer* n, const float* t, integer* ldt,
                    const float* vl, integer* ldvl, const float* vr,
                    integer* ldvr, float* s, float* sep, integer* mm,
                    integer* m, float* work, integer* ldwork,
                    integer* iwork, integer *info );

void FC_FUNC(dtrsna,DTRSNA)( char* job, char* howmny, const logical* select,
                    integer* n, const double* t, integer* ldt,
                    const double* vl, integer* ldvl, const double* vr,
                    integer* ldvr, double* s, double* sep, integer* mm,
                    integer* m, double* work, integer* ldwork,
                    integer* iwork, integer *info );

void FC_FUNC(ctrsna,CTRSNA)( char* job, char* howmny, const logical* select,
                    integer* n, const scomplex* t, integer* ldt,
                    const scomplex* vl, integer* ldvl, const scomplex* vr,
                    integer* ldvr, float* s, float* sep, integer* mm,
                    integer* m, scomplex* work, integer* ldwork,
                    float* rwork, integer *info );

void FC_FUNC(ztrsna,ZTRSNA)( char* job, char* howmny, const logical* select,
                    integer* n, const dcomplex* t, integer* ldt,
                    const dcomplex* vl, integer* ldvl, const dcomplex* vr,
                    integer* ldvr, double* s, double* sep, integer* mm,
                    integer* m, dcomplex* work, integer* ldwork,
                    double* rwork, integer *info );

void FC_FUNC(strexc,STREXC)( char* compq, integer* n, float* t, integer* ldt,
                    float* q, integer* ldq, integer* ifst,
                    integer* ilst, float* work, integer *info );

void FC_FUNC(dtrexc,DTREXC)( char* compq, integer* n, double* t, integer* ldt,
                    double* q, integer* ldq, integer* ifst,
                    integer* ilst, double* work, integer *info );

void FC_FUNC(ctrexc,CTREXC)( char* compq, integer* n, scomplex* t, integer* ldt,
                    scomplex* q, integer* ldq, integer* ifst,
                    integer* ilst, integer *info );

void FC_FUNC(ztrexc,ZTREXC)( char* compq, integer* n, dcomplex* t, integer* ldt,
                    dcomplex* q, integer* ldq, integer* ifst,
                    integer* ilst, integer *info );

void FC_FUNC(strsen,STRSEN)( char* job, char* compq, const logical* select,
                    integer* n, float* t, integer* ldt, float* q,
                    integer* ldq, float* wr, float* wi, integer* m,
                    float* s, float* sep, float* work, integer* lwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(dtrsen,DTRSEN)( char* job, char* compq, const logical* select,
                    integer* n, double* t, integer* ldt, double* q,
                    integer* ldq, double* wr, double* wi, integer* m,
                    double* s, double* sep, double* work, integer* lwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(ctrsen,CTRSEN)( char* job, char* compq, const logical* select,
                    integer* n, scomplex* t, integer* ldt, scomplex* q,
                    integer* ldq, scomplex* w, integer* m,
                    float* s, float* sep, scomplex* work, integer* lwork, integer *info );

void FC_FUNC(ztrsen,ZTRSEN)( char* job, char* compq, const logical* select,
                    integer* n, dcomplex* t, integer* ldt, dcomplex* q,
                    integer* ldq, dcomplex* w, integer* m,
                    double* s, double* sep, dcomplex* work, integer* lwork, integer *info );

void FC_FUNC(strsyl,STRSYL)( char* trana, char* tranb, integer* isgn, integer* m,
                    integer* n, const float* a, integer* lda,
                    const float* b, integer* ldb, float* c,
                    integer* ldc, float* scale, integer *info );

void FC_FUNC(dtrsyl,DTRSYL)( char* trana, char* tranb, integer* isgn, integer* m,
                    integer* n, const double* a, integer* lda,
                    const double* b, integer* ldb, double* c,
                    integer* ldc, double* scale, integer *info );

void FC_FUNC(ctrsyl,CTRSYL)( char* trana, char* tranb, integer* isgn, integer* m,
                    integer* n, const scomplex* a, integer* lda,
                    const scomplex* b, integer* ldb, scomplex* c,
                    integer* ldc, float* scale, integer *info );

void FC_FUNC(ztrsyl,ZTRSYL)( char* trana, char* tranb, integer* isgn, integer* m,
                    integer* n, const dcomplex* a, integer* lda,
                    const dcomplex* b, integer* ldb, dcomplex* c,
                    integer* ldc, double* scale, integer *info );

void FC_FUNC(sgghrd,SGGHRD)( char* compq, char* compz, integer* n, integer* ilo,
                    integer* ihi, float* a, integer* lda, float* b,
                    integer* ldb, float* q, integer* ldq, float* z,
                    integer* ldz, integer *info );

void FC_FUNC(dgghrd,DGGHRD)( char* compq, char* compz, integer* n, integer* ilo,
                    integer* ihi, double* a, integer* lda, double* b,
                    integer* ldb, double* q, integer* ldq, double* z,
                    integer* ldz, integer *info );

void FC_FUNC(cgghrd,CGGHRD)( char* compq, char* compz, integer* n, integer* ilo,
                    integer* ihi, scomplex* a, integer* lda, scomplex* b,
                    integer* ldb, scomplex* q, integer* ldq, scomplex* z,
                    integer* ldz, integer *info );

void FC_FUNC(zgghrd,ZGGHRD)( char* compq, char* compz, integer* n, integer* ilo,
                    integer* ihi, dcomplex* a, integer* lda, dcomplex* b,
                    integer* ldb, dcomplex* q, integer* ldq, dcomplex* z,
                    integer* ldz, integer *info );

void FC_FUNC(sggbal,SGGBAL)( char* job, integer* n, float* a, integer* lda,
                    float* b, integer* ldb, integer* ilo,
                    integer* ihi, float* lscale, float* rscale,
                    float* work, integer *info );

void FC_FUNC(dggbal,DGGBAL)( char* job, integer* n, double* a, integer* lda,
                    double* b, integer* ldb, integer* ilo,
                    integer* ihi, double* lscale, double* rscale,
                    double* work, integer *info );

void FC_FUNC(cggbal,CGGBAL)( char* job, integer* n, scomplex* a, integer* lda,
                    scomplex* b, integer* ldb, integer* ilo,
                    integer* ihi, float* lscale, float* rscale,
                    float* work, integer *info );

void FC_FUNC(zggbal,ZGGBAL)( char* job, integer* n, dcomplex* a, integer* lda,
                    dcomplex* b, integer* ldb, integer* ilo,
                    integer* ihi, double* lscale, double* rscale,
                    double* work, integer *info );

void FC_FUNC(sggbak,SGGBAK)( char* job, char* side, integer* n, integer* ilo,
                    integer* ihi, const float* lscale, const float* rscale,
                    integer* m, float* v, integer* ldv,
                    integer *info );

void FC_FUNC(dggbak,DGGBAK)( char* job, char* side, integer* n, integer* ilo,
                    integer* ihi, const double* lscale, const double* rscale,
                    integer* m, double* v, integer* ldv,
                    integer *info );

void FC_FUNC(cggbak,CGGBAK)( char* job, char* side, integer* n, integer* ilo,
                    integer* ihi, const float* lscale, const float* rscale,
                    integer* m, scomplex* v, integer* ldv,
                    integer *info );

void FC_FUNC(zggbak,ZGGBAK)( char* job, char* side, integer* n, integer* ilo,
                    integer* ihi, const double* lscale, const double* rscale,
                    integer* m, dcomplex* v, integer* ldv,
                    integer *info );

void FC_FUNC(shgeqz,SHGEQZ)( char* job, char* compq, char* compz, integer* n,
                    integer* ilo, integer* ihi, float* h,
                    integer* ldh, float* t, integer* ldt, float* alphar,
                    float* alphai, float* beta, float* q, integer* ldq,
                    float* z, integer* ldz, float* work, integer* lwork,
                    integer *info );

void FC_FUNC(dhgeqz,DHGEQZ)( char* job, char* compq, char* compz, integer* n,
                    integer* ilo, integer* ihi, double* h,
                    integer* ldh, double* t, integer* ldt, double* alphar,
                    double* alphai, double* beta, double* q, integer* ldq,
                    double* z, integer* ldz, double* work, integer* lwork,
                    integer *info );

void FC_FUNC(chgeqz,CHGEQZ)( char* job, char* compq, char* compz, integer* n,
                    integer* ilo, integer* ihi, scomplex* h,
                    integer* ldh, scomplex* t, integer* ldt, scomplex* alpha,
                    scomplex* beta, scomplex* q, integer* ldq,
                    scomplex* z, integer* ldz, scomplex* work, integer* lwork,
                    float* rwork, integer *info );

void FC_FUNC(zhgeqz,ZHGEQZ)( char* job, char* compq, char* compz, integer* n,
                    integer* ilo, integer* ihi, dcomplex* h,
                    integer* ldh, dcomplex* t, integer* ldt, dcomplex* alpha,
                    dcomplex* beta, dcomplex* q, integer* ldq,
                    dcomplex* z, integer* ldz, dcomplex* work, integer* lwork,
                    double* rwork, integer *info );

void FC_FUNC(stgevc,STGEVC)( char* side, char* howmny, const logical* select,
                    integer* n, const float* s, integer* lds,
                    const float* p, integer* ldp, float* vl,
                    integer* ldvl, float* vr, integer* ldvr,
                    integer* mm, integer* m, float* work,
                    integer *info );

void FC_FUNC(dtgevc,DTGEVC)( char* side, char* howmny, const logical* select,
                    integer* n, const double* s, integer* lds,
                    const double* p, integer* ldp, double* vl,
                    integer* ldvl, double* vr, integer* ldvr,
                    integer* mm, integer* m, double* work,
                    integer *info );

void FC_FUNC(ctgevc,CTGEVC)( char* side, char* howmny, const logical* select,
                    integer* n, const scomplex* s, integer* lds,
                    const scomplex* p, integer* ldp, scomplex* vl,
                    integer* ldvl, scomplex* vr, integer* ldvr,
                    integer* mm, integer* m, scomplex* work, float* rwork,
                    integer *info );

void FC_FUNC(ztgevc,ZTGEVC)( char* side, char* howmny, const logical* select,
                    integer* n, const dcomplex* s, integer* lds,
                    const dcomplex* p, integer* ldp, dcomplex* vl,
                    integer* ldvl, dcomplex* vr, integer* ldvr,
                    integer* mm, integer* m, dcomplex* work, double* rwork,
                    integer *info );

void FC_FUNC(stgexc,STGEXC)( logical* wantq, logical* wantz, integer* n,
                    float* a, integer* lda, float* b, integer* ldb,
                    float* q, integer* ldq, float* z, integer* ldz,
                    integer* ifst, integer* ilst, float* work,
                    integer* lwork, integer *info );

void FC_FUNC(dtgexc,DTGEXC)( logical* wantq, logical* wantz, integer* n,
                    double* a, integer* lda, double* b, integer* ldb,
                    double* q, integer* ldq, double* z, integer* ldz,
                    integer* ifst, integer* ilst, double* work,
                    integer* lwork, integer *info );

void FC_FUNC(ctgexc,CTGEXC)( logical* wantq, logical* wantz, integer* n,
                    scomplex* a, integer* lda, scomplex* b, integer* ldb,
                    scomplex* q, integer* ldq, scomplex* z, integer* ldz,
                    integer* ifst, integer* ilst, integer *info );

void FC_FUNC(ztgexc,ZTGEXC)( logical* wantq, logical* wantz, integer* n,
                    dcomplex* a, integer* lda, dcomplex* b, integer* ldb,
                    dcomplex* q, integer* ldq, dcomplex* z, integer* ldz,
                    integer* ifst, integer* ilst, integer *info );

void FC_FUNC(stgsen,STGSEN)( integer* ijob, logical* wantq,
                    logical* wantz, const logical* select,
                    integer* n, float* a, integer* lda, float* b,
                    integer* ldb, float* alphar, float* alphai,
                    float* beta, float* q, integer* ldq, float* z,
                    integer* ldz, integer* m, float* pl, float* pr,
                    float* dif, float* work, integer* lwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(dtgsen,DTGSEN)( integer* ijob, logical* wantq,
                    logical* wantz, const logical* select,
                    integer* n, double* a, integer* lda, double* b,
                    integer* ldb, double* alphar, double* alphai,
                    double* beta, double* q, integer* ldq, double* z,
                    integer* ldz, integer* m, double* pl, double* pr,
                    double* dif, double* work, integer* lwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(ctgsen,CTGSEN)( integer* ijob, logical* wantq,
                    logical* wantz, const logical* select,
                    integer* n, scomplex* a, integer* lda, scomplex* b,
                    integer* ldb, scomplex* alpha,
                    scomplex* beta, scomplex* q, integer* ldq, scomplex* z,
                    integer* ldz, integer* m, float* pl, float* pr,
                    float* dif, scomplex* work, integer* lwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(ztgsen,ZTGSEN)( integer* ijob, logical* wantq,
                    logical* wantz, const logical* select,
                    integer* n, dcomplex* a, integer* lda, dcomplex* b,
                    integer* ldb, dcomplex* alpha,
                    dcomplex* beta, dcomplex* q, integer* ldq, dcomplex* z,
                    integer* ldz, integer* m, double* pl, double* pr,
                    double* dif, dcomplex* work, integer* lwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(stgsyl,STGSYL)( char* trans, integer* ijob, integer* m, integer* n,
                    const float* a, integer* lda, const float* b,
                    integer* ldb, float* c, integer* ldc,
                    const float* d, integer* ldd, const float* e,
                    integer* lde, float* f, integer* ldf, float* scale,
                    float* dif, float* work, integer* lwork,
                    integer* iwork, integer *info );

void FC_FUNC(dtgsyl,DTGSYL)( char* trans, integer* ijob, integer* m, integer* n,
                    const double* a, integer* lda, const double* b,
                    integer* ldb, double* c, integer* ldc,
                    const double* d, integer* ldd, const double* e,
                    integer* lde, double* f, integer* ldf, double* scale,
                    double* dif, double* work, integer* lwork,
                    integer* iwork, integer *info );

void FC_FUNC(ctgsyl,CTGSYL)( char* trans, integer* ijob, integer* m, integer* n,
                    const scomplex* a, integer* lda, const scomplex* b,
                    integer* ldb, scomplex* c, integer* ldc,
                    const scomplex* d, integer* ldd, const scomplex* e,
                    integer* lde, scomplex* f, integer* ldf, float* scale,
                    float* dif, scomplex* work, integer* lwork,
                    integer* iwork, integer *info );

void FC_FUNC(ztgsyl,ZTGSYL)( char* trans, integer* ijob, integer* m, integer* n,
                    const dcomplex* a, integer* lda, const dcomplex* b,
                    integer* ldb, dcomplex* c, integer* ldc,
                    const dcomplex* d, integer* ldd, const dcomplex* e,
                    integer* lde, dcomplex* f, integer* ldf, double* scale,
                    double* dif, dcomplex* work, integer* lwork,
                    integer* iwork, integer *info );

void FC_FUNC(stgsna,STGSNA)( char* job, char* howmny, const logical* select,
                    integer* n, const float* a, integer* lda,
                    const float* b, integer* ldb, const float* vl,
                    integer* ldvl, const float* vr, integer* ldvr,
                    float* s, float* dif, integer* mm, integer* m,
                    float* work, integer* lwork, integer* iwork,
                    integer *info );

void FC_FUNC(dtgsna,DTGSNA)( char* job, char* howmny, const logical* select,
                    integer* n, const double* a, integer* lda,
                    const double* b, integer* ldb, const double* vl,
                    integer* ldvl, const double* vr, integer* ldvr,
                    double* s, double* dif, integer* mm, integer* m,
                    double* work, integer* lwork, integer* iwork,
                    integer *info );

void FC_FUNC(ctgsna,CTGSNA)( char* job, char* howmny, const logical* select,
                    integer* n, const scomplex* a, integer* lda,
                    const scomplex* b, integer* ldb, const scomplex* vl,
                    integer* ldvl, const scomplex* vr, integer* ldvr,
                    float* s, float* dif, integer* mm, integer* m,
                    scomplex* work, integer* lwork, integer* iwork,
                    integer *info );

void FC_FUNC(ztgsna,ZTGSNA)( char* job, char* howmny, const logical* select,
                    integer* n, const dcomplex* a, integer* lda,
                    const dcomplex* b, integer* ldb, const dcomplex* vl,
                    integer* ldvl, const dcomplex* vr, integer* ldvr,
                    double* s, double* dif, integer* mm, integer* m,
                    dcomplex* work, integer* lwork, integer* iwork,
                    integer *info );

void FC_FUNC(sggsvp,SGGSVP)( char* jobu, char* jobv, char* jobq, integer* m,
                    integer* p, integer* n, float* a, integer* lda,
                    float* b, integer* ldb, float* tola, float* tolb,
                    integer* k, integer* l, float* u, integer* ldu,
                    float* v, integer* ldv, float* q, integer* ldq,
                    integer* iwork, float* tau, float* work,
                    integer *info );

void FC_FUNC(dggsvp,DGGSVP)( char* jobu, char* jobv, char* jobq, integer* m,
                    integer* p, integer* n, double* a, integer* lda,
                    double* b, integer* ldb, double* tola, double* tolb,
                    integer* k, integer* l, double* u, integer* ldu,
                    double* v, integer* ldv, double* q, integer* ldq,
                    integer* iwork, double* tau, double* work,
                    integer *info );

void FC_FUNC(cggsvp,CGGSVP)( char* jobu, char* jobv, char* jobq, integer* m,
                    integer* p, integer* n, scomplex* a, integer* lda,
                    scomplex* b, integer* ldb, float* tola, float* tolb,
                    integer* k, integer* l, scomplex* u, integer* ldu,
                    scomplex* v, integer* ldv, scomplex* q, integer* ldq,
                    integer* iwork, float* rwork, scomplex* tau, scomplex* work,
                    integer *info );

void FC_FUNC(zggsvp,ZGGSVP)( char* jobu, char* jobv, char* jobq, integer* m,
                    integer* p, integer* n, dcomplex* a, integer* lda,
                    dcomplex* b, integer* ldb, double* tola, double* tolb,
                    integer* k, integer* l, dcomplex* u, integer* ldu,
                    dcomplex* v, integer* ldv, dcomplex* q, integer* ldq,
                    integer* iwork, double* rwork, dcomplex* tau, dcomplex* work,
                    integer *info );

void FC_FUNC(stgsja,STGSJA)( char* jobu, char* jobv, char* jobq, integer* m,
                    integer* p, integer* n, integer* k, integer* l,
                    float* a, integer* lda, float* b, integer* ldb,
                    float* tola, float* tolb, float* alpha, float* beta,
                    float* u, integer* ldu, float* v, integer* ldv,
                    float* q, integer* ldq, float* work,
                    integer* ncycle, integer *info );

void FC_FUNC(dtgsja,DTGSJA)( char* jobu, char* jobv, char* jobq, integer* m,
                    integer* p, integer* n, integer* k, integer* l,
                    double* a, integer* lda, double* b, integer* ldb,
                    double* tola, double* tolb, double* alpha, double* beta,
                    double* u, integer* ldu, double* v, integer* ldv,
                    double* q, integer* ldq, double* work,
                    integer* ncycle, integer *info );

void FC_FUNC(ctgsja,CTGSJA)( char* jobu, char* jobv, char* jobq, integer* m,
                    integer* p, integer* n, integer* k, integer* l,
                    scomplex* a, integer* lda, scomplex* b, integer* ldb,
                    float* tola, float* tolb, float* alpha, float* beta,
                    scomplex* u, integer* ldu, scomplex* v, integer* ldv,
                    scomplex* q, integer* ldq, scomplex* work,
                    integer* ncycle, integer *info );

void FC_FUNC(ztgsja,ZTGSJA)( char* jobu, char* jobv, char* jobq, integer* m,
                    integer* p, integer* n, integer* k, integer* l,
                    dcomplex* a, integer* lda, dcomplex* b, integer* ldb,
                    double* tola, double* tolb, double* alpha, double* beta,
                    dcomplex* u, integer* ldu, dcomplex* v, integer* ldv,
                    dcomplex* q, integer* ldq, dcomplex* work,
                    integer* ncycle, integer *info );

void FC_FUNC(sgels,SGELS)( char* trans, integer* m, integer* n, integer* nrhs,
                   float* a, integer* lda, float* b, integer* ldb,
                   float* work, integer* lwork, integer *info );

void FC_FUNC(dgels,DGELS)( char* trans, integer* m, integer* n, integer* nrhs,
                   double* a, integer* lda, double* b, integer* ldb,
                   double* work, integer* lwork, integer *info );

void FC_FUNC(cgels,CGELS)( char* trans, integer* m, integer* n, integer* nrhs,
                    scomplex* a, integer* lda, scomplex* b, integer* ldb,
                    scomplex* work, integer* lwork, integer *info );

void FC_FUNC(zgels,ZGELS)( char* trans, integer* m, integer* n, integer* nrhs,
                   dcomplex* a, integer* lda, dcomplex* b, integer* ldb,
                   dcomplex* work, integer* lwork, integer *info );

void FC_FUNC(sgelsy,SGELSY)( integer* m, integer* n, integer* nrhs, float* a,
                    integer* lda, float* b, integer* ldb,
                    integer* jpvt, float* rcond, integer* rank,
                    float* work, integer* lwork, integer *info );

void FC_FUNC(dgelsy,DGELSY)( integer* m, integer* n, integer* nrhs, double* a,
                    integer* lda, double* b, integer* ldb,
                    integer* jpvt, double* rcond, integer* rank,
                    double* work, integer* lwork, integer *info );

void FC_FUNC(cgelsy,CGELSY)( integer* m, integer* n, integer* nrhs, scomplex* a,
                    integer* lda, scomplex* b, integer* ldb,
                    integer* jpvt, float* rcond, integer* rank,
                    scomplex* work, integer* lwork, float* rwork, integer *info );

void FC_FUNC(zgelsy,ZGELSY)( integer* m, integer* n, integer* nrhs, dcomplex* a,
                    integer* lda, dcomplex* b, integer* ldb,
                    integer* jpvt, double* rcond, integer* rank,
                    dcomplex* work, integer* lwork, double* rwork, integer *info );

void FC_FUNC(sgelss,SGELSS)( integer* m, integer* n, integer* nrhs, float* a,
                    integer* lda, float* b, integer* ldb, float* s,
                    float* rcond, integer* rank, float* work,
                    integer* lwork, integer *info );

void FC_FUNC(dgelss,DGELSS)( integer* m, integer* n, integer* nrhs, double* a,
                    integer* lda, double* b, integer* ldb, double* s,
                    double* rcond, integer* rank, double* work,
                    integer* lwork, integer *info );

void FC_FUNC(cgelss,CGELSS)( integer* m, integer* n, integer* nrhs, scomplex* a,
                    integer* lda, scomplex* b, integer* ldb, float* s,
                    float* rcond, integer* rank, scomplex* work,
                    integer* lwork, float* rwork, integer *info );

void FC_FUNC(zgelss,ZGELSS)( integer* m, integer* n, integer* nrhs, dcomplex* a,
                    integer* lda, dcomplex* b, integer* ldb, double* s,
                    double* rcond, integer* rank, dcomplex* work,
                    integer* lwork, double* rwork, integer *info );

void FC_FUNC(sgglse,SGGLSE)( integer* m, integer* n, integer* p, float* a,
                    integer* lda, float* b, integer* ldb, float* c,
                    float* d, float* x, float* work, integer* lwork,
                    integer *info );

void FC_FUNC(dgglse,DGGLSE)( integer* m, integer* n, integer* p, double* a,
                    integer* lda, double* b, integer* ldb, double* c,
                    double* d, double* x, double* work, integer* lwork,
                    integer *info );

void FC_FUNC(cgglse,CGGLSE)( integer* m, integer* n, integer* p, scomplex* a,
                    integer* lda, scomplex* b, integer* ldb, scomplex* c,
                    scomplex* d, scomplex* x, scomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(zgglse,ZGGLSE)( integer* m, integer* n, integer* p, dcomplex* a,
                    integer* lda, dcomplex* b, integer* ldb, dcomplex* c,
                    dcomplex* d, dcomplex* x, dcomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(sggglm,SGGGLM)( integer* n, integer* m, integer* p, float* a,
                    integer* lda, float* b, integer* ldb, float* d,
                    float* x, float* y, float* work, integer* lwork,
                    integer *info );

void FC_FUNC(dggglm,DGGGLM)( integer* n, integer* m, integer* p, double* a,
                    integer* lda, double* b, integer* ldb, double* d,
                    double* x, double* y, double* work, integer* lwork,
                    integer *info );

void FC_FUNC(cggglm,CGGGLM)( integer* n, integer* m, integer* p, scomplex* a,
                    integer* lda, scomplex* b, integer* ldb, scomplex* d,
                    scomplex* x, scomplex* y, scomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(zggglm,ZGGGLM)( integer* n, integer* m, integer* p, dcomplex* a,
                    integer* lda, dcomplex* b, integer* ldb, dcomplex* d,
                    dcomplex* x, dcomplex* y, dcomplex* work, integer* lwork,
                    integer *info );

void FC_FUNC(ssyev,SSYEV)( char* jobz, char* uplo, integer* n, float* a,
                   integer* lda, float* w, float* work, integer* lwork,
                   integer *info );

void FC_FUNC(dsyev,DSYEV)( char* jobz, char* uplo, integer* n, double* a,
                   integer* lda, double* w, double* work, integer* lwork,
                   integer *info );

void FC_FUNC(cheev,CHEEV)( char* jobz, char* uplo, integer* n, scomplex* a,
                   integer* lda, float* w, scomplex* work, integer* lwork,
                   float* rwork, integer *info );

void FC_FUNC(zheev,ZHEEV)( char* jobz, char* uplo, integer* n, dcomplex* a,
                   integer* lda, double* w, dcomplex* work, integer* lwork,
                   double* rwork, integer *info );

void FC_FUNC(ssyevd,SSYEVD)( char* jobz, char* uplo, integer* n, float* a,
                    integer* lda, float* w, float* work, integer* lwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(dsyevd,DSYEVD)( char* jobz, char* uplo, integer* n, double* a,
                    integer* lda, double* w, double* work, integer* lwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(cheevd,CHEEVD)( char* jobz, char* uplo, integer* n, scomplex* a,
                    integer* lda, float* w, scomplex* work, integer* lwork,
                    float* rwork, integer* lrwork, integer* iwork,
                    integer* liwork, integer *info );

void FC_FUNC(zheevd,ZHEEVD)( char* jobz, char* uplo, integer* n, dcomplex* a,
                    integer* lda, double* w, dcomplex* work, integer* lwork,
                    double* rwork, integer* lrwork, integer* iwork,
                    integer* liwork, integer *info );

void FC_FUNC(ssyevx,SSYEVX)( char* jobz, char* range, char* uplo, integer* n,
                    float* a, integer* lda, float* vl, float* vu,
                    integer* il, integer* iu, float* abstol,
                    integer* m, float* w, float* z, integer* ldz,
                    float* work, integer* lwork, integer* iwork,
                    integer* ifail, integer *info );

void FC_FUNC(dsyevx,DSYEVX)( char* jobz, char* range, char* uplo, integer* n,
                    double* a, integer* lda, double* vl, double* vu,
                    integer* il, integer* iu, double* abstol,
                    integer* m, double* w, double* z, integer* ldz,
                    double* work, integer* lwork, integer* iwork,
                    integer* ifail, integer *info );

void FC_FUNC(cheevx,CHEEVX)( char* jobz, char* range, char* uplo, integer* n,
                    scomplex* a, integer* lda, float* vl, float* vu,
                    integer* il, integer* iu, float* abstol,
                    integer* m, float* w, scomplex* z, integer* ldz,
                    scomplex* work, integer* lwork, float* rwork, integer* iwork,
                    integer* ifail, integer *info );

void FC_FUNC(zheevx,ZHEEVX)( char* jobz, char* range, char* uplo, integer* n,
                    dcomplex* a, integer* lda, double* vl, double* vu,
                    integer* il, integer* iu, double* abstol,
                    integer* m, double* w, dcomplex* z, integer* ldz,
                    dcomplex* work, integer* lwork, double* rwork, integer* iwork,
                    integer* ifail, integer *info );

void FC_FUNC(ssyevr,SSYEVR)( char* jobz, char* range, char* uplo, integer* n,
                    float* a, integer* lda, float* vl, float* vu,
                    integer* il, integer* iu, float* abstol,
                    integer* m, float* w, float* z, integer* ldz,
                    integer* isuppz, float* work, integer* lwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(dsyevr,DSYEVR)( char* jobz, char* range, char* uplo, integer* n,
                    double* a, integer* lda, double* vl, double* vu,
                    integer* il, integer* iu, double* abstol,
                    integer* m, double* w, double* z, integer* ldz,
                    integer* isuppz, double* work, integer* lwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(cheevr,CHEEVR)( char* jobz, char* range, char* uplo, integer* n,
                    scomplex* a, integer* lda, float* vl, float* vu,
                    integer* il, integer* iu, float* abstol,
                    integer* m, float* w, scomplex* z, integer* ldz,
                    integer* isuppz, scomplex* work, integer* lwork,
                    float* rwork, integer* lrwork, integer* iwork,
                    integer* liwork, integer *info );

void FC_FUNC(zheevr,ZHEEVR)( char* jobz, char* range, char* uplo, integer* n,
                    dcomplex* a, integer* lda, double* vl, double* vu,
                    integer* il, integer* iu, double* abstol,
                    integer* m, double* w, dcomplex* z, integer* ldz,
                    integer* isuppz, dcomplex* work, integer* lwork,
                    double* rwork, integer* lrwork, integer* iwork,
                    integer* liwork, integer *info );

void FC_FUNC(sspev,SSPEV)( char* jobz, char* uplo, integer* n, float* ap, float* w,
                    float* z, integer* ldz, float* work, integer *info );

void FC_FUNC(dspev,DSPEV)( char* jobz, char* uplo, integer* n, double* ap, double* w,
                   double* z, integer* ldz, double* work, integer *info );

void FC_FUNC(chpev,CHPEV)( char* jobz, char* uplo, integer* n, scomplex* ap, float* w,
                   scomplex* z, integer* ldz, scomplex* work, float* rwork, integer *info );

void FC_FUNC(zhpev,ZHPEV)( char* jobz, char* uplo, integer* n, dcomplex* ap, double* w,
                   dcomplex* z, integer* ldz, dcomplex* work, double* rwork, integer *info );

void FC_FUNC(sspevd,SSPEVD)( char* jobz, char* uplo, integer* n, float* ap,
                    float* w, float* z, integer* ldz, float* work,
                    integer* lwork, integer* iwork, integer* liwork,
                    integer *info );

void FC_FUNC(dspevd,DSPEVD)( char* jobz, char* uplo, integer* n, double* ap,
                    double* w, double* z, integer* ldz, double* work,
                    integer* lwork, integer* iwork, integer* liwork,
                    integer *info );

void FC_FUNC(chpevd,CHPEVD)( char* jobz, char* uplo, integer* n, scomplex* ap,
                    float* w, scomplex* z, integer* ldz, scomplex* work,
                    integer* lwork, float* rwork, integer* lrwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(zhpevd,ZHPEVD)( char* jobz, char* uplo, integer* n, dcomplex* ap,
                    double* w, dcomplex* z, integer* ldz, dcomplex* work,
                    integer* lwork, double* rwork, integer* lrwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(sspevx,SSPEVX)( char* jobz, char* range, char* uplo, integer* n,
                    float* ap, float* vl, float* vu, integer* il,
                    integer* iu, float* abstol, integer* m, float* w,
                    float* z, integer* ldz, float* work, integer* iwork,
                    integer* ifail, integer *info );

void FC_FUNC(dspevx,DSPEVX)( char* jobz, char* range, char* uplo, integer* n,
                    double* ap, double* vl, double* vu, integer* il,
                    integer* iu, double* abstol, integer* m, double* w,
                    double* z, integer* ldz, double* work, integer* iwork,
                    integer* ifail, integer *info );

void FC_FUNC(chpevx,CHPEVX)( char* jobz, char* range, char* uplo, integer* n,
                    scomplex* ap, float* vl, float* vu, integer* il,
                    integer* iu, float* abstol, integer* m, float* w,
                    scomplex* z, integer* ldz, scomplex* work, float* rwork,
                    integer* iwork, integer* ifail, integer *info );

void FC_FUNC(zhpevx,ZHPEVX)( char* jobz, char* range, char* uplo, integer* n,
                    dcomplex* ap, double* vl, double* vu, integer* il,
                    integer* iu, double* abstol, integer* m, double* w,
                    dcomplex* z, integer* ldz, dcomplex* work, double* rwork,
                    integer* iwork, integer* ifail, integer *info );

void FC_FUNC(ssbev,SSBEV)( char* jobz, char* uplo, integer* n, integer* kd,
                   float* ab, integer* ldab, float* w, float* z,
                   integer* ldz, float* work, integer *info );

void FC_FUNC(dsbev,DSBEV)( char* jobz, char* uplo, integer* n, integer* kd,
                   double* ab, integer* ldab, double* w, double* z,
                   integer* ldz, double* work, integer *info );

void FC_FUNC(chbev,CHBEV)( char* jobz, char* uplo, integer* n, integer* kd,
                    scomplex* ab, integer* ldab, float* w, scomplex* z,
                   integer* ldz, scomplex* work, float* rwork, integer *info );

void FC_FUNC(zhbev,ZHBEV)( char* jobz, char* uplo, integer* n, integer* kd,
                    dcomplex* ab, integer* ldab, double* w, dcomplex* z,
                   integer* ldz, dcomplex* work, double* rwork, integer *info );

void FC_FUNC(ssbevd,SSBEVD)( char* jobz, char* uplo, integer* n, integer* kd,
                    float* ab, integer* ldab, float* w, float* z,
                    integer* ldz, float* work, integer* lwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(dsbevd,DSBEVD)( char* jobz, char* uplo, integer* n, integer* kd,
                    double* ab, integer* ldab, double* w, double* z,
                    integer* ldz, double* work, integer* lwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(chbevd,CHBEVD)( char* jobz, char* uplo, integer* n, integer* kd,
                    scomplex* ab, integer* ldab, float* w, scomplex* z,
                    integer* ldz, scomplex* work, integer* lwork,
                    float* rwork, integer* lrwork, integer* iwork,
                    integer* liwork, integer *info );

void FC_FUNC(zhbevd,ZHBEVD)( char* jobz, char* uplo, integer* n, integer* kd,
                    dcomplex* ab, integer* ldab, double* w, dcomplex* z,
                    integer* ldz, dcomplex* work, integer* lwork,
                    double* rwork, integer* lrwork, integer* iwork,
                    integer* liwork, integer *info );

void FC_FUNC(ssbevx,SSBEVX)( char* jobz, char* range, char* uplo, integer* n,
                    integer* kd, float* ab, integer* ldab, float* q,
                    integer* ldq, float* vl, float* vu, integer* il,
                    integer* iu, float* abstol, integer* m, float* w,
                    float* z, integer* ldz, float* work, integer* iwork,
                    integer* ifail, integer *info );

void FC_FUNC(dsbevx,DSBEVX)( char* jobz, char* range, char* uplo, integer* n,
                    integer* kd, double* ab, integer* ldab, double* q,
                    integer* ldq, double* vl, double* vu, integer* il,
                    integer* iu, double* abstol, integer* m, double* w,
                    double* z, integer* ldz, double* work, integer* iwork,
                    integer* ifail, integer *info );

void FC_FUNC(chbevx,CHBEVX)( char* jobz, char* range, char* uplo, integer* n,
                    integer* kd, scomplex* ab, integer* ldab, scomplex* q,
                    integer* ldq, float* vl, float* vu, integer* il,
                    integer* iu, float* abstol, integer* m, float* w,
                    scomplex* z, integer* ldz, scomplex* work, float* rwork,
                    integer* iwork, integer* ifail, integer *info );

void FC_FUNC(zhbevx,ZHBEVX)( char* jobz, char* range, char* uplo, integer* n,
                    integer* kd, dcomplex* ab, integer* ldab, dcomplex* q,
                    integer* ldq, double* vl, double* vu, integer* il,
                    integer* iu, double* abstol, integer* m, double* w,
                    dcomplex* z, integer* ldz, dcomplex* work, double* rwork,
                    integer* iwork, integer* ifail, integer *info );

void FC_FUNC(sstev,SSTEV)( char* jobz, integer* n, float* d, float* e, float* z,
                   integer* ldz, float* work, integer *info );

void FC_FUNC(dstev,DSTEV)( char* jobz, integer* n, double* d, double* e, double* z,
                   integer* ldz, double* work, integer *info );

void FC_FUNC(sstevd,SSTEVD)( char* jobz, integer* n, float* d, float* e, float* z,
                    integer* ldz, float* work, integer* lwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(dstevd,DSTEVD)( char* jobz, integer* n, double* d, double* e, double* z,
                    integer* ldz, double* work, integer* lwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(sstevx,SSTEVX)( char* jobz, char* range, integer* n, float* d,
                    float* e, float* vl, float* vu, integer* il,
                    integer* iu, float* abstol, integer* m, float* w,
                    float* z, integer* ldz, float* work, integer* iwork,
                    integer* ifail, integer *info );

void FC_FUNC(dstevx,DSTEVX)( char* jobz, char* range, integer* n, double* d,
                    double* e, double* vl, double* vu, integer* il,
                    integer* iu, double* abstol, integer* m, double* w,
                    double* z, integer* ldz, double* work, integer* iwork,
                    integer* ifail, integer *info );

void FC_FUNC(sstevr,SSTEVR)( char* jobz, char* range, integer* n, float* d,
                    float* e, float* vl, float* vu, integer* il,
                    integer* iu, float* abstol, integer* m, float* w,
                    float* z, integer* ldz, integer* isuppz,
                    float* work, integer* lwork, integer* iwork,
                    integer* liwork, integer *info );

void FC_FUNC(dstevr,DSTEVR)( char* jobz, char* range, integer* n, double* d,
                    double* e, double* vl, double* vu, integer* il,
                    integer* iu, double* abstol, integer* m, double* w,
                    double* z, integer* ldz, integer* isuppz,
                    double* work, integer* lwork, integer* iwork,
                    integer* liwork, integer *info );

void FC_FUNC(sgeev,SGEEV)( char* jobvl, char* jobvr, integer* n, float* a,
                   integer* lda, float* wr, float* wi, float* vl,
                   integer* ldvl, float* vr, integer* ldvr, float* work,
                   integer* lwork, integer *info );

void FC_FUNC(dgeev,DGEEV)( char* jobvl, char* jobvr, integer* n, double* a,
                   integer* lda, double* wr, double* wi, double* vl,
                   integer* ldvl, double* vr, integer* ldvr, double* work,
                   integer* lwork, integer *info );

void FC_FUNC(cgeev,CGEEV)( char* jobvl, char* jobvr, integer* n, scomplex* a,
                   integer* lda, scomplex* w, scomplex* vl,
                   integer* ldvl, scomplex* vr, integer* ldvr, scomplex* work,
                   integer* lwork, float* rwork, integer *info );

void FC_FUNC(zgeev,ZGEEV)( char* jobvl, char* jobvr, integer* n, dcomplex* a,
                   integer* lda, dcomplex* w, dcomplex* vl,
                   integer* ldvl, dcomplex* vr, integer* ldvr, dcomplex* work,
                   integer* lwork, double* rwork, integer *info );

void FC_FUNC(sgeevx,SGEEVX)( char* balanc, char* jobvl, char* jobvr, char* sense,
                    integer* n, float* a, integer* lda, float* wr,
                    float* wi, float* vl, integer* ldvl, float* vr,
                    integer* ldvr, integer* ilo, integer* ihi,
                    float* scale, float* abnrm, float* rconde,
                    float* rcondv, float* work, integer* lwork,
                    integer* iwork, integer *info );

void FC_FUNC(dgeevx,DGEEVX)( char* balanc, char* jobvl, char* jobvr, char* sense,
                    integer* n, double* a, integer* lda, double* wr,
                    double* wi, double* vl, integer* ldvl, double* vr,
                    integer* ldvr, integer* ilo, integer* ihi,
                    double* scale, double* abnrm, double* rconde,
                    double* rcondv, double* work, integer* lwork,
                    integer* iwork, integer *info );

void FC_FUNC(cgeevx,CGEEVX)( char* balanc, char* jobvl, char* jobvr, char* sense,
                    integer* n, scomplex* a, integer* lda, scomplex* w,
                    scomplex* vl, integer* ldvl, scomplex* vr,
                    integer* ldvr, integer* ilo, integer* ihi,
                    float* scale, float* abnrm, float* rconde,
                    float* rcondv, scomplex* work, integer* lwork,
                    float* rwork, integer *info );

void FC_FUNC(zgeevx,ZGEEVX)( char* balanc, char* jobvl, char* jobvr, char* sense,
                    integer* n, dcomplex* a, integer* lda, dcomplex* w,
                    dcomplex* vl, integer* ldvl, dcomplex* vr,
                    integer* ldvr, integer* ilo, integer* ihi,
                    double* scale, double* abnrm, double* rconde,
                    double* rcondv, dcomplex* work, integer* lwork,
                    double* rwork, integer *info );

void FC_FUNC(sgesvd,SGESVD)( char* jobu, char* jobvt, integer* m, integer* n,
                    float* a, integer* lda, float* s, float* u,
                    integer* ldu, float* vt, integer* ldvt, float* work,
                    integer* lwork, integer *info );

void FC_FUNC(dgesvd,DGESVD)( char* jobu, char* jobvt, integer* m, integer* n,
                    double* a, integer* lda, double* s, double* u,
                    integer* ldu, double* vt, integer* ldvt, double* work,
                    integer* lwork, integer *info );

void FC_FUNC(cgesvd,CGESVD)( char* jobu, char* jobvt, integer* m, integer* n,
                    scomplex* a, integer* lda, float* s, scomplex* u,
                    integer* ldu, scomplex* vt, integer* ldvt, scomplex* work,
                    integer* lwork, float* rwork, integer *info );

void FC_FUNC(zgesvd,ZGESVD)( char* jobu, char* jobvt, integer* m, integer* n,
                    dcomplex* a, integer* lda, double* s, dcomplex* u,
                    integer* ldu, dcomplex* vt, integer* ldvt, dcomplex* work,
                    integer* lwork, double* rwork, integer *info );

void FC_FUNC(sgesdd,SGESDD)( char* jobz, integer* m, integer* n, float* a,
                    integer* lda, float* s, float* u, integer* ldu,
                    float* vt, integer* ldvt, float* work,
                    integer* lwork, integer* iwork, integer *info );

void FC_FUNC(dgesdd,DGESDD)( char* jobz, integer* m, integer* n, double* a,
                    integer* lda, double* s, double* u, integer* ldu,
                    double* vt, integer* ldvt, double* work,
                    integer* lwork, integer* iwork, integer *info );

void FC_FUNC(cgesdd,CGESDD)( char* jobz, integer* m, integer* n, scomplex* a,
                    integer* lda, float* s, scomplex* u, integer* ldu,
                    scomplex* vt, integer* ldvt, scomplex* work,
                    integer* lwork, float* rwork, integer* iwork, integer *info );

void FC_FUNC(zgesdd,ZGESDD)( char* jobz, integer* m, integer* n, dcomplex* a,
                    integer* lda, double* s, dcomplex* u, integer* ldu,
                    dcomplex* vt, integer* ldvt, dcomplex* work,
                    integer* lwork, double* rwork, integer* iwork, integer *info );

void FC_FUNC(sgejsv,SGEJSV)( char* joba, char* jobu, char* jobv, char* jobr, char* jobt,
                    char* jobp, integer* m, integer* n, float* a,
                    integer* lda, float* sva, float* u, integer* ldu,
                    float* v, integer* ldv, float* work, integer* lwork,
                    integer* iwork, integer *info );

void FC_FUNC(dgejsv,DGEJSV)( char* joba, char* jobu, char* jobv, char* jobr, char* jobt,
                    char* jobp, integer* m, integer* n, double* a,
                    integer* lda, double* sva, double* u, integer* ldu,
                    double* v, integer* ldv, double* work, integer* lwork,
                    integer* iwork, integer *info );

void FC_FUNC(sgesvj,SGESVJ)( char* joba, char* jobu, char* jobv, integer* m,
                    integer* n, float* a, integer* lda, float* sva,
                    integer* mv, float* v, integer* ldv, float* work,
                    integer* lwork, integer *info );

void FC_FUNC(dgesvj,DGESVJ)( char* joba, char* jobu, char* jobv, integer* m,
                    integer* n, double* a, integer* lda, double* sva,
                    integer* mv, double* v, integer* ldv, double* work,
                    integer* lwork, integer *info );

void FC_FUNC(sggsvd,SGGSVD)( char* jobu, char* jobv, char* jobq, integer* m,
                    integer* n, integer* p, integer* k, integer* l,
                    float* a, integer* lda, float* b, integer* ldb,
                    float* alpha, float* beta, float* u, integer* ldu,
                    float* v, integer* ldv, float* q, integer* ldq,
                    float* work, integer* iwork, integer *info );

void FC_FUNC(dggsvd,DGGSVD)( char* jobu, char* jobv, char* jobq, integer* m,
                    integer* n, integer* p, integer* k, integer* l,
                    double* a, integer* lda, double* b, integer* ldb,
                    double* alpha, double* beta, double* u, integer* ldu,
                    double* v, integer* ldv, double* q, integer* ldq,
                    double* work, integer* iwork, integer *info );

void FC_FUNC(cggsvd,CGGSVD)( char* jobu, char* jobv, char* jobq, integer* m,
                    integer* n, integer* p, integer* k, integer* l,
                    scomplex* a, integer* lda, scomplex* b, integer* ldb,
                    float* alpha, float* beta, scomplex* u, integer* ldu,
                    scomplex* v, integer* ldv, scomplex* q, integer* ldq,
                    scomplex* work, float* rwork, integer* iwork, integer *info );

void FC_FUNC(zggsvd,ZGGSVD)( char* jobu, char* jobv, char* jobq, integer* m,
                    integer* n, integer* p, integer* k, integer* l,
                    dcomplex* a, integer* lda, dcomplex* b, integer* ldb,
                    double* alpha, double* beta, dcomplex* u, integer* ldu,
                    dcomplex* v, integer* ldv, dcomplex* q, integer* ldq,
                    dcomplex* work, double* rwork, integer* iwork, integer *info );

void FC_FUNC(ssygv,SSYGV)( integer* itype, char* jobz, char* uplo, integer* n,
                   float* a, integer* lda, float* b, integer* ldb,
                   float* w, float* work, integer* lwork,
                   integer *info );

void FC_FUNC(dsygv,DSYGV)( integer* itype, char* jobz, char* uplo, integer* n,
                   double* a, integer* lda, double* b, integer* ldb,
                   double* w, double* work, integer* lwork,
                   integer *info );

void FC_FUNC(chegv,CHEGV)( integer* itype, char* jobz, char* uplo, integer* n,
                   scomplex* a, integer* lda, scomplex* b, integer* ldb,
                   float* w, scomplex* work, integer* lwork,
                   float* rwork, integer *info );

void FC_FUNC(zhegv,ZHEGV)( integer* itype, char* jobz, char* uplo, integer* n,
                   dcomplex* a, integer* lda, dcomplex* b, integer* ldb,
                   double* w, dcomplex* work, integer* lwork,
                   double* rwork, integer *info );

void FC_FUNC(ssygvd,SSYGVD)( integer* itype, char* jobz, char* uplo, integer* n,
                    float* a, integer* lda, float* b, integer* ldb,
                    float* w, float* work, integer* lwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(dsygvd,DSYGVD)( integer* itype, char* jobz, char* uplo, integer* n,
                    double* a, integer* lda, double* b, integer* ldb,
                    double* w, double* work, integer* lwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(chegvd,CHEGVD)( integer* itype, char* jobz, char* uplo, integer* n,
                    scomplex* a, integer* lda, scomplex* b, integer* ldb,
                    float* w, scomplex* work, integer* lwork,
                    float* rwork, integer* lrwork, integer* iwork,
                    integer* liwork, integer *info );

void FC_FUNC(zhegvd,ZHEGVD)( integer* itype, char* jobz, char* uplo, integer* n,
                    dcomplex* a, integer* lda, dcomplex* b, integer* ldb,
                    double* w, dcomplex* work, integer* lwork,
                    double* rwork, integer* lrwork, integer* iwork,
                    integer* liwork, integer *info );

void FC_FUNC(ssygvx,SSYGVX)( integer* itype, char* jobz, char* range, char* uplo,
                    integer* n, float* a, integer* lda, float* b,
                    integer* ldb, float* vl, float* vu, integer* il,
                    integer* iu, float* abstol, integer* m, float* w,
                    float* z, integer* ldz, float* work, integer* lwork,
                    integer* iwork, integer* ifail, integer *info );

void FC_FUNC(dsygvx,DSYGVX)( integer* itype, char* jobz, char* range, char* uplo,
                    integer* n, double* a, integer* lda, double* b,
                    integer* ldb, double* vl, double* vu, integer* il,
                    integer* iu, double* abstol, integer* m, double* w,
                    double* z, integer* ldz, double* work, integer* lwork,
                    integer* iwork, integer* ifail, integer *info );

void FC_FUNC(chegvx,CHEGVX)( integer* itype, char* jobz, char* range, char* uplo,
                    integer* n, scomplex* a, integer* lda, scomplex* b,
                    integer* ldb, float* vl, float* vu, integer* il,
                    integer* iu, float* abstol, integer* m, float* w,
                    scomplex* z, integer* ldz, scomplex* work, integer* lwork,
                    float* rwork, integer* iwork, integer* ifail, integer *info );

void FC_FUNC(zhegvx,ZHEGVX)( integer* itype, char* jobz, char* range, char* uplo,
                    integer* n, dcomplex* a, integer* lda, dcomplex* b,
                    integer* ldb, double* vl, double* vu, integer* il,
                    integer* iu, double* abstol, integer* m, double* w,
                    dcomplex* z, integer* ldz, dcomplex* work, integer* lwork,
                    double* rwork, integer* iwork, integer* ifail, integer *info );

void FC_FUNC(sspgv,SSPGV)( integer* itype, char* jobz, char* uplo, integer* n,
                   float* ap, float* bp, float* w, float* z,
                   integer* ldz, float* work, integer *info );

void FC_FUNC(dspgv,DSPGV)( integer* itype, char* jobz, char* uplo, integer* n,
                   double* ap, double* bp, double* w, double* z,
                   integer* ldz, double* work, integer *info );

void FC_FUNC(chpgv,CHPGV)( integer* itype, char* jobz, char* uplo, integer* n,
                   scomplex* ap, scomplex* bp, float* w, scomplex* z,
                   integer* ldz, scomplex* work, float* rwork, integer *info );

void FC_FUNC(zhpgv,ZHPGV)( integer* itype, char* jobz, char* uplo, integer* n,
                   dcomplex* ap, dcomplex* bp, double* w, dcomplex* z,
                   integer* ldz, dcomplex* work, double* rwork, integer *info );

void FC_FUNC(sspgvd,SSPGVD)( integer* itype, char* jobz, char* uplo, integer* n,
                    float* ap, float* bp, float* w, float* z,
                    integer* ldz, float* work, integer* lwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(dspgvd,DSPGVD)( integer* itype, char* jobz, char* uplo, integer* n,
                    double* ap, double* bp, double* w, double* z,
                    integer* ldz, double* work, integer* lwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(chpgvd,CHPGVD)( integer* itype, char* jobz, char* uplo, integer* n,
                    scomplex* ap, scomplex* bp, float* w, scomplex* z,
                    integer* ldz, scomplex* work, integer* lwork,
                    float* rwork, integer* lrwork, integer* iwork,
                    integer* liwork, integer *info );

void FC_FUNC(zhpgvd,ZHPGVD)( integer* itype, char* jobz, char* uplo, integer* n,
                    dcomplex* ap, dcomplex* bp, double* w, dcomplex* z,
                    integer* ldz, dcomplex* work, integer* lwork,
                    double* rwork, integer* lrwork, integer* iwork,
                    integer* liwork, integer *info );

void FC_FUNC(sspgvx,SSPGVX)( integer* itype, char* jobz, char* range, char* uplo,
                    integer* n, float* ap, float* bp, float* vl,
                    float* vu, integer* il, integer* iu, float* abstol,
                    integer* m, float* w, float* z, integer* ldz,
                    float* work, integer* iwork, integer* ifail,
                    integer *info );

void FC_FUNC(dspgvx,DSPGVX)( integer* itype, char* jobz, char* range, char* uplo,
                    integer* n, double* ap, double* bp, double* vl,
                    double* vu, integer* il, integer* iu, double* abstol,
                    integer* m, double* w, double* z, integer* ldz,
                    double* work, integer* iwork, integer* ifail,
                    integer *info );

void FC_FUNC(chpgvx,CHPGVX)( integer* itype, char* jobz, char* range, char* uplo,
                    integer* n, scomplex* ap, scomplex* bp, float* vl,
                    float* vu, integer* il, integer* iu, float* abstol,
                    integer* m, float* w, scomplex* z, integer* ldz,
                    scomplex* work, float* rwork, integer* iwork, integer* ifail,
                    integer *info );

void FC_FUNC(zhpgvx,ZHPGVX)( integer* itype, char* jobz, char* range, char* uplo,
                    integer* n, dcomplex* ap, dcomplex* bp, double* vl,
                    double* vu, integer* il, integer* iu, double* abstol,
                    integer* m, double* w, dcomplex* z, integer* ldz,
                    dcomplex* work, double* rwork, integer* iwork, integer* ifail,
                    integer *info );

void FC_FUNC(ssbgv,SSBGV)( char* jobz, char* uplo, integer* n, integer* ka,
                   integer* kb, float* ab, integer* ldab, float* bb,
                   integer* ldbb, float* w, float* z, integer* ldz,
                   float* work, integer *info );

void FC_FUNC(dsbgv,DSBGV)( char* jobz, char* uplo, integer* n, integer* ka,
                   integer* kb, double* ab, integer* ldab, double* bb,
                   integer* ldbb, double* w, double* z, integer* ldz,
                   double* work, integer *info );

void FC_FUNC(chbgv,CHBGV)( char* jobz, char* uplo, integer* n, integer* ka,
                   integer* kb, scomplex* ab, integer* ldab, scomplex* bb,
                   integer* ldbb, float* w, scomplex* z, integer* ldz,
                   scomplex* work, float* rwork, integer *info );

void FC_FUNC(zhbgv,ZHBGV)( char* jobz, char* uplo, integer* n, integer* ka,
                   integer* kb, dcomplex* ab, integer* ldab, dcomplex* bb,
                   integer* ldbb, double* w, dcomplex* z, integer* ldz,
                   dcomplex* work, double* rwork, integer *info );

void FC_FUNC(ssbgvd,SSBGVD)( char* jobz, char* uplo, integer* n, integer* ka,
                    integer* kb, float* ab, integer* ldab, float* bb,
                    integer* ldbb, float* w, float* z, integer* ldz,
                    float* work, integer* lwork, integer* iwork,
                    integer* liwork, integer *info );

void FC_FUNC(dsbgvd,DSBGVD)( char* jobz, char* uplo, integer* n, integer* ka,
                    integer* kb, double* ab, integer* ldab, double* bb,
                    integer* ldbb, double* w, double* z, integer* ldz,
                    double* work, integer* lwork, integer* iwork,
                    integer* liwork, integer *info );

void FC_FUNC(chbgvd,CHBGVD)( char* jobz, char* uplo, integer* n, integer* ka,
                    integer* kb, scomplex* ab, integer* ldab, scomplex* bb,
                    integer* ldbb, float* w, scomplex* z, integer* ldz,
                    scomplex* work, integer* lwork, float* rwork, integer* lrwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(zhbgvd,ZHBGVD)( char* jobz, char* uplo, integer* n, integer* ka,
                    integer* kb, dcomplex* ab, integer* ldab, dcomplex* bb,
                    integer* ldbb, double* w, dcomplex* z, integer* ldz,
                    dcomplex* work, integer* lwork, double* rwork, integer* lrwork,
                    integer* iwork, integer* liwork, integer *info );

void FC_FUNC(ssbgvx,SSBGVX)( char* jobz, char* range, char* uplo, integer* n,
                    integer* ka, integer* kb, float* ab,
                    integer* ldab, float* bb, integer* ldbb, float* q,
                    integer* ldq, float* vl, float* vu, integer* il,
                    integer* iu, float* abstol, integer* m, float* w,
                    float* z, integer* ldz, float* work, integer* iwork,
                    integer* ifail, integer *info );

void FC_FUNC(dsbgvx,DSBGVX)( char* jobz, char* range, char* uplo, integer* n,
                    integer* ka, integer* kb, double* ab,
                    integer* ldab, double* bb, integer* ldbb, double* q,
                    integer* ldq, double* vl, double* vu, integer* il,
                    integer* iu, double* abstol, integer* m, double* w,
                    double* z, integer* ldz, double* work, integer* iwork,
                    integer* ifail, integer *info );

void FC_FUNC(chbgvx,CHBGVX)( char* jobz, char* range, char* uplo, integer* n,
                    integer* ka, integer* kb, scomplex* ab,
                    integer* ldab, scomplex* bb, integer* ldbb, scomplex* q,
                    integer* ldq, float* vl, float* vu, integer* il,
                    integer* iu, float* abstol, integer* m, float* w,
                    scomplex* z, integer* ldz, scomplex* work, float* rwork,
                    integer* iwork, integer* ifail, integer *info );

void FC_FUNC(zhbgvx,ZHBGVX)( char* jobz, char* range, char* uplo, integer* n,
                    integer* ka, integer* kb, dcomplex* ab,
                    integer* ldab, dcomplex* bb, integer* ldbb, dcomplex* q,
                    integer* ldq, double* vl, double* vu, integer* il,
                    integer* iu, double* abstol, integer* m, double* w,
                    dcomplex* z, integer* ldz, dcomplex* work, double* rwork,
                    integer* iwork, integer* ifail, integer *info );

void FC_FUNC(sggev,SGGEV)( char* jobvl, char* jobvr, integer* n, float* a,
                   integer* lda, float* b, integer* ldb, float* alphar,
                   float* alphai, float* beta, float* vl, integer* ldvl,
                   float* vr, integer* ldvr, float* work,
                   integer* lwork, integer *info );

void FC_FUNC(dggev,DGGEV)( char* jobvl, char* jobvr, integer* n, double* a,
                   integer* lda, double* b, integer* ldb, double* alphar,
                   double* alphai, double* beta, double* vl, integer* ldvl,
                   double* vr, integer* ldvr, double* work,
                   integer* lwork, integer *info );

void FC_FUNC(cggev,CGGEV)( char* jobvl, char* jobvr, integer* n, scomplex* a,
                   integer* lda, scomplex* b, integer* ldb, scomplex* alpha,
                   scomplex* beta, scomplex* vl, integer* ldvl,
                   scomplex* vr, integer* ldvr, scomplex* work,
                   integer* lwork, float* rwork, integer *info );

void FC_FUNC(zggev,ZGGEV)( char* jobvl, char* jobvr, integer* n, dcomplex* a,
                   integer* lda, dcomplex* b, integer* ldb, dcomplex* alpha,
                   dcomplex* beta, dcomplex* vl, integer* ldvl,
                   dcomplex* vr, integer* ldvr, dcomplex* work,
                   integer* lwork, double* rwork, integer *info );

void FC_FUNC(sggevx,SGGEVX)( char* balanc, char* jobvl, char* jobvr, char* sense,
                    integer* n, float* a, integer* lda, float* b,
                    integer* ldb, float* alphar, float* alphai,
                    float* beta, float* vl, integer* ldvl, float* vr,
                    integer* ldvr, integer* ilo, integer* ihi,
                    float* lscale, float* rscale, float* abnrm,
                    float* bbnrm, float* rconde, float* rcondv, float* work,
                    integer* lwork, integer* iwork, logical* bwork,
                    integer *info );

void FC_FUNC(dggevx,DGGEVX)( char* balanc, char* jobvl, char* jobvr, char* sense,
                    integer* n, double* a, integer* lda, double* b,
                    integer* ldb, double* alphar, double* alphai,
                    double* beta, double* vl, integer* ldvl, double* vr,
                    integer* ldvr, integer* ilo, integer* ihi,
                    double* lscale, double* rscale, double* abnrm,
                    double* bbnrm, double* rconde, double* rcondv, double* work,
                    integer* lwork, integer* iwork, logical* bwork,
                    integer *info );

void FC_FUNC(cggevx,CGGEVX)( char* balanc, char* jobvl, char* jobvr, char* sense,
                    integer* n, scomplex* a, integer* lda, scomplex* b,
                    integer* ldb, scomplex* alpha,
                    scomplex* beta, scomplex* vl, integer* ldvl, scomplex* vr,
                    integer* ldvr, integer* ilo, integer* ihi,
                    float* lscale, float* rscale, float* abnrm,
                    float* bbnrm, float* rconde, float* rcondv, scomplex* work,
                    integer* lwork, float* rwork, integer* iwork, logical* bwork,
                    integer *info );

void FC_FUNC(zggevx,ZGGEVX)( char* balanc, char* jobvl, char* jobvr, char* sense,
                    integer* n, dcomplex* a, integer* lda, dcomplex* b,
                    integer* ldb, dcomplex* alpha,
                    dcomplex* beta, dcomplex* vl, integer* ldvl, dcomplex* vr,
                    integer* ldvr, integer* ilo, integer* ihi,
                    double* lscale, double* rscale, double* abnrm,
                    double* bbnrm, double* rconde, double* rcondv, dcomplex* work,
                    integer* lwork, double* rwork, integer* iwork, logical* bwork,
                    integer *info );

void FC_FUNC(ssfrk,SSFRK)( char* transr, char* uplo, char* trans, integer* n,
                   integer* k, float* alpha, const float* a,
                   integer* lda, float* beta, float* c );

void FC_FUNC(dsfrk,DSFRK)( char* transr, char* uplo, char* trans, integer* n,
                   integer* k, double* alpha, const double* a,
                   integer* lda, double* beta, double* c );

void FC_FUNC(chfrk,CHFRK)( char* transr, char* uplo, char* trans, integer* n,
                   integer* k, float* alpha, const scomplex* a,
                   integer* lda, float* beta, scomplex* c );

void FC_FUNC(zhfrk,ZHFRK)( char* transr, char* uplo, char* trans, integer* n,
                   integer* k, double* alpha, const dcomplex* a,
                   integer* lda, double* beta, dcomplex* c );

void FC_FUNC(stfsm,STFSM)( char* transr, char* side, char* uplo, char* trans,
                   char* diag, integer* m, integer* n, float* alpha,
                   const float* a, float* b, integer* ldb );

void FC_FUNC(dtfsm,DTFSM)( char* transr, char* side, char* uplo, char* trans,
                   char* diag, integer* m, integer* n, double* alpha,
                   const double* a, double* b, integer* ldb );

void FC_FUNC(ctfsm,CTFSM)( char* transr, char* side, char* uplo, char* trans,
                   char* diag, integer* m, integer* n, scomplex* alpha,
                   const scomplex* a, scomplex* b, integer* ldb );

void FC_FUNC(ztfsm,ZTFSM)( char* transr, char* side, char* uplo, char* trans,
                   char* diag, integer* m, integer* n, dcomplex* alpha,
                   const dcomplex* a, dcomplex* b, integer* ldb );

void FC_FUNC(stfttp,STFTTP)( char* transr, char* uplo, integer* n, const float* arf,
                    float* ap, integer *info );

void FC_FUNC(dtfttp,DTFTTP)( char* transr, char* uplo, integer* n, const double* arf,
                    double* ap, integer *info );

void FC_FUNC(ctfttp,CTFTTP)( char* transr, char* uplo, integer* n, const scomplex* arf,
                    scomplex* ap, integer *info );

void FC_FUNC(ztfttp,ZTFTTP)( char* transr, char* uplo, integer* n, const dcomplex* arf,
                    dcomplex* ap, integer *info );

void FC_FUNC(stfttr,STFTTR)( char* transr, char* uplo, integer* n, const float* arf,
                    float* a, integer* lda, integer *info );

void FC_FUNC(dtfttr,DTFTTR)( char* transr, char* uplo, integer* n, const double* arf,
                    double* a, integer* lda, integer *info );

void FC_FUNC(ctfttr,CTFTTR)( char* transr, char* uplo, integer* n, const scomplex* arf,
                    scomplex* a, integer* lda, integer *info );

void FC_FUNC(ztfttr,ZTFTTR)( char* transr, char* uplo, integer* n, const dcomplex* arf,
                    dcomplex* a, integer* lda, integer *info );

void FC_FUNC(stpttf,STPTTF)( char* transr, char* uplo, integer* n, const float* ap,
                    float* arf, integer *info );

void FC_FUNC(dtpttf,DTPTTF)( char* transr, char* uplo, integer* n, const double* ap,
                    double* arf, integer *info );

void FC_FUNC(ctpttf,CTPTTF)( char* transr, char* uplo, integer* n, const scomplex* ap,
                    scomplex* arf, integer *info );

void FC_FUNC(ztpttf,ZTPTTF)( char* transr, char* uplo, integer* n, const dcomplex* ap,
                    dcomplex* arf, integer *info );

void FC_FUNC(stpttr,STPTTR)( char* uplo, integer* n, const float* ap, float* a,
                    integer* lda, integer *info );

void FC_FUNC(dtpttr,DTPTTR)( char* uplo, integer* n, const double* ap, double* a,
                    integer* lda, integer *info );

void FC_FUNC(ctpttr,CTPTTR)( char* uplo, integer* n, const scomplex* ap, scomplex* a,
                    integer* lda, integer *info );

void FC_FUNC(ztpttr,ZTPTTR)( char* uplo, integer* n, const dcomplex* ap, dcomplex* a,
                    integer* lda, integer *info );

void FC_FUNC(strttf,STRTTF)( char* transr, char* uplo, integer* n, const float* a,
                    integer* lda, float* arf, integer *info );

void FC_FUNC(dtrttf,DTRTTF)( char* transr, char* uplo, integer* n, const double* a,
                    integer* lda, double* arf, integer *info );

void FC_FUNC(ctrttf,CTRTTF)( char* transr, char* uplo, integer* n, const scomplex* a,
                    integer* lda, scomplex* arf, integer *info );

void FC_FUNC(ztrttf,ZTRTTF)( char* transr, char* uplo, integer* n, const dcomplex* a,
                    integer* lda, dcomplex* arf, integer *info );

void FC_FUNC(strttp,STRTTP)( char* uplo, integer* n, const float* a, integer* lda,
                    float* ap, integer *info );

void FC_FUNC(dtrttp,DTRTTP)( char* uplo, integer* n, const double* a, integer* lda,
                    double* ap, integer *info );

void FC_FUNC(ctrttp,CTRTTP)( char* uplo, integer* n, const scomplex* a, integer* lda,
                    scomplex* ap, integer *info );

void FC_FUNC(ztrttp,ZTRTTP)( char* uplo, integer* n, const dcomplex* a, integer* lda,
                    dcomplex* ap, integer *info );

void FC_FUNC(sgeqrfp,SGEQRFP)( integer* m, integer* n, float* a, integer* lda,
                     float* tau, float* work, integer* lwork,
                     integer *info );

void FC_FUNC(dgeqrfp,DGEQRFP)( integer* m, integer* n, double* a, integer* lda,
                     double* tau, double* work, integer* lwork,
                     integer *info );

void FC_FUNC(cgeqrfp,CGEQRFP)( integer* m, integer* n, scomplex* a, integer* lda,
                     scomplex* tau, scomplex* work, integer* lwork,
                     integer *info );

void FC_FUNC(zgeqrfp,ZGEQRFP)( integer* m, integer* n, dcomplex* a, integer* lda,
                     dcomplex* tau, dcomplex* work, integer* lwork,
                     integer *info );

#ifdef __cplusplus
}
#endif

#endif
