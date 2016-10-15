//
// Created by JackieChen on 16/10/15.
//

#include "MaxAndMin.h"
int* MaxAndMin::maxmin(int *a, int length) {
    int max,min;
    if(length%2==0){
        if(a[1]>a[0]){
            max=a[1];
            min=a[0];
        } else{
            max=a[0];
            min=a[1];
        }
        for(int i=1;i<length/2;i++){
            int tmpMax,tmpMin;
            if(a[2*i]>a[2*i+1]){
                tmpMax=a[2*i];
                tmpMin=a[2*i+1];
            } else{
                tmpMax=a[2*i+1];
                tmpMin=a[2*i];
            }
            if(tmpMax>max){
                max=tmpMax;
            }
            if(tmpMin<min){
                min=tmpMin;
            }


        }

    } else{
        max=a[0];
        min=a[0];
        for(int i=1;i<=length/2;i++){
            int tmpMax,tmpMin;
            if(a[2*i-1]>a[2*i]){
                tmpMax=a[2*i-1];
                tmpMin=a[2*i];
            } else{
                tmpMax=a[2*i];
                tmpMin=a[2*i-1];
            }
            if(tmpMax>max){
                max=tmpMax;
            }
            if(tmpMin<min){
                min=tmpMin;
            }

        }
    }
    int result[2]={min,max};
    return  result;



}
