/*5 - A: Write a program to calculate mean and standard deviation of a one 
dimensional data set (assume data has n entries).*/

/*5 - B: Write a program to take transpose of a matrix and store the 
result in a new matrix. The function prototype will be:

    void transpose(int mat[][MaxDim], int mat_rows, int mat_cols, int transpose[][MaxDim])

You can also assume that MaxDim > mat_rows && MaxDim > mat_cols 
*/

/*5 - C: Write a C++ program to sort the data set in one dimensional 
array in ascending order.*/

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

void stats(double *arr, int n){
   //Declare a double variable where the mean is going to be stored, and initialize it to 0
    for(/*Iterate through the array*/) //Add all the elements of the array into the mean variable

    //Compute the mean of all the elements in the array and print it.

    //Declare a double variable where to calculate the standard deviation, and initialize it to 0
    for(/*Iterate through the array*/) 
    
    //Compute the standard deviation of the elements of the array


    //Print the computed standard deviation 
}

//Define a preprocessor directive called MaxDim to be used in the transpose function (look for the exercise description)

void transpose(int mat[][MaxDim], int mat_rows, int mat_cols, int transpose[][MaxDim]){
    for(/*Iterate through the matrix rows*/){
        for(/*Iterate through the matrix columns*/){
            //Perform the transpose operation
        }
    }
}

void sort(double *arr, int n){
    for(/*Iterate through the n elements of the array*/){
        //Declare an integer variable called min and assign to it the ith element of the array
        //declare an index variable and assign to it i
        for(/*Iterate through the n elements of the array*/){
            if(/*Check whether the element you are going through in the array is less than the value in variable min*/){
                //if so, update the min variable accordinglymin = arr[x];
                //Update the index variable that is used to refer to sorted part of the array 
            }
        }
        //Final swap
        if(index != i){
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }
}

int main(int argc, char *argv[]){
    double A[5] = {5, 4, 3, 2, 1};
    sort(A, 5);

    for(int i = 0; i < 5; i++) cout << A[i] << ' ';
    cout << '\n';
    stats(A, 5);

    int B[3][3], C[3][3];

    for(int i = 0; i < 3; i++){
        for(int x = 0; x < 3; x++){
            B[i][x] = rand() % 10;
        }
    }

    cout << "Initial matrix:\n";
    for(int i = 0; i < 3; i++){
        for(int x = 0; x < 3; x++){
            cout << B[i][x] << ' ';
        }

        cout << '\n';
    }

    transpose(B, 3, 3, C);

    cout << "transposed matrix:\n";
    for(int i = 0; i < 3; i++){
        for(int x = 0; x < 3; x++){
            cout << C[i][x] << ' ';
        }

        cout << '\n';
    }

    return 0;
}
