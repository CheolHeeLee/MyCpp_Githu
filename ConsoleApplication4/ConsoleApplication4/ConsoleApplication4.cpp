// ConsoleApplication4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	//int *ptr_x, *ptr_y; OK 실수하지 않기 위해서 *를 변수명 앞에 둔다.
	//int* ptr_x, ptr_y; NO!!!
	
	int x = 5; 
	double y = 10.0;
	int *ptr_x = &x;
	double *ptr_y = &y;

	cout << sizeof(x) << endl;
	cout << sizeof(y) << endl;
	cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
	cout << sizeof(&y) << " " << sizeof(ptr_y) << endl;
	return 0;
}
