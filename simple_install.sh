#!/bin/bash 
cp cmake_use_cases/simple_program.txt ./CMakeLists.txt;
cd build;
mkdir simple_use_case;
cd simple_use_case;
cmake ../..;
make;
./testChat;
cd ../..;
