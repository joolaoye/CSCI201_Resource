#include <iostream>

float get_float(std::string prompt)
{
	float input;
	
	std::cout << prompt;
	
	while (!(std::cin >> input))
	{
		std::cout << prompt;
	}
	
	return input;
}

int main()
{
	float Kilometer = get_float("Enter Kilometers: ");
	float Mile = Kilometer * 0.621;

	std::cout << "Mile: " << Mile << std::endl;
}	
 