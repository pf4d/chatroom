#!/bin/bash 

# first, build the shared library in the build/lib/shared directory :
cp cmake_use_cases/shared_lib.txt ./CMakeLists.txt;
cd build/lib;
mkdir shared;
cd shared;
cmake ../../..;
make;
cd ../../..;
echo "::: FINISHED BUILDING SHARED LIBRARY :::";

# next, build the program that uses the shared library libchatroom.so :
cp cmake_use_cases/use_shared_libs.txt ./CMakeLists.txt;
cd build;
mkdir shared_use_case;
cd shared_use_case;
cmake ../..;
make;
./testChat;
cd ../..;



