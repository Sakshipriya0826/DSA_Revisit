//Program to Find the Number of Elements in an Array 
#include <iostream>
using namespace std;

int main(){
   int arr[5]={1,2,3,4,5};
   int size = sizeof(arr)/sizeof(arr[2]);
   cout << "the no of element: "<< size << endl;
   return 0;
}