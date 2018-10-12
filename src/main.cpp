#include<iostream>
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