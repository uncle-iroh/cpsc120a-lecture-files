#include <iostream>
#include "code0.h"

int main() {
   std::cout << "Starting test block for calcCircleArea" << std::endl;
   double result = calcCircleArea(5.0);
   std::cout << "We tested with a radious of 5.0 and should get a result of ~78.54" << std::endl;
   std::cout << "We got " << result << std::endl;
   return 0;
}
