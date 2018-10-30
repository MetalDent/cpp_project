#include "../include/classes.h"
#include <iostream>
#include<fstream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
#include<boost/algorithm/string.hpp>

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
