#include <iostream>
#include <vector>
#include <string>
#include <istream>
#include "Dean.h"
#include "Group.h"
#include "Student.h"

using namespace std;

int main() {
	system("chcp 1251");
	string filename = "students1.txt";
	Dean dean(filename);

	dean.set_random_marks("17�-2", 7);
	dean.set_random_marks("18���-2", 8);
	dean.set_random_marks("19��-1", 7);

	dean.choose_head("17�-2");
	dean.choose_head("18���-2");
	dean.choose_head("19��-1");

	dean.find_group("17�-2")->set_spec("�������������");
	dean.find_group("18���-2")->set_spec("���������� ���������� � �����������");
	dean.find_group("19��-1")->set_spec("����������������");

	dean.write("output1.txt");

	dean.find_group("17�-2")->expel_student("������ ������ ���������");
	dean.student_transfer("������ ���� ���������", "17�-2", "19��-1");
	dean.check_progress(4.5);
	dean.choose_head("17�-2");
	dean.choose_head("18���-2");
	dean.choose_head("19��-1");
	dean.write("output2.txt");
}