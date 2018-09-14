#include <iostream>

int main()
{
  int n, value, arr[100];
  
  std::cout<<"n=";
  std::cin>>n;
  
  for(int i=0;i<n;i++)
  {
    std::cout<<"value=";
    std::cin>>value;
    arr[i] = value;
  }
  
  int min=arr[0];
  int max = arr[0];
  
  for(int j=0;j<n;j++)
  {
    if(arr[j] < min)
    {
      min = arr[j];
    }
    
    if(arr[j] > max)
    {
      max=arr[j];
    }
  }
  
  std::cout<<"Min is:"<<min<<std::endl;
  std::cout<<"Max is:"<<max<<std::endl;
  
  return 0;
}