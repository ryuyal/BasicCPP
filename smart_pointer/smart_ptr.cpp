//
// Created by Liu on 2023/5/8.
//

#include<iostream>
using namespace std;

class Person{
    string name;
    int age;
public:
    Person(){
        cout << "Constructor of Person" << endl;
    }

    ~Person(){
        cout << "Deconstuctor of Person" << endl;
    }
};

int main(){
    Person * p = new Person(); // 通过指针创建新的Person对象
    delete p; // 释放空间
}