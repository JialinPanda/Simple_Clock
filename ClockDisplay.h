#ifndef _CLOCKDISPLAY_H_
#define _CLOCKDISPLAY_H_
#include "NumberDisplay.h"
#include <iostream>
using namespace std;

class ClockDisplay
{
private:
    NumberDisplay hours;
    NumberDisplay minites;

public:
    void start(int hour,int minite);
};
#endif