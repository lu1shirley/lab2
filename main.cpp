#include <iostream>
#include <math.h>
#include "elo.h"
#include <fstream>
using namespace std;

int main()
{
    elo elo1;
    int i;
    float ra,rb;
    float game[6];
ofstream outFile("file_in",ios::out);
    for(i=0,i<6,i++)
	{
        if(game[i]==0){
    elo1.ea();
    elo1.eb();
    elo1.albw();
        }    
        else if(game[i]==0.5){
    elo1.ea();     
    elo1.eb();
    elo1.ab();
        }
        else if(game[i]==1){
    elo1.ea();     
    elo1.eb();
    elo1.awbl();
        }
    }
//return 0;
}

