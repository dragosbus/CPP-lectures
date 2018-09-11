#include <iostream>

int main()
{
    int n;
    
    std::cout<<"Enter the number of rows: "<<std::endl;
    std::cin>>n;
    
    for(int i = 0;i < n;i++) {
        for(int j = i+1;j<n;j++) {
            std::cout<<" ";
        }
        for(int k=0;k<i+1;k++) {
            std::cout<<"#";
        }
        std::cout<<std::endl;
    }
}