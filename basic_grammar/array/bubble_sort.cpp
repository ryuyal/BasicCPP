//
// Created by Liu on 2023/5/27.
//

#include<iostream>
using namespace std;

int main(){
    int arr[9] = { 4,2,8,0,5,7,1,3,9 };
    cout << "Before: " ;
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < 9 - 1; i++)
    {
        for (int j = 0; j < 9 - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << endl <<  "After:  ";
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}