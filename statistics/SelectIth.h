//
// Created by JackieChen on 16/10/16.
//

#ifndef ALGORITHM_SELECTITH_H
#define ALGORITHM_SELECTITH_H

//Generally we can first sort the array then the i-th position is the result,this consumes O(nlgn)
//Here we give a solution whose E(O(time))=O(n)
class SelectIth {
private:static int partition(int *a,int p,int r);
public: static int select(int *a,int p,int r,int position);

};


#endif //ALGORITHM_SELECTITH_H
