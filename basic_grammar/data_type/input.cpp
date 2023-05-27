//
// Created by Liu on 2023/5/27.
//

#include<iostream>
using namespace std;

int main(){

    //整型输入
    int a = 0;
    cout << "Please input an integer:" << endl;
    cin >> a;
    cout << a << endl;

    //浮点型输入
    double d = 0;
    cout << "Please input a float:" << endl;
    cin >> d;
    cout << d << endl;

    //字符型输入
    char ch = 0;
    cout << "Please input a character:" << endl;
    cin >> ch;
    cout << ch << endl;

    //字符串型输入
    string str;
    cout << "Please input a string:" << endl;
    cin >> str;
    cout << str << endl;

    //布尔类型输入
    bool flag = true;
    cout << "Please input a bool:" << endl;
    cin >> flag;
    cout << flag << endl;

    return 0;
}