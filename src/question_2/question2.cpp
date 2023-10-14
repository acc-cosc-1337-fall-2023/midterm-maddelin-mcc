#include "question2.h"

bool test_config()
{
    return true;
}

int roll_die()
{
    int res = 0;
    while(res > 6 || res < 1)//verify result is in correct range of a normal die
    {
        res = rand();
        res = res%6 + 1; // forces number to be between 1 and 6
    }
    return res;
}