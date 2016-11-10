#include<iostream>
#include "../../Headers/variabless.h"

using namespace std;

void hospital(int why){
  if(why==0){
    cout<<"\nWelcome to Whoosh Center!\nWe have restored your health to full.\nWe hope to see you again!";
  }
  else if(why==1){
    cout<<"\nYou were defeated. Your health has been fully restored.\nBetter luck next time!";
  }
  healthy=hp[0];
  cout<<"Would you like to buy a potion(T/F)\n";
  char x2;
  cin>>x2;
  if(x2=='T'||x2=='t')
  {
      if(playerbag.potion_static<5)
      {
          cout<<"You have bought a potion\n";
          money-=50;
          playerbag.potion_static++;
      }
      else
        cout<<"No more space\n";
  }
  else
    cout<<"Bye-bye\n";
}
