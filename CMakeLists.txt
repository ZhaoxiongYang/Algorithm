cmake_minimum_required(VERSION 3.4)
project(Algorithm)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp sort/BubbleSort.cpp sort/BubbleSort.h sort/SelectionSort.cpp sort/SelectionSort.h sort/InsertSort.cpp sort/InsertSort.h sort/HeapSort.cpp sort/HeapSort.h sort/MergeSort.cpp sort/MergeSort.h)
add_executable(Algorithm ${SOURCE_FILES})