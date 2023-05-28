//
// Created by Liu on 2023/5/28.
//

#include "delete.h"

int deletee(AddressBook * abs){
    string delete_name;
    cout << "Please input the name you want to delete: " << endl;
    cin >> delete_name;

    for (int i = 0; i < abs->size; ++i) {
        if (abs->contacts[i].name == delete_name){
            for (int j = i+1; j < abs->size; j++) {
                abs->contacts[j-1] = abs->contacts[j];
            }
            abs->size--;
            return i;
        }
    }
    return -1;
}