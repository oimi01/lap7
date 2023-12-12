#include<iostream>
using namespace std;

char before(char x){
	if( x >= 66 && x <= 90)
	{
		return x-1;
	}
	else if ( x == 65)
	{
		return 'Z';
	}
	else return '0';
}

