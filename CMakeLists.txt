cmake_minimum_required(VERSION 3.13)
project(cpp_programing)
set(CMAKE_CXX_STANDARD 14)

add_executable(Desturctor chapter04/desturcture/Desturctor.cpp chapter04/this-pointer/Person.cpp chapter04/this-pointer/Person.h)
add_executable(NameCard chapter04/exercise-04-3/NameCard.cpp)

add_executable(ObjArr chapter04/this-pointer/Person.cpp)