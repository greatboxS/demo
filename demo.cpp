#include <iostream>
#include "configuration.h"
#include "lib.h"

#define A 10

void function1()
{
    int * temp = new int[10];
    temp[1] = 10;
}

int main()
{
    const int a = 20;
    printf("macro A = %u, &a =  %u\n", A, &a);

    custom_function();
    function1();

    return 1;
}


