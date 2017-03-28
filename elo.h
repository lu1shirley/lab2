//#ifndef elo
//#define elo
#include <iostream>
#include <unistd.h>
//#include <string>
#include <math.h>
using namespace std;
class elo{
	public:
	    elo();
	    //elo(int,int,int);
		double ea(int,int);
		double eb(int,int);
		void albw(double ea,double eb,int &ra,int &rb);
		void ab(double ea,double eb,int &ra,int &rb);
		void awbl(double ea,double eb,int &ra,int &rb);
		//int 0rb(double);
		//int 5rb(double);
		//int 1rb(double);
	private:
		int k;
		int ra;
		int rb;
};
//#endif 
