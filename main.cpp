#include<iostream>
#include<stdio.h>
#include<string.h>
#include "Headers/pointstuff.h"
#include "Headers/variabless.h"
int S[7],D[7],IQ[7],A[7],C[7];
int hitp,defp,magep=0,wear=20;
char *playerhand;
int money=100;
int expe=0,level=0;
int hp[7],healthy;
char *playertype;
char *name;

using namespace std;

int main()
{
  health();
  S[0]=4;D[0]=4;IQ[0]=4;A[0]=4;C[0]=4;
  cout<<"welcome adventurer\n";
  cout<<"your name is name\n";
  name="name";
  ask();
  //dae;
  playertypo();
  cout<<"Your race is ";
  puts(playertype);
  cout<<"You health is "<<hp[0]<<endl;
  cout<<S[0]<<endl<<IQ[0]<<endl<<A[0]<<endl<<D[0]<<endl<<C[0];
  cout<<"how much $$ u want?";
  cin>>money;
  armoury();
  cout<<battle(1);
  }