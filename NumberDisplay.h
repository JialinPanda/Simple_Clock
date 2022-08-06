#ifndef _NUMBERDISPLAY_H_
#define _NUMBERDISPLAY_H_
#include <windows.h>
class NumberDisplay
{
private:
    int limit;
    int value;

public:
    void set_limit(int limit);
    boolean increase();
    void set_value(int value);
    int get_value();
};
#endif