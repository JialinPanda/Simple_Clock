#include "NumberDisplay.h"

void NumberDisplay::set_limit(int limit)
{
    this->limit = limit;
}
boolean NumberDisplay::increase()
{
    if (value > limit - 1)
    {
        value = 0;
        return true;   
    }
    else
    {
        value++;
        return false;
    }
}
void NumberDisplay::set_value(int value)
{
    this->value = value;
}
int NumberDisplay::get_value()
{
    return value;
}
