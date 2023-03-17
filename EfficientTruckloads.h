#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H
#include <unordered_map>

class EfficientTruckloads{
    private:

    public:
        std::unordered_map<int, int> memo;
        EfficientTruckloads();
        int numTrucks(int numCrates, int loadSize);

};

#endif
