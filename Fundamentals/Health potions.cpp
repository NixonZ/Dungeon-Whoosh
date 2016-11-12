#include<iostream>
#include"../Headers/pointstuff.h"
#include"../Headers/variabless.h"
using namespace std;
void potions()
{
    int potionmax=10+level*5;
    if(healthy>=hp[0]-potionmax)
    healthy=hp[0];
    else
        healthy+=potionmax;

}
