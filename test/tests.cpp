#include "gtest/gtest.h"
#include "../tp-lab-5/dean.h"
#include "../tp-lab-5/group.h"
#include "../tp-lab-5/student.h"

TEST(Deanery, dean_1) {
    Dean* dean = new Dean();
    EXPECT_EQ(4, dean->getGroups());
    delete dean;
}

TEST(Deanery, dean_2) {
    Dean* dean = new Dean();
    EXPECT_EQ(100, dean->getStudents());
    delete dean;
}

TEST(Deanery, dean_3) {
    Group* group = new Group("18-���");
    EXPECT_EQ("���", group->getSpec());
    delete group;
}

TEST(Deanery, dean_4) {
    Student* student = new Student("������� ��������� ���������", "18-���");
    student->setMarks();
    EXPECT_EQ(10, student->getMarks().size());
    delete student;
}

TEST(Deanery, dean_5) {
	Student student_1;
	Student student_2("������� ��������� ���������", "18-���");
	EXPECT_EQ(-1, student_1.getId());
	EXPECT_EQ(1, student_2.getId());
	EXPECT_EQ("18-���", student_2.getGroup());
	delete student_1;
	delete student_2;
}

TEST(Deanery, dean_6) {
	Group group("18-���");
    Student student("������� ��������� ���������", "18-���");
	group.addStudent(student);

	EXPECT_EQ(1, group.findStudent("������� ��������� ���������")->getId());
    delete student;
    delete group;
}