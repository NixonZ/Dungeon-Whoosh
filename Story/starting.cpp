#include<iostream>
#include "../Headers/pointstuff.h"
#include "../Headers/variabless.h"
using namespace std;
void starting()
{
    //Intro to the game
    cout<<"This game is best played with full-screen\n";
    cin.get();
    system("cls");
    menu();
    cout<<"Long time ago, the land was ravaged by the evil and the existence of mankind was at risk\n"
        <<"Therefore, many warriors joined forces to save humanity\n"
        <<"You were one of them\n";
    cout<<"Below are few questions to determine the starting attributes and skills(Answer freely)\n";
    cin.get();
    ask();
    cin.get();
    cout<<"Being an orphan with a single brother, you quickly learned about the misery of the poor\n"
        <<"You quickly rose to your feet\n"; cin.get(); cout<<"and went to the bathroom, because good children do not pee in the bed.\n"
        <<"Well, you returned after a hour ";//you had eaten spicy food
    cout<<"just to find out that your brother was taken away to join the army "
        <<"you promised to join the army yourself and rid the world of the evil\nYou went home and picked up the old coin purse\n"
        <<"You found some whoosh coins\n";
    money=100;
    cin.get();
}
void tutorial()
{
    int x;
    cout<<"\nPart I:Training\n";
    cout<<"In order to save the world, you'll need some formal training\nIt will cost 10 whoosh coins,is it ok?\n"
        <<"1-Yes\n2-No\n";
        cin>>x;
    if(x==2)
    cout<<"Good going,conserve money right from the start\nbut we are going to have to give the tutorial anyway\n";
    else
        money-=10;
    cout<<"During your training you were sent to a hunt, you encountered a wolf\n";
    hud(0,1);
}
