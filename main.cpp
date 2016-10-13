#include <iostream>
#include "sort/BubbleSort.h"
#include "sort/SelectionSort.h"
#include "sort/InsertSort.h"
#include "sort/MergeSort.h"
#include "sort/HeapSort.h"


using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    int a[]={0,2,1,4,3,6,5,8,7,10,9};
    int length=sizeof(a)/ sizeof(a[0]);
    HeapSort::sort(a,length-1);
    for(int i=0;i<length;i++){
        cout<<a[i]<<endl;
    }





    return 0;
}