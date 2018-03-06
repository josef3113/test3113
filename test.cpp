include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
#define INFINITY 9999
#define n 5
#define s 0
#define d 4


int FindStar( int Gragh[n][n]);
int& Max(int & x,int &y)
{
	if (x>y)
		return x;
	else 
		return y;
}

int main(){
	int Gragh[n][n]={{0,0,1,0,0},{1,0,1,1,0},{0,0,0,0,0},{1,1,1,0,1},{0,0,1,1,0}};
	FindStar(Gragh);
	getchar();
	return 0 ;

}

int FindStar( int Gragh[n][n])
{
	int i,DegPluseI=0,DegMinuseI=0;
	int j=1;
	for( i=0;i+j<n;)
	{
	   if(Gragh[i][i+j] ==0 && Gragh[i+j][i]==0)
	   {
		   i=i+j+1;
		   j=1;
	   }

	   if(Gragh[i][i+j] ==1 && Gragh[i+j][i]==1)
	   {
		   i=i+j+1;
		   j=1;
	   }


	   if(Gragh[i][i+j] ==1 && Gragh[i+j][i]==0)
	   {
		   i=i+j;
		   j=1;
		   continue;
	   }

	   if(Gragh[i][i+j] ==0 && Gragh[i+j][i]==1)
	   {
		   j++;
	   }

	}

	for (int t=0;t<n;t++)
	{
		if( Gragh[t][i]	==1)
		{
			DegPluseI++;
		}
		if(Gragh[i][t]	==1)
		{
			DegMinuseI++;
		}

	}
 
	if(DegPluseI==n-1 && DegMinuseI ==0)
	{
		cout<<i<<"is star"<<endl;
	}
	else 
		cout<<"no star in graph"<<endl;
    return 0;
}
