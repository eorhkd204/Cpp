#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Ram.h"
using namespace std;

int main() {
	Ram ram;
	ram.write(100, 20);
	ram.write(101, 30);
	char res = ram.read(100) + ram.read(101);
	ram.write(102, res);
	cout << "102 번지의 파일 " << (int)ram.read(102) << endl;

	return 0;
}
