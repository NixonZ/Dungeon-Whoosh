#include<iostream>
#include<windows.h>
#include "Headers/pointstuff.h"
#include "Headers/variabless.h"
using namespace std;
line_hor()
{
    for(int i=0;i<80;i++)
        cout<<'*';
}
line_ver()
{
    for(int i=0;i<25;i++)
        cout<<'*'<<endl;
}
void screen_faint()
{
    for(int i=0;i<25;i++)
        line_hor();
    Sleep(1000);
    system("cls");
}
