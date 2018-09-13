#include <iostream>

void binarySearch(int n);

int main() 
{   
    int n;
    std::cout<<"Type the value of n:";
    std::cin>>n;
    
    binarySearch(n);
    
    return 0;
} 
    


void binarySearch(int n)
{
    int temp, arr[100];
    
    for(int m=0;m<n;m++) 
    {
        std::cout<<"Enter a number:";
        std::cin>>arr[m];
    }
    
    for(int i=0;i<n;i++) 
    {
        for(int j=i+1;j<n;j++) 
        {
            if(arr[i] > arr[j]) 
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        std::cout<<arr[i]<<"\n";
    }
}