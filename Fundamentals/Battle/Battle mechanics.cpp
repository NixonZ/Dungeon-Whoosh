#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include "../../Headers/variabless.h"
#include "../../Headers/pointstuff.h"
extern int S[7],D[7],IQ[7],A[7],C[7];
using namespace std;
float damage(int a1,int a2)
{
    float d1;
    d1=rand()%10+((S[a1]+C[a1])+(level+1+rand())*(hitp+magep))/((defp+D[a2]-level));
    return d1;
}
void hud(int a,int b)
{
    /*Designing HUD*/
    int x;
    int HP=hp[b];
    cout<<"Your level:"<<level;
    do
    {
        cout<<endl<<"What do you want to do?";
        cout<<endl<<"1-Attack         2-bag\n"
                  <<"3-Cry in a corner        4-Run\n";
        cin>>x;
        switch(x)
        {
            case 1:{
                    int l=damage(a,b); HP-=l;
                    int m=damage(b,a); healthy-=m;
                    cout<<"you Did " <<l<<" damage\n";
                    cout<<"HP of your opponent=" <<HP;
                    cout<<"\nYou took " <<m<<" damage\n";
                    cout<<"Your HP is "<<healthy<<endl;
                    break;
                   }
            case 2: {
                      bagf();break;
                    }
            case 3: {
                     cout<<"\nYou cry in the corner as your opponent fights\n";
                     int k=damage(b,a); healthy-=k;
                     cout<<"You took " <<k<<" damage\n";
                     cout<<"Your HP is "<<healthy<<endl;
                     break;
                    }
            case 4:{
                    int z=rand()%10;
                    if(z==7)
                    {
                        x=5;
                    }
                    else
                      cout<<"Unable to run\n";
                     break;
                 }
            default:cout<<"Why?\n";
        }
    }while(x!=5&&(HP>0&&healthy>0));
    if(HP<=0)
    {
        cout<<"\nYou defeated your opponent\n";
        expe+=(rand()%b+1)*4;
        expe1();
    }
    else if(healthy<=0)
    {
        cout<<"\nYou are a disgrace to your family\n";
        hospital(1);
    }
    else if(x==5)
        cout<<"\nyou successfully ran away\n";
    else
        cout<<"This should not be displayed. HACKZ\n";
    cin.get();
    cin.get();
}

