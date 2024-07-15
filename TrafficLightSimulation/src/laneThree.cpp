#include "laneThree.h"
#include "semaphores.cpp"

#include <iostream>

LaneThree::LaneThree()
{
    counterThree = new int;
}
LaneThree::~LaneThree()
{
    delete counterThree;
}
int LaneThree::getCounter()
{
    return *counterThree;
}

void LaneThree::setCounter()
{
    *counterThree = signal.getSignal();
}

void LaneThree::switchLight()
{
    std::cout << "lane 3"<<std::endl;
    while (start)
    {
        sem_wait(&laneTwoToLaneThree);
        std::cout<<"entered lane 3"<<std::endl;
        signal.changeSignal();
        std::cout << "lane 3 is red" << std::endl;

        sem_post(&laneThreeToLaneFour);
        std::this_thread::sleep_for(30s);
    }
}