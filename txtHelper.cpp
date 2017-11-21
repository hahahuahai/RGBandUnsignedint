#include "stdafx.h"
#include "txtHelper.h"


txtHelper::txtHelper()
{
}


txtHelper::~txtHelper()
{
}


//��RGBת��Ϊһ���޷��ŵ�����
unsigned int mixRGB(const unsigned int R, const unsigned int G, const unsigned int B)
{
	unsigned int result = 0;
	result = (R << 16) | (G << 8) | B;
	//cout << "ת��֮����޷�������Ϊ��" << result << endl;
	return result;
}


void txtHelper::readANDwrite(string inputPath, string outputPath)
{
	unsigned int R, G, B, result;
	ifstream infile(inputPath, ios::in);
	ofstream outfile(outputPath,ios::out);
	while (!infile.eof())
	{
		//����RGB����INT�ͱ�����֮�����ת������
		infile >> B;
		infile >> G;
		infile >> R;
		result = mixRGB(R, G, B);
		outfile << result << endl;
	}
	infile.close();
	outfile.close();

}
