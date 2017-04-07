#include<iostream>
#include "../../Headers/variabless.h"
#include "../../Headers/pointstuff.h"
using namespace std;
void expe1()
{
    if(level>=5)
    {
        level=5;
    }
    else if(expe==level*10+10)
    {
        expe=0;
        level++;
        cout<<"Your level increased congratulations\n";
        health();
    }
}
