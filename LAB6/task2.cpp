#include <iostream>
#include <iomanip>
#include <cmath>

void getData(double& base, double& length);
void computing(double base, double length, double& area, double& perimeter);
void print(double a, double b);

int main(){
	double b,h,a,p;
	char response;
	
	while (true){
		getData(b,h);
	
		p = pow(((b*b) + (h*h)), 0.5);
	
		computing(b,h,a,p);
	
		print(a, p);
		
		std::cout << std::endl;
		std::cout << "Do you want to calculate another set of data? ";
		std::cin >> response;
		
		if (response == 'N') break;
		else if (response != 'Y') return 0;
	}
	
	
	std::cout << "Thank you! " << std::endl;

}

void getData(double& base, double& height){
	while (true){
		std::cout << "Enter the length of side a: ";
		std::cin >> base;
		
		if (base > 0) break;
	}
	
	while (true){
		std::cout << "Enter the length of side b: ";
		std::cin >> height;
		
		if (height > 0) break;
	}

}


void computing(double base, double height, double& area, double& perimeter){
	area = 0.5 * base * height;
	perimeter += (base +  height);
}

void print(double area, double perimeter){
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "The perimeter is " << perimeter << std::endl;
	std::cout << "The area is " << area << std::endl;
}
