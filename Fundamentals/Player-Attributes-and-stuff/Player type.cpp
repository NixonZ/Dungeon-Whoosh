#include<iostream>
#include<string.h>
#include"../../Headers/variabless.h"
using namespace std;
void playertypo()
{
    /*(i)Strength(S)
    (ii)Defense(D)
    (iii)Knowledge(IQ)
    (iv)Agility(A)
    (v)Courage(C)*/
    if (max(S[0],IQ[0])==S[0]&&min(IQ[0],A[0])==A[0])
    playertype={"Knight"};
    else if (max(IQ[0],A[0])==A[0]&&min(D[0],IQ[0])==D[0])
    playertype={"Archer"};
    else if (max(IQ[0],A[0])==IQ[0]&&min(D[0],C[0])==D[0])
    playertype={"Mage"};
    else
    playertype={"Warrior"};
}
