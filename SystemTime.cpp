/*
#-------------------------------------------------------------------------------
# Author: Adnan Fanaswala
# Created: 18th January 2013
# The code prints the system date/time to the console
#-------------------------------------------------------------------------------
*/

//=============================================================================
// Includes
//=============================================================================

#include <stdio.h>
#include <cmath>
#include <Windows.h>
#include <iostream>
#include <ctime>


int 
main( int argc, char* argv[] )
{  

	//Current System time
	char *date;
    time_t timer;
    timer=time(NULL);

    date = asctime(localtime(&timer));
	date[strlen(date) - 1] = '\0'; //This is to remove the endline character

	std::cout << "The date/time currently is : " << date << std::endl;
	std::cout << std::endl;

   system("PAUSE");
   return 0;
}