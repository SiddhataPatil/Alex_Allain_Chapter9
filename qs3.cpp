/*
 ==============================================================================================================================
 Name        : qs3.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright (c) Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright (c) Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Write a program that solves the guessing game from part 1. How many guesses does your program need?
 ==============================================================================================================================
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
srand(time(NULL));

int a = (rand()%101);
cout<< a<<endl;
int i=0;
	while (i < 10)
	{
		int andaaz;
		cin>>andaaz;
		if ( a == andaaz) cout<<"After "<<\
			i << " guesses.. Great job!! YOU WON 25 cents"<< endl;
		else if (andaaz>a) cout<< "Way high"<<endl;
		else if (andaaz<a) cout<< "Way low"<<endl;
	i++;
	}
system ("pause");
return 0;
}