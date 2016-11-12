#include<iostream>
#include<string.h>
#include "../../Headers/variabless.h"
using namespace std;
void weaponsattributes()
{
    /*Attributes would be
      hit points
      defense points*/

if(!(strcasecmp(playerhand,"sword")))
{
    hitp=8+level*2;
    defp=level*2-6;

}
else if(!(strcasecmp(playerhand,"bow")))
{
    if(strcasecmp(playertype,"archer")!=0)
    hitp=8+level*3;
    else
        hitp=6+level*2;
    defp=level*2-10;
}
else if(!(strcasecmp(playerhand,"staff")))
{
    if(!(strcasecmp(playertype,"mage")))
    {
        hitp=3+level*2;
        magep=level*3+2;
    }
    else
    {
        hitp=3+level*3;
    }
    defp=level*2-4;
}
else if(!(strcasecmp(playerhand,"katana")))
{
    if(strcasecmp(playertype,"warrior")!=0)
        hitp=10+level*3;
    else
        hitp=10+level*2;
    defp=level*3-3;
}
else if(!(strcasecmp(playerhand,"shield")))
{
    hitp=0+level*2;
    defp=level*4+4;
}
else if(!(strcasecmp(playerhand,"greatsword")))
{
    if(!(strcasecmp(playertype,"knight")))
        hitp=20+level*3;
    else
        hitp=15+level*3;
    defp=level*2-6;
}
else if(!(strcasecmp(playerhand,"crossbow")))
{
    if(!(strcasecmp(playertype,"archer")))
        hitp=13+level*3;

    else
        hitp=10+level*2;
    defp=level*3-10;
}
else if(!(strcasecmp(playerhand,"escutcheon")))
{
    hitp=0+level*3;
    defp=level*5+5;
}
else if(!(strcasecmp(playerhand,"tachi")))
{
    if(strcasecmp(playertype,"warrior")!=0)
        hitp=15+level*3;
    else
        hitp=12+level*2;
    defp=level*3-1;
}
else if(!(strcasecmp(playerhand,"dragon-sword")))
{
    if(strcasecmp(playertype,"knight")==0)
        hitp=25+level*3;
    else
        hitp=20+level*4;
    defp=level*3-6;
}
else
{
    playerhand="Bare Hand";
    hitp=level*2;
    defp=level;
}
}
