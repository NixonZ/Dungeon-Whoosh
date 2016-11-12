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
char *playertype="Bare hand";
char *name;
bag playerbag;

using namespace std;

int main()
{
  playerbag.potion_static=0;
  playerbag.weapon_static1="Bare hand";
  playerbag.weapon_static2="Bare hand";
  playerbag.weapon_static3="Bare hand";
  health();
  S[0]=4;D[0]=4;IQ[0]=4;A[0]=4;C[0]=4;
  cout<<"welcome adventurer\n";
  gets(name);
  name="name";
  ask();
  playertypo();
  cout<<"Your race is ";
  puts(playertype);
  cout<<"You health is "<<hp[0]<<endl;
  cout<<"Strength="<<S[0]<<endl<<"Knowledge="<<IQ[0]<<endl<<"Agility="<<A[0]<<endl<<"Defense="<<D[0]<<endl<<"Courage="<<C[0];
  cout<<"\nhow much $$ u want?\n";
  cin>>money;
  armoury();
  cout<<endl<<battle(1)<<endl;
  bagf();
  }
