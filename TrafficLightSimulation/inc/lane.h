#ifndef LANE_H
#define LANE_H

#include "constants.h"
// #include <semaphore>
#include <semaphore.h>

class Lane
{

public:
    Lane();
    
    int getCounter();
    void setCounter();
    void switchLight();
    ~Lane();
};

#endif