#include <iostream>
#include "testc.h"
using namespace std;

void time:: sethour(int hourM)
{
	hour=hourM;
}
void time:: setminute(int minuteM)
{
	minute=minuteM;
}
void time:: setsecound(int secoundM)
{
	secound=secoundM;
}
int time:: gethour()
{
	return hour;
}

int time:: getminute()
{
	return minute;
}
int time:: getsecound()
{
	return secound;
}




void  fixtime(time tofix)
{
	int h,m,s;
    
	h=tofix.gethour();
	m=tofix.getminute();
	s=tofix.getsecound();

	m+=s/60;
	s=s%60;
	h+=m/60;
	m=m%60;

	tofix.sethour(h);
	tofix.setminute(m);
	tofix.setsecound(s);


}

void printtime(time toprint)
{
	cout<<toprint.gethour()<<"."<<toprint.getminute()<<"."<<toprint.getsecound()<<endl;
}