Simple example how to compile a simple dummy macro with two dependent classes in ROOT and C++.

`macro.C` running `classA` and `classB` (dependent on `classA`)

### ROOT
Either step by step:
```
root -l
.L classA.cxx+
.L classB.cxx+
.X macro.C
```

or all together as:
```
root -l classA.cxx+ classB.cxx+ macro.C
```

Also possible is to compile the classes beforehand which will create ``classA_cxx.so`` and ``classB_cxx.so``, which can be then used to run the macro without the need for recompilation.

```
root -l classA.cxx+ classB.cxx+
root -l classA_cxx.so classB_cxx.so macro.C
```

Another alternative is to make a wrapper macro `macroWithComp.C` which first loads (and compiles) both classes and then executes `macro.C`.

```
void macroWithComp()
{
    gROOT->LoadMacro("classA.cxx+");
    gROOT->LoadMacro("classB.cxx+");
    gROOT->Macro("macro.C");
}
```

NB: Please note, that `macro.C` is only interpreted and cannot be (easily) compiled with ROOT and therefore it serves only as a steering macro, where only simple task should be executed (e.g. setting task parameters). All the heavy-lifting should be done within the compiled code/classes to ensure the overall correctness.

### C++ (on OSX)
```
g++ classA.cxx classB.cxx macro.cxx -o macro.exe
./macro.exe
```
