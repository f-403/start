#include "myclass.h"
#include <iostream>

myclass::myclass() {
	std::cout << "myclass���캯���� ����" << std::endl;
}

myclass::~myclass() {
	std::cout << "myclass����ɾ����" << std::endl;

}

void myclass::my_class_test() {
	std::cout << "���Ƕ���ķ���my_class_test(),�������ڱ� ����" << std::endl;
}

myclass* create_myclass() {
	return new myclass();//���ض���
}
void delete_myclass(myclass* my_class) {
	delete my_class;//ɾ���������Ķ���
}

void myclass_function(myclass* my_class) {
	std::cout << "����׼���������ĺ���" << std::endl;
	my_class->my_class_test();
}