// RGBtest.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include"txtHelper.h"

using namespace std;

//将无符号整数还原成RGB
void decomposeRGB(const unsigned int input)
{
	unsigned int r, g, b;
	r = (input >> 16) & 0xff;
	g = (input >> 8) & 0xff;
	b = input & 0xff;
	cout << "R为："<<r << " " << "G为：" << g << " " << "B为：" << b << " " << endl;
}

int main()
{	
	txtHelper::readANDwrite("colordata.txt", "colordata_unsign.txt");

	return 0;
}
