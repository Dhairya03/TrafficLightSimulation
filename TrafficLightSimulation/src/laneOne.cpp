#include "laneOne.h"
// #include "semaphores.h"
#include <iostream>

LaneOne::LaneOne()
{
    counterOne = new int;
}
LaneOne::~LaneOne()
{
    delete counterOne;
}
int LaneOne::getCounter()
{
    return *counterOne;
}

void LaneOne::setCounter()
{
    *counterOne = signal.getSignal();
}

void LaneOne::switchLight()
{
    std::cout << "lane 1" << std::endl;
    while (start)
    {
        sem_wait(&laneFourToLaneOne);
        std::cout << "entered lane 1" << std::endl;
        signal.changeSignal();
        std::cout << "Lane 1 is red" << std::endl;
        sem_post(&laneOneToLaneTwo);
        std::this_thread::sleep_for(30s);
    }
}