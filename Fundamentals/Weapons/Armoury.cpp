#include<iostream>
using namespace std;
void armoury()
{
    cout<<"Welcome to the armour shop adventurer\n";
    char x1;
    do
    {
        cout<<"What do you want to buy?\n1-Sword(300)\n2-Bow(250)\n3-staff(400)\n4-katana(350)\n5-Shield\n6-Sharpen your shield\ne-exit\n";
        cin>>x1;
        switch(x1)
        {
        case 1:
            {
                if(money<300)
                {
                    cout<<"Purchase not possible";
                    break;
                }
                playerhand="sword";
                money-=300;
                break;
            }
        case 2:
            {
                if(money<250)
                {
                    cout<<"Purchase not possible";
                    break;
                }
                playerhand="bow";
                money-=250;
                break;
            }
        case 3:
            {
                if(money<400)
                {
                    cout<<"Purchase not possible";
                    break;
                }
                playerhand="staff";
                money-=400;
                break;
            }
        case 4:
            {
                if(money<350)
                {
                    cout<<"Purchase not possible";
                    break;
                }
                playerhand="katana";
                money-=350;
                break;
            }
        case 5:
            {
                if(money<300)
                {
                    cout<<"Purchase not possible";
                    break;
                }
                playerhand="shield";
                money-=300;
                break;
            }
        case 6:
            {
                if(money>=500)
              {
                cout<<"Congratulations your ";
                cout.write(playerhand,strlen(playerhand));
                cout<<" has been upgraded to ";
                if(!(stricmp(playerhand,"sword")))
                {
                    cout<<"Greatsword";
                    playerhand="Greatsword";
                    money-=500;
                }
                else if(!(stricmp(playerhand,"bow")))
                {
                    cout<<"crossbow";
                    playerhand="crossbow";
                    money-=500;
                }
                else if(!(stricmp(playerhand,"shield")))
                {
                    cout<<"Escutcheon";
                    playerhand="escutcheon";
                    money-=500;
                }
                else if(!(stricmp(playerhand,"katana")))
                {
                    cout<<"Tachi";
                    playerhand="tachi";
                    money-=500;
                }
              }
              else if(!(stricmp(playerhand,"greatsword")&&money>=1500))
              {
                  cout<<"Congratulations your ";
                  cout.write(playerhand,strlen(playerhand));
                  cout<<" has been upgraded to ";
                  cout<<"Dragon sword";
                  playerhand="dragon-sword";
                  money-=1500;
              }
              else
              {
                  cout<<"upgradation not possible";
              }
              break;
            }
        case 'e':cout<<"bye and good luck";break;
        default:cout<<"Idiot";
        }
    }while(x1!='e');
}
