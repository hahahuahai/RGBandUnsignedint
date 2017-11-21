#pragma once
#include <iostream>
#include <fstream>
#include<string>

using namespace std;
class txtHelper
{
public:
	txtHelper();
	~txtHelper();

	static void readANDwrite(string inputPath, string outputPath);
};

