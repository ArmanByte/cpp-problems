// Given an integer n and a one-dimensional array containing n elements,
// write a program that calculates and prints the sum of elements within the given interval [a; b].
// All input data should be read using a procedure, and the sum of the elements should be determined using a function.

#include <iostream>
using namespace std;

void inputArray(int arr[20], int &n);
int getValue(int arr[20], int n, int &a, int &b);

int main(){
    int arr[20], n, a, b;
    inputArray(arr, n);
    int result = getValue(arr, n, a, b);
    cout << "Result: " << result;
}

void inputArray(int arr[20], int &n){
    cout << "Enter n (2-10): "; cin >> n; cout << endl;
    if(n < 2 || n > 20){
        cout << "Invalid number: n.";
        exit(1);
    }
    for(int i = 0; i < n; i++){
        cout << "Element [" << i << "]: "; cin >> arr[i];
    }
}

int getValue(int arr[20], int n, int &a, int &b){
    int sum = 0;
    cout << endl << "Enter a: "; cin >> a;
    cout << "Enter b: "; cin >> b; cout << endl;

    for(int i = 0; i < n; i++){
        if(arr[i] >= a && arr[i] <= b){
            sum += arr[i];
        }
    }
    return sum;
}