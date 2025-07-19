#pragma once


extern "C" __declspec(dllexport) void test();
extern "C" __declspec(dllexport) void add(int,int);
/*
#pragma once

#ifdef __cplusplus
extern "C" {  // ����� C++ ���룬�� extern "C" ����
#endif

    __declspec(dllexport) void test();
    __declspec(dllexport) void add(int, int);

#ifdef __cplusplus
}
#endif
*/

/*
#pragma once

#ifdef MYDLL_EXPORTS  // �� DLL �����ж��� MYDLL_EXPORTS
    #define MYDLL_API __declspec(dllexport)
#else
    #define MYDLL_API __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C" {  // ȷ�� C++ ������ʹ�� C ������������
#endif

    MYDLL_API void test();
    MYDLL_API void add(int a, int b);

#ifdef __cplusplus
}
#endif
//����д���� Ҫ����Ŀ���� �� C/C++ �� Ԥ������ �� Ԥ���������� ����� MYDLL_EXPORTS��
*/

/*
// �����ĵ��룬ֻ���ĵ���
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

    #define MYDLL_API __declspec(dllexport)  // ʼ�յ���
    MYDLL_API void test();
    MYDLL_API void add(int a, int b);

#ifdef __cplusplus
}
#endif
*/

