#ifndef CLASSB_H
#define CLASSB_H

#include "classA.h"

class classB
{
    public:
        classB();
        classB(int a);
        ~classB();

        void SetI(int a) { i = a; }
        int GetI() { return i; }
        void Print();
    private:
        int i;
        classA cA;
};

#endif
