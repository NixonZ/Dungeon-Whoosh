#include<iostream>

using namespace std;

int ask(){
  int S=0,D=0,IQ=0,A=0,C=0,x;
  cout<<"Q1. You see two high school kids teasing a small child. What do you do?\n"
  <<"1. Go straight in front of them and stop them.\n"
  <<"2. Ask someone for help.\n"
  <<"3. Pretend it never happened and walk your way off.\n";
  cin>>x;
  switch (x) {
    case 1: C++; break;
    case 2: IQ++; break;
    case 3: C--; A++; break;
    default: S--;IQ--;D--;A--;C--;
  }
  if(x==1){
  cout<<"Q. Those two kids are all set to fight. What do you do?\n"
  <<"1. Go for it.\n"
  <<"2. Try to make peace.\n"
  <<"3. Call out for help.\n";
  cin>>x;
  switch (x) {
    case 1: S++;  C++;  IQ-=2; break;
    case 2: IQ+=2;  S--; break;
    case 3: IQ++; A++; break;
    default: S--;IQ--;D--;A--;C--;
    }
  }
  cout<<"Q2. You have an exam tomorrow and you don't believe you studied well. What do you do?\n"
  <<"1. Give it anyways\n"
  <<"2. Cry in a corner\n"
  <<"3. Better try next one\n";
  cin>>x;
  switch (x) {
    case 1: C++; break;
    case 2: C-=2; break;
    case 3: IQ++; A++; break;
    default: S--;IQ--;D--;A--;C--;
  }

  cout<<"Q3. You break the old vintage vase your mom loved more than you. What do you do?\n"
  <<"1. Admit it.\n"
  <<"2. Cover it up quickly.\n"
  <<"3. Vase? Which vase?\n";
  cin>>x;
  switch (x) {
    case 1: C++; break;
    case 2: A++; break;
    case 3: IQ++; break;
    default: S--;IQ--;D--;A--;C--;
  }

  cout<<"Q4. Do you prefer to stay at home or play around?\n"
  <<"1. Home sweet home!\n"
  <<"2. Real men go out.\n";
  cin>>x;
  switch (x) {
    case 1: A--; D++;break;
    case 2: A++; S++; D--; break;
    default: S--;IQ--;D--;A--;C--;
  }

  cout<<"Q5. Did you ever have an injury?\n"
  <<"1. Yes\n"
  <<"2. No\n";
  cin>>x;
  switch (x) {
    case 1: D++;S++; break;
    case 2: A++; break;
    default: S--;IQ--;D--;A--;C--;
  }

  cout<<"Q6. Do you tinker with things a lot?\n"
  <<"1. Yes\n"
  <<"2. I prefer to play it safe.\n";
  cin>>x;
  switch (x) {
    case 1: IQ++; break;
    case 2: D++; break;
    default: S--;IQ--;D--;A--;C--;
  }

  cout<<"Q7. What came first? Chicken or egg?\n"
  <<"1. Chicken.\n"
  <<"2. Egg.\n"
  cin>>x;
  switch (x) {
    case 1: D++; break;
    case 2: IQ++; break;
    default: S--;IQ--;D--;A--;C--;
  }

  cout<<"Q8. Did you ever feel that others are going way too ahead in their lives and yours is getting stagnant?\n"
  <<"1. Yes\n"
  <<"2. No\n"
  cin>>x;
  switch (x) {
    case 1: S++; A--;break;
    case 2: A++; break;
    default: S--;IQ--;D--;A--;C--;
  }

  cout<<"Q9. If given a choice to become only one of them, what would you become?\n"
  <<"1. Soldier\n"
  <<"2. Writer/Poet\n"
  <<"3. Sportsperson\n";
  cin>>x;
  switch (x) {
    case 1: S++; D++; break;
    case 2: IQ+=2;A--; break;
    case 3: A++; break;
    default: S--;IQ--;D--;A--;C--;
  }

  cout<<"Q10. Which quality do you prefer over others?\n"
  <<"1. Hawk-Eye\n"
  <<"2. Swiftness\n"
  <<"3. Strength\n";
  cin>>x;
  switch (x) {
    case 1: IQ+=2; S--; break;
    case 2: A++; C++; break;
    case 3: D++;S++; break;
    default: S--;IQ--;D--;A--;C--;
  }

}
