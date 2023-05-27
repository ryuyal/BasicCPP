//
// Created by Liu on 2023/5/27.
//

#include<iostream>
using namespace std;

/*
 * break  continue goto
 */
int main(){
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break; //跳出循环语句
        }
        cout << i << endl;
    }
    cout << "----------" << endl;

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << endl;
    }
    cout << "----------" << endl;

    cout << "1" << endl;

    goto FLAG;

    cout << "2" << endl;
    cout << "3" << endl;
    cout << "4" << endl;

    FLAG:

    cout << "5" << endl;

    return 0;
}