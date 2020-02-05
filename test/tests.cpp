#include "gtest/gtest.h"
#include "../include/dean.h"
#include "../include/group.h"
#include "../include/student.h"

TEST(Deanery, dean_1) {
    Group* group = new Group("18-���");
    EXPECT_EQ("���", group->getSpec());
    delete group;
}

TEST(Deanery, dean_2) {
    Student* student = new Student("������� ��������� ���������", "18-���");
    student->setMarks();
    EXPECT_EQ(10, student->getMarks().size());
    delete student;
}

TEST(Deanery, dean_3) {
	Student* student_1 = new Student();
	Student* student_2 = new Student("������� ��������� ���������", "18-���");
	EXPECT_EQ(-1, student_1->getId());
	EXPECT_EQ(2, student_2->getId());
	EXPECT_EQ("18-���", student_2->getGroup());
	delete student_1;
	delete student_2;
}

TEST(Deanery, dean_4) {
	Group* group = new Group("18-���");
    Student* student = new Student("������� ��������� ���������", "18-���");
	group->addStudent(*student);

	EXPECT_EQ(3, group->findStudent("������� ��������� ���������")->getId());
    delete student;
    delete group;
}