
#define _FILE_OFFSET_BITS 64
#include <unistd.h>
#include <fcntl.h>
#include <resolv.h>
#include <stdio.h>

int foo() {
    printf("foo:Your lucky numbers are %p and %p\n", fcntl, res_search);
    return 0;
}
