#pragma once
#include "Group.h"
#include <string>
class Deanery {
private:
	vector<Group*> groups;
	void CreateStudents(string fn, Group* group);
public:
	void CreateGroups(string fn);
	void AddRandMarks(int num);//���������� ��������� ������ ���������
	void PrintStat();//���������a �� ������������ ��������� � �����
	void Transf(string fio, string title1, string title2);//������� ��������� �� ������ � ������
	void Expulsion(double points);//���������� ��������� �� ��������������
	void SaveData();//���������� ����������� ������ � ������
	void ChooseHead();//��������� ������� ������� � �������
	void PrintData();//����� ������ �� �������
};