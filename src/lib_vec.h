#ifndef __SITUS_LIB_VEC
#define __SITUS_LIB_VEC

#ifdef __cplusplus
extern "C" {
#endif

/* header file for lib_vec.c */
void zero_vect(double *, unsigned long);
void do_vect(double **, unsigned long);
void zero_mat(double **, unsigned long, unsigned long);
void do_mat(double ***, unsigned long, unsigned long);
void cp_vect(double **, double **, unsigned long);
void cp_vect_destroy(double **, double **, unsigned long);
void add_scaled_vect(double *, double *, double, unsigned long);
void freeVectAndZero(double **);

#ifdef __cplusplus
}
#endif

#endif
