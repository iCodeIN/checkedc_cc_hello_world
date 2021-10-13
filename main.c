// Compile command for non-Checked C compilers:
// cc main.c -DCHECKEDC_CC

#include "/opt/github/procedural/checkedc_cc/checkedc_cc.h"
#include "/opt/github/procedural/checkedc_cc_malloc_by_count/checkedc_cc_malloc_by_count.h"
#include <stdlib.h>

cc_checked int main(int argc, cc_nt_array_ptr(char) argv cc_checked[] cc_opt(:) cc_count cc_arg(argc)) {
  cc_array_ptr(int) arr cc_opt(:) cc_count cc_arg(5) = NULL;
  cc_calloc_by_count(int, arr, calloc, 6); // This must throw out-of-bounds memory access compile time error!
  return 0;
}
