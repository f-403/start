
#include "MyClass.h"
#include <iostream>

// ʵ�� MyClass ��
MyClass::MyClass() {
    std::cout << "MyClass ���캯��" << std::endl;
}

MyClass::~MyClass() {
    std::cout << "MyClass ��������" << std::endl;
}

void MyClass::sayHello() {
    std::cout << "��ã����� DLL �� MyClass��,����sayHello��������" << std::endl;
}

// ������������
extern "C" MyClass* __cdecl CreateMyClass() {
    return new MyClass();
}

extern "C" void __cdecl DeleteMyClass(MyClass* ptr) {
    delete ptr;
}
extern "C" __declspec(dllexport) void MyClass_sayHello(MyClass* obj) {
    obj->sayHello();
}
/*
//Ҳ��������д
extern "C"  void __cdecl MyClass_sayHello(MyClass* obj) {
    obj->sayHello();
}

*/