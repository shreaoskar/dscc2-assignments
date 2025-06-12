#include "test.h"
#include <stdio.h>

int main(){
    node hello = {.odd = 3, .even = 4};
    printf("odd = %d, even = %d\n", hello.odd, hello.even);
    return 0;
}
