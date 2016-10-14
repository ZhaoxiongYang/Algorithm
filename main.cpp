#include <iostream>
#include "sort/BubbleSort.h"
#include "sort/SelectionSort.h"
#include "sort/InsertSort.h"
#include "sort/MergeSort.h"
#include "sort/HeapSort.h"
#include "sort/QuickSort.h"
#include "sort/CountSort.h"
#include "sort/RadixSort.h"


using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    int a[]={3,5,1,8,4,3,2,88,99,12,101,32,21,999,101,55,44,123,321,654,456};
    int length=sizeof(a)/ sizeof(a[0]);
    RadixSort::sort(a,length,3);
    for(int i=0;i<length;i++){
        cout<<a[i]<<endl;
    }





    return 0;
}