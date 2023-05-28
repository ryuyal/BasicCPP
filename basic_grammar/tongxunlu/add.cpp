//
// Created by Liu on 2023/5/28.
//

#include "add.h"


void add(AddressBook * abs){
    if (abs->size == MAX_CONTACTS){
        cout << "FULL!!!" << endl;
        return;
    }else{
        // 添加具体联系人
        string m_name;
        cout << "Please input name: " << endl;
        cin >> m_name;
        abs->contacts[abs->size].name = m_name;


        while(true) {
            cout << "Please input gender: " << endl;
            cout << "1--male" << endl;
            cout << "2--female" << endl;
            int m_sex = 0;
            cin >> m_sex;
            // 输入正确
            if (m_sex == 1 || m_sex == 2) {
                abs->contacts[abs->size].gender = m_sex;
                break;
            }
            cout << "ERROR GENDER!!!" << endl;
        }

        cout << "Please input age: " << endl;
        int m_age = 0;
        cin >> m_age;
        abs->contacts[abs->size].age = m_age;

        cout << "Please input phone: " << endl;
        string m_phone;
        cin >> m_phone;
        abs->contacts[abs->size].phone = m_phone;

        cout << "Please input address: " << endl;
        string m_address;
        cin >> m_address;
        abs->contacts[abs->size].addr = m_address;

        abs->size++;
        cout << "add successfully!" << endl;

//        system("pause"); // 请按任意键继续
//        // 清屏
//        system("cls");
    }
}