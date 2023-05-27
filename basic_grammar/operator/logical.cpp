//
// Created by Liu on 2023/5/27.
//

#include<iostream>
using namespace std;

/*
 * 逻辑运算符
 */
int main() {

    /*
     * 非
     */
    int a = 10;

    cout << !a << endl; // 0

    cout << !!a << endl; // 1
    cout << "----" << endl;

    /*
     * 与
     */
    a = 10;
    int b = 10;

    cout << (a && b) << endl;// 1

    a = 10;
    b = 0;

    cout << (a && b) << endl;// 0

    a = 0;
    b = 0;

    cout << (a && b) << endl;// 0
    cout << "-----" << endl;

    /*
     * 或
     */
    a = 10;
    b = 10;
    cout << (a || b) << endl;// 1

    a = 10;
    b = 0;

    cout << (a || b) << endl;// 1

    a = 0;
    b = 0;

    cout << (a || b) << endl;// 0

    return 0;
}