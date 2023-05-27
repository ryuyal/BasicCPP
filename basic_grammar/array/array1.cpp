//
// Created by Liu on 2023/5/27.
//

#include<iostream>
using namespace std;

int main(){
    //定义方式1
    //数据类型 数组名[元素个数];
    int score[10];

    //利用下标赋值
    score[0] = 100;
    score[1] = 99;
    score[2] = 85;

    //利用下标输出
    cout << score[0] << endl;
    cout << score[1] << endl;
    cout << score[2] << endl;
    cout << "----------------" << endl;


    //第二种定义方式
    //数据类型 数组名[元素个数] =  {值1，值2 ，值3 ...};
    //如果{}内不足10个数据，剩余数据用0补全
    int score2[10] = { 100, 90,80,70,60,50,40,30,20,10 };

    //逐个输出
    //cout << score2[0] << endl;
    //cout << score2[1] << endl;

    //一个一个输出太麻烦，因此可以利用循环进行输出
    for (int i = 0; i < 10; i++)
    {
        cout << score2[i] << endl;
    }
    cout << "----------------" << endl;

    //定义方式3
    //数据类型 数组名[] =  {值1，值2 ，值3 ...};
    int score3[] = { 100,90,80,70,60,50,40,30,20,10 };

    for (int i = 0; i < 10; i++)
    {
        cout << score3[i] << endl;
    }
    cout << "----------------" << endl;

    //数组名用途
    //1、可以获取整个数组占用内存空间大小
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

    cout << "sizeof(arr) = " << sizeof(arr) << endl;
    cout << "sizeof(arr[0]) = " << sizeof(arr[0]) << endl;
    cout << "number of elements: " << sizeof(arr) / sizeof(arr[0]) << endl;

    //2、可以通过数组名获取到数组首地址
    cout << "First address = " << (long long)arr << endl;
    cout << "First element address = " << (long long)&arr[0] << endl;
    cout << "Second element address = " << (long long)&arr[1] << endl;
}