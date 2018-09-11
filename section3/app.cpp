#include <iostream>

int main() {
    int n, temp;
    int arr[100];
    
    std::cout<<"Type the value of n:";
    std::cin>>n;
    
    for(int m=0;m<n;m++) {
        std::cout<<"Enter a number:";
        std::cin>>arr[m];
    }
    
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        std::cout<<arr[i]<<"\n";
    }
    
}