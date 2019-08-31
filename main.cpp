// Name: Buisness planner
// This program calculates and displays business expenses.
#include <iostream>
#include <string>

int main()
 {
   //Delcaring my variables

  double days, hotel, meal;
  float  total;
  std::string location;

  //Finding out the information of the trip
  std::cout << "Welcome to the Buisness Trip Tracker!!!" << '\n' << '\n';

  std::cout << "What is the location of the trip? ",
  std::cin >> location;

  std::cout << "How many days will the trip take? ",
  std::cin >> days;

  std::cout << "How much is total hotel expenses? $",
  std::cin >> hotel;

  std::cout << "How much is total food expenses? $",
  std::cin >> meal;
  std::cout << '\n';

  std::cout << "Location" << '\t'<< "Days" << '\t' << "Hotel" << '\t' << "Food" << '\t' <<"Total" << '\n';
  return 0;
}
