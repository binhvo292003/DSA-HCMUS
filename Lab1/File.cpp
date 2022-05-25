#include "File.h"

float round2(float n) {
	return round(n * 100) / 100;
}

Examinee readExaminee(string line_info) {
	ifstream in;
	in.open("Text.txt");
	
	Examinee cell;

	string s;
	getline(in, s, ',');
	cell.id = s;
	getline(in, s, ',');
	cell.name = s;

	getline(in, s, ',');
	if (s=="\0")
		s = "0";
	cell.toan = round2(stof(s));
	
	getline(in, s, ',');
	if (s == "\0")
		s = "0";
	cell.van = round2(stof(s));
	
	getline(in, s, ',');
	if (s == "\0")
		s = "0";
	cell.li = round2(stof(s));
	
	getline(in, s, ',');
	if (s == "\0")
		s = "0";
	cell.hoa = round2(stof(s));
	
	getline(in, s, ',');
	if (s == "\0")
		s = "0";
	cell.sinh = round2(stof(s));
	
	getline(in, s, ',');
	if (s == "\0")
		s = "0";
	cell.su = round2(stof(s));
	
	getline(in, s, ',');
	if (s == "\0")
		s = "0";
	cell.dia = round2(stof(s));
	
	getline(in, s, ',');
	if (s == "\0")
		s = "0";
	cell.gdcd = round2(stof(s));
	
	getline(in, s, ',');
	if (s == "\0")
		s = "0";
	cell.KHTN = round2(stof(s));
	
	getline(in, s, ',');
	if (s == "\0")
		s = "0";
	cell.KHXH = round2(stof(s));
	
	getline(in, s, ',');
	if (s == "\0")
		s = "0";
	cell.ngoaiNgu = round2(stof(s));
	
	getline(in, s, ',');
	if (s == "\0")
		s = "0";
	cell.note = s;
	
	getline(in, s, '\n');
	cell.tinh = s;

	cell.KHTN = cell.hoa + cell.li + cell.sinh;
	cell.KHXH = cell.gdcd + cell.dia + cell.su;

	cell.total = cell.toan + cell.van + cell.ngoaiNgu + cell.KHTN + cell.KHXH;

	in.close();

	return cell;
}

vector<Examinee> readExamineeList(string file_name) {
	vector<Examinee> all;
	
	ifstream in;
	in.open(file_name);

	while (!in.eof()) {
		Examinee cell;
		string s;
		getline(in, s, ',');
		cell.id = s;
		getline(in, s, ',');
		cell.name = s;

		getline(in, s, ',');
		if (s == "\0")
			s = "0";
		cell.toan = round2(stof(s));

		getline(in, s, ',');
		if (s == "\0")
			s = "0";
		cell.van = round2(stof(s));

		getline(in, s, ',');
		if (s == "\0")
			s = "0";
		cell.li = round2(stof(s));

		getline(in, s, ',');
		if (s == "\0")
			s = "0";
		cell.hoa = round2(stof(s));

		getline(in, s, ',');
		if (s == "\0")
			s = "0";
		cell.sinh = round2(stof(s));

		getline(in, s, ',');
		if (s == "\0")
			s = "0";
		cell.su = round2(stof(s));

		getline(in, s, ',');
		if (s == "\0")
			s = "0";
		cell.dia = round2(stof(s));

		getline(in, s, ',');
		if (s == "\0")
			s = "0";
		cell.gdcd = round2(stof(s));

		getline(in, s, ',');
		if (s == "\0")
			s = "0";
		cell.KHTN = round2(stof(s));

		getline(in, s, ',');
		if (s == "\0")
			s = "0";
		cell.KHXH = round2(stof(s));

		getline(in, s, ',');
		if (s == "\0")
			s = "0";
		cell.ngoaiNgu = round2(stof(s));

		getline(in, s, ',');
		if (s == "\0")
			s = "0";
		cell.note = s;

		getline(in, s, '\n');
		cell.tinh = s;

		cell.KHTN = cell.hoa + cell.li + cell.sinh;
		cell.KHXH = cell.gdcd + cell.dia + cell.su;

		cell.total = cell.toan + cell.van + cell.ngoaiNgu + cell.KHTN + cell.KHXH;

		all.push_back(cell);
	}
	in.close();

	return all;
}

void writeTotal(vector<Examinee> examinee_list, string out_file_name) {
	ofstream fout;

	fout.open(out_file_name);
	for (int i{}; i < examinee_list.size(); i++) {
		fout << examinee_list[i].id << " " << examinee_list[i].total << endl;
	}
	fout.close();

	return;
}