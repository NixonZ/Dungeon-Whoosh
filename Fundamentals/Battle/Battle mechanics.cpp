#include<iostream>
#include<math.h>
#include<stdlib.h>
#include "../../Headers/variabless.h"
#include "../../Headers/pointstuff.h"
extern int S[7],D[7],IQ[7],A[7],C[7];
using namespace std;
float damage(int a1)
{
    float d1;
    d1=((S[0]+C[0])+(level+1+rand()%3)*(hitp+magep))/(10*(defp+D[a1]-level));
    wear--;
    expe1();
    return d1;
}
void battle()
{
    cout<<endl;
}

