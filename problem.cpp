// Given an integer n and a two-dimensional array (matrix) of size n x n,
// write a program and create a flowchart that:
//
// - Reads the values of the matrix using a procedure.
// - Finds the row that contains the maximum (unique) element in the matrix using a function.
// - Creates a new one-dimensional vector from the elements of that row.
// - Outputs the elements of the resulting vector.
//
// Note: The size n should be between 2 and 10.

#include <iostream>
using namespace std;

void inputArr(int arr[10][10], int n);
void getMaxRow(int arr[10][10], int newArr[10], int n);

int main(){
    int n;
    cout << "Columns and Rows [2-10]: "; cin >> n;
    int arr[10][10], newArr[10];
    inputArr(arr, n);
    getMaxRow(arr, newArr, n);
    return 0;
}

void inputArr(int arr[10][10], int n){
    if(n < 2 || n > 10){
        cout << "Invalid number.";
    }
    else{
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << "Input Array Element [" << i << "][" << j << "]: "; cin >> arr[i][j];
            }
        }
    }
}

void getMaxRow(int arr[10][10], int newArr[10], int n){
    int row = 0;
    int maxValue = arr[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] > maxValue){
                maxValue = arr[i][j];
                row = i;
            }
        }
    }
    for(int j = 0; j < n; j++){
        newArr[j] = arr[row][j];
    }
    cout << "Row with max value in it: ";
    for(int j = 0; j < n; j++){
        cout << newArr[j] << " ";
    }
} 