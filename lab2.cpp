#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int k,i=0;
	float ra,rb=0;
	double ea=0.506,eb=0.494,na=0.07096,nb=-0.07096;
	float game[6];
	cin>>k>>ra>>rb;
	for(i=0;i<=5;i++)
	{
		cin>>game[i];
	} 
	cout<<ra<<" "<<rb<<endl;
	//ra=ra+32*(0-ea);
	//rb=rb+32*(1-eb);
	//int a=ra+0.5;
	//int b=rb+0.5;
    //cout<<ra<<" "<<rb<<endl;
    //cout<<a<<" "<<b<<endl;
    //na=(rb-ra)/400;
    //nb=(ra-rb)/400;
    //ea=1/(1+pow(10,na));
    //eb=1/(1+pow(10,nb));
    //for(i=0;i<6;i++)
    //{
    //    cout<<game[i]<<" ";
    //}
    //cout<<endl;

	//int j=0;
	//for(j=0;j<6;j++)
	//{
		for(i=0;i<6;i++)
		{
	    if(game[i]==0)
		{
	        ra=ra+32*(0-ea);
	        rb=rb+32*(1-eb);
	        int a=ra+0.5;
	        int b=rb+0.5;
    //cout<<ra<<" "<<rb<<endl;
            cout<<a<<" "<<b<<endl;
            na=(rb-ra)/400;
            nb=(ra-rb)/400;
            ea=1/(1+pow(10,na));
            eb=1/(1+pow(10,nb));
		}
		else if(game[i]==0.5)
		{
			ra=ra+32*(0.5-ea);
		    rb=rb+32*(0.5-eb);
		    int a=ra+0.5;
	        int b=rb+0.5;
    //cout<<ra<<" "<<rb<<endl;
            cout<<a<<" "<<b<<endl;
            na=(rb-ra)/400;
            nb=(ra-rb)/400;
            ea=1/(1+pow(10,na));
            eb=1/(1+pow(10,nb));
        }
		else if(game[i]==1)
		{
			ra=ra+32*(1-ea);
			rb=rb+32*(0-eb);
			int a=ra+0.5;
	        int b=rb+0.5;
    //cout<<ra<<" "<<rb<<endl;
            cout<<a<<" "<<b<<endl;
            na=(rb-ra)/400;
            nb=(ra-rb)/400;
            ea=1/(1+pow(10,na));
            eb=1/(1+pow(10,nb));
		}
		}
    //}
	 //cout<<k<<" "<<ra<<" "<<rb<<endl;
}
