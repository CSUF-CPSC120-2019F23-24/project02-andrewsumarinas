// Name: Andrew Sumarinas
// This program calculates and displays business expenses - edited with dollar dollarSign
// and multiple string input.

#include <iostream>
#include <string>
#include <iomanip>

int main()
{
  std::string myLocation;    // I added the <string> directive in
  int myDays;               //order to use the string variable type
  double myHotelExpense;
  double myMealExpense;
  double myTotal;
  std::string hotelString;  //I added three extra variables to convert my
  std::string mealString;   //double data types into strings
  std::string totalString;
  char dollarSign = '$';

  std::cout << "Hello, and welcome to Business Trip Tracker!" << std::endl << std::endl;

  std::cout << "Please input the following information: " << std::endl <<std::endl;
  std::cout << "Where will the bussiness trip be located at? ";
  getline(std::cin, myLocation); //I replaced the std::cin with getline in order
                                 //to read multiple words
  std::cout << std::endl;

  std::cout << "How many days will the trip take? ";
  std::cin >> myDays;

  std::cout << std::endl;

  std::cout << "What is the total hotel expense? ";
  std::cout << "$";
  std::cin >> myHotelExpense;
  std::cout << std::endl;

  std::cout << "What is the total meal expense? ";
  std::cout << "$";
  std::cin >> myMealExpense;
  std::cout << std::endl;

  myTotal = myHotelExpense + myMealExpense; //Calculation for the total expenses

  std::cout << "Thank you for choosing Business Trip Tracker! Kindly review the following: ";
  std::cout << std::endl;
  std::cout << std::endl;

  //here is where you convert the double variables into string data types.
  //After converting, adding the dollar sign should be enough, but when it
  //prints it out, the table will fill the remaining spaces with zeroes,
  //so I used substr to return the variable and used find to use the period
  //as a marker and added 3 to set it to two decimal places.

  hotelString = std::to_string(myHotelExpense);
  hotelString = dollarSign + hotelString;
  hotelString = hotelString.substr(0, hotelString.find('.')+3);

  mealString = std::to_string(myMealExpense);
  mealString = dollarSign + mealString;
  mealString = mealString.substr(0, mealString.find('.')+3);

  totalString = std::to_string(myTotal);
  totalString = dollarSign + totalString;
  totalString = totalString.substr(0, totalString.find('.')+3);

  //this is where the first row of the tables are set
  //I also organized the tables to make it look cleaner
  std::cout << std::setw(20) << "Location"
  << std::setw(8) << "Days"
  << std::setw(12) << "Hotel"
  << std::setw(12) << "Meal"
  << std::setw(12) << "Total" << std::endl;

  //and here are the corresponding data inputted by the user
  std::cout << std::setw(20) << myLocation;
  std::cout << std::setw(8) << myDays;
  std::cout << std::setw(12) << hotelString;
  std::cout << std::setw(12) << mealString;
  std::cout << std::setw(12) << totalString;

  std::cout << std::endl;
  std::cout << std::endl;

  return 0;


}
