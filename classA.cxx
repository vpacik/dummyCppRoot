#include <stdio.h>
#include "classA.h"

classA::classA()
{
    i = 2;
}

classA::classA(int a)
{
    i = a;
}

classA::~classA()
{}

void classA::Print()
{
    printf("classA::i : %d\n", i);
}
