//Single-line Calculator by 
//Reihan Arvie

#include <iostream>                                                    //Library

int main()
{
	
	float qw, er, result;                                              //Variable 1
	char symbol;                                                       //Variable 2
	
	std::cout << "Calculator v0.1 (Istanbul)\n" << std::endl; 

	std::cout << "Input the Symbol (/,+,-,*): ";                       //Inputting Symbol
	std::cin >> symbol;                                                //Inputting Symbol to Variable "Symbol"

	std::cout << "Input Number A: ";                                   //Inputting Number
	std::cin >> qw;                                                    //Inputting Number to Variable "qw"

	std::cout << "Input Number B: ";                                   //Inputting Number
	std::cin >> er;                                                    //Inputting Number to Variable "er"

	std::cout << "Question: " << qw << symbol << er;                   //Output Question

	if (symbol == '*')                                                
	{
		result = qw * er;
	}
	if (symbol == '+') 
	{
		result = qw + er;
	}
	if (symbol == '-') 
	{
		result = qw - er;
	}
	if (symbol == '/') 
	{
		result = qw / er;
	}

	std::cout << "\nAnswer: " << result << std::endl;
	
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
	return 0;
}