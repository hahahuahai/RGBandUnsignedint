// RGBtest.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void printbinary(const unsigned int val)
{

	for (int i = 23; i >= 0; i--)
	{
		if (val & (1 << i))
			cout << "1";
		else
			cout << "0";
	}
}
//将RGB转化为一个无符号的整数
unsigned int mixRGB(const unsigned int R, const unsigned int G, const unsigned int B)
{
	unsigned int result = 0;
	result = (R << 16) | (G << 8) | B;
	cout << "转换之后的无符号整数为："<<result <<endl;
	return result;
}
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
	decomposeRGB(mixRGB(3,255,255));
	return 0;
}
