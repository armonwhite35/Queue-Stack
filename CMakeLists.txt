cmake_minimum_required(VERSION 3.15)
project(InheritedLists)

set(CMAKE_CXX_STANDARD 11)

add_executable(InheritedLists InheritedLists.cpp LinkedList.cpp LinkedList.h Data.cpp Data.h Queue.cpp Queue.h Stack.cpp Stack.h ramenRatings.csv Stacked.txt Queued.txt)