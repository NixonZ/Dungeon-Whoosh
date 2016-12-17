#include<iostream>
#include<math.h>
#include<stdlib.h>
#include "../../Headers/variabless.h"
#include "../../Headers/pointstuff.h"
using namespace std;
float damage(int a1)
{
    float damage;
    damage=((S[0]+C[0])+(level+1+rand()%3)*(hitp+magep))/(10*(defp+D[a1]-level));
    wear--;
    expe1();
    return damage;
}
battle()
{

}

