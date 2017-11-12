#include <iostream>      
#include <thread>         
#include <chrono>        

/*
The program displays blinking countdown messages
*/
int main()
{
	for (int i = 12; i > 0; --i) 
	{
		std::cout << "\r                         \r";
		std::cout << "Time until takeoff: " << i << "";
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}

	std::cout << "\r                         \r";
	for (int i = 5; i > 0; --i) 
	{
		std::cout << "\rTake off!";
		std::this_thread::sleep_for(std::chrono::seconds(1));
		printf("\r         ");
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
	}
	return 0;
}