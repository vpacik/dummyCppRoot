/* need to run

root -l
.L classA.cxx+
.L classB.cxx+
.X macro.C

*/

void macro()
{
    printf("Inside macro\n");

    classA a = classA();
    a.Print();
    a = classA(21);
    a.Print();

    classB b = classB();
    b.Print();

    printf("Exiting macro\n");
}
