//
// Created by Liu on 2023/5/27.
//
#include<iostream>
using namespace std;

void swap(int num1, int num2)
{
    cout << "swap->" << endl;
    cout << "Before: " << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After: " << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    //return ; 当函数声明时候，不需要返回值，可以不写return
}

int main() {

    int a = 10;
    int b = 20;

    swap(a, b);

    cout << "mian -> a = " << a << endl;
    cout << "mian -> b = " << b << endl;


    return 0;
}