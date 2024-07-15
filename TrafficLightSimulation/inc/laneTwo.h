#ifndef LANE_TWO_H
#define LANE_TWO_H
#include "lane.h"
#include <thread>
#include <chrono>
#include "constants.h"
#include "trafficSignal.h"

using namespace std::chrono;

class LaneTwo : public Lane
{
    int laneNumber = 2;
    int *counterTwo = 0;
    TrafficSignal signal;

public:
    bool start = false;
    LaneTwo();

    ~LaneTwo();

    int getCounter();

    void setCounter();

    void switchLight();
};
#endif