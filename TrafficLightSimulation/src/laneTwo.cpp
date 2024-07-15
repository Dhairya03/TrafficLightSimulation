#include "laneTwo.h"
#include <iostream>
#include "semaphores.cpp"

LaneTwo::LaneTwo()
{
    counterTwo = new int;
}
LaneTwo::~LaneTwo()
{
    delete counterTwo;
}
int LaneTwo::getCounter()
{
    return *counterTwo;
}
void LaneTwo::setCounter()
{
    *counterTwo = signal.getSignal();
}

void LaneTwo::switchLight()
{
    std::cout << "lane 2" << std::endl;

    while (start)
    {

        sem_wait(&laneOneToLaneTwo);
        std::cout << "entered lane 2" << std::endl;
        signal.changeSignal();
        std::cout << "lane2 is red" << std::endl;

        sem_post(&laneTwoToLaneThree);
        std::this_thread::sleep_for(30s);
    }
}