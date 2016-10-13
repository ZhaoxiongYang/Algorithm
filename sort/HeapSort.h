//
// Created by JackieChen on 16/10/13.
//

#ifndef ALGORITHM_HEAPSORT_H
#define ALGORITHM_HEAPSORT_H

#define PARENT(i) (i>>1)
#define LEFT(i) (i<<1)
#define RIGHT(i) ((i<<1)+1)


class HeapSort {
private:static void MAX_HEAPIFY(int *a,int i,int size);
        static void BUILD_MAX_HEAP(int *a,int size);
public:static void sort(int *a,int length);


};


#endif //ALGORITHM_HEAPSORT_H
