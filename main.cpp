#include <iostream>
#include "sort/BubbleSort.h"
#include "sort/SelectionSort.h"
#include "sort/InsertSort.h"
#include "sort/MergeSort.h"
#include "sort/HeapSort.h"
#include "sort/QuickSort.h"


using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    int a[]={1,2,3,4,5,-1,-2,-3,-4,-5};
    int length=sizeof(a)/ sizeof(a[0]);
    QuickSort::sort(a,0,length-1);
    for(int i=0;i<length;i++){
        cout<<a[i]<<endl;
    }





    return 0;
}