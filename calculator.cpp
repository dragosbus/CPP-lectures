#include <iostream>
#include <string>

void print();
std::string selectOperation();
int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);

//main function
int main()
{
  int result = 0;
  std::string operand;
  int x, y;
  bool hasResult = false;
  
  while(operand != "exit")
  {
     print();
    operand = selectOperation();
    
    if(!hasResult)
    {
      std::cout<<"x=";
      std::cin>>x;
      
      std::cout<<"y=";
      std::cin>>y;
      
      hasResult = true;
      
      if(operand == "+")
      {
        result = x+y;
      } else if(operand == "-")
      {
        result = x - y;
      } else if(operand == "*")
      {
        result = x * y;
      } else if(operand == "/")
      {
        result = x / y;
      } else
      {
        std::cout<<"This is not a valid operation"<<std::endl;
      }
      
      std::cout<<"result="<<result<<std::endl;
    } else 
    {
      std::cout<<"x=";
      std::cin>>x;
      
      if(operand == "+")
      {
        result += x;
      } else if(operand == "-")
      {
        result -= x;
      } else if(operand == "*")
      {
        result *= x;
      } else if(operand == "/")
      {
        result /= x;
      } else
      {
        std::cout<<"This is not a valid operation"<<std::endl;
      }
      
      std::cout<<"result="<<result<<std::endl;
    }
  }

  return 0;
}

//print function
void print()
{
  std::cout<<"Select an operation:"<<std::endl;
  std::cout<<"1.Adition"<<std::endl;
  std::cout<<"2.Subtraction"<<std::endl;
  std::cout<<"3.Multiply"<<std::endl;
  std::cout<<"4.Division"<<std::endl;
  std::cout<<"5.Type exit if you want to exit."<<std::endl;
}

//select operation function
std::string selectOperation()
{
  
  std::string operation;
  
  std::cout<<"Select the operation: ";
  std::cin>>operation;
  
  return operation;
}

//sum handler
int add(int x, int y) 
{
  return x + y;
}

//subtract handler
int subtract(int x, int y) 
{
  return x - y;
}

//multiply handler
int multiply(int x, int y) 
{
  return x * y;
}

//divide handler
int divide(int x, int y) 
{
  return x / y;
}