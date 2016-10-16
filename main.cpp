#include <iostream>
#include "sort/BubbleSort.h"
#include "sort/SelectionSort.h"
#include "sort/InsertSort.h"
#include "sort/MergeSort.h"
#include "sort/HeapSort.h"
#include "sort/QuickSort.h"
#include "sort/CountSort.h"
#include "sort/RadixSort.h"
#include "sort/PigeonholeSort.h"
#include "statistics/MaxAndMin.h"
#include "statistics/Max.h"
#include "statistics/Min.h"
#include "datastructure/Queue.h"
#include "sort/PancakeSort.h"
#include "sort/CombSort.h"


using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    int a[]={1,10,3,8,5,6,7,4,9,2,-100,1000,999,888,-66};
    int length=sizeof(a)/ sizeof(a[0]);
    CombSort::sort(a,length);


    for(int i=0;i<length;i++){
        cout<<a[i]<<endl;
    }








    return 0;
}