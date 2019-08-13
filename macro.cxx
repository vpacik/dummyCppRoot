/* need to run

g++ classA.cxx classB.cxx macro.cxx -o macro.exe
./macro.exe

*/

#include <stdio.h>
#include "classA.h"
#include "classB.h"

int main()
{
    printf("Inside macro\n");

    classA a = classA();
    a.Print();
    a = classA(21);
    a.Print();

    classB b = classB();
    b.Print();

    printf("Exiting macro\n");

    return 0;
}
