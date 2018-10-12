#include "../include/classes.h"
#include <iostream>

using namespace std;

// Demo classes members
Demo::Demo(int n)
{
    i = n;
}

int Demo::showData()
{
    return i;
}