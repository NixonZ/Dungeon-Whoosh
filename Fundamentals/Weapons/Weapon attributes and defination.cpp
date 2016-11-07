#include<iostream>
#include<string.h>
using namespace std;
void weaponsattributes()
{
    /*Attributes would be
      hit points
      defense points*/
      int hitp,defp,magep;
}
void sword()
{
    hitp=8+level*2;
    defp=level*2-6;
}
void arrow()
{
    if(stricmp(playertype,"archer")!=0)
    hitp=10+level*2;
    else
        hitp=12+level*3;
    defp=level*2-10;
}
void staff()
{
    if(stricmp(playertype,"mage")!=0)
    hitp=3+level*2;
    else
    {
        hitp=3+level*3;
        magep=level*3+2;
    }
    defp=level*2-4;
}
void katana()
{
    if(stricmp(playertype,"warrior")!=0)
        hitp=10+level*3;
    else
        hitp=10+level*2;
    defp=level*3-3;
}
void shield()
{
    hitp=0+level*2;
    defp=level*4+4;
}
