#ifndef CLASSA_H
#define CLASSA_H

class classA
{
    public:
        classA();
        classA(int a);
        ~classA();

        void SetI(int a) { i = a; }
        int GetI() { return i; }
        void Print();
    private:
        int i;
};

#endif
