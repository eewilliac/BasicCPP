@echo off
rmdir /s/q ..\build
mkdir ..\build
pushd ..\build
cl /EHsc /Zi /Fe:BasicProgram.exe ../source/BasicCPP.cpp
popd