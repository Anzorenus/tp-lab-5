#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>


class Group;
class Deanery;

// STUDENT

class Student {
	friend Group;
	friend Deanery;
private:
	int id; // ������������� ��������
	std::string fio; // ������� 
	Group* group; // ������ �� ������
	std::vector<int> marks; // ������ ������
	int num_marks;//������� ������
	double avg_mark;// ������� ������

public:
	Student(int , std::string );// ����������� 
	void addGroup(Group* ); // ���������� � ������ 
	void addMark(int);// ���������� � ������ ������ ����� ������ 
	double cnt_aver_marks(); // ���������� ������� ������ ��������
	
};

//GROUP

class Group {
	friend Deanery;
private:
	std::string title; // �������� ������
	std::vector <Student*> students;// ������ ���������
	Student* head;// ��������
	int num_sd_in_group; // ���������� ��������� 

public:
	Group(std::string );
	void addStudent(Student* );
	void electHead();
	void search_stud(int );
	double avg_group_mark();
	void del_stud(int);
	
};

//DEANERY

class Deanery {
private:
	std::string fileStud;
	std::string fileGroup;
	std::vector<Group*> groups;	// ������ �����
	std::vector<Student*> students;	// ������ ���� ���������
	int num_stud_ovall, num_group; // ���������� ���������, �����
	

public:
	Deanery(std::string, std::string);
	void create_students();
	void create_groups();
	void add_marks();
	void do_stat();
	void choose_heads();
	void move_student(std::string, std::string);
	void kick_stud();
	void print();
};