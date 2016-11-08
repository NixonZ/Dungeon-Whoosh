#include<iostream>
#include "../Headers/variabless.h"

using namespace std;

int ask(){
  int x;
  cout<<"Q1. You see two high school kids teasing a small child. What do you do?\n"
  <<"1. Go straight in front of them and stop them.\n"
  <<"2. Ask someone for help.\n"
  <<"3. Pretend it never happened and walk your way off.\n";
  cin>>x;
  switch (x) {
    case 1: C[0]++; break;
    case 2: IQ[0]++; break;
    case 3: C[0]--; A[0]++; break;
    default: S[0]--;IQ[0]--;D[0]--;A[0]--;C[0]--;
  }
  if(x==1){
  cout<<"Q. Those two kids are all set to fight. What do you do?\n"
  <<"1. Go for it.\n"
  <<"2. Try to make peace.\n"
  <<"3. Call out for help.\n";
  cin>>x;
  switch (x) {
    case 1: S[0]++;  C[0]++;  IQ[0]-=2; break;
    case 2: IQ[0]+=2;  S[0]--; break;
    case 3: IQ[0]++; A[0]++; break;
    default: S[0]--;IQ[0]--;D[0]--;A[0]--;C[0]--;
    }
  }
  cout<<"Q2. You have an exam tomorrow and you don't believe you studied well. What do you do?\n"
  <<"1. Give it anyways\n"
  <<"2. Cry in a corner\n"
  <<"3. Better try next one\n";
  cin>>x;
  switch (x) {
    case 1: C[0]++; break;
    case 2: C[0]-=2; break;
    case 3: IQ[0]++; A[0]++; break;
    default: S[0]--;IQ[0]--;D[0]--;A[0]--;C[0]--;
  }

  cout<<"Q3. You break the old vintage vase your mom loved more than you. What do you do?\n"
  <<"1. Admit it.\n"
  <<"2. Cover it up quickly.\n"
  <<"3. Vase? Which vase?\n";
  cin>>x;
  switch (x) {
    case 1: C[0]++; break;
    case 2: A[0]++; break;
    case 3: IQ[0]++; break;
    default: S[0]--;IQ[0]--;D[0]--;A[0]--;C[0]--;
  }

  cout<<"Q4. Do you prefer to stay at home or play around?\n"
  <<"1. Home sweet home!\n"
  <<"2. Real men go out.\n";
  cin>>x;
  switch (x) {
    case 1: A[0]--; D[0]++;break;
    case 2: A[0]++; S[0]++; D[0]--; break;
    default: S[0]--;IQ[0]--;D[0]--;A[0]--;C[0]--;
  }

  cout<<"Q5. Did you ever have an injury?\n"
  <<"1. Yes\n"
  <<"2. No\n";
  cin>>x;
  switch (x) {
    case 1: D[0]++;S[0]++; break;
    case 2: A[0]++; break;
    default: S[0]--;IQ[0]--;D[0]--;A[0]--;C[0]--;
  }

  cout<<"Q6. Do you tinker with things a lot?\n"
  <<"1. Yes\n"
  <<"2. I prefer to play it safe.\n";
  cin>>x;
  switch (x) {
    case 1: IQ[0]++; break;
    case 2: D[0]++; break;
    default: S[0]--;IQ[0]--;D[0]--;A[0]--;C[0]--;
  }

  cout<<"Q7. What came first? Chicken or egg?\n"
  <<"1. Chicken.\n"
  <<"2. Egg.\n";
  cin>>x;
  switch (x) {
    case 1: D[0]++; break;
    case 2: IQ[0]++; break;
    default: S[0]--;IQ[0]--;D[0]--;A[0]--;C[0]--;
  }

  cout<<"Q8. Did you ever feel that others are going way too ahead in their lives and yours is getting stagnant?\n"
  <<"1. Yes\n"
  <<"2. No\n";
  cin>>x;
  switch (x) {
    case 1: S[0]++; A[0]--;break;
    case 2: A[0]++; break;
    default: S[0]--;IQ[0]--;D[0]--;A[0]--;C[0]--;
  }

  cout<<"Q9. If given a choice to become only one of them, what would you become?\n"
  <<"1. Soldier\n"
  <<"2. Writer/Poet\n"
  <<"3. Sportsperson\n";
  cin>>x;
  switch (x) {
    case 1: S[0]++; D[0]++; break;
    case 2: IQ[0]+=2;A[0]--; break;
    case 3: A[0]++; break;
    default: S[0]--;IQ[0]--;D[0]--;A[0]--;C[0]--;
  }

  cout<<"Q10. Which quality do you prefer over others?\n"
  <<"1. Hawk-Eye\n"
  <<"2. Swiftness\n"
  <<"3. Strength\n";
  cin>>x;
  switch (x) {
    case 1: IQ[0]+=2; S[0]--; break;
    case 2: A[0]++; C[0]++; break;
    case 3: D[0]++;S[0]++; break;
    default: S[0]--;IQ[0]--;D[0]--;A[0]--;C[0]--;
  }

}
