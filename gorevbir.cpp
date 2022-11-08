#include <iostream>

int main(){
	double g,x,t;
	
	#define g 9.80665
	std::cin >> t;
	
	x=(1./2)*g*t*t;
	std::cout << x;
	
	return 0;
	
}
