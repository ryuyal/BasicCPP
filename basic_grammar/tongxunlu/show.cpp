//
// Created by Liu on 2023/5/28.
//

#include "show.h"

void show(AddressBook * abs){
    if (abs->size == 0){
        cout << "NULL!!!" << endl;
        return;
    }
    for (int i = 0; i < abs->size; ++i) {
//        cout << "-------------------" << endl;
        cout << "name : " << abs->contacts[i].name << "\t" <<
             "gender : " << (abs->contacts[i].gender == 1 ? "Male" : "Female") << "\t" <<
             "age : " << abs->contacts[i].age << "\t" <<
             "phone : " << abs->contacts[i].phone << "\t" <<
             "address : " << abs->contacts[i].addr << endl;
//        cout << "-------------------" << endl;
    }

//    system("pause");
//    system("cls");
}