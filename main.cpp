#include <iostream>
#include "sort/BubbleSort.h"
#include "sort/SelectionSort.h"
#include "sort/InsertSort.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    int a[] = {9,8,7,6,5,4,3,2,1,0};
    int size=sizeof(a)/ sizeof(int);
    InsertSort::sort(a,size);
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}