//
// Created by Liu on 2023/5/16.
//

#include<iostream>
#include<cassert>
using namespace  std;

class Person{
public:
    string name;
    int age;
public:
    Person(){
        name = "Liu";
        age = 25;
        cout << "Constructor of Person" << endl;
    }

    ~Person(){
        cout << "Deconstructor of Person" << endl;
    }
};

template<class T>
class Smart_Pointer{
private:
    T * _ptr;
    size_t * _count;
public:
    Smart_Pointer(T * p = nullptr){
        _ptr = p;
        if (p == nullptr){
            _count = new size_t(0);
        }else{
            _count = new size_t(1);
        }

        cout << "Constructor of Smart Pointer" << endl;
    }
    // 拷贝构造函数
    Smart_Pointer(Smart_Pointer & sp){
        _ptr = sp._ptr;
        _count = sp._count;
        (*_count)++;
        cout << "Copy Constructor of Smart Pointer" << endl;
    }
    T * operator->(){
        assert(_ptr != nullptr); // assert() 括号中的表达式不成立的时候就报错
        return _ptr;
    }

    T & operator*(){
        assert(_ptr != nullptr);
        return *_ptr;
    }

    Smart_Pointer & operator=(Smart_Pointer & sp){
        if (sp._ptr == _ptr) return *this;
        // 1. 解决旧的
        (*_count)--;
        if (*_count == 0){
            delete _ptr;
            delete _count;
            cout << "Deconstrutor of Smart Pointer" << endl;
        }

        // 2. 指向新的
        _ptr = sp._ptr;
        _count = sp._count;
        (*_count)++;
        return *this;
    }

    size_t useCount(){
        return *_count;
    }

    ~Smart_Pointer(){
        if(_ptr == nullptr){
            cout << "Smart Pointer is null" << endl;
            return;
        }
        (*_count)--;

        if(*_count == 0){
            delete _ptr;
            delete _count;

            cout << "Deconstrutor of Smart Pointer" << endl;
        }
    }
};

int main(){
    Smart_Pointer<Person> sp(new Person());
    cout << "name: " << sp->name << endl;
    cout << "age: " << (*sp).age << endl;
    cout << "use_count: " << sp.useCount() << endl;

    Smart_Pointer<Person> sp2(sp);
    cout << "use_count of sp2: " << sp2.useCount() << endl;
    cout << "use_count of sp: " << sp.useCount() << endl;

    cout << "---------------------" << endl;
    Smart_Pointer<Person> sp3 = sp;
    cout << "use_count of sp3: " << sp3.useCount() << endl;
    cout << "use_count of sp: " << sp.useCount() << endl;
    cout << "use_count of sp2: " << sp2.useCount() << endl;
}