#include<iostream>
#include<string.h>
using namespace std;
void weaponsattributes()
{
    /*Attributes would be
      hit points
      defense points*/
      int hitp,defp,magep=0,wear=20; char *playerhand;
if(!(stricmp(playerhand,"sword")))
{
    hitp=8+level*2;
    defp=level*2-6;

}
else if(!(stricmp(playerhand,"bow")))
{
    if(stricmp(playertype,"archer")!=0)
    hitp=8+level*3;
    else
        hitp=6+level*2;
    defp=level*2-10;
}
else if(!(stricmp(playerhand,"staff")))
{
    if(!(stricmp(playertype,"mage")))
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
else if(!(stricmp(playerhand,"katana")))
{
    if(stricmp(playertype,"warrior")!=0)
        hitp=10+level*3;
    else
        hitp=10+level*2;
    defp=level*3-3;
}
else if(!(stricmp(playerhand,"shield")))
{
    hitp=0+level*2;
    defp=level*4+4;
}
else if(stricmp(playerhand,"greatsword"))
{
    if(stricmp(playertype,"knight")!=0)
        hitp=20+level*3;
    else
        hitp=15+level*3;
    defp=level*2-6;
}
else if(stricmp(playerhand,"crossbow"))
{
    if(stricmp(playertype,"archer")!=0)
        hitp=13+level*3;
        
    else
        hitp=10+level*2;
    defp=level*3-10;
}
else if(!(stricmp(playerhand,"escutcheon")))
{
    hitp=0+level*3;
    defp=level*5+5;
}
else if(!(stricmp(playerhand,"tachi")))
{
    if(stricmp(playertype,"warrior")!=0)
        hitp=15+level*3;
    else
        hitp=12+level*2;
    defp=level*3-1;
}
else if(stricmp(playerhand,"dragon-sword"))
{
    if(stricmp(playertype,"knight")!=0)
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
