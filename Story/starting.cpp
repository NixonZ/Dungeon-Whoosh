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
    cout<<"Long time ago, the land was ravaged by the evil and the existence of mankind was at risk\n"
        <<"Therefore, many warriors joined forces to overcome save humanity\n"
        <<"You were one of them\n";
    cout<<"Below are few questions to determine the starting attributes and skills(Answer freely)\n";
    cin.get();
    ask();
    cin.get();
    cout<<"Being an orphan with a single brother, you quickly learned about the misery of the poor\n"
        <<"You quickly rose to your feet\n"; cin.get(); cout<<"and went to the bathroom, because good children do not pee in the bed.\n"
        <<"Well, you returned after a hour ";//you had eaten spicy food
    cout<<"just to find out that your brother was taken away to join the army "
        <<"you promised to join the army yourself and rid the world of the evil\n";
    cin.get();
}
