#include <iostream>
#include "../headers/calculator.h"

Calculator::Calculator() : result(0.0) {}

void Calculator::add()
{
   std::string a, b;
   std::cout << "Enter the first number: ";
   std::cin.clear();
   std::cin >> a;

   std::cout << "Enter the second number: ";
   std::cin.clear();
   std::cin >>b;

   // Turns string into double
   this->result = (std::stod(a) + std::stod(b));

   std::cout << "The Result is: " << this->result << std::endl;
}

void Calculator::subtract()
{
   std::string a, b;
   std::cout << "Enter the first number: ";
   std::cin.clear();
   std::cin >> a;

   std::cout << "Enter the second number: ";
   std::cin.clear();
   std::cin >>b;

   // Turns string into double
   this->result = (std::stod(a) - std::stod(b));

   std::cout << "The Result is: " << this->result << std::endl;
}

void Calculator::multiply()
{
   std::string a, b;
   std::cout << "Enter the first number: ";
   std::cin.clear();
   std::cin >> a;

   std::cout << "Enter the second number: ";
   std::cin.clear();
   std::cin >>b;

   // Turns string into double
   this->result = (std::stod(a) * std::stod(b));

   std::cout << "The Result is: " << this->result << std::endl;
}

void Calculator::divide()
{
   std::string a, b;
   std::cout << "Enter the first number: ";
   std::cin.clear();
   std::cin >> a;

   std::cout << "Enter the second number: ";
   std::cin.clear();
   std::cin >>b;

   // Turns string into double
   this->result = (std::stod(a) / std::stod(b));

   std::cout << "The Result is: " << this->result << std::endl;
}

void Calculator::operation(const std::string& operation)
{
   if(operation == "+" || operation == "sum" || operation == "addition" || operation == "adding" ||
      operation == "add" || operation == "plus")
   {
      add();
   }
   else if(operation == "-" || operation == "minus" || operation == "subtraction" || operation == "sub")
   {
      subtract();
   }
   else if(operation == "*" || operation == "multi" || operation == "multiply" || operation == "times")
   {
      multiply();
   }
   else if(operation == "/" || operation == "div" || operation == "divide" || operation == "division" ||
      operation == "divided")
   {
      divide();
   }
   else
   {
      std::cout << "Invalid operation! Please enter a valid operation from the list..." << std::endl;
   }
}
