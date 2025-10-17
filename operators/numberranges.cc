#include <iostream>

int main() {
	int x{-1};
	std::cout << "Enter a positive integer: " << std::endl;
	std::cin >> x;

	if ( 0 <= x <= 10) {
		std::cout << "x is between 0 and 10 " << std::endl;
	} else {
		std::cout << "x is not between 0 and 10" << std::endl;
	}

  return 0;
}
