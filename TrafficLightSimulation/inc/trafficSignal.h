#ifndef TRAFFIC_SIGNAL_H
#define TRAFFIC_SIGNAL_H

#include <thread>
#include <chrono>
#include <mutex>
#include <iostream>
using namespace std::chrono;

class TrafficSignal
{
    int *signal = 0;

public:
    TrafficSignal()
    {
        signal = new int;
    }
    ~TrafficSignal()
    {
        delete signal;
    }
    int getSignal()
    {
        std::cout << signal << std::endl;
        return *signal;
    }

    void setSignal(int sign)
    {
        // std::cout << "in signal set" << std::endl;
        std::cout << signal << std::endl;
        *signal = sign;
        // std::cout << "out signal set" << std::endl;
    }

    void changeSignal()
    {
        // std::cout<<"in changeSignal function"<<std::endl;

        setSignal(1);
        // std::cout << "Lane 4 is green" << std::endl;
        std::this_thread::sleep_for(10s);
        setSignal(0);
        // std::cout << "Lane 4 is red" << std::endl;
    }
};

#endif