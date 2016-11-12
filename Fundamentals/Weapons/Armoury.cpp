#include<iostream>
#include<string.h>
#include<strings.h>
#include<cstring>
#include "../../Headers/variabless.h"
#include "../../Headers/pointstuff.h"
using namespace std;
void armoury()
{
    cout<<"Welcome to the armour shop adventurer\n";
    char x1;
    do
    {
        cout<<"\nWhat do you want to buy?\n1-Sword(300)\n2-Bow(250)\n3-Staff(400)\n4-Katana(350)\n5-Shield\n6-Sharpen your weapon\ne-exit\n";
        cin>>x1;
        switch(x1)
        {
        case 49:
            {
                if(money<300)
                {
                    cout<<"Purchase not possible";
                    break;
                }
                playerhand="sword";
                weaponsattributes();
                money-=300;
                break;
            }
        case 50:
            {
                if(money<250)
                {
                    cout<<"Purchase not possible";
                    break;
                }
                playerhand="bow";
                weaponsattributes();
                money-=250;
                break;
            }
        case 51:
            {
                if(money<400)
                {
                    cout<<"Purchase not possible";
                    break;
                }
                playerhand="staff";
                weaponsattributes();
                money-=400;
                break;
            }
        case 52:
            {
                if(money<350)
                {
                    cout<<"Purchase not possible";
                    break;
                }
                playerhand="katana";
                weaponsattributes();
                money-=350;
                break;
            }
        case 53:
            {
                if(money<300)
                {
                    cout<<"Purchase not possible";
                    break;
                }
                playerhand="shield";
                weaponsattributes();
                money-=300;
                break;
            }
        case 54:
            {
                if(money>=500&&(strcasecmp(playerhand,"Bare hand")))
               {
                   if((strcasecmp(playerhand,"tachi"))&&(strcasecmp(playerhand,"crossbow"))&&(strcasecmp(playerhand,"escutcheon")))
                {
                cout<<"Congratulations your ";
                cout.write(playerhand,strlen(playerhand));
                cout<<" has been upgraded to ";
                if(!(strcasecmp(playerhand,"sword")))
                {
                    cout<<"Greatsword";
                    playerhand="Greatsword";
                    weaponsattributes();
                    money-=500;
                }
                else if(!(strcasecmp(playerhand,"bow")))
                {
                    cout<<"crossbow";
                    playerhand="crossbow";
                    weaponsattributes();
                    money-=500;
                }
                else if(!(strcasecmp(playerhand,"shield")))
                {
                    cout<<"Escutcheon";
                    playerhand="escutcheon";
                    weaponsattributes();
                    money-=500;
                }
                else if(!(strcasecmp(playerhand,"katana")))
                {
                    cout<<"Tachi";
                    playerhand="tachi";
                    weaponsattributes();
                    money-=500;
                }
              else if(!(strcasecmp(playerhand,"greatsword")&&money>=1500)&&(strcasecmp(playerhand,"Bare hand")))
              {
                  cout<<"Congratulations your ";
                  cout.write(playerhand,strlen(playerhand));
                  cout<<" has been upgraded to ";
                  cout<<"Dragon sword";
                  playerhand="dragon-sword";
                  weaponsattributes();
                  money-=1500;
              }
              else
              {
                  cout<<"upgradation not possible\n";
              }
               }
               else
                cout<<"Upgradation not possible\n";
               }
              break;
            }
        case 'e':cout<<"bye and good luck";break;
        default:cout<<"Idiot";
        }
    }while(x1!='e');
    weaponsattributes();
}
