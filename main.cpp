#include <iostream>
#include "testc.h"

using namespace std;


void main ()
{
	time *arr;
	int size,hourM,minuteM,secoundM;

	cout<<"insert some you want";
	cin>>size;
	arr=new time[size];
	for (int i=0;i<size;i++)
	{
		cout<<"your hour is :"<<endl;
		cin>>hourM;
		arr[i].sethour(hourM);
		cout<<"your minute is :"<<endl;
		cin>>minuteM;
		arr[i].setminute(minuteM);
		cout<<"your secound is :"<<endl;
		cin>>secoundM;
		arr[i].setsecound(secoundM);
	}

	for (int i=0;i<size;i++)
	{
		fixtime(arr[i]);
    }
	
	for (int i=0;i<size;i++)
	{
		cout<<i+1<<") is :";
		printtime(arr[i]);
    }
	
	system("pause");
}