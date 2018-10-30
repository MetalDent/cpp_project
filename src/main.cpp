#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
#include<boost/algorithm/string.hpp>
#include "../include/classes.h"
#include "../include/functions.h"

using namespace std;

int main()
{
    Demo D(33);
    cout<<D.showData()<<endl;
    
    int shit = fooFun();
    cout<<shit;

    return 0;
}
