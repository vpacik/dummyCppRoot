Simple example how to compile a simple dummy macro with two dependent classes in ROOT and C++.

### ROOT
```
root -l
.L classA.cxx+
.L classB.cxx+
.X macro.C
```

### C++ (on OSX)
```
g++ classA.cxx classB.cxx macro.cxx -o macro.exe
./macro.exe
```


