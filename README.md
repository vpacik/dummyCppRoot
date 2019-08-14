Simple example how to compile a simple dummy macro with two dependent classes in ROOT and C++.

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

Also possible is to compile the classes beforehend which will create ``classA_cxx.so`` and ``classB_cxx.so``, which can be then used to run the macro without the need for recompilation.

```
root -l classA_cxx.so classB_cxx.so macro.C
```

### C++ (on OSX)
```
g++ classA.cxx classB.cxx macro.cxx -o macro.exe
./macro.exe
```


