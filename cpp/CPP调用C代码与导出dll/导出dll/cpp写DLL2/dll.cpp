#include <iostream>
#include "dll.h"
void test() {
	std::cout << "�����dll2, test()����������" << std::endl;
}

void add(int a, int b) {
	std::cout << "a+b=" << a + b << std::endl;
}