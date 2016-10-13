#include <iostream>
#include "sort/BubbleSort.h"
#include "sort/SelectionSort.h"
#include "sort/InsertSort.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    int a[] = {1,2,3,4,5,6,7,8,9,0};
    int size=sizeof(a)/ sizeof(int);
    InsertSort::sort(a,size);
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}