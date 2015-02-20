/*********************************************************************
*                           L I B _ CVQ                              *
**********************************************************************
* Library is part of the Situs package URL: situs.biomachina.org     *
* (c) John Heumann and Willy Wriggers, 2015                          *
**********************************************************************
*                                                                    *
* NN / Codebook storage allocation for qpdb/qvol programs only       * 
*                                                                    *
**********************************************************************
* See legal statement for terms of distribution                      *
*********************************************************************/

#include "situs.h"
#include "lib_err.h"
#include "lib_cvq.h"

/*====================================================================*/
void *alloc_qvect(unsigned int n, size_t elem_size)
{
  void *ptr;

  ptr = calloc(n, elem_size);
  if (!ptr) {
    error_memory_allocation(99901, "lib_cvq"); 
  }

  return ptr;
}

/*====================================================================*/
void **alloc_qmat(unsigned int m, unsigned int n, size_t elem_size)
{
  unsigned int i;
  void **ptr;

  ptr = (void **)malloc(m * sizeof(void *));
  if (!ptr) {
    error_memory_allocation(99902, "lib_cvq");
  }
  ptr[0] = calloc(m * n, elem_size);
  if (!ptr[0]) {
    error_memory_allocation(99903, "lib_cvq");
  }
  for (i = 1; i < m; i++) 
    ptr[i] = ptr[i - 1] + n * elem_size;

  return ptr;
}

/*====================================================================*/
void free_qvect_and_zero_ptr(void **ptr)
{
  if (*ptr) {
    free(*ptr);
    *ptr = 0;
  }
}

/*====================================================================*/
void free_qmat_and_zero_ptr(void ***ptr)
{
  if (*ptr) {
    if (**ptr)
      free(**ptr);
    free(*ptr);
    *ptr = 0;
  }
}

