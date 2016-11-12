#include<iostream>
#include<string.h>
#include"../Headers/pointstuff.h"
#include"../Headers/variabless.h"
using namespace std;
void bagf()
{
    cout<<"\nWhat do you want to do\n1-Use potions\n2-Exchange weapons\ne-exit\n";
    char x3; char *tempbg; int i=1;
    do{
    cin>>x3;
    switch(x3)
    {
    case '1':
        {
            if(playerbag.potion_static<=5&&playerbag.potion_static>0)
            {
                playerbag.potion_static--;
                potions();
            }
            else if(playerbag.potion_static==0)
                cout<<"No potion mate\n";
            else
                cout<<"Hacks!!!!!!Or wlcm NixonZ";
            break;
        }
    case '2':
        {
            cout<<"Which weapon do you want to select?\n";
            cout<<"1-"; cout.write(playerbag.weapon_static1,strlen(playerbag.weapon_static1));
            cout<<"2-"; cout.write(playerbag.weapon_static2,strlen(playerbag.weapon_static2));
            cout<<"3-"; cout.write(playerbag.weapon_static3,strlen(playerbag.weapon_static3));
            cout<<endl;
            while(i==1||i==2||i==3)
            {
                cin>>i;
                if(i>3)
                    break;
                if(i==1)
                    tempbg=playerhand;
                    playerhand=playerbag.weapon_static1;
                    playerbag.weapon_static1=tempbg;
                if(i==2)
                    tempbg=playerhand;
                    playerhand=playerbag.weapon_static2;
                    playerbag.weapon_static2=tempbg;
                if(i==3)
                    tempbg=playerhand;
                    playerhand=playerbag.weapon_static3;
                    playerbag.weapon_static3=tempbg;
                cout<<"Do you wish to continue?(enter 4 to exit)\n";
            }
            break;
        }
    }
    }while(x3!='e');
}
