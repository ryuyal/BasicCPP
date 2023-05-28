//
// Created by Liu on 2023/5/28.
//

#include "find.h"

void find(AddressBook * abs){
    string f_name;
    cout << "Please input the name you want to find: " << endl;
    cin >> f_name;
    for (int i = 0; i < abs->size; ++i) {
        if (abs->contacts[i].name == f_name){
            cout << "name : " << abs->contacts[i].name << "\t" <<
                 "gender : " << (abs->contacts[i].gender == 1 ? "Male" : "Female") << "\t" <<
                 "age : " << abs->contacts[i].age << "\t" <<
                 "phone : " << abs->contacts[i].phone << "\t" <<
                 "address : " << abs->contacts[i].addr << endl;
            return ;
        }
    }
    cout << "Did not find this contact" << endl;
}