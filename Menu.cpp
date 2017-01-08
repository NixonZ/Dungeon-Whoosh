#include<iostream>
#include"Headers/pointstuff.h"
using namespace std;
void menu()
{
    cout<<"------- |     | |\\    |  -----   -----  -----  |\\    |\n"
        <<"|     / |     | | \\   | |       |      |     | | \\   |\n"
        <<"|    /  |     | |  \\  | |  ---| |----- |     | |  \\  |\n"
        <<"|   /   |     | |   \\ | |     | |      |     | |   \\ |\n"
        <<"|__/     -----  |    \\|  -----   -----  -----  |    \\|\n";
    cout<<endl;
    cout<<"                |      | |    |  -----   -----   -----  |    |\n"
        <<"                |      | |    | |     | |     | |       |    |\n"
        <<"                |  /\\  | |----| |     | |     |  -----  |----|\n"
        <<"                | /  \\ | |    | |     | |     |       | |    |\n"
        <<"                |/    \\| |    |  -----   -----   -----  |    |\n";
    cout<<endl;
    cout<<"A game by-";
    cout<<endl;
    cout<<"          NixonZ & GitHG22\n";
    cout<<"Description--\n";
cout<<"A simple text-based RPG made in C++, compiled using g++. GPL v3.\n"
<<"The game is not ready yet (perhaps it won't ever be).\n"
<<"It was started for a school project, by Nalin Shani and Harshit Garg.\n"
<<"We don't know the whole of C++ so there might be better ways of doing\n"
<<"so feel free to open an issue and tell us about it.\n"
<<"If we could understand enough, we would push the changes.\n"
<<"And, your name will inducted in the Hall of Fame.(Probably)\n";
    cin.get();
}
