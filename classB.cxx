#include <stdio.h>

#include "classB.h"
#include "classA.h"

classB::classB()
{
    i = -23;
    cA = classA();
}

classB::classB(int a)
{
    i = a;
}

classB::~classB()
{}

void classB::Print()
{
    printf("classB::i : %d\n", i);
    cA.Print();
}
