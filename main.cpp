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

#include "statistics/SelectIth.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    int a[]={1,3,5,7,8,9,2,4,6,8,10,-2,-4,-6,-8,-10};
    int length=sizeof(a)/ sizeof(a[0]);
    int b[length];
    for(int j=0;j<length;j++){
        b[j]=a[j];
    }


    for(int i=1;i<=length;i++) {
        int c[length];
        for(int j=0;j<length;j++){
            c[j]=b[j];
        }

        int result = SelectIth::select(c, 0,length - 1, i);
        cout<<result<<endl;
    }







//    DoubleLinkedList doubleLinkedList(a,length);
//    cout<<DoubleLinkedList::search(doubleLinkedList,10);









    return 0;
}