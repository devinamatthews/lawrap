#ifndef _FORTRAN_H_
#define _FORTRAN_H_

#include "config.h"
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>

#ifndef USE_BLIS
#ifdef __cplusplus
#include <complex>
#define creal real
#define crealf real
#define cimag imag
#define cimagf imag
typedef std::complex<float> scomplex;
typedef std::complex<double> dcomplex;
#elif __STDC_VERSION__ >= 199901L
#include <complex.h>
typedef float complex scomplex;
typedef double complex dcomplex;
#else
typedef struct
{
    float real;
    float imag;
} scomplex;
typedef struct
{
    double real;
    double imag;
} dcomplex;
#endif
#endif

#ifndef MAX
#define MAX(a,b) ((a) >= (b) ? (a) : (b))
#endif

#ifndef MIN
#define MIN(a,b) ((a) <= (b) ? (a) : (b))
#endif

#ifdef INT64
typedef int64_t integer;
#else
typedef int32_t integer;
#endif

typedef integer logical;

#define init_cfour FC_FUNC_(init_cfour,INIT_CFOUR)
#define finish_cfour FC_FUNC_(finish_cfour,FINISH_CFOUR)

#ifndef __cplusplus
#define inline static inline
#endif

#ifdef __cplusplus
extern "C"
{
#endif

void init_cfour();

void finish_cfour();

void FC_FUNC(doisytyp,DOISYTYP)(const integer* list, const integer* irrep);

void FC_FUNC(errex,ERREX)();

integer FC_FUNC(getnorb,GETNORB)();

integer FC_FUNC(getnirrep,GETNIRREP)();

void FC_FUNC(getsymstuff,GETSYMSTUFF)(integer* NIRREPS, integer* DIRPRDX, integer* POPS);

integer FC_FUNC(getflag,GETFLAG)(const integer* flag);

void FC_FUNC(getevals,GETEVALS)(double* evls);

integer FC_FUNC(moiosz,MOIOSZ)(const integer* off, const integer* list);

integer FC_FUNC(moiods,MOIODS)(const integer* off, const integer* list);

void FC_FUNC(updmoi,UPDMOI)(const integer* numdis, const integer* dissiz, const integer* off,
        const integer* list, const integer* ienter, const integer* ioff);

void FC_FUNC(getlst,GETLST)(double* data, const integer* dis, const integer* ndis,
        const integer* buf, const integer* off, const integer* list);

void FC_FUNC(getrecsafe,GETRECSAFE)(integer* lujnk, const char* file, const char* rec, integer* nword, void* data);

void FC_FUNC(putrecsafe,PUTRECSAFE)(integer* lujnk, const char* file, const char* rec, integer* nword, void* data);

void FC_FUNC(putlst,PUTLST)(const double* data, const integer* dis, const integer* ndis,
        const integer* buf, const integer* off, const integer* list);

void FC_FUNC(sstgen,SSTGEN)(const double* a, double* b, const integer* num, const integer* popp, const integer* popq,
        const integer* popr, const integer* pops, double* scr, const integer* irrepa, const char* trans);

void FC_FUNC(symtr1,SYMTR1)(const integer* irrepar, const integer* popr, const integer* pops, const integer* numpq,
            double* a, double* scr1, double* scr2, double* scr3);

void FC_FUNC(symtr3,SYMTR3)(const integer* irrepal, const integer* popp, const integer* popq, const integer* numpq, const integer* numrs,
            double* a, double* scr1, double* scr2, double* scr3);

void FC_FUNC(symtra,SYMTRA)(const integer* irrepar, const integer* popr, const integer* pops, const integer* numpq,
            const double* a, double* b);

void FC_FUNC(symtra2,SYMTRA2)(const integer* irrepal, const integer* popp, const integer* pops, const integer* numpq, const integer* numrs,
             const double* a, double* b);

void getsymstuff(integer* nirrep, integer* dirprd, integer* pops);

inline integer c_getnorb()
{
    return FC_FUNC(getnorb,GETNORB)();
}

inline integer c_getnirrep()
{
    return FC_FUNC(getnirrep,GETNIRREP)();
}

inline integer c_getflag(const integer flag)
{
    return FC_FUNC(getflag,GETFLAG)(&flag);
}

inline void c_getsymstuff(int *nirrep, int *pop, int *dirprd)
{
    int i, j;
    integer nrp;
    integer dirprd_[8][8];
    integer pops_[5][8];

    FC_FUNC(getsymstuff,GETSYMSTUFF)(&nrp, &dirprd_[0][0], &pops_[0][0]);

    *nirrep = nrp;

    for (i = 0;i < 8;i++)
    {
        pop[0*8+i] = pops_[0][i];
        pop[1*8+i] = pops_[1][i];
        pop[2*8+i] = pops_[2][i];
        pop[3*8+i] = pops_[3][i];
        pop[4*8+i] = pops_[4][i];
        for (j = 0;j < 8;j++)
        {
            dirprd[i*8+j] = dirprd_[i][j]-1;
        }
    }
}

inline double* c_getevals()
{
    int i;
    int ntot = c_getnorb();

    double* evals = (double*)malloc(sizeof(double)*2*ntot);

    if (!evals) return 0;

    for (i = 0;i < 2*ntot;i++) evals[ntot] = 0.0;
    FC_FUNC(getevals,GETEVALS)(evals);

    return evals;
}

inline long c_moiosz(const integer off_, const integer list)
{
    integer off = off_+1;
    return FC_FUNC(moiosz,MOIOSZ)(&off, &list);
}

inline long c_moiods(const integer off_, const integer list)
{
    integer off = off_+1;
    return FC_FUNC(moiods,MOIODS)(&off, &list);
}

inline void c_updmoi(const integer numdis, const integer dissiz, const integer off_,
              const integer list, const integer ienter, const integer ioff)
{
    integer off = off_+1;
    FC_FUNC(updmoi,UPDMOI)(&numdis, &dissiz, &off, &list, &ienter, &ioff);
}

inline void c_getlst(double* data, const integer dis_, const integer ndis,
              const integer buf, const integer off_, const integer list)
{
    integer dis = dis_+1;
    integer off = off_+1;
    FC_FUNC(getlst,GETLST)(data, &dis, &ndis, &buf, &off, &list);
}

inline void c_putlst(const double* data, const integer dis_, const integer ndis,
              const integer buf, const integer off_, const integer list)
{
    integer dis = dis_+1;
    integer off = off_+1;
    FC_FUNC(putlst,PUTLST)(data, &dis, &ndis, &buf, &off, &list);
}

inline void c_sstgen(const double* a, double* b, const integer num, const int* popp, const int* popq,
              const int* popr, const int* pops, double* scr, const integer irrepa_, const char* trans)
{
    integer popp_[8];
    integer popq_[8];
    integer popr_[8];
    integer pops_[8];
    integer irrepa;
    int i;

    for (i = 0;i < c_getnirrep();i++)
    {
        popp_[i] = popp[i];
        popq_[i] = popq[i];
        popr_[i] = popr[i];
        pops_[i] = pops[i];
    }

    irrepa = irrepa_+1;
    FC_FUNC(sstgen,SSTGEN)(a, b, &num, popp_, popq_, popr_, pops_, scr, &irrepa, trans);
}

inline void c_symtr1(const integer irrepar_, const int* popr, const int* pops, const integer numpq,
              double* a, double* scr1, double* scr2, double* scr3)
{
    integer popr_[8];
    integer pops_[8];
    integer irrepar;
    int i;

    for (i = 0;i < c_getnirrep();i++)
    {
        popr_[i] = popr[i];
        pops_[i] = pops[i];
    }

    irrepar = irrepar_+1;
    FC_FUNC(symtr1,SYMTR1)(&irrepar, popr_, pops_, &numpq, a, scr1, scr2, scr3);
}

inline void c_symtr3(const integer irrepal_, const int* popp, const int* popq, const integer numpq, const integer numrs,
              double* a, double* scr1, double* scr2, double* scr3)
{
    integer popp_[8];
    integer popq_[8];
    integer irrepal;
    int i;

    for (i = 0;i < c_getnirrep();i++)
    {
        popp_[i] = popp[i];
        popq_[i] = popq[i];
    }

    irrepal =irrepal_+1;
    FC_FUNC(symtr3,SYMTR3)(&irrepal, popp_, popq_, &numpq, &numrs, a, scr1, scr2, scr3);
}

inline void c_symtra(const integer irrepar_, const int* popr, const int* pops, const integer numpq,
              const double* a, double* b)
{
    integer popr_[8];
    integer pops_[8];
    integer irrepar;
    int i;

    for (i = 0;i < c_getnirrep();i++)
    {
        popr_[i] = popr[i];
        pops_[i] = pops[i];
    }

    irrepar = irrepar_+1;
    FC_FUNC(symtra,SYMTRA)(&irrepar, popr_, pops_, &numpq, a, b);
}

inline void c_symtra2(const integer irrepal_, const int* popp, const int* popq, const integer numpq, const integer numrs,
               const double* a, double* b)
{
    integer popp_[8];
    integer popq_[8];
    integer irrepal;
    int i;

    for (i = 0;i < c_getnirrep();i++)
    {
        popp_[i] = popp[i];
        popq_[i] = popq[i];
    }

    irrepal = irrepal_+1;
    FC_FUNC(symtra2,SYMTRA2)(&irrepal, popp_, popq_, &numpq, &numrs, a, b);
}

inline int c_recsize(const char* rec)
{
    integer lujnk = 0;
    integer bytes;

    char rec_[] = "        ";

    int len = strlen(rec);
    strncpy(rec_, rec, (len > 8 ? 8 : len));

    FC_FUNC(getrecsafe,GETRECSAFE)(&lujnk, "JOBARC", rec_, &bytes, NULL);

#ifdef INT64
    return bytes*8;
#else
    return bytes*4;
#endif
}

inline int c_recexists(const char* rec)
{
    return (c_recsize(rec) < 0 ? 0 : 1);
}

inline void c_getrec(const char* rec, const int bytes, void* data)
{
#ifdef INT64
    integer bytes_ = bytes/8;
#else
    integer bytes_ = bytes/4;
#endif

    integer lujnk = 1;
    char rec_[] = "        ";

    int len = strlen(rec);
    strncpy(rec_, rec, (len > 8 ? 8 : len));

    FC_FUNC(getrecsafe,GETRECSAFE)(&lujnk, "JOBARC", rec_, &bytes_, data);
}

inline void c_putrec(const char* rec, const int bytes, void* data)
{
#ifdef INT64
    integer bytes_ = bytes/8;
#else
    integer bytes_ = bytes/4;
#endif

    integer lujnk = 1;
    char rec_[] = "        ";

    int len = strlen(rec);
    strncpy(rec_, rec, (len > 8 ? 8 : len));

    FC_FUNC(putrecsafe,PUTRECSAFE)(&lujnk, "JOBARC", rec_, &bytes_, data);
}

inline void c_doisytyp(integer list, integer irrep)
{
    FC_FUNC(doisytyp,DOISYTYP)(&list, &irrep);
}

#define moiosz      c_moiosz
#define moiods      c_moiods
#define updmoi      c_updmoi
#define getlst      c_getlst
#define putlst      c_putlst
#define sstgen      c_sstgen
#define symtr1      c_symtr1
#define symtr3      c_symtr3
#define symtra      c_symtra
#define symtra2     c_symtra2
#define getnorb     c_getnorb
#define getnirrep   c_getnirrep
#define getsymstuff c_getsymstuff
#define getflag     c_getflag
#define getevals    c_getevals
#define recsize     c_recsize
#define recexists   c_recexists
#define getrec      c_getrec
#define putrec      c_putrec
#define doisytyp    c_doisytyp

#define errex       FC_FUNC(errex,ERREX)

#ifdef __cplusplus
}
#endif

#ifndef __cplusplus
#undef inline
#endif

#endif
