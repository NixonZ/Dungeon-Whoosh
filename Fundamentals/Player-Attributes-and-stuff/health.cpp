#include<iostream>
#include "../../Headers/variabless.h"
using namespace std;
void health()
{
    /* player-0
       wolf-1
       ogre-2
       warrior(enemy)-3
       knight(enemy)-4
       Paladin(enemy)-5
       Dragon-6*/

    hp[0]=20+level*20;
    hp[1]=20+level*5;
    hp[2]=35+level*5;
    hp[3]=40+level*5;
    hp[4]=50+level*5;
    hp[5]=75+level*5;
    hp[6]=100+level*5;
}
