/***************************
Wesly Maulsby
C++ Fall 2022
Lab 2
Exploring Output
Get familiar with output to command prompt
*****************************/

//Pre-Proccessor Directives (Calls input output stream and string libraries)
#include <iostream>
#include <string>


void part1() //declares part one of the lab
{
//Part one of Lab 2: schedule
	//Declares "m" as Monday
	const std::string m = "Monday  10:00 AM  C++";
	//Declares "t" as Tuesday
	const std::string t = "Tuesday  7:50 AM Python 10:00 AM C++ ";
	//Declares "w" as Wednasday
	const std::string w = "Wednasday  10:00 AM  C++";
	//Declares "th" as Thursday
	const std::string th = "Thursday  7:50 AM Python 10:00 AM C++";
	//Declares "f" as Friday
	const std::string f = "Friday  10:00 AM  C++";
	
	//Calls day variables
	//Monday
	std::cout << m;
	//Tuesday
	std::cout << std::endl << t;
	//Wednasday
	std::cout << std::endl << w;
	//Thursday
	std::cout << std::endl << th;
	//Friday
	std::cout << std::endl << f;

}

void part2() //declares part 2 of the lab
{
//Part 2 of Lab 2: Checker Board

	//Declares "one" as the first row of checkers
	const std::string one = "     *           *           *           * ";

	//Declares "two" as the second row of checkers
	const std::string two = "*          *           *           *       ";

	//Calls both lines four times times
	std::cout << std::endl << one;
	std::cout << std::endl << two;
	std::cout << std::endl << one;
	std::cout << std::endl << two;
	std::cout << std::endl << one;
	std::cout << std::endl << two;
	std::cout << std::endl << one;
	std::cout << std::endl << two;

}

int main()
{
	part1(); //calls part one of the Lab
	
	part2(); //calls part two of the Lab

	return(0);
}




