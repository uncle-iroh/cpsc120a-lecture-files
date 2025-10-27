#include <iostream>
#include <vector>
#include <string>

bool quarantine(std::vector<double> temps);

int main(int argc, char ** argv) {
  std::vector<std::string> command{argv, argv+argc};

  std::vector<double> test{50.4, 120.5, 99.99};
  if (quarantine(test)){
     std::cout << "success" << "\n";
  } else {
     std::cout << "failure" << "\n";
  }


  return 0;
}

bool quarantine(std::vector<double> temps) {
  bool return_value = false;
  for (double temp : temps) {
    if ( temp > 100.4) {
      return_value = true;
      break;
    }
  }
  return return_value;
}
