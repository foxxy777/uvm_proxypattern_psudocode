#pragma once

#include <iostream>
#include <map>
using namespace std;

class object {
public:
    virtual void print() {};

};

class obj_d1 :public object {
public:
    obj_d1() {//¹¹Ôìº¯Êý
        cout << "use user-defined constructor of obj_d1" << endl;
    };
    virtual void print() {
        cout << "obj_d1 instance already constructed" << endl;
    };

};


template<typename T1>
class objectproxy {
public:
    virtual T1 createobj() {
        T1 t1;
        return t1;
    };

};

template<typename T1>
class objectwrapper : public objectproxy<T1>{
public:
    virtual T1 createobj() {
        cout << "createobj of ojectwrapper" << endl;
        T1 t1;
        t1.print();
        return t1;
    };
    
};

