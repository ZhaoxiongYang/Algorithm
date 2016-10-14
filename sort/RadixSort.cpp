//
// Created by JackieChen on 16/10/13.
//

#include "RadixSort.h"
void RadixSort::sort(int *a, int length,int d) {
    int digit[length];
    int b[length];
    int count[10];
    for(int i=0;i<d;i++){
        for(int j=0;j<10;j++){
            count[j]=0;
        }
        for(int j=0;j<length;j++){
            digit[j]=(int)(a[j]/pow((double)10,(double)i))%10;
            count[digit[j]]++;
        }
        for(int j=0;j<9;j++){
            count[j+1]+=count[j];
        }
        for(int j=length-1;j>=0;j--){
            b[--count[digit[j]]]=a[j];//a little change comparing to counting sort
        }
        for(int j=length-1;j>=0;j--){
            a[j]=b[j];
        }
    }

}
