#ifndef __SITUS_LIB_CVQ
#define __SITUS_LIB_CVQ

/********************************************************************
 * NN / Codebook storage allocation for qpdb/qvol programs only     *
 ********************************************************************/

#define SMAXS 100000  /* # of neural gas iteration steps            */
#define MAXCYCLE 8    /* max # of cycles in cluster analysis        */
#define NNMIN 2       /* minimum possible # of codebook vectors     */
#define MAXPDB 100000 /* maximum number of lines in pdb file        */

typedef double Rseq3[3];

#ifdef __cplusplus
extern "C" {
#endif

void *alloc_qvect(unsigned int n, size_t elem_size);
void **alloc_qmat(unsigned int m, unsigned int n, size_t elem_size);
void free_qvect_and_zero_ptr(void **ptr);
void free_qmat_and_zero_ptr(void ***ptr);

#ifdef __cplusplus
}
#endif

#endif
