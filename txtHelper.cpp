#include "stdafx.h"
#include "txtHelper.h"


txtHelper::txtHelper()
{
}


txtHelper::~txtHelper()
{
}


//将RGB转化为一个无符号的整数
unsigned int mixRGB(const unsigned int R, const unsigned int G, const unsigned int B)
{
	unsigned int result = 0;
	result = (R << 16) | (G << 8) | B;
	//cout << "转换之后的无符号整数为：" << result << endl;
	return result;
}


void txtHelper::readANDwrite(string inputPath, string outputPath)
{
	unsigned int R, G, B, result;
	ifstream infile(inputPath, ios::in);
	ofstream outfile(outputPath,ios::out);
	while (!infile.eof())
	{
		//设置RGB三个INT型变量，之后调用转换函数
		infile >> B;
		infile >> G;
		infile >> R;
		result = mixRGB(R, G, B);
		outfile << result << endl;
	}
	infile.close();
	outfile.close();

}
