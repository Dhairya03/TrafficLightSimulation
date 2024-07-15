#include "lane.h"
#include <iostream>

// std::binary_semaphore laneOneToLaneTwo{0};
// std::binary_semaphore laneTwoToLaneThree{0};
// std::binary_semaphore laneThreeToLaneFour{0};
// std::binary_semaphore laneFourToLaneOne{0};
Lane::Lane()
{
    // sem_init(&laneOneToLaneTwo, 0, 0);
    // sem_init(&laneTwoToLaneThree, 0, 0);
    // sem_init(&laneThreeToLaneFour, 0, 0);
    // sem_init(&laneFourToLaneOne, 0, 1);
}



Lane::~Lane()
{
    // sem_destroy(&laneOneToLaneTwo);
    // sem_destroy(&laneTwoToLaneThree);
    // sem_destroy(&laneThreeToLaneFour);
    // sem_destroy(&laneFourToLaneOne);
}