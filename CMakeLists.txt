cmake_minimum_required(VERSION 3.5.1)
project(chatroom)

# include the headers into the project :
include_directories(include)

# manually add the sources using set command :
#set(SOURCES src/Chatroom.cpp Client.cpp Server.cpp User.cpp main.cpp)

# or used file(GLOB ...) for wildcard additions :
file(GLOB SOURCES "src/*.cpp")

# create the executable "testChat" :
add_executable(testChat ${SOURCES})
