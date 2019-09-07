// Name: Buisness planner
// This program calculates and displays business expenses.
#include <iostream>
#include <string>
#include <iomanip>

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

  //Calculation the total
  total = meal + hotel;

  //Displaying all the information
  std::cout << std::setw(10) << "Location" << std::setw(10) << "Days" << std::setw(17) << "Hotel Expenses" << std::setw(17) << "Food Expenses" << std::setw(10) << "Total" << '\n';
  std::cout << std::setw(10) << location << std::setw(10) << days << std::setw(17) <<  hotel << std::setw(17) <<  meal << std::setw(10) <<  total << '\n';
  return 0;
}
