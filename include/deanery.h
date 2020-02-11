#pragma once
#include <string>
#include <vector>
#include "group.h"
#include "student.h"

class Deanery {
	private:
	vector<Group*> groups;
	public:
	void createStudent(int,string, Group*);
	Group* createGroup(string,string);
	void addMarks(Group*,string,int);
	double getAverageStudent(Group*, string);
	double getAverageGroup(Group*);
	void changeGroup(string, Group*, Group*);
	void deleteForMarks(Group*);
	void saveData();
	void initializeHeadmen(Group*);
	void printData();
}