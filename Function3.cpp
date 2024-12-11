#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int f ( int a )
{
	int s;
	s = a * a;
	return s;
}
main()
{
	int i;
	
	for ( i = 1 ; i <= 4 ; i++ )
	{
		cout<<i<<'\t'<<f(i)<<endl;
	}
}
