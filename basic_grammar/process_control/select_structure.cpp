//
// Created by Liu on 2023/5/27.
//

#include<iostream>
using namespace std;

int main() {

    /*
     * if
     */
    int score = 0;

    cout << "Please input a score: " << endl;

    cin >> score;

    if (score > 90)
    {
        cout << "Level A" << endl;
    }
    else
    {
        cout << "Level B" << endl;
    }
    cout << "-------------" << endl;

    /*
     * 三目运算符
     */
    int a = 10;
    int b = 20;
    int c = 0;

    c = a > b ? a : b;
    cout << "c = " << c << endl;

    //C++中三目运算符返回的是变量,可以继续赋值

    (a > b ? a : b) = 100;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "------------" << endl;

    /*
     * switch
     */

    cout << "Please input a score:" << endl;
    cin >> score;

    switch (score)
    {
        case 10:
        case 9:
            cout << "Excellent" << endl;
            break;
        case 8:
            cout << "Very Good" << endl;
            break;
        case 7:
        case 6:
            cout << "Good" << endl;
            break;
        default:
            cout << "Bad" << endl;
            break;
    }
    return 0;
}