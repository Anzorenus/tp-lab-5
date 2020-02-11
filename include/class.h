#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>

class Group;
class Deanery;

class Student
{
	friend Group;
	friend Deanery;

public:

	Student(int id, std::string fio);
	void JoinGroup(Group * group);
	void AddMark(int number);
	double AvrMark();

private:

	int id;
	std::string fio;
	Group *group;
	std::vector<int> marks;
};


class Group
{
	friend Deanery;

public:

	Group(std::string title);
	void JoinGroup(Student *student);
	void ChooseLid();
	int Search(int id);  //����� �� ������ � ������ ������� � 0-���
	double AvrMark();
	void Delete(int id);

	//��� �������� 
	std::string GetLider();

private: 

	std::string title;
	std::vector<Student *> students;
	Student *lider;

};

class Deanery
{
public:

	void CreateSt(std::vector<std::string> fio);
	void CreateGr(std::string title1, std::string title2, std::string title3);
	void AddMarks();
	void Statictic(FILE *list); // ������� � ��������
	void ChangeGr(int id, std::string title);
	void DeleteSt(int id);
	void SaveData(FILE *students); // ���������� ��������� ����� � ���������
	void ChooseLid();
	void about(); //���� �����, ��� ����������, ������ � ������� �� �������

	//��� �������� 
	std::string GroupName(int number);

private:

	std::vector<Group> groups;
	std::vector<Student> allstudents;
};
