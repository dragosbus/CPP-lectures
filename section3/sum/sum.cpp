#include <iostream>

int main() 
{
    int n, sum;
    
    std::cout<<"N:";
    std::cin>>n;
    
    sum = n * (n+1) / 2;
    
    std::cout<<"The sum from 1 to n is: "<<sum<<std::endl;
}