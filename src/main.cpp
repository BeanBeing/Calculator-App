#include "../headers/calculator.h"
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cctype>

std::string str_lower(std::string &str)
{
   std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c){return std::tolower(c);});

   return str;
}

void welcome();


int main()
{
   Calculator cal;

   std::cout << "\nWelcome to the Calculator app!\n";
   welcome();

   std::string selection{};
   while(std::cin >> selection && str_lower(selection) != "exit")
   {
      cal.operation(str_lower(selection));
      welcome();
      std::cin.clear();
   }

   std::cout << "I hope you enjoyed the C++ Calculator! :)" << std::endl;
   return 0;
}

void welcome()
{
   std::cout << "Valid operations + | - | * | OR type exit if you want to exit the app: ";
}
