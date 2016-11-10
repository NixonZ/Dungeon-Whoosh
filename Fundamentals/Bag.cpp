#include<iostream>
#include<string.h>
#include"../Headers/pointstuff.h"
#include"../Headers/variabless.h"
using namespace std;
void bagf()
{
    cout<<"\nWhat do you want to do\n1-Use potions\n2-Exchange weapons\ne-exit\n";
    char x3;
    cin>>x3;
    switch(x3)
    {
    case '1':
        {
            if(playerbag.potion_static<=5)
            {
                playerbag.potion_static--;
                potions();
            }
            else
                cout<<"Hacks!!!!!!Or wlcm NixonZ";
        }
    case '2':
        {
            cout<<"Which weapon do you want to select?\n";
            cout<<"1-"; cout.write(playerbag.weapon_static[0],strlen(playerbag.weapon_static[0]));
            cout<<"2-"; cout.write(playerbag.weapon_static[0],strlen(playerbag.weapon_static[1]));
            cout<<"3-"; cout.write(playerbag.weapon_static[0],strlen(playerbag.weapon_static[2]));
            cout<<endl;
            int i;
            do
            {
                cin>>i;
                if(i>3)
                    break;
                char *tempbg;
                strcpy(tempbg,playerhand);
                strcpy(playerhand,playerbag.weapon_static[i]);
                strcpy(playerbag.weapon_static[i],tempbg);
                cout<<"Do you wish to continue?(enter 4 to exit)\n";
            }while(i==1&&i==2&&i==3);
        }
    }
}
