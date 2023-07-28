#include <iostream>
#include <string>
#include <windows.h>

#include <mysql.h>
#include <mysqld_error.h>
#include <sstream>

#include <iomanip>
#include <stdlib.h>
#include <conio.h>
#include "Course.h"
using namespace std;


Course::Course(string courseName, string lecturerName, string time, int numberOfStudentsEnrolled)
{
	cName = courseName;
	lName = lecturerName;
	cTime = time;
	nstEnrld = numberOfStudentsEnrolled;
}

string Course::getCourseName()
{
	return cName;
}

string Course::getLecturerName()
{
	return lName;
}

string Course::getTime()
{
	return cTime;
}

int Course::getNoOfSt()
{
	return nstEnrld;
}

void Course::displayClassScheduleForCourse1()
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

