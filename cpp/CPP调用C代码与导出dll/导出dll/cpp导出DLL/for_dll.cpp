#include "pch.h"  // ����������� PCH �ͱ���������ɾ��, ���Ҫ�ڵ�һ��
#include <iostream>

#include "for_dll.h"  // ȷ��һ��

using namespace std;
void test() {
	cout << "dll�е�test()������ ������" << endl;
}

int add(int a, int b) {
	return a + b;
}
