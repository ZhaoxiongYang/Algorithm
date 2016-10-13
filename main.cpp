#include <iostream>
#include "sort/BubbleSort.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    int a[9] = {3, 9, 5, 3, 10, 6, 3, 3, 3};
    int size=sizeof(a)/ sizeof(int);
    BubbleSort::sort(a,size);
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}