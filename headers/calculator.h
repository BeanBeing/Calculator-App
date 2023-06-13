#pragma once

#include <string>

class Calculator
{
public:
  Calculator();
  virtual ~Calculator() = default;

  void welcome();
  
  void add();
  void subtract();
  void multiply();
  void divide();

  void operation(const std::string& operation);

private:
  double result;  

};
