#include "EfficientTruckloads.h"

EfficientTruckloads::EfficientTruckloads() {}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize)
{
    if (numCrates <= loadSize)
    {
        return 1;
    }
    if (memo.find(numCrates) != memo.end())
    {
        return memo[numCrates];
    }

    int trucks;

    if (numCrates % 2 == 0)
    {
        trucks = numTrucks(numCrates / 2, loadSize) + numTrucks(numCrates / 2, loadSize);
    }
    else
    {
        trucks = numTrucks(numCrates / 2, loadSize) + numTrucks(1 + numCrates / 2, loadSize);
    }
    memo[numCrates] = trucks;
    return trucks;
};
