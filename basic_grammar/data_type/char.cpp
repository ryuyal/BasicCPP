//
// Created by Liu on 2023/5/27.
//

#include<iostream>
using namespace std;

int main() {
    char ch = 'a';
    cout << "ch = " << ch << endl;
    cout << "size of char = " << sizeof(char) << endl;

    //ch = "abcde"; //错误，不可以用双引号
    //ch = 'abcde'; //错误，单引号内只能引用一个字符

    cout << "ASCII of ch = " << (int)ch << endl;  //查看字符a对应的ASCII码
    ch = 97; //可以直接用ASCII给字符型变量赋值
    cout << ch << endl;

    return 0;
}