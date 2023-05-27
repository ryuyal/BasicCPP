//
// Created by Liu on 2023/5/27.
//

/*
 * sizeof关键字可以统计数据类型所占内存大小
 *
 * sizeof(数据类型 or 变量)
 */

#include<iostream>
using namespace std;

int main() {

    cout << "Size of short: " << sizeof(short) << endl;

    cout << "Size of int: " << sizeof(int) << endl;

    cout << "Size of long: " << sizeof(long) << endl;

    cout << "Size of long long: " << sizeof(long long) << endl;

    return 0;
}