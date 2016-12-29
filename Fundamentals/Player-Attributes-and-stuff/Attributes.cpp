#include<iostream>
#include "../../Headers/variabless.h"
using namespace std;
/*(i)Strength(S)
    (ii)Defense(D)
    (iii)Knowledge(IQ)
    (iv)Agility(A)
    (v)Courage(C)*/

void attributes()
{
    extern int S[7],D[7],IQ[7],A[7],C[7];
    /* player-0
       wolf-1
       ogre-2
       swordsman(enemy)-3
       knight(enemy)-4
       Paladin(enemy)-5
       Dragon-6*/
       S[0]=4;D[0]=4;IQ[0]=4;A[0]=4;C[0]=4;
       S[1]=5,D[1]=5,IQ[1]=5,A[1]=5,C[1]=5;
       /*S[2]=,D[2]=,IQ[2]=,A[2]=,C[2]=10;
       S[3]=,D[3]=,IQ[3]=,A[3]=,C[3]=;
       S[4]=,D[4]=,IQ[4]=,A[4]=,C[4]=;
       S[5]=,D[5]=,IQ[5]=,A[5]=,C[5]=;
       S[6]=,D[6]=,IQ[6]=,A[6]=,C[6]=;*/
}
