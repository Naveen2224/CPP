#include<iostream>
using namespace std;
int main()
{
  int arr[5]={};
    int i;
    int *p;
    p=arr;
    cout<<"enter elements:";
    for(i=0;i<5;i++){
      cin>>arr[i];
    }
    cout<<"you entered:";
    for(i=0;i<5;i++){
      cout<<*p<<" "<<endl;
      p++;
    }
}






#OUTPUT:
enter elements:1      #user input
2
3
5
4
you entered:1          #output
2
3
5
4
