#include "ClockDisplay.h"
#include "NumberDisplay.h"

int main()
{
    int hour, minite;
    do
    {
        cout << "Set HOUR (0-23): ";
        cin >> hour;
    } while (!(hour >= 0 && hour <= 23));
    do
    {
        cout << "Set MINITE (0-59): ";
        cin >> minite;
    } while (!(minite >= 0 && minite <= 59));
    ClockDisplay clock;
    clock.start(hour, minite);
    return 0;
}
