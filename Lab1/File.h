#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;

struct Examinee {
	string id;
	string name; 
	float toan, van, ngoaiNgu;
	float li, hoa, sinh;
	float su, dia, gdcd;
	float KHTN, KHXH;
	float total;
	string note;
	string tinh;
};

float round2(float n);
Examinee readExaminee(string line_info);
vector<Examinee> readExamineeList(string file_name);
void writeTotal(vector<Examinee> examinee_list, string out_file_name);
