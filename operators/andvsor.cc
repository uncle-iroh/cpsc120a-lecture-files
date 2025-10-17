#include <iostream>

int main() {
	bool tall(false);
	bool handsome(true);
	bool rich(true);

	// Lets design an if statment that will tell us to date him if he is 
	// tall and handsome
	if ( tall && handsome) {
		std::cout << "Yes, yes, a thousand times yes" << std::endl;
	}
	// Let's desing one that will tell us if he's rich or tall
	if ( rich || tall ) {
		std::cout << "Let's do this" << std::endl;
	}

	// How about rich or tall or handsome?
	if ( rich || tall || handsome) {
		std::cout << "Why not?" << std::endl;
	}


  return 0;
}
