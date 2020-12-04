#include<iostream>

using namespace std;

void reverse(int [], int);
void swap(int &, int &);

int main(){

    int arr[50], size;
    
    cout<<"Enter the Size of an Array \n";
    cin>>size;

    cout<<"Enter in an Array \n";
    for(int i = 0; i < size; i++)
        cin>>arr[i];
    
    reverse(arr, size);
    
    return 0;
}

void swap(int &x, int &y){

    x ^= y;
    y ^= x;
    x ^= y;
}

void reverse(int arr[], int size){

    for(int i = 0, j = size-1; i < j; i++, j--)
        swap(arr[i], arr[j]);

    for(int i = 0; i < size; i++)
        cout<< arr[i] << " ";
}
