#include "laneFour.h"
#include "semaphores.cpp"

#include <iostream>

LaneFour::LaneFour()
{
    counterFour = new int;
}
LaneFour::~LaneFour()
{
    delete counterFour;
}
int LaneFour::getCounter()
{
    std::cout << counterFour << std::endl;
    return *counterFour;
}

void LaneFour::setCounter()
{
    std::cout << counterFour << std::endl;
    *counterFour = signal.getSignal();
}

void LaneFour::switchLight()
{
    std::cout << "lane 4" << std::endl;
    while (start)
    {
        sem_wait(&laneThreeToLaneFour);
        std::cout << "entered lane 4" << std::endl;
        signal.changeSignal();
        std::cout << "lane 4 is red" << std::endl;
        sem_post(&laneFourToLaneOne);
        std::this_thread::sleep_for(30s);
    }
}