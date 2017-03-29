#include <iostream>
#include <math.h>
#include "elo.h"
#include <fstream>
using namespace std;

int main()
{
    elo elo1;
    int i,k,a,b;
    float ra,rb,ea,eb;
    float game[6];
ofstream outFile("file_in",ios::out);
    elo1.ea(1613,1609);
    elo1.eb(1613,1609);
 for(i=0;i<6;i++)
    {
        if(game[i]==0)
	{
           // elo1.albw(ea,eb,&ra,&rb);
            ra=ra+32*(0-ea);
	    rb=rb+32*(1-eb);
            int a=ra+0.5;
	    int b=rb+0.5;
    //cout<<ra<<" "<<rb<<endl;
            cout<<a<<" "<<b<<endl;
            elo1.ea(a,b);
            elo1.eb(a,b);
        }    
        else if(game[i]==0.5)
	{
	   // elo1.ab(ea,eb,&ra,&rb)
            ra=ra+k*(0.5-ea);
	    rb=rb+k*(0.5-eb);
                int a=ra+0.5;
	        int b=rb+0.5;
    //cout<<ra<<" "<<rb<<endl;
            cout<<a<<" "<<b<<endl;
            elo1.ea(a,b);
            elo1.eb(a,b);
        }
        else if(game[i]==1)
	{
            //elo1.awbl(ea,eb,&ra,&rb);
                ra=ra+k*(1-ea);
	        rb=rb+k*(0-eb);
            int a=ra+0.5;
	        int b=rb+0.5;
    //cout<<ra<<" "<<rb<<endl;
            cout<<a<<" "<<b<<endl;
            elo1.ea(a,b);
            elo1.eb(a,b);
        }
    }
    return 0;
}
