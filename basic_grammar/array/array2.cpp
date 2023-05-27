//
// Created by Liu on 2023/5/27.
//

#include<iostream>
using namespace std;

int main(){
    //二维数组数组名
    int arr[2][3] =
            {
                    {1,2,3},
                    {4,5,6}
            };

    cout << "Size of two-dimensional array: " << sizeof(arr) << endl;
    cout << "Size of row 1: " << sizeof(arr[0]) << endl;
    cout << "Size of element: " << sizeof(arr[0][0]) << endl;

    cout << "rows =  " << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "columns = " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

    //地址
    cout << "First address = " << arr << endl;
    cout << "Row1 address = " << arr[0] << endl;
    cout << "Row2 address = " << arr[1] << endl;

    cout << "First element address = " << &arr[0][0] << endl;
    cout << "Second element address = " << &arr[0][1] << endl;

    return 0;
}
