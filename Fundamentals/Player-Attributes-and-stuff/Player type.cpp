#include<iostream>
using namespace std;
void playertype()
{
    /*(i)Strength(S)
    (ii)Defense(D)
    (iii)Knowledge(IQ)
    (iv)Agility(A)
    (v)Courage(C)*/
    char *playertype;
    if (max(S,D,IQ,A,C)==S&&min(S,D,IQ,A,C)==A)
    playertype={"Knight"};
    else if (max(S,D,IQ,A,C)==A&&min(S,D,IQ,A,C)==S)
    playertype={"Archer"};
    else if (max(S,D,IQ,A,C)==IQ&&min(S,D,IQ,A,C)==D)
    playertype={"Mage"};
    else
    playertype={"Warrior"};
}
