cmake_minimum_required(VERSION 3.4)
project(Algorithm)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp sort/BubbleSort.cpp sort/BubbleSort.h sort/SelectionSort.cpp sort/SelectionSort.h sort/InsertSort.cpp sort/InsertSort.h sort/HeapSort.cpp sort/HeapSort.h sort/MergeSort.cpp sort/MergeSort.h sort/QuickSort.cpp sort/QuickSort.h sort/CountSort.cpp sort/CountSort.h sort/BucketSort.cpp sort/BucketSort.h sort/RadixSort.cpp sort/RadixSort.h sort/PancakeSort.cpp sort/PancakeSort.h)
add_executable(Algorithm ${SOURCE_FILES})