// BookMyShow.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	Movie* movie1 = new Movie();
	Movie* movie2 = new Movie();
	Theater* theater1 = new Theater();
    
	delete movie1;
	delete movie2;
	delete theater1;
	return 0;
}

