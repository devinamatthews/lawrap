#ifndef _LAWRAP_BLAS_H_
#define _LAWRAP_BLAS_H_

#include "fortran.h"

#ifdef __cplusplus
extern "C"
{
#endif

/******************************************************************************
 *
 * Level 1 BLAS, FORTRAN prototypes
 *
 *****************************************************************************/
void    FC_FUNC(srotg,SROTG)  (float* a, float* b, float* c, float* s);
void    FC_FUNC(srotmg,SROTMG)(float* d1, float* d2, float* a, const float* b, float* param);
void    FC_FUNC(srot,SROT)    (const integer* n,                           float* x, const integer* incx,       float* y, const integer* incy, const float* c, const float* s);
void    FC_FUNC(srotm,SROTM)  (const integer* n,                           float* x, const integer* incx,       float* y, const integer* incy, float* param);
void    FC_FUNC(sswap,SSWAP)  (const integer* n,                           float* x, const integer* incx,       float* y, const integer* incy);
void    FC_FUNC(sscal,SSCAL)  (const integer* n, const float* alpha,       float* x, const integer* incx);
void    FC_FUNC(scopy,SCOPY)  (const integer* n,                     const float* x, const integer* incx,       float* y, const integer* incy);
void    FC_FUNC(saxpy,SAXPY)  (const integer* n, const float* alpha, const float* x, const integer* incx,       float* y, const integer* incy);
float   FC_FUNC(sdot,SDOT)    (const integer* n,                     const float* x, const integer* incx, const float* y, const integer* incy);
float   FC_FUNC(snrm2,SNRM2)  (const integer* n,                     const float* x, const integer* incx);
float   FC_FUNC(sasum,SASUM)  (const integer* n,                     const float* x, const integer* incx);
integer FC_FUNC(isamax,ISAMAX)(const integer* n,                     const float* x, const integer* incx);

void    FC_FUNC(drotg,DROTG)  (double* a, double* b, double* c, double* s);
void    FC_FUNC(drotmg,DROTMG)(double* d1, double* d2, double* a, const double* b, double* param);
void    FC_FUNC(drot,DROT)    (const integer* n,                            double* x, const integer* incx,       double* y, const integer* incy, const double* c, const double* s);
void    FC_FUNC(drotm,DROTM)  (const integer* n,                            double* x, const integer* incx,       double* y, const integer* incy, double* param);
void    FC_FUNC(dswap,DSWAP)  (const integer* n,                            double* x, const integer* incx,       double* y, const integer* incy);
void    FC_FUNC(dscal,DSCAL)  (const integer* n, const double* alpha,       double* x, const integer* incx);
void    FC_FUNC(dcopy,DCOPY)  (const integer* n,                      const double* x, const integer* incx,       double* y, const integer* incy);
void    FC_FUNC(daxpy,DAXPY)  (const integer* n, const double* alpha, const double* x, const integer* incx,       double* y, const integer* incy);
double  FC_FUNC(ddot,DDOT)    (const integer* n,                      const double* x, const integer* incx, const double* y, const integer* incy);
double  FC_FUNC(dnrm2,DNRM2)  (const integer* n,                      const double* x, const integer* incx);
double  FC_FUNC(dasum,DASUM)  (const integer* n,                      const double* x, const integer* incx);
integer FC_FUNC(idamax,IDAMAX)(const integer* n,                      const double* x, const integer* incx);

void     FC_FUNC(crotg,CROTG)  (scomplex* a, scomplex* b, float* c, scomplex* s);
void     FC_FUNC(csrot,CSROT)  (const integer* n,                              scomplex* x, const integer* incx,       scomplex* y, const integer* incy, const float* c, const float* s);
void     FC_FUNC(cswap,CSWAP)  (const integer* n,                              scomplex* x, const integer* incx,       scomplex* y, const integer* incy);
void     FC_FUNC(cscal,CSCAL)  (const integer* n, const scomplex* alpha,       scomplex* x, const integer* incx);
void     FC_FUNC(csscal,CSSCAL)(const integer* n, const    float* alpha,       scomplex* x, const integer* incx);
void     FC_FUNC(ccopy,CCOPY)  (const integer* n,                        const scomplex* x, const integer* incx,       scomplex* y, const integer* incy);
void     FC_FUNC(caxpy,CAXPY)  (const integer* n, const scomplex* alpha, const scomplex* x, const integer* incx,       scomplex* y, const integer* incy);
scomplex FC_FUNC(cdotu,CDOTU)  (const integer* n,                        const scomplex* x, const integer* incx, const scomplex* y, const integer* incy);
scomplex FC_FUNC(cdotc,CDOTC)  (const integer* n,                        const scomplex* x, const integer* incx, const scomplex* y, const integer* incy);
float    FC_FUNC(scnrm2,SCNRM2)(const integer* n,                        const scomplex* x, const integer* incx);
float    FC_FUNC(scasum,SCASUM)(const integer* n,                        const scomplex* x, const integer* incx);
integer  FC_FUNC(icamax,ICAMAX)(const integer* n,                        const scomplex* x, const integer* incx);

void     FC_FUNC(zrotg,ZROTG)  (dcomplex* a, dcomplex* b, double* c, dcomplex* s);
void     FC_FUNC(zdrot,ZDROT)  (const integer* n,                              dcomplex* x, const integer* incx,       dcomplex* y, const integer* incy, const double* c, const double* s);
void     FC_FUNC(zswap,ZSWAP)  (const integer* n,                              dcomplex* x, const integer* incx,       dcomplex* y, const integer* incy);
void     FC_FUNC(zscal,ZSCAL)  (const integer* n, const dcomplex* alpha,       dcomplex* x, const integer* incx);
void     FC_FUNC(zdscal,ZDSCAL)(const integer* n, const   double* alpha,       dcomplex* x, const integer* incx);
void     FC_FUNC(zcopy,ZCOPY)  (const integer* n,                        const dcomplex* x, const integer* incx,       dcomplex* y, const integer* incy);
void     FC_FUNC(zaxpy,ZAXPY)  (const integer* n, const dcomplex* alpha, const dcomplex* x, const integer* incx,       dcomplex* y, const integer* incy);
dcomplex FC_FUNC(zdotu,ZDOTU)  (const integer* n,                        const dcomplex* x, const integer* incx, const dcomplex* y, const integer* incy);
dcomplex FC_FUNC(zdotc,ZDOTC)  (const integer* n,                        const dcomplex* x, const integer* incx, const dcomplex* y, const integer* incy);
double   FC_FUNC(dznrm2,DZNRM2)(const integer* n,                        const dcomplex* x, const integer* incx);
double   FC_FUNC(dzasum,DZASUM)(const integer* n,                        const dcomplex* x, const integer* incx);
integer  FC_FUNC(izamax,IZAMAX)(const integer* n,                        const dcomplex* x, const integer* incx);

/******************************************************************************
 *
 * Level 2 BLAS, FORTRAN prototypes
 *
 *****************************************************************************/
void FC_FUNC(sgemv,SGEMV)(                  const char* trans,                   const integer* m, const integer* n,                                       const float* alpha, const float* a, const integer* lda,  const float* x, const integer* incx, const float* beta, float* y, const integer* incy);
void FC_FUNC(sgbmv,SGBMV)(                  const char* trans,                   const integer* m, const integer* n, const integer* kl, const integer* ku, const float* alpha, const float* a, const integer* lda,  const float* x, const integer* incx, const float* beta, float* y, const integer* incy);
void FC_FUNC(ssymv,SSYMV)(const char* uplo,                                                        const integer* n,                                       const float* alpha, const float* a, const integer* lda,  const float* x, const integer* incx, const float* beta, float* y, const integer* incy);
void FC_FUNC(ssbmv,SSBMV)(const char* uplo,                                                        const integer* n, const integer* k,                     const float* alpha, const float* a, const integer* lda,  const float* x, const integer* incx, const float* beta, float* y, const integer* incy);
void FC_FUNC(sspmv,SSPMV)(const char* uplo,                                                        const integer* n,                                       const float* alpha, const float* ap,                     const float* x, const integer* incx, const float* beta, float* y, const integer* incy);
void FC_FUNC(strmv,STRMV)(const char* uplo, const char* trans, const char* diag,                   const integer* n,                                                           const float* a, const integer* lda,        float* x, const integer* incx);
void FC_FUNC(stbmv,STBMV)(const char* uplo, const char* trans, const char* diag,                   const integer* n, const integer* k,                                         const float* a, const integer* lda,        float* x, const integer* incx);
void FC_FUNC(stpmv,STPMV)(const char* uplo, const char* trans, const char* diag,                   const integer* n,                                                           const float* ap,                           float* x, const integer* incx);
void FC_FUNC(strsv,STRSV)(const char* uplo, const char* trans, const char* diag,                   const integer* n,                                                           const float* a, const integer* lda,        float* x, const integer* incx);
void FC_FUNC(stbsv,STBSV)(const char* uplo, const char* trans, const char* diag,                   const integer* n, const integer* k,                                         const float* a, const integer* lda,        float* x, const integer* incx);
void FC_FUNC(stpsv,STPSV)(const char* uplo, const char* trans, const char* diag,                   const integer* n,                                                           const float* ap,                           float* x, const integer* incx);
void FC_FUNC(sger,SGER)  (                                                       const integer* m, const integer* n,                                       const float* alpha, const float* x, const integer* incx, const float* y, const integer* incy, float* a, const integer* lda);
void FC_FUNC(ssyr,SSYR)  (const char* uplo,                                                        const integer* n,                                       const float* alpha, const float* x, const integer* incx,                                      float* a, const integer* lda);
void FC_FUNC(sspr,SSPR)  (const char* uplo,                                                        const integer* n,                                       const float* alpha, const float* x, const integer* incx,                                      float* ap);
void FC_FUNC(ssyr2,SSYR2)(const char* uplo,                                                        const integer* n,                                       const float* alpha, const float* x, const integer* incx, const float* y, const integer* incy, float* a, const integer* lda);
void FC_FUNC(sspr2,SSPR2)(const char* uplo,                                                        const integer* n,                                       const float* alpha, const float* x, const integer* incx, const float* y, const integer* incy, float* ap);

void FC_FUNC(dgemv,DGEMV)(                  const char* trans,                   const integer* m, const integer* n,                                       const double* alpha, const double* a, const integer* lda, const double* x, const integer* incx, const double* beta, double* y, const integer* incy);
void FC_FUNC(dgbmv,DGBMV)(                  const char* trans,                   const integer* m, const integer* n, const integer* kl, const integer* ku, const double* alpha, const double* a, const integer* lda, const double* x, const integer* incx, const double* beta, double* y, const integer* incy);
void FC_FUNC(dsymv,DSYMV)(const char* uplo,                                                        const integer* n,                                       const double* alpha, const double* a, const integer* lda, const double* x, const integer* incx, const double* beta, double* y, const integer* incy);
void FC_FUNC(dsbmv,DSBMV)(const char* uplo,                                                        const integer* n, const integer* k,                     const double* alpha, const double* a, const integer* lda, const double* x, const integer* incx, const double* beta, double* y, const integer* incy);
void FC_FUNC(dspmv,DSPMV)(const char* uplo,                                                        const integer* n,                                       const double* alpha, const double* ap,                    const double* x, const integer* incx, const double* beta, double* y, const integer* incy);
void FC_FUNC(dtrmv,DTRMV)(const char* uplo, const char* trans, const char* diag,                   const integer* n,                                                            const double* a, const integer* lda,       double* x, const integer* incx);
void FC_FUNC(dtbmv,DTBMV)(const char* uplo, const char* trans, const char* diag,                   const integer* n, const integer* k,                                          const double* a, const integer* lda,       double* x, const integer* incx);
void FC_FUNC(dtpmv,DTPMV)(const char* uplo, const char* trans, const char* diag,                   const integer* n,                                                            const double* ap,                          double* x, const integer* incx);
void FC_FUNC(dtrsv,DTRSV)(const char* uplo, const char* trans, const char* diag,                   const integer* n,                                                            const double* a, const integer* lda,       double* x, const integer* incx);
void FC_FUNC(dtbsv,DTBSV)(const char* uplo, const char* trans, const char* diag,                   const integer* n, const integer* k,                                          const double* a, const integer* lda,       double* x, const integer* incx);
void FC_FUNC(dtpsv,DTPSV)(const char* uplo, const char* trans, const char* diag,                   const integer* n,                                                            const double* ap,                          double* x, const integer* incx);
void FC_FUNC(dger,DGER)  (                                                       const integer* m, const integer* n,                                       const double* alpha, const double* x, const integer* incx, const double* y, const integer* incy, double* a, const integer* lda);
void FC_FUNC(dsyr,DSYR)  (const char* uplo,                                                        const integer* n,                                       const double* alpha, const double* x, const integer* incx,                                       double* a, const integer* lda);
void FC_FUNC(dspr,DSPR)  (const char* uplo,                                                        const integer* n,                                       const double* alpha, const double* x, const integer* incx,                                       double* ap);
void FC_FUNC(dsyr2,DSYR2)(const char* uplo,                                                        const integer* n,                                       const double* alpha, const double* x, const integer* incx, const double* y, const integer* incy, double* a, const integer* lda);
void FC_FUNC(dspr2,DSPR2)(const char* uplo,                                                        const integer* n,                                       const double* alpha, const double* x, const integer* incx, const double* y, const integer* incy, double* ap);

void FC_FUNC(cgemv,CGEMV)(                  const char* trans,                   const integer* m, const integer* n,                                       const scomplex* alpha, const scomplex* a, const integer* lda,  const scomplex* x, const integer* incx, const scomplex* beta, scomplex* y, const integer* incy);
void FC_FUNC(cgbmv,CGBMV)(                  const char* trans,                   const integer* m, const integer* n, const integer* kl, const integer* ku, const scomplex* alpha, const scomplex* a, const integer* lda,  const scomplex* x, const integer* incx, const scomplex* beta, scomplex* y, const integer* incy);
void FC_FUNC(chemv,CHEMV)(const char* uplo,                                                        const integer* n,                                       const scomplex* alpha, const scomplex* a, const integer* lda,  const scomplex* x, const integer* incx, const scomplex* beta, scomplex* y, const integer* incy);
void FC_FUNC(chbmv,CHBMV)(const char* uplo,                                                        const integer* n, const integer* k,                     const scomplex* alpha, const scomplex* a, const integer* lda,  const scomplex* x, const integer* incx, const scomplex* beta, scomplex* y, const integer* incy);
void FC_FUNC(chpmv,CHPMV)(const char* uplo,                                                        const integer* n,                                       const scomplex* alpha, const scomplex* ap,                     const scomplex* x, const integer* incx, const scomplex* beta, scomplex* y, const integer* incy);
void FC_FUNC(ctrmv,CTRMV)(const char* uplo, const char* trans, const char* diag,                   const integer* n,                                                              const scomplex* a, const integer* lda,        scomplex* x, const integer* incx);
void FC_FUNC(ctbmv,CTBMV)(const char* uplo, const char* trans, const char* diag,                   const integer* n, const integer* k,                                            const scomplex* a, const integer* lda,        scomplex* x, const integer* incx);
void FC_FUNC(ctpmv,CTPMV)(const char* uplo, const char* trans, const char* diag,                   const integer* n,                                                              const scomplex* ap,                           scomplex* x, const integer* incx);
void FC_FUNC(ctrsv,CTRSV)(const char* uplo, const char* trans, const char* diag,                   const integer* n,                                                              const scomplex* a, const integer* lda,        scomplex* x, const integer* incx);
void FC_FUNC(ctbsv,CTBSV)(const char* uplo, const char* trans, const char* diag,                   const integer* n, const integer* k,                                            const scomplex* a, const integer* lda,        scomplex* x, const integer* incx);
void FC_FUNC(ctpsv,CTPSV)(const char* uplo, const char* trans, const char* diag,                   const integer* n,                                                              const scomplex* ap,                           scomplex* x, const integer* incx);
void FC_FUNC(cgeru,CGERU)(                                                       const integer* m, const integer* n,                                       const scomplex* alpha, const scomplex* x, const integer* incx, const scomplex* y, const integer* incy, scomplex* a, const integer* lda);
void FC_FUNC(cgerc,CGERC)(                                                       const integer* m, const integer* n,                                       const scomplex* alpha, const scomplex* x, const integer* incx, const scomplex* y, const integer* incy, scomplex* a, const integer* lda);
void FC_FUNC(cher,CHER)  (const char* uplo,                                                        const integer* n,                                       const    float* alpha, const scomplex* x, const integer* incx,                                         scomplex* a, const integer* lda);
void FC_FUNC(chpr,CHPR)  (const char* uplo,                                                        const integer* n,                                       const    float* alpha, const scomplex* x, const integer* incx,                                         scomplex* ap);
void FC_FUNC(cher2,CHER2)(const char* uplo,                                                        const integer* n,                                       const scomplex* alpha, const scomplex* x, const integer* incx, const scomplex* y, const integer* incy, scomplex* a, const integer* lda);
void FC_FUNC(chpr2,CHPR2)(const char* uplo,                                                        const integer* n,                                       const scomplex* alpha, const scomplex* x, const integer* incx, const scomplex* y, const integer* incy, scomplex* ap);

void FC_FUNC(zgemv,ZGEMV)(                  const char* trans,                   const integer* m, const integer* n,                                       const dcomplex* alpha, const dcomplex* a, const integer* lda,  const dcomplex* x, const integer* incx, const dcomplex* beta, dcomplex* y, const integer* incy);
void FC_FUNC(zgbmv,ZGBMV)(                  const char* trans,                   const integer* m, const integer* n, const integer* kl, const integer* ku, const dcomplex* alpha, const dcomplex* a, const integer* lda,  const dcomplex* x, const integer* incx, const dcomplex* beta, dcomplex* y, const integer* incy);
void FC_FUNC(zhemv,ZHEMV)(const char* uplo,                                                        const integer* n,                                       const dcomplex* alpha, const dcomplex* a, const integer* lda,  const dcomplex* x, const integer* incx, const dcomplex* beta, dcomplex* y, const integer* incy);
void FC_FUNC(zhbmv,ZHBMV)(const char* uplo,                                                        const integer* n, const integer* k,                     const dcomplex* alpha, const dcomplex* a, const integer* lda,  const dcomplex* x, const integer* incx, const dcomplex* beta, dcomplex* y, const integer* incy);
void FC_FUNC(zhpmv,ZHPMV)(const char* uplo,                                                        const integer* n,                                       const dcomplex* alpha, const dcomplex* ap,                     const dcomplex* x, const integer* incx, const dcomplex* beta, dcomplex* y, const integer* incy);
void FC_FUNC(ztrmv,ZTRMV)(const char* uplo, const char* trans, const char* diag,                   const integer* n,                                                              const dcomplex* a, const integer* lda,        dcomplex* x, const integer* incx);
void FC_FUNC(ztbmv,ZTBMV)(const char* uplo, const char* trans, const char* diag,                   const integer* n, const integer* k,                                            const dcomplex* a, const integer* lda,        dcomplex* x, const integer* incx);
void FC_FUNC(ztpmv,ZTPMV)(const char* uplo, const char* trans, const char* diag,                   const integer* n,                                                              const dcomplex* ap,                           dcomplex* x, const integer* incx);
void FC_FUNC(ztrsv,ZTRSV)(const char* uplo, const char* trans, const char* diag,                   const integer* n,                                                              const dcomplex* a, const integer* lda,        dcomplex* x, const integer* incx);
void FC_FUNC(ztbsv,ZTBSV)(const char* uplo, const char* trans, const char* diag,                   const integer* n, const integer* k,                                            const dcomplex* a, const integer* lda,        dcomplex* x, const integer* incx);
void FC_FUNC(ztpsv,ZTPSV)(const char* uplo, const char* trans, const char* diag,                   const integer* n,                                                              const dcomplex* ap,                           dcomplex* x, const integer* incx);
void FC_FUNC(zgerc,ZGERC)(                                                       const integer* m, const integer* n,                                       const dcomplex* alpha, const dcomplex* x, const integer* incx, const dcomplex* y, const integer* incy, dcomplex* a, const integer* lda);
void FC_FUNC(zgeru,ZGERU)(                                                       const integer* m, const integer* n,                                       const dcomplex* alpha, const dcomplex* x, const integer* incx, const dcomplex* y, const integer* incy, dcomplex* a, const integer* lda);
void FC_FUNC(zher,ZHER)  (const char* uplo,                                                        const integer* n,                                       const   double* alpha, const dcomplex* x, const integer* incx,                                         dcomplex* a, const integer* lda);
void FC_FUNC(zhpr,ZHPR)  (const char* uplo,                                                        const integer* n,                                       const   double* alpha, const dcomplex* x, const integer* incx,                                         dcomplex* ap);
void FC_FUNC(zher2,ZHER2)(const char* uplo,                                                        const integer* n,                                       const dcomplex* alpha, const dcomplex* x, const integer* incx, const dcomplex* y, const integer* incy, dcomplex* a, const integer* lda);
void FC_FUNC(zhpr2,ZHPR2)(const char* uplo,                                                        const integer* n,                                       const dcomplex* alpha, const dcomplex* x, const integer* incx, const dcomplex* y, const integer* incy, dcomplex* ap);

/******************************************************************************
 *
 * Level 3 BLAS, FORTRAN prototypes
 *
 *****************************************************************************/
void FC_FUNC(sgemm,SGEMM)  (                                    const char* transa, const char* transb,                   const integer* m, const integer* n, const integer* k, const float* alpha, const float* a, const integer* lda, const float* b, const integer* ldb, const float* beta, float* c, const integer* ldc);
void FC_FUNC(ssymm,SSYMM)  (const char* side, const char* uplo,                                                           const integer* m, const integer* n,                   const float* alpha, const float* a, const integer* lda, const float* b, const integer* ldb, const float* beta, float* c, const integer* ldc);
void FC_FUNC(ssyrk,SSYRK)  (                  const char* uplo, const char* trans,                                                          const integer* n, const integer* k, const float* alpha, const float* a, const integer* lda,                                     const float* beta, float* c, const integer* ldc);
void FC_FUNC(ssyr2k,SSYR2K)(                  const char* uplo, const char* trans,                                                          const integer* n, const integer* k, const float* alpha, const float* a, const integer* lda, const float* b, const integer* ldb, const float* beta, float* c, const integer* ldc);
void FC_FUNC(strmm,STRMM)  (const char* side, const char* uplo, const char* transa,                     const char* diag, const integer* m, const integer* n,                   const float* alpha, const float* a, const integer* lda,       float* b, const integer* ldb);
void FC_FUNC(strsm,STRSM)  (const char* side, const char* uplo, const char* transa,                     const char* diag, const integer* m, const integer* n,                   const float* alpha, const float* a, const integer* lda,       float* b, const integer* ldb);

void FC_FUNC(dgemm,DGEMM)  (                                    const char* transa, const char* transb,                   const integer* m, const integer* n, const integer* k, const double* alpha, const double* a, const integer* lda, const double* b, const integer* ldb, const double* beta, double* c, const integer* ldc);
void FC_FUNC(dsymm,DSYMM)  (const char* side, const char* uplo,                                                           const integer* m, const integer* n,                   const double* alpha, const double* a, const integer* lda, const double* b, const integer* ldb, const double* beta, double* c, const integer* ldc);
void FC_FUNC(dsyrk,DSYRK)  (                  const char* uplo, const char* trans,                                                          const integer* n, const integer* k, const double* alpha, const double* a, const integer* lda,                                      const double* beta, double* c, const integer* ldc);
void FC_FUNC(dsyr2k,DSYR2K)(                  const char* uplo, const char* trans,                                                          const integer* n, const integer* k, const double* alpha, const double* a, const integer* lda, const double* b, const integer* ldb, const double* beta, double* c, const integer* ldc);
void FC_FUNC(dtrmm,DTRMM)  (const char* side, const char* uplo, const char* transa,                     const char* diag, const integer* m, const integer* n,                   const double* alpha, const double* a, const integer* lda,       double* b, const integer* ldb);
void FC_FUNC(dtrsm,DTRSM)  (const char* side, const char* uplo, const char* transa,                     const char* diag, const integer* m, const integer* n,                   const double* alpha, const double* a, const integer* lda,       double* b, const integer* ldb);

void FC_FUNC(cgemm,CGEMM)  (                                    const char* transa, const char* transb,                   const integer* m, const integer* n, const integer* k, const scomplex* alpha, const scomplex* a, const integer* lda, const scomplex* b, const integer* ldb, const scomplex* beta, scomplex* c, const integer* ldc);
void FC_FUNC(chemm,CHEMM)  (const char* side, const char* uplo,                                                           const integer* m, const integer* n,                   const scomplex* alpha, const scomplex* a, const integer* lda, const scomplex* b, const integer* ldb, const scomplex* beta, scomplex* c, const integer* ldc);
void FC_FUNC(csyrk,CSYRK)  (                  const char* uplo, const char* trans,                                                          const integer* n, const integer* k, const scomplex* alpha, const scomplex* a, const integer* lda,                                        const scomplex* beta, scomplex* c, const integer* ldc);
void FC_FUNC(csyr2k,CSYR2K)(                  const char* uplo, const char* trans,                                                          const integer* n, const integer* k, const scomplex* alpha, const scomplex* a, const integer* lda, const scomplex* b, const integer* ldb, const scomplex* beta, scomplex* c, const integer* ldc);
void FC_FUNC(cherk,CHERK)  (                  const char* uplo, const char* trans,                                                          const integer* n, const integer* k, const    float* alpha, const scomplex* a, const integer* lda,                                        const    float* beta, scomplex* c, const integer* ldc);
void FC_FUNC(cher2k,CHER2K)(                  const char* uplo, const char* trans,                                                          const integer* n, const integer* k, const scomplex* alpha, const scomplex* a, const integer* lda, const scomplex* b, const integer* ldb, const    float* beta, scomplex* c, const integer* ldc);
void FC_FUNC(ctrmm,CTRMM)  (const char* side, const char* uplo, const char* transa,                     const char* diag, const integer* m, const integer* n,                   const scomplex* alpha, const scomplex* a, const integer* lda,       scomplex* b, const integer* ldb);
void FC_FUNC(ctrsm,CTRSM)  (const char* side, const char* uplo, const char* transa,                     const char* diag, const integer* m, const integer* n,                   const scomplex* alpha, const scomplex* a, const integer* lda,       scomplex* b, const integer* ldb);

void FC_FUNC(zgemm,ZGEMM)  (                                    const char* transa, const char* transb,                   const integer* m, const integer* n, const integer* k, const dcomplex* alpha, const dcomplex* a, const integer* lda, const dcomplex* b, const integer* ldb, const dcomplex* beta, dcomplex* c, const integer* ldc);
void FC_FUNC(zhemm,ZHEMM)  (const char* side, const char* uplo,                                                           const integer* m, const integer* n,                   const dcomplex* alpha, const dcomplex* a, const integer* lda, const dcomplex* b, const integer* ldb, const dcomplex* beta, dcomplex* c, const integer* ldc);
void FC_FUNC(zsyrk,ZSYRK)  (                  const char* uplo, const char* trans,                                                          const integer* n, const integer* k, const dcomplex* alpha, const dcomplex* a, const integer* lda,                                        const dcomplex* beta, dcomplex* c, const integer* ldc);
void FC_FUNC(zsyr2k,ZSYR2K)(                  const char* uplo, const char* trans,                                                          const integer* n, const integer* k, const dcomplex* alpha, const dcomplex* a, const integer* lda, const dcomplex* b, const integer* ldb, const dcomplex* beta, dcomplex* c, const integer* ldc);
void FC_FUNC(zherk,ZHERK)  (                  const char* uplo, const char* trans,                                                          const integer* n, const integer* k, const   double* alpha, const dcomplex* a, const integer* lda,                                        const   double* beta, dcomplex* c, const integer* ldc);
void FC_FUNC(zher2k,ZHER2K)(                  const char* uplo, const char* trans,                                                          const integer* n, const integer* k, const dcomplex* alpha, const dcomplex* a, const integer* lda, const dcomplex* b, const integer* ldb, const   double* beta, dcomplex* c, const integer* ldc);
void FC_FUNC(ztrmm,ZTRMM)  (const char* side, const char* uplo, const char* transa,                     const char* diag, const integer* m, const integer* n,                   const dcomplex* alpha, const dcomplex* a, const integer* lda,       dcomplex* b, const integer* ldb);
void FC_FUNC(ztrsm,ZTRSM)  (const char* side, const char* uplo, const char* transa,                     const char* diag, const integer* m, const integer* n,                   const dcomplex* alpha, const dcomplex* a, const integer* lda,       dcomplex* b, const integer* ldb);

/******************************************************************************
 *
 * Level 1 BLAS, C wrappers
 *
 *****************************************************************************/
static inline void   c_srotg (float* a, float* b, float* c, float* s)
{
    FC_FUNC(srotg,SROTG)(a, b, c, s);
}

static inline void   c_srotmg(float* d1, float* d2, float* a, const float b, float* param)
{
    FC_FUNC(srotmg,SROTMG)(d1, d2, a, &b, param);
}

static inline void   c_srot  (const integer n, float* x, const integer incx,
                                               float* y, const integer incy, const float c, const float s)
{
    FC_FUNC(srot,SROT)(&n, x, &incx, y, &incy, &c, &s);
}

static inline void   c_srotm (const integer n, float* x, const integer incx,
                                               float* y, const integer incy, float* param)
{
    FC_FUNC(srotm,SROTM)(&n, x, &incx, y, &incy, param);
}

static inline void   c_sswap (const integer n, float* x, const integer incx,
                                               float* y, const integer incy)
{
    FC_FUNC(sswap,SSWAP)(&n, x, &incx, y, &incy);
}

static inline void   c_sscal (const integer n, const float alpha, float* x, const integer incx)
{
    FC_FUNC(sscal,SSCAL)(&n, &alpha, x, &incx);
}

static inline void   c_scopy (const integer n, const float* x, const integer incx,
                                                     float* y, const integer incy)
{
    FC_FUNC(scopy,SCOPY)(&n, x, &incx, y, &incy);
}

static inline void   c_saxpy (const integer n, const float alpha, const float* x, const integer incx,
                                                                        float* y, const integer incy)
{
    FC_FUNC(saxpy,SAXPY)(&n, &alpha, x, &incx, y, &incy);
}

static inline float c_sdot  (const integer n, const float* x, const integer incx,
                                              const float* y, const integer incy)
{
    return FC_FUNC(sdot,SDOT)(&n, x, &incx, y, &incy);
}

static inline float c_snrm2 (const integer n, const float* x, const integer incx)
{
    return FC_FUNC(snrm2,SNRM2)(&n, x, &incx);
}

static inline float c_sasum (const integer n, const float* x, const integer incx)
{
    return FC_FUNC(sasum,SASUM)(&n, x, &incx);
}

static inline integer c_isamax(const integer n, const float* x, const integer incx)
{
    return FC_FUNC(isamax,ISAMAX)(&n, x, &incx)-1;
}

static inline void   c_drotg (double* a, double* b, double* c, double* s)
{
    FC_FUNC(drotg,DROTG)(a, b, c, s);
}

static inline void   c_drotmg(double* d1, double* d2, double* a, const double b, double* param)
{
    FC_FUNC(drotmg,DROTMG)(d1, d2, a, &b, param);
}

static inline void   c_drot  (const integer n, double* x, const integer incx,
                                               double* y, const integer incy, const double c, const double s)
{
    FC_FUNC(drot,DROT)(&n, x, &incx, y, &incy, &c, &s);
}

static inline void   c_drotm (const integer n, double* x, const integer incx,
                                               double* y, const integer incy, double* param)
{
    FC_FUNC(drotm,DROTM)(&n, x, &incx, y, &incy, param);
}

static inline void   c_dswap (const integer n, double* x, const integer incx,
                                               double* y, const integer incy)
{
    FC_FUNC(dswap,DSWAP)(&n, x, &incx, y, &incy);
}

static inline void   c_dscal (const integer n, const double alpha, double* x, const integer incx)
{
    FC_FUNC(dscal,DSCAL)(&n, &alpha, x, &incx);
}

static inline void   c_dcopy (const integer n, const double* x, const integer incx,
                                                     double* y, const integer incy)
{
    FC_FUNC(dcopy,DCOPY)(&n, x, &incx, y, &incy);
}

static inline void   c_daxpy (const integer n, const double alpha, const double* x, const integer incx,
                                                                         double* y, const integer incy)
{
    FC_FUNC(daxpy,DAXPY)(&n, &alpha, x, &incx, y, &incy);
}

static inline double c_ddot  (const integer n, const double* x, const integer incx,
                                               const double* y, const integer incy)
{
    return FC_FUNC(ddot,DDOT)(&n, x, &incx, y, &incy);
}

static inline double c_dnrm2 (const integer n, const double* x, const integer incx)
{
    return FC_FUNC(dnrm2,DNRM2)(&n, x, &incx);
}

static inline double c_dasum (const integer n, const double* x, const integer incx)
{
    return FC_FUNC(dasum,DASUM)(&n, x, &incx);
}

static inline integer c_idamax(const integer n, const double* x, const integer incx)
{
    return FC_FUNC(idamax,IDAMAX)(&n, x, &incx)-1;
}

static inline void   c_crotg (scomplex* a, scomplex* b, float* c, scomplex* s)
{
    FC_FUNC(crotg,CROTG)(a, b, c, s);
}

static inline void   c_csrot  (const integer n, scomplex* x, const integer incx,
                                                scomplex* y, const integer incy, const float c, const float s)
{
    FC_FUNC(csrot,CSROT)(&n, x, &incx, y, &incy, &c, &s);
}

static inline void   c_cswap (const integer n, scomplex* x, const integer incx,
                                               scomplex* y, const integer incy)
{
    FC_FUNC(cswap,CSWAP)(&n, x, &incx, y, &incy);
}

static inline void   c_cscal (const integer n, const scomplex alpha, scomplex* x, const integer incx)
{
    FC_FUNC(cscal,CSCAL)(&n, &alpha, x, &incx);
}

static inline void   c_csscal (const integer n, const float alpha, scomplex* x, const integer incx)
{
    FC_FUNC(csscal,CSSCAL)(&n, &alpha, x, &incx);
}

static inline void   c_ccopy (const integer n, const scomplex* x, const integer incx,
                                                     scomplex* y, const integer incy)
{
    FC_FUNC(ccopy,CCOPY)(&n, x, &incx, y, &incy);
}

static inline void   c_caxpy (const integer n, const scomplex alpha, const scomplex* x, const integer incx,
                                                                           scomplex* y, const integer incy)
{
    FC_FUNC(caxpy,CAXPY)(&n, &alpha, x, &incx, y, &incy);
}

static inline scomplex c_cdotu (const integer n, const scomplex* x, const integer incx,
                                                 const scomplex* y, const integer incy)
{
    return FC_FUNC(cdotu,CDOTU)(&n, x, &incx, y, &incy);
}

static inline scomplex c_cdotc (const integer n, const scomplex* x, const integer incx,
                                                 const scomplex* y, const integer incy)
{
    return FC_FUNC(cdotc,CDOTC)(&n, x, &incx, y, &incy);
}

static inline float c_scnrm2 (const integer n, const scomplex* x, const integer incx)
{
    return FC_FUNC(scnrm2,SCNRM2)(&n, x, &incx);
}

static inline float c_scasum (const integer n, const scomplex* x, const integer incx)
{
    return FC_FUNC(scasum,SCASUM)(&n, x, &incx);
}

static inline integer c_icamax(const integer n, const scomplex* x, const integer incx)
{
    return FC_FUNC(icamax,ICAMAX)(&n, x, &incx)-1;
}

static inline void   c_zrotg (dcomplex* a, dcomplex* b, double* c, dcomplex* s)
{
    FC_FUNC(zrotg,ZROTG)(a, b, c, s);
}

static inline void   c_zdrot  (const integer n, dcomplex* x, const integer incx,
                                                dcomplex* y, const integer incy, const double c, const double s)
{
    FC_FUNC(zdrot,ZDROT)(&n, x, &incx, y, &incy, &c, &s);
}

static inline void   c_zswap (const integer n, dcomplex* x, const integer incx,
                                               dcomplex* y, const integer incy)
{
    FC_FUNC(zswap,ZSWAP)(&n, x, &incx, y, &incy);
}

static inline void   c_zscal (const integer n, const dcomplex alpha, dcomplex* x, const integer incx)
{
    FC_FUNC(zscal,ZSCAL)(&n, &alpha, x, &incx);
}

static inline void   c_zdscal (const integer n, const double alpha, dcomplex* x, const integer incx)
{
    FC_FUNC(zdscal,ZDSCAL)(&n, &alpha, x, &incx);
}

static inline void   c_zcopy (const integer n, const dcomplex* x, const integer incx,
                                                     dcomplex* y, const integer incy)
{
    FC_FUNC(zcopy,ZCOPY)(&n, x, &incx, y, &incy);
}

static inline void   c_zaxpy (const integer n, const dcomplex alpha, const dcomplex* x, const integer incx,
                                                                           dcomplex* y, const integer incy)
{
    FC_FUNC(zaxpy,ZAXPY)(&n, &alpha, x, &incx, y, &incy);
}

static inline dcomplex c_zdotu (const integer n, const dcomplex* x, const integer incx,
                                                 const dcomplex* y, const integer incy)
{
    return FC_FUNC(zdotu,ZDOTU)(&n, x, &incx, y, &incy);
}

static inline dcomplex c_zdotc (const integer n, const dcomplex* x, const integer incx,
                                                 const dcomplex* y, const integer incy)
{
    return FC_FUNC(zdotc,ZDOTC)(&n, x, &incx, y, &incy);
}

static inline double c_dznrm2 (const integer n, const dcomplex* x, const integer incx)
{
    return FC_FUNC(dznrm2,DZNRM2)(&n, x, &incx);
}

static inline double c_dzasum (const integer n, const dcomplex* x, const integer incx)
{
    return FC_FUNC(dzasum,DZASUM)(&n, x, &incx);
}

static inline integer c_izamax(const integer n, const dcomplex* x, const integer incx)
{
    return FC_FUNC(izamax,IZAMAX)(&n, x, &incx)-1;
}

/******************************************************************************
 *
 * Level 2 BLAS, C wrappers
 *
 *****************************************************************************/
static inline void c_sgemv(const char trans, const integer m, const integer n,
                           const float alpha, const float* a, const integer lda,
                                              const float* x, const integer incx,
                           const float  beta,       float* y, const integer incy)
{
    FC_FUNC(sgemv,SGEMV)(&trans, &m, &n, &alpha, a, &lda, x, &incx, &beta, y, &incy);
}

static inline void c_sgbmv(const char trans,
                           const integer m, const integer n, const integer kl, const integer ku,
                           const float alpha, const float* a, const integer lda,
                                              const float* x, const integer incx,
                           const float  beta,       float* y, const integer incy)
{
    FC_FUNC(sgbmv,SGBMV)(&trans, &m, &n, &kl, &ku, &alpha, a, &lda, x, &incx, &beta, y, &incy);
}

static inline void c_ssymv(const char uplo, const integer n,
                           const float alpha, const float* a, const integer lda,
                                              const float* x, const integer incx,
                           const float  beta,       float* y, const integer incy)
{
    FC_FUNC(ssymv,SSYMV)(&uplo, &n, &alpha, a, &lda, x, &incx, &beta, y, &incy);
}

static inline void c_ssbmv(const char uplo, const integer n, const integer k,
                           const float alpha, const float* a, const integer lda,
                                              const float* x, const integer incx,
                           const float  beta,       float* y, const integer incy)
{
    FC_FUNC(ssbmv,SSBMV)(&uplo, &n, &k, &alpha, a, &lda, x, &incx, &beta, y, &incy);
}

static inline void c_sspmv(const char uplo, const integer n,
                           const float alpha, const float* ap,
                                              const float*  x, const integer incx,
                           const float  beta,       float*  y, const integer incy)
{
    FC_FUNC(sspmv,SSPMV)(&uplo, &n, &alpha, ap, x, &incx, &beta, y, &incy);
}

static inline void c_strmv(const char uplo, const char trans, const char diag, const integer n,
                           const float* a, const integer lda,
                                 float* x, const integer incx)
{
    FC_FUNC(strmv,STRMV)(&uplo, &trans, &diag, &n, a, &lda, x, &incx);
}

static inline void c_stbmv(const char uplo, const char trans, const char diag,
                           const integer n, const integer k,
                           const float* a, const integer lda,
                                 float* x, const integer incx)
{
    FC_FUNC(stbmv,STBMV)(&uplo, &trans, &diag, &n, &k, a, &lda, x, &incx);
}

static inline void c_stpmv(const char uplo, const char trans, const char diag, const integer n,
                           const float* ap, float* x, const integer incx)
{
    FC_FUNC(stpmv,STPMV)(&uplo, &trans, &diag, &n, ap, x, &incx);
}

static inline void c_strsv(const char uplo, const char trans, const char diag, const integer n,
                           const float* a, const integer lda,
                                 float* x, const integer incx)
{
    FC_FUNC(strsv,STRSV)(&uplo, &trans, &diag, &n, a, &lda, x, &incx);
}

static inline void c_stbsv(const char uplo, const char trans, const char diag,
                           const integer n, const integer k,
                           const float* a, const integer lda,
                                 float* x, const integer incx)
{
    FC_FUNC(stbsv,STBSV)(&uplo, &trans, &diag, &n, &k, a, &lda, x, &incx);
}

static inline void c_stpsv(const char uplo, const char trans, const char diag, const integer n,
                           const float* ap, float* x, const integer incx)
{
    FC_FUNC(stpsv,STPSV)(&uplo, &trans, &diag, &n, ap, x, &incx);
}

static inline void c_sger (const integer m, const integer n,
                           const float alpha, const float* x, const integer incx,
                                              const float* y, const integer incy,
                                                    float* a, const integer lda)
{
    FC_FUNC(sger,SGER)(&m, &n, &alpha, x, &incx, y, &incy, a, &lda);
}

static inline void c_ssyr (const char uplo, const integer n,
                           const float alpha, const float* x, const integer incx,
                                                    float* a, const integer lda)
{
    FC_FUNC(ssyr,SSYR)(&uplo, &n, &alpha, x, &incx, a, &lda);
}

static inline void c_sspr (const char uplo, const integer n,
                           const float alpha, const float* x, const integer incx,
                                                    float* ap)
{
    FC_FUNC(sspr,SSPR)(&uplo, &n, &alpha, x, &incx, ap);
}

static inline void c_ssyr2(const char uplo, const integer n,
                           const float alpha, const float* x, const integer incx,
                                              const float* y, const integer incy,
                                                    float* a, const integer lda)
{
    FC_FUNC(ssyr2,SSYR2)(&uplo, &n, &alpha, x, &incx, y, &incy, a, &lda);
}

static inline void c_sspr2(const char uplo, const integer n,
                           const float alpha, const float* x, const integer incx,
                                              const float* y, const integer incy,
                                                    float* ap)
{
    FC_FUNC(sspr2,SSPR2)(&uplo, &n, &alpha, x, &incx, y, &incy, ap);
}

static inline void c_dgemv(const char trans, const integer m, const integer n,
                           const double alpha, const double* a, const integer lda,
                                               const double* x, const integer incx,
                           const double  beta,       double* y, const integer incy)
{
    FC_FUNC(dgemv,DGEMV)(&trans, &m, &n, &alpha, a, &lda, x, &incx, &beta, y, &incy);
}

static inline void c_dgbmv(const char trans,
                           const integer m, const integer n, const integer kl, const integer ku,
                           const double alpha, const double* a, const integer lda,
                                               const double* x, const integer incx,
                           const double  beta,       double* y, const integer incy)
{
    FC_FUNC(dgbmv,DGBMV)(&trans, &m, &n, &kl, &ku, &alpha, a, &lda, x, &incx, &beta, y, &incy);
}

static inline void c_dsymv(const char uplo, const integer n,
                           const double alpha, const double* a, const integer lda,
                                               const double* x, const integer incx,
                           const double  beta,       double* y, const integer incy)
{
    FC_FUNC(dsymv,DSYMV)(&uplo, &n, &alpha, a, &lda, x, &incx, &beta, y, &incy);
}

static inline void c_dsbmv(const char uplo, const integer n, const integer k,
                           const double alpha, const double* a, const integer lda,
                                               const double* x, const integer incx,
                           const double  beta,       double* y, const integer incy)
{
    FC_FUNC(dsbmv,DSBMV)(&uplo, &n, &k, &alpha, a, &lda, x, &incx, &beta, y, &incy);
}

static inline void c_dspmv(const char uplo, const integer n,
                           const double alpha, const double* ap,
                                               const double*  x, const integer incx,
                           const double  beta,       double*  y, const integer incy)
{
    FC_FUNC(dspmv,DSPMV)(&uplo, &n, &alpha, ap, x, &incx, &beta, y, &incy);
}

static inline void c_dtrmv(const char uplo, const char trans, const char diag, const integer n,
                           const double* a, const integer lda,
                                 double* x, const integer incx)
{
    FC_FUNC(dtrmv,DTRMV)(&uplo, &trans, &diag, &n, a, &lda, x, &incx);
}

static inline void c_dtbmv(const char uplo, const char trans, const char diag,
                           const integer n, const integer k,
                           const double* a, const integer lda,
                                 double* x, const integer incx)
{
    FC_FUNC(dtbmv,DTBMV)(&uplo, &trans, &diag, &n, &k, a, &lda, x, &incx);
}

static inline void c_dtpmv(const char uplo, const char trans, const char diag, const integer n,
                           const double* ap, double* x, const integer incx)
{
    FC_FUNC(dtpmv,DTPMV)(&uplo, &trans, &diag, &n, ap, x, &incx);
}

static inline void c_dtrsv(const char uplo, const char trans, const char diag, const integer n,
                           const double* a, const integer lda,
                                 double* x, const integer incx)
{
    FC_FUNC(dtrsv,DTRSV)(&uplo, &trans, &diag, &n, a, &lda, x, &incx);
}

static inline void c_dtbsv(const char uplo, const char trans, const char diag,
                           const integer n, const integer k,
                           const double* a, const integer lda,
                                 double* x, const integer incx)
{
    FC_FUNC(dtbsv,DTBSV)(&uplo, &trans, &diag, &n, &k, a, &lda, x, &incx);
}

static inline void c_dtpsv(const char uplo, const char trans, const char diag, const integer n,
                           const double* ap, double* x, const integer incx)
{
    FC_FUNC(dtpsv,DTPSV)(&uplo, &trans, &diag, &n, ap, x, &incx);
}

static inline void c_dger (const integer m, const integer n,
                           const double alpha, const double* x, const integer incx,
                                               const double* y, const integer incy,
                                                     double* a, const integer lda)
{
    FC_FUNC(dger,DGER)(&m, &n, &alpha, x, &incx, y, &incy, a, &lda);
}

static inline void c_dsyr (const char uplo, const integer n,
                           const double alpha, const double* x, const integer incx,
                                                     double* a, const integer lda)
{
    FC_FUNC(dsyr,DSYR)(&uplo, &n, &alpha, x, &incx, a, &lda);
}

static inline void c_dspr (const char uplo, const integer n,
                           const double alpha, const double* x, const integer incx,
                                                     double* ap)
{
    FC_FUNC(dspr,DSPR)(&uplo, &n, &alpha, x, &incx, ap);
}

static inline void c_dsyr2(const char uplo, const integer n,
                           const double alpha, const double* x, const integer incx,
                                               const double* y, const integer incy,
                                                     double* a, const integer lda)
{
    FC_FUNC(dsyr2,DSYR2)(&uplo, &n, &alpha, x, &incx, y, &incy, a, &lda);
}

static inline void c_dspr2(const char uplo, const integer n,
                           const double alpha, const double* x, const integer incx,
                                               const double* y, const integer incy,
                                                     double* ap)
{
    FC_FUNC(dspr2,DSPR2)(&uplo, &n, &alpha, x, &incx, y, &incy, ap);
}

static inline void c_cgemv(const char trans, const integer m, const integer n,
                           const scomplex alpha, const scomplex* a, const integer lda,
                                                 const scomplex* x, const integer incx,
                           const scomplex  beta,       scomplex* y, const integer incy)
{
    FC_FUNC(cgemv,CGEMV)(&trans, &m, &n, &alpha, a, &lda, x, &incx, &beta, y, &incy);
}

static inline void c_cgbmv(const char trans,
                           const integer m, const integer n, const integer kl, const integer ku,
                           const scomplex alpha, const scomplex* a, const integer lda,
                                                 const scomplex* x, const integer incx,
                           const scomplex  beta,       scomplex* y, const integer incy)
{
    FC_FUNC(cgbmv,CGBMV)(&trans, &m, &n, &kl, &ku, &alpha, a, &lda, x, &incx, &beta, y, &incy);
}

static inline void c_chemv(const char uplo, const integer n,
                           const scomplex alpha, const scomplex* a, const integer lda,
                                                 const scomplex* x, const integer incx,
                           const scomplex  beta,       scomplex* y, const integer incy)
{
    FC_FUNC(chemv,CHEMV)(&uplo, &n, &alpha, a, &lda, x, &incx, &beta, y, &incy);
}

static inline void c_chbmv(const char uplo, const integer n, const integer k,
                           const scomplex alpha, const scomplex* a, const integer lda,
                                                 const scomplex* x, const integer incx,
                           const scomplex  beta,       scomplex* y, const integer incy)
{
    FC_FUNC(chbmv,CHBMV)(&uplo, &n, &k, &alpha, a, &lda, x, &incx, &beta, y, &incy);
}

static inline void c_chpmv(const char uplo, const integer n,
                           const scomplex alpha, const scomplex* ap,
                                                 const scomplex*  x, const integer incx,
                           const scomplex  beta,       scomplex*  y, const integer incy)
{
    FC_FUNC(chpmv,CHPMV)(&uplo, &n, &alpha, ap, x, &incx, &beta, y, &incy);
}

static inline void c_ctrmv(const char uplo, const char trans, const char diag, const integer n,
                           const scomplex* a, const integer lda,
                                 scomplex* x, const integer incx)
{
    FC_FUNC(ctrmv,CTRMV)(&uplo, &trans, &diag, &n, a, &lda, x, &incx);
}

static inline void c_ctbmv(const char uplo, const char trans, const char diag,
                           const integer n, const integer k,
                           const scomplex* a, const integer lda,
                                 scomplex* x, const integer incx)
{
    FC_FUNC(ctbmv,CTBMV)(&uplo, &trans, &diag, &n, &k, a, &lda, x, &incx);
}

static inline void c_ctpmv(const char uplo, const char trans, const char diag, const integer n,
                           const scomplex* ap, scomplex* x, const integer incx)
{
    FC_FUNC(ctpmv,CTPMV)(&uplo, &trans, &diag, &n, ap, x, &incx);
}

static inline void c_ctrsv(const char uplo, const char trans, const char diag, const integer n,
                           const scomplex* a, const integer lda,
                                 scomplex* x, const integer incx)
{
    FC_FUNC(ctrsv,CTRSV)(&uplo, &trans, &diag, &n, a, &lda, x, &incx);
}

static inline void c_ctbsv(const char uplo, const char trans, const char diag,
                           const integer n, const integer k,
                           const scomplex* a, const integer lda,
                                 scomplex* x, const integer incx)
{
    FC_FUNC(ctbsv,CTBSV)(&uplo, &trans, &diag, &n, &k, a, &lda, x, &incx);
}

static inline void c_ctpsv(const char uplo, const char trans, const char diag, const integer n,
                           const scomplex* ap, scomplex* x, const integer incx)
{
    FC_FUNC(ctpsv,CTPSV)(&uplo, &trans, &diag, &n, ap, x, &incx);
}

static inline void c_cgeru(const integer m, const integer n,
                           const scomplex alpha, const scomplex* x, const integer incx,
                                                 const scomplex* y, const integer incy,
                                                       scomplex* a, const integer lda)
{
    FC_FUNC(cgeru,CGERU)(&m, &n, &alpha, x, &incx, y, &incy, a, &lda);
}

static inline void c_cgerc(const integer m, const integer n,
                           const scomplex alpha, const scomplex* x, const integer incx,
                                                 const scomplex* y, const integer incy,
                                                       scomplex* a, const integer lda)
{
    FC_FUNC(cgerc,CGERC)(&m, &n, &alpha, x, &incx, y, &incy, a, &lda);
}

static inline void c_cher (const char uplo, const integer n,
                           const float alpha, const scomplex* x, const integer incx,
                                                       scomplex* a, const integer lda)
{
    FC_FUNC(cher,CHER)(&uplo, &n, &alpha, x, &incx, a, &lda);
}

static inline void c_chpr (const char uplo, const integer n,
                           const float alpha, const scomplex* x, const integer incx,
                                                       scomplex* ap)
{
    FC_FUNC(chpr,CHPR)(&uplo, &n, &alpha, x, &incx, ap);
}

static inline void c_cher2(const char uplo, const integer n,
                           const scomplex alpha, const scomplex* x, const integer incx,
                                                 const scomplex* y, const integer incy,
                                                       scomplex* a, const integer lda)
{
    FC_FUNC(cher2,CHER2)(&uplo, &n, &alpha, x, &incx, y, &incy, a, &lda);
}

static inline void c_chpr2(const char uplo, const integer n,
                           const scomplex alpha, const scomplex* x, const integer incx,
                                                 const scomplex* y, const integer incy,
                                                       scomplex* ap)
{
    FC_FUNC(chpr2,CHPR2)(&uplo, &n, &alpha, x, &incx, y, &incy, ap);
}

static inline void c_zgemv(const char trans, const integer m, const integer n,
                           const dcomplex alpha, const dcomplex* a, const integer lda,
                                                 const dcomplex* x, const integer incx,
                           const dcomplex  beta,       dcomplex* y, const integer incy)
{
    FC_FUNC(zgemv,ZGEMV)(&trans, &m, &n, &alpha, a, &lda, x, &incx, &beta, y, &incy);
}

static inline void c_zgbmv(const char trans,
                           const integer m, const integer n, const integer kl, const integer ku,
                           const dcomplex alpha, const dcomplex* a, const integer lda,
                                                 const dcomplex* x, const integer incx,
                           const dcomplex  beta,       dcomplex* y, const integer incy)
{
    FC_FUNC(zgbmv,ZGBMV)(&trans, &m, &n, &kl, &ku, &alpha, a, &lda, x, &incx, &beta, y, &incy);
}

static inline void c_zhemv(const char uplo, const integer n,
                           const dcomplex alpha, const dcomplex* a, const integer lda,
                                                 const dcomplex* x, const integer incx,
                           const dcomplex  beta,       dcomplex* y, const integer incy)
{
    FC_FUNC(zhemv,ZHEMV)(&uplo, &n, &alpha, a, &lda, x, &incx, &beta, y, &incy);
}

static inline void c_zhbmv(const char uplo, const integer n, const integer k,
                           const dcomplex alpha, const dcomplex* a, const integer lda,
                                                 const dcomplex* x, const integer incx,
                           const dcomplex  beta,       dcomplex* y, const integer incy)
{
    FC_FUNC(zhbmv,ZHBMV)(&uplo, &n, &k, &alpha, a, &lda, x, &incx, &beta, y, &incy);
}

static inline void c_zhpmv(const char uplo, const integer n,
                           const dcomplex alpha, const dcomplex* ap,
                                                 const dcomplex*  x, const integer incx,
                           const dcomplex  beta,       dcomplex*  y, const integer incy)
{
    FC_FUNC(zhpmv,ZHPMV)(&uplo, &n, &alpha, ap, x, &incx, &beta, y, &incy);
}

static inline void c_ztrmv(const char uplo, const char trans, const char diag, const integer n,
                           const dcomplex* a, const integer lda,
                                 dcomplex* x, const integer incx)
{
    FC_FUNC(ztrmv,ZTRMV)(&uplo, &trans, &diag, &n, a, &lda, x, &incx);
}

static inline void c_ztbmv(const char uplo, const char trans, const char diag,
                           const integer n, const integer k,
                           const dcomplex* a, const integer lda,
                                 dcomplex* x, const integer incx)
{
    FC_FUNC(ztbmv,ZTBMV)(&uplo, &trans, &diag, &n, &k, a, &lda, x, &incx);
}

static inline void c_ztpmv(const char uplo, const char trans, const char diag, const integer n,
                           const dcomplex* ap, dcomplex* x, const integer incx)
{
    FC_FUNC(ztpmv,ZTPMV)(&uplo, &trans, &diag, &n, ap, x, &incx);
}

static inline void c_ztrsv(const char uplo, const char trans, const char diag, const integer n,
                           const dcomplex* a, const integer lda,
                                 dcomplex* x, const integer incx)
{
    FC_FUNC(ztrsv,ZTRSV)(&uplo, &trans, &diag, &n, a, &lda, x, &incx);
}

static inline void c_ztbsv(const char uplo, const char trans, const char diag,
                           const integer n, const integer k,
                           const dcomplex* a, const integer lda,
                                 dcomplex* x, const integer incx)
{
    FC_FUNC(ztbsv,ZTBSV)(&uplo, &trans, &diag, &n, &k, a, &lda, x, &incx);
}

static inline void c_ztpsv(const char uplo, const char trans, const char diag, const integer n,
                           const dcomplex* ap, dcomplex* x, const integer incx)
{
    FC_FUNC(ztpsv,ZTPSV)(&uplo, &trans, &diag, &n, ap, x, &incx);
}

static inline void c_zgeru(const integer m, const integer n,
                           const dcomplex alpha, const dcomplex* x, const integer incx,
                                                 const dcomplex* y, const integer incy,
                                                       dcomplex* a, const integer lda)
{
    FC_FUNC(zgeru,ZGERU)(&m, &n, &alpha, x, &incx, y, &incy, a, &lda);
}

static inline void c_zgerc(const integer m, const integer n,
                           const dcomplex alpha, const dcomplex* x, const integer incx,
                                                 const dcomplex* y, const integer incy,
                                                       dcomplex* a, const integer lda)
{
    FC_FUNC(zgerc,ZGERC)(&m, &n, &alpha, x, &incx, y, &incy, a, &lda);
}

static inline void c_zher (const char uplo, const integer n,
                           const double alpha, const dcomplex* x, const integer incx,
                                                       dcomplex* a, const integer lda)
{
    FC_FUNC(zher,ZHER)(&uplo, &n, &alpha, x, &incx, a, &lda);
}

static inline void c_zhpr (const char uplo, const integer n,
                           const double alpha, const dcomplex* x, const integer incx,
                                                       dcomplex* ap)
{
    FC_FUNC(zhpr,ZHPR)(&uplo, &n, &alpha, x, &incx, ap);
}

static inline void c_zher2(const char uplo, const integer n,
                           const dcomplex alpha, const dcomplex* x, const integer incx,
                                                 const dcomplex* y, const integer incy,
                                                       dcomplex* a, const integer lda)
{
    FC_FUNC(zher2,ZHER2)(&uplo, &n, &alpha, x, &incx, y, &incy, a, &lda);
}

static inline void c_zhpr2(const char uplo, const integer n,
                           const dcomplex alpha, const dcomplex* x, const integer incx,
                                                 const dcomplex* y, const integer incy,
                                                       dcomplex* ap)
{
    FC_FUNC(zhpr2,ZHPR2)(&uplo, &n, &alpha, x, &incx, y, &incy, ap);
}

/******************************************************************************
 *
 * Level 3 BLAS, C wrappers
 *
 *****************************************************************************/
static inline void c_sgemm (const char transa, const char transb,
                            const integer m, const integer n, const integer k,
                            const float alpha, const float* a, const integer lda,
                                               const float* b, const integer ldb,
                            const float  beta,       float* c, const integer ldc)
{
    FC_FUNC(sgemm,SGEMM)(&transa, &transb, &m, &n, &k, &alpha, a, &lda, b, &ldb, &beta, c, &ldc);
}

static inline void c_ssymm (const char side, const char uplo,
                            const integer m, const integer n,
                            const float alpha, const float* a, const integer lda,
                                               const float* b, const integer ldb,
                            const float  beta,       float* c, const integer ldc)
{
    FC_FUNC(ssymm,SSYMM)(&side, &uplo, &m, &n, &alpha, a, &lda, b, &ldb, &beta, c, &ldc);
}

static inline void c_ssyrk (const char uplo, const char trans,
                            const integer n, const integer k,
                            const float alpha, const float* a, const integer lda,
                            const float  beta,       float* c, const integer ldc)
{
    FC_FUNC(ssyrk,SSYRK)(&uplo, &trans, &n, &k, &alpha, a, &lda, &beta, c, &ldc);
}

static inline void c_ssyr2k(const char uplo, const char trans,
                            const integer n, const integer k,
                            const float alpha, const float* a, const integer lda,
                                               const float* b, const integer ldb,
                            const float  beta,       float* c, const integer ldc)
{
    FC_FUNC(ssyr2k,SSYR2K)(&uplo, &trans, &n, &k, &alpha, a, &lda, b, &ldb, &beta, c, &ldc);
}

static inline void c_strmm (const char side, const char uplo, const char transa, const char diag,
                            const integer m, const integer n,
                            const float alpha, const float* a, const integer lda,
                                                     float* b, const integer ldb)
{
    FC_FUNC(strmm,STRMM)(&side, &uplo, &transa, &diag, &m, &n, &alpha, a, &lda, b, &ldb);
}

static inline void c_strsm (const char side, const char uplo, const char transa, const char diag,
                            const integer m, const integer n,
                            const float alpha, const float* a, const integer lda,
                                                     float* b, const integer ldb)
{
    FC_FUNC(strsm,STRSM)(&side, &uplo, &transa, &diag, &m, &n, &alpha, a, &lda, b, &ldb);
}

static inline void c_dgemm (const char transa, const char transb,
                            const integer m, const integer n, const integer k,
                            const double alpha, const double* a, const integer lda,
                                                const double* b, const integer ldb,
                            const double  beta,       double* c, const integer ldc)
{
    FC_FUNC(dgemm,DGEMM)(&transa, &transb, &m, &n, &k, &alpha, a, &lda, b, &ldb, &beta, c, &ldc);
}

static inline void c_dsymm (const char side, const char uplo,
                            const integer m, const integer n,
                            const double alpha, const double* a, const integer lda,
                                                const double* b, const integer ldb,
                            const double  beta,       double* c, const integer ldc)
{
    FC_FUNC(dsymm,DSYMM)(&side, &uplo, &m, &n, &alpha, a, &lda, b, &ldb, &beta, c, &ldc);
}

static inline void c_dsyrk (const char uplo, const char trans,
                            const integer n, const integer k,
                            const double alpha, const double* a, const integer lda,
                            const double  beta,       double* c, const integer ldc)
{
    FC_FUNC(dsyrk,DSYRK)(&uplo, &trans, &n, &k, &alpha, a, &lda, &beta, c, &ldc);
}

static inline void c_dsyr2k(const char uplo, const char trans,
                            const integer n, const integer k,
                            const double alpha, const double* a, const integer lda,
                                                const double* b, const integer ldb,
                            const double  beta,       double* c, const integer ldc)
{
    FC_FUNC(dsyr2k,DSYR2K)(&uplo, &trans, &n, &k, &alpha, a, &lda, b, &ldb, &beta, c, &ldc);
}

static inline void c_dtrmm (const char side, const char uplo, const char transa, const char diag,
                            const integer m, const integer n,
                            const double alpha, const double* a, const integer lda,
                                                      double* b, const integer ldb)
{
    FC_FUNC(dtrmm,DTRMM)(&side, &uplo, &transa, &diag, &m, &n, &alpha, a, &lda, b, &ldb);
}

static inline void c_dtrsm (const char side, const char uplo, const char transa, const char diag,
                            const integer m, const integer n,
                            const double alpha, const double* a, const integer lda,
                                                      double* b, const integer ldb)
{
    FC_FUNC(dtrsm,DTRSM)(&side, &uplo, &transa, &diag, &m, &n, &alpha, a, &lda, b, &ldb);
}

static inline void c_cgemm (const char transa, const char transb,
                            const integer m, const integer n, const integer k,
                            const scomplex alpha, const scomplex* a, const integer lda,
                                                  const scomplex* b, const integer ldb,
                            const scomplex  beta,       scomplex* c, const integer ldc)
{
    FC_FUNC(cgemm,CGEMM)(&transa, &transb, &m, &n, &k, &alpha, a, &lda, b, &ldb, &beta, c, &ldc);
}

static inline void c_chemm (const char side, const char uplo,
                            const integer m, const integer n,
                            const scomplex alpha, const scomplex* a, const integer lda,
                                                  const scomplex* b, const integer ldb,
                            const scomplex  beta,       scomplex* c, const integer ldc)
{
    FC_FUNC(chemm,CHEMM)(&side, &uplo, &m, &n, &alpha, a, &lda, b, &ldb, &beta, c, &ldc);
}

static inline void c_csyrk (const char uplo, const char trans,
                            const integer n, const integer k,
                            const scomplex alpha, const scomplex* a, const integer lda,
                            const scomplex  beta,       scomplex* c, const integer ldc)
{
    FC_FUNC(csyrk,CSYRK)(&uplo, &trans, &n, &k, &alpha, a, &lda, &beta, c, &ldc);
}

static inline void c_csyr2k(const char uplo, const char trans,
                            const integer n, const integer k,
                            const scomplex alpha, const scomplex* a, const integer lda,
                                                  const scomplex* b, const integer ldb,
                            const scomplex  beta,       scomplex* c, const integer ldc)
{
    FC_FUNC(csyr2k,CSYR2K)(&uplo, &trans, &n, &k, &alpha, a, &lda, b, &ldb, &beta, c, &ldc);
}

static inline void c_cherk (const char uplo, const char trans,
                            const integer n, const integer k,
                            const float alpha, const scomplex* a, const integer lda,
                            const float  beta,       scomplex* c, const integer ldc)
{
    FC_FUNC(cherk,CHERK)(&uplo, &trans, &n, &k, &alpha, a, &lda, &beta, c, &ldc);
}

static inline void c_cher2k(const char uplo, const char trans,
                            const integer n, const integer k,
                            const scomplex alpha, const scomplex* a, const integer lda,
                                                  const scomplex* b, const integer ldb,
                            const    float  beta,       scomplex* c, const integer ldc)
{
    FC_FUNC(cher2k,CHER2K)(&uplo, &trans, &n, &k, &alpha, a, &lda, b, &ldb, &beta, c, &ldc);
}

static inline void c_ctrmm (const char side, const char uplo, const char transa, const char diag,
                            const integer m, const integer n,
                            const scomplex alpha, const scomplex* a, const integer lda,
                                                        scomplex* b, const integer ldb)
{
    FC_FUNC(ctrmm,CTRMM)(&side, &uplo, &transa, &diag, &m, &n, &alpha, a, &lda, b, &ldb);
}

static inline void c_ctrsm (const char side, const char uplo, const char transa, const char diag,
                            const integer m, const integer n,
                            const scomplex alpha, const scomplex* a, const integer lda,
                                                        scomplex* b, const integer ldb)
{
    FC_FUNC(ctrsm,CTRSM)(&side, &uplo, &transa, &diag, &m, &n, &alpha, a, &lda, b, &ldb);
}

static inline void c_zgemm (const char transa, const char transb,
                            const integer m, const integer n, const integer k,
                            const dcomplex alpha, const dcomplex* a, const integer lda,
                                                  const dcomplex* b, const integer ldb,
                            const dcomplex  beta,       dcomplex* c, const integer ldc)
{
    FC_FUNC(zgemm,ZGEMM)(&transa, &transb, &m, &n, &k, &alpha, a, &lda, b, &ldb, &beta, c, &ldc);
}

static inline void c_zhemm (const char side, const char uplo,
                            const integer m, const integer n,
                            const dcomplex alpha, const dcomplex* a, const integer lda,
                                                  const dcomplex* b, const integer ldb,
                            const dcomplex  beta,       dcomplex* c, const integer ldc)
{
    FC_FUNC(zhemm,ZHEMM)(&side, &uplo, &m, &n, &alpha, a, &lda, b, &ldb, &beta, c, &ldc);
}

static inline void c_zsyrk (const char uplo, const char trans,
                            const integer n, const integer k,
                            const dcomplex alpha, const dcomplex* a, const integer lda,
                            const dcomplex  beta,       dcomplex* c, const integer ldc)
{
    FC_FUNC(zsyrk,ZSYRK)(&uplo, &trans, &n, &k, &alpha, a, &lda, &beta, c, &ldc);
}

static inline void c_zsyr2k(const char uplo, const char trans,
                            const integer n, const integer k,
                            const dcomplex alpha, const dcomplex* a, const integer lda,
                                                  const dcomplex* b, const integer ldb,
                            const dcomplex  beta,       dcomplex* c, const integer ldc)
{
    FC_FUNC(zsyr2k,ZSYR2K)(&uplo, &trans, &n, &k, &alpha, a, &lda, b, &ldb, &beta, c, &ldc);
}

static inline void c_zherk (const char uplo, const char trans,
                            const integer n, const integer k,
                            const double alpha, const dcomplex* a, const integer lda,
                            const double  beta,       dcomplex* c, const integer ldc)
{
    FC_FUNC(zherk,ZHERK)(&uplo, &trans, &n, &k, &alpha, a, &lda, &beta, c, &ldc);
}

static inline void c_zher2k(const char uplo, const char trans,
                            const integer n, const integer k,
                            const dcomplex alpha, const dcomplex* a, const integer lda,
                                                  const dcomplex* b, const integer ldb,
                            const   double  beta,       dcomplex* c, const integer ldc)
{
    FC_FUNC(zher2k,ZHER2K)(&uplo, &trans, &n, &k, &alpha, a, &lda, b, &ldb, &beta, c, &ldc);
}

static inline void c_ztrmm (const char side, const char uplo, const char transa, const char diag,
                            const integer m, const integer n,
                            const dcomplex alpha, const dcomplex* a, const integer lda,
                                                        dcomplex* b, const integer ldb)
{
    FC_FUNC(ztrmm,ZTRMM)(&side, &uplo, &transa, &diag, &m, &n, &alpha, a, &lda, b, &ldb);
}

static inline void c_ztrsm (const char side, const char uplo, const char transa, const char diag,
                            const integer m, const integer n,
                            const dcomplex alpha, const dcomplex* a, const integer lda,
                                                        dcomplex* b, const integer ldb)
{
    FC_FUNC(ztrsm,ZTRSM)(&side, &uplo, &transa, &diag, &m, &n, &alpha, a, &lda, b, &ldb);
}

#ifdef __cplusplus
}
#endif

/*
 * #define more familiar names for the C versions
 */
#define srotg  c_srotg
#define srotmg c_srotmg
#define srot   c_srot
#define srotm  c_srotm
#define sswap  c_sswap
#define sscal  c_sscal
#define scopy  c_scopy
#define saxpy  c_saxpy
#define sdot   c_sdot
#define snrm2  c_snrm2
#define sasum  c_sasum
#define isamax c_isamax
#define sgemv  c_sgemv
#define sgbmv  c_sgbmv
#define ssymv  c_ssymv
#define ssbmv  c_ssbmv
#define sspmv  c_sspmv
#define strmv  c_strmv
#define stbmv  c_stbmv
#define stpmv  c_stpmv
#define strsv  c_strsv
#define stbsv  c_stbsv
#define stpsv  c_stpsv
#define sger   c_sger
#define ssyr   c_ssyr
#define sspr   c_sspr
#define ssyr2  c_ssyr2
#define sspr2  c_sspr2
#define sgemm  c_sgemm
#define ssymm  c_ssymm
#define ssyrk  c_ssyrk
#define ssyr2k c_ssyr2k
#define strmm  c_strmm
#define strsm  c_strsm

#define drotg  c_drotg
#define drotmg c_drotmg
#define drot   c_drot
#define drotm  c_drotm
#define dswap  c_dswap
#define dscal  c_dscal
#define dcopy  c_dcopy
#define daxpy  c_daxpy
#define ddot   c_ddot
#define dnrm2  c_dnrm2
#define dasum  c_dasum
#define idamax c_idamax
#define dgemv  c_dgemv
#define dgbmv  c_dgbmv
#define dsymv  c_dsymv
#define dsbmv  c_dsbmv
#define dspmv  c_dspmv
#define dtrmv  c_dtrmv
#define dtbmv  c_dtbmv
#define dtpmv  c_dtpmv
#define dtrsv  c_dtrsv
#define dtbsv  c_dtbsv
#define dtpsv  c_dtpsv
#define dger   c_dger
#define dsyr   c_dsyr
#define dspr   c_dspr
#define dsyr2  c_dsyr2
#define dspr2  c_dspr2
#define dgemm  c_dgemm
#define dsymm  c_dsymm
#define dsyrk  c_dsyrk
#define dsyr2k c_dsyr2k
#define dtrmm  c_dtrmm
#define dtrsm  c_dtrsm

#define crotg  c_crotg
#define csrot  c_csrot
#define cswap  c_cswap
#define cscal  c_cscal
#define csscal c_csscal
#define ccopy  c_ccopy
#define caxpy  c_caxpy
#define cdotu  c_cdotu
#define cdotc  c_cdotc
#define scnrm2 c_scnrm2
#define scasum c_scasum
#define icamax c_icamax
#define cgemv  c_cgemv
#define cgbmv  c_cgbmv
#define chemv  c_chemv
#define chbmv  c_chbmv
#define chpmv  c_chpmv
#define ctrmv  c_ctrmv
#define ctbmv  c_ctbmv
#define ctpmv  c_ctpmv
#define ctrsv  c_ctrsv
#define ctbsv  c_ctbsv
#define ctpsv  c_ctpsv
#define cgeru  c_cgeru
#define cgerc  c_cgerc
#define cher   c_cher
#define chpr   c_chpr
#define cher2  c_cher2
#define chpr2  c_chpr2
#define cgemm  c_cgemm
#define csymm  c_csymm
#define chemm  c_chemm
#define csyrk  c_csyrk
#define csyr2k c_csyr2k
#define cherk  c_cherk
#define cher2k c_cher2k
#define ctrmm  c_ctrmm
#define ctrsm  c_ctrsm

#define zrotg  c_zrotg
#define zdrot  c_zdrot
#define zswap  c_zswap
#define zscal  c_zscal
#define zdscal c_zdscal
#define zcopy  c_zcopy
#define zaxpy  c_zaxpy
#define zdotu  c_zdotu
#define zdotc  c_zdotc
#define dznrm2 c_dznrm2
#define dzasum c_dzasum
#define izamax c_izamax
#define zgemv  c_zgemv
#define zgbmv  c_zgbmv
#define zhemv  c_zhemv
#define zhbmv  c_zhbmv
#define zhpmv  c_zhpmv
#define ztrmv  c_ztrmv
#define ztbmv  c_ztbmv
#define ztpmv  c_ztpmv
#define ztrsv  c_ztrsv
#define ztbsv  c_ztbsv
#define ztpsv  c_ztpsv
#define zgeru  c_zgeru
#define zgerc  c_zgerc
#define zher   c_zher
#define zhpr   c_zhpr
#define zher2  c_zher2
#define zhpr2  c_zhpr2
#define zgemm  c_zgemm
#define zsymm  c_zsymm
#define zhemm  c_zhemm
#define zsyrk  c_zsyrk
#define zsyr2k c_zsyr2k
#define zherk  c_zherk
#define zher2k c_zher2k
#define ztrmm  c_ztrmm
#define ztrsm  c_ztrsm

#ifdef __cplusplus

namespace LAWrap
{

/******************************************************************************
 *
 * Level 1 BLAS, C++ overloads
 *
 *****************************************************************************/
inline void rotg(float* a, float* b, float* c, float* s)
{
    srotg(a, b, c, s);
}

inline void rotg(double* a, double* b, double* c, double* s)
{
    drotg(a, b, c, s);
}

inline void rotg(scomplex* a, scomplex* b, float* c, scomplex* s)
{
    crotg(a, b, c, s);
}

inline void rotg(dcomplex* a, dcomplex* b, double* c, dcomplex* s)
{
    zrotg(a, b, c, s);
}

inline void rotmg(float* d1, float* d2, float* a, const float b, float* param)
{
    srotmg(d1, d2, a, b, param);
}

inline void rotmg(double* d1, double* d2, double* a, const double b, double* param)
{
    drotmg(d1, d2, a, b, param);
}

inline void rot(const integer n, float* x, const integer incx,
                                 float* y, const integer incy, const float c, const float s)
{
    srot(n, x, incx, y, incy, c, s);
}

inline void rot(const integer n, double* x, const integer incx,
                                 double* y, const integer incy, const double c, const double s)
{
    drot(n, x, incx, y, incy, c, s);
}

inline void rot(const integer n, scomplex* x, const integer incx,
                                 scomplex* y, const integer incy, const float c, const float s)
{
    csrot(n, x, incx, y, incy, c, s);
}

inline void rot(const integer n, dcomplex* x, const integer incx,
                                 dcomplex* y, const integer incy, const double c, const double s)
{
    zdrot(n, x, incx, y, incy, c, s);
}

inline void rotm(const integer n, float* x, const integer incx,
                                  float* y, const integer incy, float* param)
{
    srotm(n, x, incx, y, incy, param);
}

inline void rotm(const integer n, double* x, const integer incx,
                                  double* y, const integer incy, double* param)
{
    drotm(n, x, incx, y, incy, param);
}

inline void swap(const integer n, float* x, const integer incx,
                                  float* y, const integer incy)
{
    sswap(n, x, incx, y, incy);
}

inline void swap(const integer n, double* x, const integer incx,
                                  double* y, const integer incy)
{
    dswap(n, x, incx, y, incy);
}

inline void swap(const integer n, scomplex* x, const integer incx,
                                  scomplex* y, const integer incy)
{
    cswap(n, x, incx, y, incy);
}

inline void swap(const integer n, dcomplex* x, const integer incx,
                                  dcomplex* y, const integer incy)
{
    zswap(n, x, incx, y, incy);
}

inline void scal(const integer n, const float alpha, float* x, const integer incx)
{
    sscal(n, alpha, x, incx);
}

inline void scal(const integer n, const double alpha, double* x, const integer incx)
{
    dscal(n, alpha, x, incx);
}

inline void scal(const integer n, const scomplex alpha, scomplex* x, const integer incx)
{
    cscal(n, alpha, x, incx);
}

inline void scal(const integer n, const dcomplex alpha, dcomplex* x, const integer incx)
{
    zscal(n, alpha, x, incx);
}

inline void scal(const integer n, const float alpha, scomplex* x, const integer incx)
{
    csscal(n, alpha, x, incx);
}

inline void scal(const integer n, const float alpha, dcomplex* x, const integer incx)
{
    zdscal(n, alpha, x, incx);
}

inline void copy(const integer n, const float* x, const integer incx,
                                        float* y, const integer incy)
{
    scopy(n, x, incx, y, incy);
}

inline void copy(const integer n, const double* x, const integer incx,
                                        double* y, const integer incy)
{
    dcopy(n, x, incx, y, incy);
}

inline void copy(const integer n, const scomplex* x, const integer incx,
                                        scomplex* y, const integer incy)
{
    ccopy(n, x, incx, y, incy);
}

inline void copy(const integer n, const dcomplex* x, const integer incx,
                                        dcomplex* y, const integer incy)
{
    zcopy(n, x, incx, y, incy);
}

inline void axpy(const integer n, const float alpha, const float* x, const integer incx,
                                                           float* y, const integer incy)
{
    saxpy(n, alpha, x, incx, y, incy);
}

inline void axpy(const integer n, const double alpha, const double* x, const integer incx,
                                                            double* y, const integer incy)
{
    daxpy(n, alpha, x, incx, y, incy);
}

inline void axpy(const integer n, const scomplex alpha, const scomplex* x, const integer incx,
                                                              scomplex* y, const integer incy)
{
    caxpy(n, alpha, x, incx, y, incy);
}

inline void axpy(const integer n, const dcomplex alpha, const dcomplex* x, const integer incx,
                                                              dcomplex* y, const integer incy)
{
    zaxpy(n, alpha, x, incx, y, incy);
}

inline float dotc(const integer n, const float* x, const integer incx,
                                   const float* y, const integer incy)
{
    return sdot(n, x, incx, y, incy);
}

inline double dotc(const integer n, const double* x, const integer incx,
                                    const double* y, const integer incy)
{
    return ddot(n, x, incx, y, incy);
}

inline scomplex dotc(const integer n, const scomplex* x, const integer incx,
                                      const scomplex* y, const integer incy)
{
    return cdotc(n, x, incx, y, incy);
}

inline dcomplex dotc(const integer n, const dcomplex* x, const integer incx,
                                      const dcomplex* y, const integer incy)
{
    return zdotc(n, x, incx, y, incy);
}

inline float dotu(const integer n, const float* x, const integer incx,
                                   const float* y, const integer incy)
{
    return sdot(n, x, incx, y, incy);
}

inline double dotu(const integer n, const double* x, const integer incx,
                                    const double* y, const integer incy)
{
    return ddot(n, x, incx, y, incy);
}

inline scomplex dotu(const integer n, const scomplex* x, const integer incx,
                                      const scomplex* y, const integer incy)
{
    return cdotu(n, x, incx, y, incy);
}

inline dcomplex dotu(const integer n, const dcomplex* x, const integer incx,
                                      const dcomplex* y, const integer incy)
{
    return zdotu(n, x, incx, y, incy);
}

#define dot dotc

inline float nrm2(const integer n, const float* x, const integer incx)
{
    return snrm2(n, x, incx);
}

inline double nrm2(const integer n, const double* x, const integer incx)
{
    return dnrm2(n, x, incx);
}

inline float nrm2(const integer n, const scomplex* x, const integer incx)
{
    return scnrm2(n, x, incx);
}

inline double nrm2(const integer n, const dcomplex* x, const integer incx)
{
    return dznrm2(n, x, incx);
}

inline float asum(const integer n, const float* x, const integer incx)
{
    return sasum(n, x, incx);
}

inline double asum(const integer n, const double* x, const integer incx)
{
    return dasum(n, x, incx);
}

inline float asum(const integer n, const scomplex* x, const integer incx)
{
    return scasum(n, x, incx);
}

inline double asum(const integer n, const dcomplex* x, const integer incx)
{
    return dzasum(n, x, incx);
}

inline integer iamax(const integer n, const float* x, const integer incx)
{
    return isamax(n, x, incx);
}

inline integer iamax(const integer n, const double* x, const integer incx)
{
    return idamax(n, x, incx);
}

inline integer iamax(const integer n, const scomplex* x, const integer incx)
{
    return icamax(n, x, incx);
}

inline integer iamax(const integer n, const dcomplex* x, const integer incx)
{
    return izamax(n, x, incx);
}

inline float amax(const integer n, const float* x, const integer incx)
{
    return x[isamax(n, x, incx)];
}

inline double amax(const integer n, const double* x, const integer incx)
{
    return x[idamax(n, x, incx)];
}

inline scomplex amax(const integer n, const scomplex* x, const integer incx)
{
    return x[icamax(n, x, incx)];
}

inline dcomplex amax(const integer n, const dcomplex* x, const integer incx)
{
    return x[izamax(n, x, incx)];
}

/******************************************************************************
 *
 * Level 2 BLAS, C++ overloads
 *
 *****************************************************************************/
inline void gemv(const char trans, const integer m, const integer n,
                 const float alpha, const float* a, const integer lda,
                                    const float* x, const integer incx,
                 const float  beta,       float* y, const integer incy)
{
    sgemv(trans, m, n, alpha, a, lda, x, incx, beta, y, incy);
}

inline void gemv(const char trans, const integer m, const integer n,
                 const double alpha, const double* a, const integer lda,
                                     const double* x, const integer incx,
                 const double  beta,       double* y, const integer incy)
{
    dgemv(trans, m, n, alpha, a, lda, x, incx, beta, y, incy);
}

inline void gemv(const char trans, const integer m, const integer n,
                 const scomplex alpha, const scomplex* a, const integer lda,
                                       const scomplex* x, const integer incx,
                 const scomplex  beta,       scomplex* y, const integer incy)
{
    cgemv(trans, m, n, alpha, a, lda, x, incx, beta, y, incy);
}

inline void gemv(const char trans, const integer m, const integer n,
                 const dcomplex alpha, const dcomplex* a, const integer lda,
                                       const dcomplex* x, const integer incx,
                 const dcomplex  beta,       dcomplex* y, const integer incy)
{
    zgemv(trans, m, n, alpha, a, lda, x, incx, beta, y, incy);
}

inline void gbmv(const char trans,
                 const integer m, const integer n, const integer kl, const integer ku,
                 const float alpha, const float* a, const integer lda,
                                    const float* x, const integer incx,
                 const float  beta,       float* y, const integer incy)
{
    sgbmv(trans, m, n, kl, ku, alpha, a, lda, x, incx, beta, y, incy);
}

inline void gbmv(const char trans,
                 const integer m, const integer n, const integer kl, const integer ku,
                 const double alpha, const double* a, const integer lda,
                                     const double* x, const integer incx,
                 const double  beta,       double* y, const integer incy)
{
    dgbmv(trans, m, n, kl, ku, alpha, a, lda, x, incx, beta, y, incy);
}

inline void gbmv(const char trans,
                 const integer m, const integer n, const integer kl, const integer ku,
                 const scomplex alpha, const scomplex* a, const integer lda,
                                       const scomplex* x, const integer incx,
                 const scomplex  beta,       scomplex* y, const integer incy)
{
    cgbmv(trans, m, n, kl, ku, alpha, a, lda, x, incx, beta, y, incy);
}

inline void gbmv(const char trans,
                 const integer m, const integer n, const integer kl, const integer ku,
                 const dcomplex alpha, const dcomplex* a, const integer lda,
                                       const dcomplex* x, const integer incx,
                 const dcomplex  beta,       dcomplex* y, const integer incy)
{
    zgbmv(trans, m, n, kl, ku, alpha, a, lda, x, incx, beta, y, incy);
}

inline void hemv(const char uplo, const integer n,
                 const float alpha, const float* a, const integer lda,
                                    const float* x, const integer incx,
                 const float  beta,       float* y, const integer incy)
{
    ssymv(uplo, n, alpha, a, lda, x, incx, beta, y, incy);
}

inline void hemv(const char uplo, const integer n,
                 const double alpha, const double* a, const integer lda,
                                     const double* x, const integer incx,
                 const double  beta,       double* y, const integer incy)
{
    dsymv(uplo, n, alpha, a, lda, x, incx, beta, y, incy);
}

inline void hemv(const char uplo, const integer n,
                 const scomplex alpha, const scomplex* a, const integer lda,
                                       const scomplex* x, const integer incx,
                 const scomplex  beta,       scomplex* y, const integer incy)
{
    chemv(uplo, n, alpha, a, lda, x, incx, beta, y, incy);
}

inline void hemv(const char uplo, const integer n,
                 const dcomplex alpha, const dcomplex* a, const integer lda,
                                       const dcomplex* x, const integer incx,
                 const dcomplex  beta,       dcomplex* y, const integer incy)
{
    zhemv(uplo, n, alpha, a, lda, x, incx, beta, y, incy);
}

inline void hbmv(const char uplo, const integer n, const integer k,
                 const float alpha, const float* a, const integer lda,
                                    const float* x, const integer incx,
                 const float  beta,       float* y, const integer incy)
{
    ssbmv(uplo, n, k, alpha, a, lda, x, incx, beta, y, incy);
}

inline void hbmv(const char uplo, const integer n, const integer k,
                 const double alpha, const double* a, const integer lda,
                                     const double* x, const integer incx,
                 const double  beta,       double* y, const integer incy)
{
    dsbmv(uplo, n, k, alpha, a, lda, x, incx, beta, y, incy);
}

inline void hbmv(const char uplo, const integer n, const integer k,
                 const scomplex alpha, const scomplex* a, const integer lda,
                                       const scomplex* x, const integer incx,
                 const scomplex  beta,       scomplex* y, const integer incy)
{
    chbmv(uplo, n, k, alpha, a, lda, x, incx, beta, y, incy);
}

inline void hbmv(const char uplo, const integer n, const integer k,
                 const dcomplex alpha, const dcomplex* a, const integer lda,
                                       const dcomplex* x, const integer incx,
                 const dcomplex  beta,       dcomplex* y, const integer incy)
{
    zhbmv(uplo, n, k, alpha, a, lda, x, incx, beta, y, incy);
}

inline void hpmv(const char uplo, const integer n,
                 const float alpha, const float* ap,
                                    const float*  x, const integer incx,
                 const float  beta,       float*  y, const integer incy)
{
    sspmv(uplo, n, alpha, ap, x, incx, beta, y, incy);
}

inline void hpmv(const char uplo, const integer n,
                 const double alpha, const double* ap,
                                     const double*  x, const integer incx,
                 const double  beta,       double*  y, const integer incy)
{
    dspmv(uplo, n, alpha, ap, x, incx, beta, y, incy);
}

inline void hpmv(const char uplo, const integer n,
                 const scomplex alpha, const scomplex* ap,
                                       const scomplex*  x, const integer incx,
                 const scomplex  beta,       scomplex*  y, const integer incy)
{
    chpmv(uplo, n, alpha, ap, x, incx, beta, y, incy);
}

inline void hpmv(const char uplo, const integer n,
                 const dcomplex alpha, const dcomplex* ap,
                                       const dcomplex*  x, const integer incx,
                 const dcomplex  beta,       dcomplex*  y, const integer incy)
{
    zhpmv(uplo, n, alpha, ap, x, incx, beta, y, incy);
}

inline void trmv(const char uplo, const char trans, const char diag, const integer n,
                 const float* a, const integer lda,
                       float* x, const integer incx)
{
    strmv(uplo, trans, diag, n, a, lda, x, incx);
}

inline void trmv(const char uplo, const char trans, const char diag, const integer n,
                 const double* a, const integer lda,
                       double* x, const integer incx)
{
    dtrmv(uplo, trans, diag, n, a, lda, x, incx);
}

inline void trmv(const char uplo, const char trans, const char diag, const integer n,
                 const scomplex* a, const integer lda,
                       scomplex* x, const integer incx)
{
    ctrmv(uplo, trans, diag, n, a, lda, x, incx);
}

inline void trmv(const char uplo, const char trans, const char diag, const integer n,
                 const dcomplex* a, const integer lda,
                       dcomplex* x, const integer incx)
{
    ztrmv(uplo, trans, diag, n, a, lda, x, incx);
}

inline void tbmv(const char uplo, const char trans, const char diag,
                 const integer n, const integer k,
                 const float* a, const integer lda,
                       float* x, const integer incx)
{
    stbmv(uplo, trans, diag, n, k, a, lda, x, incx);
}

inline void tbmv(const char uplo, const char trans, const char diag,
                 const integer n, const integer k,
                 const double* a, const integer lda,
                       double* x, const integer incx)
{
    dtbmv(uplo, trans, diag, n, k, a, lda, x, incx);
}

inline void tbmv(const char uplo, const char trans, const char diag,
                 const integer n, const integer k,
                 const scomplex* a, const integer lda,
                       scomplex* x, const integer incx)
{
    ctbmv(uplo, trans, diag, n, k, a, lda, x, incx);
}

inline void tbmv(const char uplo, const char trans, const char diag,
                 const integer n, const integer k,
                 const dcomplex* a, const integer lda,
                       dcomplex* x, const integer incx)
{
    ztbmv(uplo, trans, diag, n, k, a, lda, x, incx);
}

inline void tpmv(const char uplo, const char trans, const char diag, const integer n,
                 const float* ap, float* x, const integer incx)
{
    stpmv(uplo, trans, diag, n, ap, x, incx);
}

inline void tpmv(const char uplo, const char trans, const char diag, const integer n,
                 const double* ap, double* x, const integer incx)
{
    dtpmv(uplo, trans, diag, n, ap, x, incx);
}

inline void tpmv(const char uplo, const char trans, const char diag, const integer n,
                 const scomplex* ap, scomplex* x, const integer incx)
{
    ctpmv(uplo, trans, diag, n, ap, x, incx);
}

inline void tpmv(const char uplo, const char trans, const char diag, const integer n,
                 const dcomplex* ap, dcomplex* x, const integer incx)
{
    ztpmv(uplo, trans, diag, n, ap, x, incx);
}

inline void trsv(const char uplo, const char trans, const char diag, const integer n,
                 const float* a, const integer lda,
                       float* x, const integer incx)
{
    strsv(uplo, trans, diag, n, a, lda, x, incx);
}

inline void trsv(const char uplo, const char trans, const char diag, const integer n,
                 const double* a, const integer lda,
                       double* x, const integer incx)
{
    dtrsv(uplo, trans, diag, n, a, lda, x, incx);
}

inline void trsv(const char uplo, const char trans, const char diag, const integer n,
                 const scomplex* a, const integer lda,
                       scomplex* x, const integer incx)
{
    ctrsv(uplo, trans, diag, n, a, lda, x, incx);
}

inline void trsv(const char uplo, const char trans, const char diag, const integer n,
                 const dcomplex* a, const integer lda,
                       dcomplex* x, const integer incx)
{
    ztrsv(uplo, trans, diag, n, a, lda, x, incx);
}

inline void tbsv(const char uplo, const char trans, const char diag,
                 const integer n, const integer k,
                 const float* a, const integer lda,
                       float* x, const integer incx)
{
    stbsv(uplo, trans, diag, n, k, a, lda, x, incx);
}

inline void tbsv(const char uplo, const char trans, const char diag,
                 const integer n, const integer k,
                 const double* a, const integer lda,
                       double* x, const integer incx)
{
    dtbsv(uplo, trans, diag, n, k, a, lda, x, incx);
}

inline void tbsv(const char uplo, const char trans, const char diag,
                 const integer n, const integer k,
                 const scomplex* a, const integer lda,
                       scomplex* x, const integer incx)
{
    ctbsv(uplo, trans, diag, n, k, a, lda, x, incx);
}

inline void tbsv(const char uplo, const char trans, const char diag,
                 const integer n, const integer k,
                 const dcomplex* a, const integer lda,
                       dcomplex* x, const integer incx)
{
    ztbsv(uplo, trans, diag, n, k, a, lda, x, incx);
}

inline void tpsv(const char uplo, const char trans, const char diag, const integer n,
                 const float* ap, float* x, const integer incx)
{
    stpsv(uplo, trans, diag, n, ap, x, incx);
}

inline void tpsv(const char uplo, const char trans, const char diag, const integer n,
                 const double* ap, double* x, const integer incx)
{
    dtpsv(uplo, trans, diag, n, ap, x, incx);
}

inline void tpsv(const char uplo, const char trans, const char diag, const integer n,
                 const scomplex* ap, scomplex* x, const integer incx)
{
    ctpsv(uplo, trans, diag, n, ap, x, incx);
}

inline void tpsv(const char uplo, const char trans, const char diag, const integer n,
                const dcomplex* ap, dcomplex* x, const integer incx)
{
    ztpsv(uplo, trans, diag, n, ap, x, incx);
}

inline void gerc(const integer m, const integer n,
                 const float alpha, const float* x, const integer incx,
                                    const float* y, const integer incy,
                                          float* a, const integer lda)
{
    sger(m, n, alpha, x, incx, y, incy, a, lda);
}

inline void gerc(const integer m, const integer n,
                 const double alpha, const double* x, const integer incx,
                                     const double* y, const integer incy,
                                           double* a, const integer lda)
{
    dger(m, n, alpha, x, incx, y, incy, a, lda);
}

inline void gerc(const integer m, const integer n,
                 const scomplex alpha, const scomplex* x, const integer incx,
                                       const scomplex* y, const integer incy,
                                             scomplex* a, const integer lda)
{
    cgerc(m, n, alpha, x, incx, y, incy, a, lda);
}

inline void gerc(const integer m, const integer n,
                 const dcomplex alpha, const dcomplex* x, const integer incx,
                                       const dcomplex* y, const integer incy,
                                             dcomplex* a, const integer lda)
{
    zgerc(m, n, alpha, x, incx, y, incy, a, lda);
}

inline void geru(const integer m, const integer n,
                 const float alpha, const float* x, const integer incx,
                                    const float* y, const integer incy,
                                          float* a, const integer lda)
{
    sger(m, n, alpha, x, incx, y, incy, a, lda);
}

inline void geru(const integer m, const integer n,
                 const double alpha, const double* x, const integer incx,
                                     const double* y, const integer incy,
                                           double* a, const integer lda)
{
    dger(m, n, alpha, x, incx, y, incy, a, lda);
}

inline void geru(const integer m, const integer n,
                 const scomplex alpha, const scomplex* x, const integer incx,
                                       const scomplex* y, const integer incy,
                                             scomplex* a, const integer lda)
{
    cgeru(m, n, alpha, x, incx, y, incy, a, lda);
}

inline void geru(const integer m, const integer n,
                 const dcomplex alpha, const dcomplex* x, const integer incx,
                                       const dcomplex* y, const integer incy,
                                             dcomplex* a, const integer lda)
{
    zgeru(m, n, alpha, x, incx, y, incy, a, lda);
}

#define ger gerc

inline void her(const char uplo, const integer n,
                const float alpha, const float* x, const integer incx,
                                         float* a, const integer lda)
{
    ssyr(uplo, n, alpha, x, incx, a, lda);
}

inline void her(const char uplo, const integer n,
                const double alpha, const double* x, const integer incx,
                                          double* a, const integer lda)
{
    dsyr(uplo, n, alpha, x, incx, a, lda);
}

inline void her(const char uplo, const integer n,
                const float alpha, const scomplex* x, const integer incx,
                                            scomplex* a, const integer lda)
{
    cher(uplo, n, alpha, x, incx, a, lda);
}

inline void her(const char uplo, const integer n,
                const double alpha, const dcomplex* x, const integer incx,
                                            dcomplex* a, const integer lda)
{
    zher(uplo, n, alpha, x, incx, a, lda);
}

inline void hpr(const char uplo, const integer n,
                const float alpha, const float* x, const integer incx,
                                         float* ap)
{
    sspr(uplo, n, alpha, x, incx, ap);
}

inline void hpr(const char uplo, const integer n,
                const double alpha, const double* x, const integer incx,
                                          double* ap)
{
    dspr(uplo, n, alpha, x, incx, ap);
}

inline void hpr(const char uplo, const integer n,
                const float alpha, const scomplex* x, const integer incx,
                                            scomplex* ap)
{
    chpr(uplo, n, alpha, x, incx, ap);
}

inline void hpr(const char uplo, const integer n,
                const double alpha, const dcomplex* x, const integer incx,
                                            dcomplex* ap)
{
    zhpr(uplo, n, alpha, x, incx, ap);
}

inline void her2(const char uplo, const integer n,
                 const float alpha, const float* x, const integer incx,
                                    const float* y, const integer incy,
                                          float* a, const integer lda)
{
    ssyr2(uplo, n, alpha, x, incx, y, incy, a, lda);
}

inline void her2(const char uplo, const integer n,
                 const double alpha, const double* x, const integer incx,
                                     const double* y, const integer incy,
                                           double* a, const integer lda)
{
    dsyr2(uplo, n, alpha, x, incx, y, incy, a, lda);
}
inline void her2(const char uplo, const integer n,
                 const scomplex alpha, const scomplex* x, const integer incx,
                                       const scomplex* y, const integer incy,
                                             scomplex* a, const integer lda)
{
    cher2(uplo, n, alpha, x, incx, y, incy, a, lda);
}

inline void her2(const char uplo, const integer n,
                 const dcomplex alpha, const dcomplex* x, const integer incx,
                                       const dcomplex* y, const integer incy,
                                             dcomplex* a, const integer lda)
{
    zher2(uplo, n, alpha, x, incx, y, incy, a, lda);
}

inline void hpr2(const char uplo, const integer n,
                 const float alpha, const float* x, const integer incx,
                                    const float* y, const integer incy,
                                          float* ap)
{
    sspr2(uplo, n, alpha, x, incx, y, incy, ap);
}

inline void hpr2(const char uplo, const integer n,
                 const double alpha, const double* x, const integer incx,
                                     const double* y, const integer incy,
                                           double* ap)
{
    dspr2(uplo, n, alpha, x, incx, y, incy, ap);
}

inline void hpr2(const char uplo, const integer n,
                 const scomplex alpha, const scomplex* x, const integer incx,
                                       const scomplex* y, const integer incy,
                                             scomplex* ap)
{
    chpr2(uplo, n, alpha, x, incx, y, incy, ap);
}

inline void hpr2(const char uplo, const integer n,
                 const dcomplex alpha, const dcomplex* x, const integer incx,
                                       const dcomplex* y, const integer incy,
                                             dcomplex* ap)
{
    zhpr2(uplo, n, alpha, x, incx, y, incy, ap);
}

/******************************************************************************
 *
 * Level 3 BLAS, C++ overloads
 *
 *****************************************************************************/
inline void gemm(const char transa, const char transb,
                 const integer m, const integer n, const integer k,
                 const float alpha, const float* a, const integer lda,
                                    const float* b, const integer ldb,
                 const float  beta,       float* c, const integer ldc)
{
    sgemm(transa, transb, m, n, k, alpha, a, lda, b, ldb, beta, c, ldc);
}

inline void gemm(const char transa, const char transb,
                 const integer m, const integer n, const integer k,
                 const double alpha, const double* a, const integer lda,
                                     const double* b, const integer ldb,
                 const double  beta,       double* c, const integer ldc)
{
    dgemm(transa, transb, m, n, k, alpha, a, lda, b, ldb, beta, c, ldc);
}

inline void gemm(const char transa, const char transb,
                 const integer m, const integer n, const integer k,
                 const scomplex alpha, const scomplex* a, const integer lda,
                                       const scomplex* b, const integer ldb,
                 const scomplex  beta,       scomplex* c, const integer ldc)
{
    cgemm(transa, transb, m, n, k, alpha, a, lda, b, ldb, beta, c, ldc);
}

inline void gemm(const char transa, const char transb,
                 const integer m, const integer n, const integer k,
                 const dcomplex alpha, const dcomplex* a, const integer lda,
                                       const dcomplex* b, const integer ldb,
                 const dcomplex  beta,       dcomplex* c, const integer ldc)
{
    zgemm(transa, transb, m, n, k, alpha, a, lda, b, ldb, beta, c, ldc);
}

inline void hemm(const char side, const char uplo,
                 const integer m, const integer n,
                 const float alpha, const float* a, const integer lda,
                                    const float* b, const integer ldb,
                 const float  beta,       float* c, const integer ldc)
{
    ssymm(side, uplo, m, n, alpha, a, lda, b, ldb, beta, c, ldc);
}

inline void hemm(const char side, const char uplo,
                 const integer m, const integer n,
                 const double alpha, const double* a, const integer lda,
                                     const double* b, const integer ldb,
                 const double  beta,       double* c, const integer ldc)
{
    dsymm(side, uplo, m, n, alpha, a, lda, b, ldb, beta, c, ldc);
}

inline void hemm(const char side, const char uplo,
                 const integer m, const integer n,
                 const scomplex alpha, const scomplex* a, const integer lda,
                                       const scomplex* b, const integer ldb,
                 const scomplex  beta,       scomplex* c, const integer ldc)
{
    chemm(side, uplo, m, n, alpha, a, lda, b, ldb, beta, c, ldc);
}

inline void hemm(const char side, const char uplo,
                 const integer m, const integer n,
                 const dcomplex alpha, const dcomplex* a, const integer lda,
                                       const dcomplex* b, const integer ldb,
                 const dcomplex  beta,       dcomplex* c, const integer ldc)
{
    zhemm(side, uplo, m, n, alpha, a, lda, b, ldb, beta, c, ldc);
}

inline void syrk(const char uplo, const char trans,
                 const integer n, const integer k,
                 const float alpha, const float* a, const integer lda,
                 const float  beta,       float* c, const integer ldc)
{
    ssyrk(uplo, trans, n, k, alpha, a, lda, beta, c, ldc);
}

inline void syrk(const char uplo, const char trans,
                 const integer n, const integer k,
                 const double alpha, const double* a, const integer lda,
                 const double  beta,       double* c, const integer ldc)
{
    dsyrk(uplo, trans, n, k, alpha, a, lda, beta, c, ldc);
}

inline void syrk(const char uplo, const char trans,
                 const integer n, const integer k,
                 const scomplex alpha, const scomplex* a, const integer lda,
                 const scomplex  beta,       scomplex* c, const integer ldc)
{
    csyrk(uplo, trans, n, k, alpha, a, lda, beta, c, ldc);
}

inline void syrk(const char uplo, const char trans,
                 const integer n, const integer k,
                 const dcomplex alpha, const dcomplex* a, const integer lda,
                 const dcomplex  beta,       dcomplex* c, const integer ldc)
{
    zsyrk(uplo, trans, n, k, alpha, a, lda, beta, c, ldc);
}

inline void herk(const char uplo, const char trans,
                 const integer n, const integer k,
                 const float alpha, const float* a, const integer lda,
                 const float  beta,       float* c, const integer ldc)
{
    ssyrk(uplo, trans, n, k, alpha, a, lda, beta, c, ldc);
}

inline void herk(const char uplo, const char trans,
                 const integer n, const integer k,
                 const double alpha, const double* a, const integer lda,
                 const double  beta,       double* c, const integer ldc)
{
    dsyrk(uplo, trans, n, k, alpha, a, lda, beta, c, ldc);
}

inline void herk(const char uplo, const char trans,
                 const integer n, const integer k,
                 const float alpha, const scomplex* a, const integer lda,
                 const float  beta,       scomplex* c, const integer ldc)
{
    cherk(uplo, trans, n, k, alpha, a, lda, beta, c, ldc);
}

inline void herk(const char uplo, const char trans,
                 const integer n, const integer k,
                 const double alpha, const dcomplex* a, const integer lda,
                 const double  beta,       dcomplex* c, const integer ldc)
{
    zherk(uplo, trans, n, k, alpha, a, lda, beta, c, ldc);
}

inline void syr2k(const char uplo, const char trans,
                  const integer n, const integer k,
                  const float alpha, const float* a, const integer lda,
                                     const float* b, const integer ldb,
                  const float  beta,       float* c, const integer ldc)
{
    ssyr2k(uplo, trans, n, k, alpha, a, lda, b, ldb, beta, c, ldc);
}

inline void syr2k(const char uplo, const char trans,
                  const integer n, const integer k,
                  const double alpha, const double* a, const integer lda,
                                      const double* b, const integer ldb,
                  const double  beta,       double* c, const integer ldc)
{
    dsyr2k(uplo, trans, n, k, alpha, a, lda, b, ldb, beta, c, ldc);
}

inline void syr2k(const char uplo, const char trans,
                  const integer n, const integer k,
                  const scomplex alpha, const scomplex* a, const integer lda,
                                        const scomplex* b, const integer ldb,
                  const scomplex  beta,       scomplex* c, const integer ldc)
{
    csyr2k(uplo, trans, n, k, alpha, a, lda, b, ldb, beta, c, ldc);
}

inline void syr2k(const char uplo, const char trans,
                  const integer n, const integer k,
                  const dcomplex alpha, const dcomplex* a, const integer lda,
                                        const dcomplex* b, const integer ldb,
                  const dcomplex  beta,       dcomplex* c, const integer ldc)
{
    zsyr2k(uplo, trans, n, k, alpha, a, lda, b, ldb, beta, c, ldc);
}

inline void her2k(const char uplo, const char trans,
                  const integer n, const integer k,
                  const float alpha, const float* a, const integer lda,
                                     const float* b, const integer ldb,
                  const float  beta,       float* c, const integer ldc)
{
    ssyr2k(uplo, trans, n, k, alpha, a, lda, b, ldb, beta, c, ldc);
}

inline void her2k(const char uplo, const char trans,
                  const integer n, const integer k,
                  const double alpha, const double* a, const integer lda,
                                      const double* b, const integer ldb,
                  const double  beta,       double* c, const integer ldc)
{
    dsyr2k(uplo, trans, n, k, alpha, a, lda, b, ldb, beta, c, ldc);
}

inline void her2k(const char uplo, const char trans,
                  const integer n, const integer k,
                  const scomplex alpha, const scomplex* a, const integer lda,
                                        const scomplex* b, const integer ldb,
                  const    float  beta,       scomplex* c, const integer ldc)
{
    cher2k(uplo, trans, n, k, alpha, a, lda, b, ldb, beta, c, ldc);
}

inline void her2k(const char uplo, const char trans,
                  const integer n, const integer k,
                  const dcomplex alpha, const dcomplex* a, const integer lda,
                                        const dcomplex* b, const integer ldb,
                  const   double  beta,       dcomplex* c, const integer ldc)
{
    zher2k(uplo, trans, n, k, alpha, a, lda, b, ldb, beta, c, ldc);
}

inline void trmm(const char side, const char uplo, const char transa, const char diag,
                 const integer m, const integer n,
                 const float alpha, const float* a, const integer lda,
                                          float* b, const integer ldb)
{
    strmm(side, uplo, transa, diag, m, n, alpha, a, lda, b, ldb);
}

inline void trmm(const char side, const char uplo, const char transa, const char diag,
                 const integer m, const integer n,
                 const double alpha, const double* a, const integer lda,
                                           double* b, const integer ldb)
{
    dtrmm(side, uplo, transa, diag, m, n, alpha, a, lda, b, ldb);
}

inline void trmm(const char side, const char uplo, const char transa, const char diag,
                 const integer m, const integer n,
                 const scomplex alpha, const scomplex* a, const integer lda,
                                             scomplex* b, const integer ldb)
{
    ctrmm(side, uplo, transa, diag, m, n, alpha, a, lda, b, ldb);
}

inline void trmm(const char side, const char uplo, const char transa, const char diag,
                 const integer m, const integer n,
                 const dcomplex alpha, const dcomplex* a, const integer lda,
                                             dcomplex* b, const integer ldb)
{
    ztrmm(side, uplo, transa, diag, m, n, alpha, a, lda, b, ldb);
}

inline void trsm(const char side, const char uplo, const char transa, const char diag,
                 const integer m, const integer n,
                 const float alpha, const float* a, const integer lda,
                                          float* b, const integer ldb)
{
    strsm(side, uplo, transa, diag, m, n, alpha, a, lda, b, ldb);
}

inline void trsm(const char side, const char uplo, const char transa, const char diag,
                 const integer m, const integer n,
                 const double alpha, const double* a, const integer lda,
                                           double* b, const integer ldb)
{
    dtrsm(side, uplo, transa, diag, m, n, alpha, a, lda, b, ldb);
}

inline void trsm(const char side, const char uplo, const char transa, const char diag,
                 const integer m, const integer n,
                 const scomplex alpha, const scomplex* a, const integer lda,
                                             scomplex* b, const integer ldb)
{
    ctrsm(side, uplo, transa, diag, m, n, alpha, a, lda, b, ldb);
}

inline void trsm(const char side, const char uplo, const char transa, const char diag,
                 const integer m, const integer n,
                 const dcomplex alpha, const dcomplex* a, const integer lda,
                                             dcomplex* b, const integer ldb)
{
    ztrsm(side, uplo, transa, diag, m, n, alpha, a, lda, b, ldb);
}

}

#endif

#endif
