#include <iostream>
#include <string>
#include <windows.h>

#include <mysql.h>
#include <mysqld_error.h>
#include <sstream>

#include <iomanip>
#include <stdlib.h>
#include <conio.h>
#include "Lecturer.h"
using namespace std;

Lecturer::Lecturer(string lecturer_name, string course_one, string course_two, int number_of_section_one, int number_of_section_two)
{

	lecturerName = lecturer_name;
	courseOne = course_one;
	courseTwo = course_two;
	numberOfSectionOne = number_of_section_one;
	numberOfSectionTwo = number_of_section_two;	


}

string Lecturer::getLectureName() const
{
	return lecturerName;
}

string Lecturer::getCourseOne() const
{
	return courseOne;
}

string Lecturer::getCourseTwo() const
{
	return courseTwo;
}

int Lecturer::getNoOfSecOne() const
{
	return numberOfSectionOne;
}

int Lecturer::getNoOfSecTwo() const
{
	return numberOfSectionTwo;
}

void Lecturer::displayLecturerInfo()
{
	cout << "\n\t\t\tLecturer Name:	" << getLectureName() << endl;
	cout << "\t\t\tFirst Course: " << getCourseOne() << endl;
	cout << "\t\t\tSecond Course: " << getCourseTwo() << endl;
	cout << "\t\t\tNumber of sections for first course:	" << getNoOfSecOne() << endl;
	cout << "\t\t\tNumber of sections for second course: " <<getNoOfSecTwo() <<endl;


}

void Lecturer::displayClassScheduleForLecturer1()
{
	std::string schedule[5][3] = {
	{"Lecture for Computer Graphics", "Lecture for Artificial Intelligence", "Office hours"},
	{"Lecture for Artificial Intelligence", "Lecture for Computer Graphics", "Office hours"},
	{"Lecture for Computer Graphics", "Lecture for Artificial Intelligence", "Office hours"},
	{"Lecture for Artificial Intelligence", "Lecture for Computer Graphics", "Office hours"},
	{"Lecture for Computer Graphics", "Lecture for Artificial Intelligence", "Office hours"}
	};
	
	std::string days[5] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	std::string times[3] = {"9:00 AM - 10:30 AM", "10:30 AM - 11:00 AM", "1:00 PM - 2:30 PM"};
	
	std::cout << "| Time | Monday | Tuesday | Wednesday | Thursday | Friday |" << std::endl;
	std::cout << "|-------|--------|---------|-----------|----------|----------|" << std::endl;
	
	for (int i = 0; i < 3; i++) {
	std::cout << "| " << times[i] << " ";
	for (int j = 0; j < 5; j++) {
	std::cout << "| " << schedule[j][i] << " ";
	}
	std::cout << "|" << std::endl;
	}
}

void Lecturer::displayClassScheduleForLecturer2()
{
	string schedule[5][3] = {
	{"Lecture for Introduction to Computer Science", "Lecture for Data Structures and Algorithms", "Office hours"},
	{"Lecture for Data Structures and Algorithms", "Lecture for Introduction to Computer Science", "Office hours"},
	{"Lecture for Data Structures and Algorithms", "Lecture for Introduction to Computer Science", "Office hours"},
	{"Lecture for Introduction to Computer Science", "Lecture for Data Structures and Algorithms", "Office hours"},
	{"Lecture for Data Structures and Algorithms", "Lecture for Introduction to Computer Science", "Office hours"}
	};
	
	string days[5] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	string times[3] = {"9:00 AM - 10:30 AM", "10:30 AM - 11:00 AM", "1:00 PM - 2:30 PM"};
	
	cout << "| Time | Monday | Tuesday | Wednesday | Thursday | Friday |" << std::endl;
	cout << "|-------|--------|---------|-----------|----------|----------|" << std::endl;
	
	
	for (int i = 0; i < 3; i++) {
	cout << "| " << times[i] << " ";
	for (int j = 0; j < 5; j++) {
	cout << "| " << schedule[j][i] << " ";
	}
	cout << "|" << std::endl;
	}
}

void Lecturer::displayClassScheduleForLecturer3()
{
	std::string schedule[5][3] = {
	{"Lecture for ICT", "Lecture for History", "Office hours"},
	{"Lecture for ICT", "Lecture for History", "Office hours"},
	{"Lecture for ICT", "Lecture for History", "Office hours"},
	{"Lecture for ICT", "Lecture for History", "Office hours"},
	{"Lecture for History", "Review session for upcoming exam", "Office hours"}
	};
	
	std::string days[5] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	std::string times[3] = {"9:00 AM - 10:30 AM", "10:30 AM - 11:00 AM", "1:00 PM - 2:30 PM"};
	
	std::cout << "| Time | Monday | Tuesday | Wednesday | Thursday | Friday |" << std::endl;
	std::cout << "|-------|--------|---------|-----------|----------|----------|" << std::endl;
	
	for (int i = 0; i < 3; i++) {
	std::cout << "| " << times[i] << " ";
	for (int j = 0; j < 5; j++) {
	std::cout << "| " << schedule[j][i] << " ";
	}
	std::cout << "|" << std::endl;
	}
}

void Lecturer::displayClassScheduleForLecturer4()
{
		std::string schedule[5][3] = {
	{"Lecture for Art", "Lecture for Litrature", "Office hours"},
	{"Lecture for Art", "Lecture for Litrature", "Office hours"},
	{"Lecture for Art", "Lecture for Litrature", "Office hours"},
	{"Lecture for Art", "Lecture for Litrature", "Office hours"},
	{"Lecture for Art", "Review session for upcoming exam", "Office hours"}
	};
	
	std::string days[5] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	std::string times[3] = {"9:00 AM - 10:30 AM", "10:30 AM - 11:00 AM", "1:00 PM - 2:30 PM"};
	
	std::cout << "| Time | Monday | Tuesday | Wednesday | Thursday | Friday |" << std::endl;
	std::cout << "|-------|--------|---------|-----------|----------|----------|" << std::endl;
	
	for (int i = 0; i < 3; i++) {
	std::cout << "| " << times[i] << " ";
	for (int j = 0; j < 5; j++) {
	std::cout << "| " << schedule[j][i] << " ";
	}
	std::cout << "|" << std::endl;
	}
}

void Lecturer::displayClassScheduleForLecturer5()
{
	std::string schedule[5][3] = {
	{"Lecture for Database Systems", "Lecture for Computer Architecture", "Office hours"},
	{"Lecture for Computer Architecture", "Lecture for Database Systems", "Office hours"},
	{"Lecture for Database Systems", "Lecture for Computer Architecture", "Office hours"},
	{"Lecture for Computer Architecture", "Lecture for Database Systems", "Office hours"},
	{"Lecture for Database Systems", "Lecture for Computer Architecture", "Office hours"}
	};
	
	std::string days[5] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	std::string times[3] = {"9:00 AM - 10:30 AM", "10:30 AM - 11:00 AM", "1:00 PM - 2:30 PM"};
	
	std::cout << "| Time | Monday | Tuesday | Wednesday | Thursday | Friday |" << std::endl;
	std::cout << "|-------|--------|---------|-----------|----------|----------|" << std::endl;
	
	for (int i = 0; i < 3; i++) {
	std::cout << "| " << times[i] << " ";
	for (int j = 0; j < 5; j++) {
	std::cout << "| " << schedule[j][i] << " ";
	}
	std::cout << "|" << std::endl;
	}
}

void Lecturer::displayClassScheduleForLecturer6()
{
	std::string schedule[5][3] = {
	{"Lecture for Machine Learning", "Lecture for Computer Security", "Office hours"},
	{"Lecture for Computer Security", "Lecture for Machine Learning", "Office hours"},
	{"Lecture for Machine Learning", "Lecture for Computer Security", "Office hours"},
	{"Lecture for Computer Security", "Lecture for Machine Learning", "Office hours"},
	{"Lecture for Machine Learning", "Lecture for Computer Security", "Office hours"}
	};
	
	std::string days[5] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	std::string times[3] = {"9:00 AM - 10:30 AM", "10:30 AM - 11:00 AM", "1:00 PM - 2:30 PM"};
	
	std::cout << "| Time | Monday | Tuesday | Wednesday | Thursday | Friday |" << std::endl;
	std::cout << "|-------|--------|---------|-----------|----------|----------|" << std::endl;
	
	for (int i = 0; i < 3; i++) {
	std::cout << "| " << times[i] << " ";
	for (int j = 0; j < 5; j++) {
	std::cout << "| " << schedule[j][i] << " ";
	}
	std::cout << "|" << std::endl;
	}
}

void Lecturer::displayClassScheduleForLecturer7()
{
	std::string schedule[5][3] = {
	{"Lecture for Computer Networks", "Lecture for Software Engineering", "Office hours"},
	{"Lecture for Software Engineering", "Lecture for Computer Networks", "Office hours"},
	{"Lecture for Computer Networks", "Lecture for Software Engineering", "Office hours"},
	{"Lecture for Software Engineering", "Lecture for Computer Networks", "Office hours"},
	{"Lecture for Computer Networks", "Lecture for Software Engineering", "Office hours"}
	};
	
	std::string days[5] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	std::string times[3] = {"9:00 AM - 10:30 AM", "10:30 AM - 11:00 AM", "1:00 PM - 2:30 PM"};
	
	std::cout << "| Time | Monday | Tuesday | Wednesday | Thursday | Friday |" << std::endl;
	std::cout << "|-------|--------|---------|-----------|----------|----------|" << std::endl;
	
	for (int i = 0; i < 3; i++) {
	std::cout << "| " << times[i] << " ";
	for (int j = 0; j < 5; j++) {
	std::cout << "| " << schedule[j][i] << " ";
	}
	std::cout << "|" << std::endl;
	}
}

void Lecturer::displayClassScheduleForLecturer8()
{
	std::string schedule[5][3] = {
	{"Lecture for Introduction to programming", "Lecture for Calculus I", "Office hours"},
	{"Lecture for Calculus I", "Lecture for Introduction to programming", "Office hours"},
	{"Lecture for Introduction to programming", "Lecture for Calculus I", "Office hours"},
	{"Lecture for Calculus I", "Lecture for Introduction to programming", "Office hours"},
	{"Lecture for Introduction to programming", "Lecture for Calculus I", "Office hours"}
	};
	
	std::string days[5] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	std::string times[3] = {"9:00 AM - 10:30 AM", "10:30 AM - 11:00 AM", "1:00 PM - 2:30 PM"};
	
	std::cout << "| Time | Monday | Tuesday | Wednesday | Thursday | Friday |" << std::endl;
	std::cout << "|-------|--------|---------|-----------|----------|----------|" << std::endl;
	
	for (int i = 0; i < 3; i++) {
	std::cout << "| " << times[i] << " ";
	for (int j = 0; j < 5; j++) {
	std::cout << "| " << schedule[j][i] << " ";
	}
	std::cout << "|" << std::endl;
	}
}

void Lecturer::displayClassScheduleForLecturer9()
{
	std::string schedule[5][3] = {
	{"Lecture for Calculus II", "Lecture for Physics I", "Office hours"},
	{"Lecture for Physics I", "Lecture for Calculus II", "Office hours"},
	{"Lecture for Calculus II", "Lecture for Physics I", "Office hours"},
	{"Lecture for Physics I", "Lecture for Calculus II", "Office hours"},
	{"Lecture for Calculus II", "Lecture for Physics I", "Office hours"}
	};
	
	std::string days[5] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	std::string times[3] = {"9:00 AM - 10:30 AM", "10:30 AM - 11:00 AM", "1:00 PM - 2:30 PM"};
	
	std::cout << "| Time | Monday | Tuesday | Wednesday | Thursday | Friday |" << std::endl;
	std::cout << "|-------|--------|---------|-----------|----------|----------|" << std::endl;
	
	for (int i = 0; i < 3; i++) {
	std::cout << "| " << times[i] << " ";
	for (int j = 0; j < 5; j++) {
	std::cout << "| " << schedule[j][i] << " ";
	}
	std::cout << "|" << std::endl;
	}
}

void Lecturer::displayClassScheduleForLecturer10()
{
	std::string schedule[5][3] = {
	{"Lecture for Physics II", "Lecture for Object oriented programming", "Office hours"},
	{"Lecture for Object oriented programming", "Lecture for Physics II", "Office hours"},
	{"Lecture for Physics II", "Lecture for Object oriented programming", "Office hours"},
	{"Lecture for Object oriented programming", "Lecture for Physics II", "Office hours"},
	{"Lecture for Physics II", "Lecture for Object oriented programming", "Office hours"}
	};
	
	std::string days[5] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	std::string times[3] = {"9:00 AM - 10:30 AM", "10:30 AM - 11:00 AM", "1:00 PM - 2:30 PM"};
	
	std::cout << "| Time | Monday | Tuesday | Wednesday | Thursday | Friday |" << std::endl;
	std::cout << "|-------|--------|---------|-----------|----------|----------|" << std::endl;
	
	for (int i = 0; i < 3; i++) {
	std::cout << "| " << times[i] << " ";
	for (int j = 0; j < 5; j++) {
	std::cout << "| " << schedule[j][i] << " ";
	}
	std::cout << "|" << std::endl;
	}
}

