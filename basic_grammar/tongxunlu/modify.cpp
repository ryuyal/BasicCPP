//
// Created by Liu on 2023/5/28.
//

#include "modify.h"

void modify(AddressBook *abs){
    cout << "Please input the contact you want to modify " << endl;

    string m_name;
    cin >> m_name;

    for (int i = 0; i < abs->size; ++i) {
        if (abs->contacts[i].name == m_name){
            cout << "Please input the new name: " << endl;
            string n_name;
            cin >> n_name;
            abs->contacts[i].name = n_name;

            cout << "Please input the new phone: " << endl;
            string n_phone;
            cin >> n_phone;
            abs->contacts[i].phone = n_phone;

            cout << "modify successfully!!!" << endl;
            return ;
        }
    }
    cout << "modify failure!" << endl;
}