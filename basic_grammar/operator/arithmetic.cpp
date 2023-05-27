//
// Created by Liu on 2023/5/27.
//

#include<iostream>
using namespace std;

/*
 * 算术运算符
 */
int main() {

    /*
     * 加减乘除
     */

    int a1 = 10;
    int b1 = 3;

    cout << "a1 = " << a1<< " b1 = " << b1 << endl;

    cout << "a1 + b1 = " << a1 + b1 << endl;
    cout << "a1 - b1 = " << a1 - b1 << endl;
    cout << "a1 * b1 = " << a1 * b1 << endl;
    cout << "a1 / b1 = " << a1 / b1 << endl;  //两个整数相除结果依然是整数
    cout << "double a1 / b1 = " << double(a1) / b1 << endl;
    cout << "----------------" << endl;

    int a2 = 10;
    int b2 = 20;
    cout << "a2 = " << a2<< " b2 = " << b2 << endl;
    cout << "a2 / b2 = " << a2 / b2 << endl;
    cout << "double a2 / b2 = " << double (a2) / b2 << endl;
    cout << "-----------------" << endl;

    int a3 = 10;
    int b3 = 0;
    //cout << a3 / b3 << endl; //报错，除数不可以为0


    //两个小数可以相除
    double d1 = 0.5;
    double d2 = 0.25;
    cout << "d1 = " << d1<< " d2 = " << d2 << endl;
    cout << "d1 / d2 = " << d1 / d2 << endl;
    cout << "-----------------" << endl;



    /*
     * 取模 %
     */
    cout << "a1 % b1 = " << a1 % b1 << endl;
    cout << "-----------------" << endl;

    /*
     * 自增和自减 ++ --
     */
    //后置递增
    int a = 10;
    cout << "a++ = " << a++ << endl; //等价于a = a + 1
    cout << "a = " << a << endl; // 11

    //前置递增
    int b = 10;
    cout << "++b = " << ++b << endl;
    cout << "b = " << b << endl; // 11

    return 0;
}