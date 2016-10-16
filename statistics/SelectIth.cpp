//
// Created by JackieChen on 16/10/16.
//

#include "SelectIth.h"
int SelectIth::partition(int *a, int p, int r) {
    int left=p-1;
    int val=a[r];
    for(int i=p;i<r;i++){
        if(a[i]<val){
            left++;
            if(i!=left){
                a[i]^=a[left];
                a[left]^=a[i];
                a[i]^=a[left];
            }
        }

    }
    left++;
    if(left!=r){
        a[left]^=a[r];
        a[r]^=a[left];
        a[left]^=a[r];
    }
    return left;



}
int SelectIth::select(int *a, int p,int r, int position) {
    if(p==r){
        return a[p];
    }
    int i=partition(a,p,r);
    int k=i-p+1;
    if(k==position)
        return a[i];
    else if(k<position){
        return select(a,i+1,r,position-k);
    } else{
        return select(a,p,i-1,position);
    }

}
