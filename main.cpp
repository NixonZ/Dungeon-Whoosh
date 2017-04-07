#include<iostream>
#include<stdio.h>
#include<string.h>
#include "Headers/pointstuff.h"
#include "Headers/variabless.h"
int hitp,defp,magep=0,wear=20;
char *playerhand;
int money=100;
int expe=0,level=0;
int hp[7],healthy;
char *playertype;
char name[100];
bag playerbag;
int S[7],D[7],IQ[7],A[7],C[7];

using namespace std;

int main()
{
  attributes();
  playerbag.potion_static=0;
  playerbag.weapon_static1="Bare hand";
  playerbag.weapon_static2="Bare hand";
  playerbag.weapon_static3="Bare hand";
  health();
  healthy=hp[0];
  starting();
  cout<<"Enter your name\n";
  cin.getline(name,100);
  playertypo();
  cout<<"Your race is ";
  puts(playertype);
  cout<<"You health is "<<healthy<<endl;
  cout<<"Strength="<<S[0]<<endl
      <<"Knowledge="<<IQ[0]<<endl
      <<"Agility="<<A[0]<<endl
      <<"Defense="<<D[0]<<endl
      <<"Courage="<<C[0]<<endl;
  tutorial();
}
