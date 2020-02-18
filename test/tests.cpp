#include "gtest/gtest.h"
#include "../decan/decan.h"
#include "../decan/group.h"
#include "../decan/student.h"
#include <string>

TEST (testStudent, getName) 
{
	Student student("������ ��������� �������", 0);
  EXPECT_EQ("������ ��������� �������", student.getName());
}

TEST(testStudent, getID)
{
	Student student("������ ��������� �������", 0);
	EXPECT_EQ(0, student.getID());
}

TEST(testGroup, getSize)
{
	Student student("������ ��������� �������", 0);
	Group group("Group");
	group.addStudent(&student);
	EXPECT_EQ(1, group.getSize());
}