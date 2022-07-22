cmake_minimum_required(VERSION 3.13)
project(cpp_programing)
set(CMAKE_CXX_STANDARD 14)

add_executable(Desturctor chapter04/desturcture/Desturctor.cpp chapter04/this-pointer/Person.cpp chapter04/this-pointer/Person.h chapter04/this-pointer/PointerThis.cpp chapter04/this-pointer/PointerThis.h chapter04/this-pointer/UsefulThisPtr.cpp chapter04/this-pointer/UsefulThisPtr.h chapter04/this-pointer/SelfRef.cpp chapter04/this-pointer/SelfRef.h chapter05/copy-constructor/ClassInit.cpp)
add_executable(NameCard chapter04/exercise-04-3/NameCard.cpp)

add_executable(ObjArr chapter04/this-pointer/Person.cpp)
add_executable(PointerThis chapter04/this-pointer/PointerThis.cpp)
add_executable(UsefulThisPtr chapter04/this-pointer/UsefulThisPtr.cpp)
add_executable(SelfReg chapter04/this-pointer/SelfRef.cpp)
add_executable(ClassInit chapter05/copy-constructor/ClassInit.cpp)