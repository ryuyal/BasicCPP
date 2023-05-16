//
// Created by Liu on 2023/5/8.
//

#include<iostream>
#include <memory>

using namespace std;

class Person{
    string name;
    int age;
public:
    Person(){
        cout << "Constructor of Person" << endl;
    }

    ~Person(){
        cout << "Deconstuctor of Person" << endl;
    }
};

void test(){
    // 使用shared_ptr会自动调用Person的构造和析构函数
    shared_ptr<Person> person = make_shared<Person>();
    shared_ptr<Person> person2 = person;

    // 查看person 和 person2的引用计数结果
    cout << person.use_count() << endl;
    cout << person2.use_count() << endl;
}
int main(){
    Person * p = new Person(); // 通过指针创建新的Person对象
    delete p; // 释放空间
    cout << "---------------------" << endl;

    /*
     * 使用shared_ptr
     */
    cout << "Use Shared Pointer" << endl;
    shared_ptr<int> sp = make_shared<int>(10);
    cout << *sp << endl;
    cout << "---------------------" << endl;

    test();
}