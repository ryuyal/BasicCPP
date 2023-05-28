//
// Created by Liu on 2023/5/28.
//

#ifndef BASICCPP_ABS_H
#define BASICCPP_ABS_H

#include<iostream>
using namespace std;
#include<string>
#define MAX_CONTACTS 1000

struct Contact{
    string name;
    int gender;
    int age;
    string phone;
    string addr;
};

struct AddressBook{
    struct Contact contacts[MAX_CONTACTS];
    int size;
};

#endif //BASICCPP_ABS_H
