//
// Created by JackieChen on 16/10/15.
//

#ifndef ALGORITHM_COMBSORT_H
#define ALGORITHM_COMBSORT_H


class CombSort {
private:constexpr static double comb=1.3;//You can try to adjust this number to see what happens;if too big not sorting correctly ;if too small it will converge very slowly
    static void swap(int *a,int first,int second);
public:static void sort(int *a,int length);

};


#endif //ALGORITHM_COMBSORT_H
