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
}stu3; //结构体变量创建方式3


int main() {

    //结构体变量创建方式1
    struct student stu1; //struct 关键字可以省略

    stu1.name = "Elena";
    stu1.age = 18;
    stu1.score = 100;

    cout << "name: " << stu1.name << " age: " << stu1.age  << " score: " << stu1.score << endl;

    //结构体变量创建方式2
    struct student stu2 = { "Liu",19,60 };

    cout << "name: " << stu2.name << " age: " << stu2.age  << " score: " << stu2.score << endl;


    stu3.name = "Wu";
    stu3.age = 18;
    stu3.score = 80;


    cout << "name: " << stu3.name << " age: " << stu3.age  << " score: " << stu3.score << endl;

    return 0;
}