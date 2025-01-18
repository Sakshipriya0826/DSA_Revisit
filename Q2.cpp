/* 2. Develop and Implement a menu driven program in C for the following Array operations
a. Creating Array of N Integer elements.
b. Display of Array elements with suitable headings.
c. Inserting an element (ELEM) at a given valid position (POS).
d. Deleting an element at a given valid position (POS).
e. Exit */

#include <iostream>
using namespace std;
int main(){
    int N;
    cout << "enter the no of element in array: " ;
    cin >> N;

    int arr[N];
    
    for(int i=0; i<N; i++)
    {
        cout << "Enter element: ";
        cin >> arr[i];
    }
    for(int i = 0; i < N; i++) {
        cout << "The elements of the array are: " << arr[i] << " ";
    }
    return 0;
}