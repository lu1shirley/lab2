//#include <iostream>
//#include <unistd.h>
//#include <string>
#include "elo.h"
#include <math.h>
//using namespace std;

elo::elo()
{
        k=32;
      	a=1613;
	b=1609;
}
//elo(int,float,float);    
double elo::ea(int a,int rb)
{
	double ea,na;
	na=(b-a)/400;
    ea=1/(1+pow(10,na));
    return ea;
	//ra=ra+32*(0-ea)
}
double elo::eb(int a,int b)
{
	double eb,nb;
    nb=(a-b)/400;
    eb=1/(1+pow(10,nb));
    return eb;
			//rb=rb+32*(1-eb);
}
//void elo::albw(double ea,double eb,float &ra,float &rb){
//	ra+=k*(0-ea);
//	rb+=k*(1-eb);
//}
//void elo::ab(double ea,double eb,float &ra,float &rb){
//	ra+=k*(0.5-ea);
//	rb+=k*(0.5-eb);
//}
//void elo::awbl(double ea,double eb,float &ra,float &rb){
//	ra+=k*(1-ea);
//	rb+=k*(0-eb);
//}
