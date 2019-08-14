void macroWithComp()
{
    gROOT->LoadMacro("classA.cxx+");
    gROOT->LoadMacro("classB.cxx+");
    gROOT->Macro("macro.C");
}
