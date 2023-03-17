#include "EfficientTruckloads.h"

EfficientTruckloads::EfficientTruckloads(){}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize){   
   if(numCrates<=loadSize){
        return 1;
    }
    if (memo.find(numCrates) != memo.end())
    {
        return memo[numCrates];
    }
    
    else if(numCrates%2==0){
        return numTrucks(numCrates/2,loadSize)+numTrucks(numCrates/2,loadSize);
    }

    return numTrucks(numCrates/2,loadSize)+numTrucks(1+numCrates/2,loadSize);
};

