//
// Created by JackieChen on 16/10/13.
//

#include "QuickSort.h"
int QuickSort::partition(int *a, int p, int r) {
    int tmp=a[r],sw;
    int par=p-1;
    for(int i=p;i<r;i++){
        if(a[i]<=tmp){
            par++;
            sw=a[i];
            a[i]=a[par];
            a[par]=sw;
        }
    }
    sw=a[r];
    a[r]=a[par+1];
    a[par+1]=sw;
    return par+1;


}
void QuickSort::sort(int *a, int p, int r) {
    if(p<r){
        int i=partition(a,p,r);
        sort(a,p,i-1);
        sort(a,i+1,r);
    }
}
