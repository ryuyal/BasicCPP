//
// Created by Liu on 2023/5/27.
//

#include<iostream>
using namespace std;

//结构体定义
struct student
{
    //成员列表
    string name;  //姓名
    int age;      //年龄
    int score;    //分数
};


int main() {

    struct student stu = { "Elena",18,100, };

    struct student * p = &stu;

    p->score = 80; //指针通过 -> 操作符可以访问成员

    cout << "name: " << p->name << " age: " << p->age << " score: " << p->score << endl;


    return 0;
}
