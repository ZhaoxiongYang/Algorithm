#include <iostream>
#include "sort/BubbleSort.h"
#include "sort/SelectionSort.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    int a[9] = {9,8,7,6,5,4,3,2,1};
    int size=sizeof(a)/ sizeof(int);
    SelectionSort::sort(a,size);
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}