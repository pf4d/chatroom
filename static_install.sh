#!/bin/bash 

# first, build the static library in the build/lib/static directory :
cp cmake_use_cases/static_lib.txt ./CMakeLists.txt;
cd build/lib;
mkdir static;
cd static;
cmake ../../..;
make;
cd ../../..;
echo "::: FINISHED BUILDING STATIC LIBRARY :::";

# next, build the program that uses the static library libchatroom.a :
cp cmake_use_cases/use_static_libs.txt ./CMakeLists.txt;
cd build;
mkdir static_use_case;
cd static_use_case;
cmake ../..;
make;
./testChat;
cd ../..;



