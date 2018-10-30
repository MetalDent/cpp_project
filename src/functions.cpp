#include "../include/functions.h"
#include <iostream>
#include<fstream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
#include<boost/algorithm/string.hpp>

using namespace std;

int fooFun()
{
    double a=100;
    return a;
}

vector<vector<string>> program_open()
{
	string file_name = "../database/db.csv", delimeter = ",";

	ifstream file(file_name);
	vector<vector<string>> dataList;
	string line = "";

	while(getline(file, line))
	{
		vector<string> vect;
		boost::algorithm::split(vect, line, boost::is_any_of(delimeter));
		dataList.push_back(vect);
	}

	return dataList;
}
