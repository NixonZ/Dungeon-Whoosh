#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int battle(int a1)
{
    int damage;
    damage=((S[0]+C[0])+(level+rand(3))*(hitp+magep))/(10*(defp+D[a1]-level));
    wear--;
    return(damage);
}
