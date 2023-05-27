//
// Created by Liu on 2023/5/27.
//

#include<iostream>

using namespace std;

int main(){
    int num = 0;
    while (num < 10)
    {
        cout << "num = " << num << endl;
        num++;
    }
    cout << "------------" << endl;

    num = 0;
    do
    {
        cout << num << endl;
        num++;

    } while (num < 10);
    cout << "------------" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }
}
