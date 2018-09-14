#include <iostream>

int sum(int x, int y);

int main()
{
  int x,y;
  
  std::cout<<"x=";
  std::cin>>x;
  
  std::cout<<"y=";
  std::cin>>y;
  
  int do_sum = sum(x, y);
  
  std::cout<<"The sum of "<<x<<" and "<<y<<" is "<<do_sum<<std::endl;
  
  return 0;
}

int sum(int x, int y)
{
  return x + y;
}