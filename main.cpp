#include <iostream>
#include "sort/BubbleSort.h"
#include "sort/SelectionSort.h"
#include "sort/InsertSort.h"
#include "sort/MergeSort.h"
#include "sort/HeapSort.h"
#include "sort/QuickSort.h"
#include "sort/CountSort.h"


using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    int a[]={9,8,7,6,5,4,3,2,1,1,2,3,4,5,6};
    int length=sizeof(a)/ sizeof(a[0]);
    CountSort::sort(a,length,100);
    for(int i=0;i<length;i++){
        cout<<a[i]<<endl;
    }





    return 0;
}