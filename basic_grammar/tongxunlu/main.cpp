//
// Created by Liu on 2023/5/28.
//

#include <iostream>
using namespace std;

#include "abs.h"
#include "add.h"
#include "clearAll.h"
#include "delete.h"
#include "find.h"
#include "modify.h"
#include "show.h"

void showMenu(){
//    cout << "Hello, World!" << std::end;
    cout << "****************************" << endl;
    cout << "**** 1. add    Contacts ****" << endl;
    cout << "**** 2. show   Contacts ****" << endl;
    cout << "**** 3. delete Contacts ****" << endl;
    cout << "**** 4. find   Contacts ****" << endl;
    cout << "**** 5. modify Contacts ****" << endl;
    cout << "**** 6. clear  Contacts ****" << endl;
    cout << "****      0. EXIT!!!    ****" << endl;
    cout << "****************************" << endl;

}

int main() {

    AddressBook abs;
    abs.size = 0;


    int select = 0;

    while(true){
        showMenu();

        cin >> select;

        switch (select) {
            case 1: // 添加
                add(&abs);
                break;
            case 2: // 显示
                show(&abs);
                break;
            case 3: // 删除
            {
                if (deletee(&abs) == -1){
                    cout << "dont have this contact" << endl;
                }else{
                    cout << "delete successfully" << endl;
                }
                break;
            }
            case 4: // 查找
                find(&abs);
                break;
            case 5: // 修改
                modify(&abs);
                break;
            case 6: // 清空
                clearAll(&abs);
                break;
            case 0: // 退出
                cout << "Byebye!" << endl;
//                system("pause"); // 加这个会出现 “请按任意键继续...”
                return 0;
            default:
                break;
        }
    }

    return 0;
}
