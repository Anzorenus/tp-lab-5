#include <vector>
#include <string>
#include "Student.h"

#ifndef GROUP_H
#define GROUP_H

class Group 
{
    std::string title; // название группы
    std::string spec; // специальность
    std::vector<Student*> students; // вектор ссылок на студентов
	Student* head; // ссылка на старосту (из членов группы)
	Deanery* deanery; // ссылка на деканат
public:
    Group(std::string title, Deanery* deanery); // создание группы с указанием названия
	~Group(); // деструктор
	std::string getTitle(); // получить название группы
    void AddStudent(Student* newbee); // добавление студента
	void HeadmanElection(int seed = 13); // избрание старосты
    Student* SearchById(int id); // поиск студента по ИД
    Student* SearchByFio(std::string fio); // поиск студента по ФИО
    double GetAverageMark(); //вычисление соеднего балла в группе
    void Termnination(int id); //исключение студента из группы
	void AddRandomMarks(int amount = 5, int seed = 13); // добавление случайных оценок студентам
	std::string GetStatistics(); // получение статистики по успеваемости
	void softTermination(Student* student); // удаление без уничтожения экземпляра студента 
	void KickStudents(double level); // отчисление студентов за неуспеваемость
};

#endif