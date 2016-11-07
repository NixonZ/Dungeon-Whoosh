#include<iostream>
using namespace std;
void armoury()
{
    cout<<"Welcome to the armour shop adventurer\n";
    int x1;
    do
    {
        cout<<"What do you want to buy?\n1-Sword(300)\n2-Bow(250)\n3-staff(400)\n4-katana(350)\n5-Shield\n6-Exit\n";
        cin>>x1;
        switch(x1)
        {
        case 1:
            {
                playerhand="sword";
                money-=300;
                break;
            }
        case 2:
            {
                playerhand="bow";
                money-=250;
                break;
            }
        case 3:
            {
                playerhand="staff";
                money-=400;
                break;
            }
        case 4:
            {
                playerhand="katana";
                money-=350;
                break;
            }
        case 5:
            {
                playerhand="shield";
                money-=300;
                break;
            }
        case 6:cout<<"bye and good luck";break;
        default:cout<<"Idiot";
        }
    }while(x1!=6);
}
