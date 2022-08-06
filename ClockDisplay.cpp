#include "ClockDisplay.h"

void ClockDisplay::start(int hour, int minite)
{
    string time = "00:00";
    hours.set_limit(23);
    hours.set_value(hour);
    minites.set_limit(59);
    minites.set_value(minite);
    while (1)
    {
        Sleep(1000);
        if (minites.increase())
        {
            hours.increase();
        }
        time[0] = hours.get_value() / 10 + '0';
        time[1] = hours.get_value() % 10 + '0';
        time[3] = minites.get_value() / 10 + '0';
        time[4] = minites.get_value() % 10 + '0';
        cout << time << "\r";
    }
}