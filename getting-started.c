/* the first listing */
// gcc -Wall getting-started.c -o getting-started
#include "stdio.h"
#include "stdlib.h"

int main(void){
    double A[5] = {9.0, 2.9, 3.E+25, .002, 1.1};
    for (size_t i=0; i<5; ++i) {
        printf("%zu: %g squared=%g\n", i, A[i], A[i]*A[i]);
    }
    return EXIT_SUCCESS;
}
