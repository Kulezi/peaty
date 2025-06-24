#include <stdio.h>
#include <stdlib.h>
namespace PACE2019 {
void fail(const char* msg) {
    fprintf(stderr, "%s\n", msg);
    exit(1);
}
}


