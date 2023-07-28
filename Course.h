#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
#include <windows.h>

#include <mysql.h>
#include <mysqld_error.h>
#include <sstream>

#include <iomanip>
#include <stdlib.h>
#include <conio.h>
using namespace std;

class Course
{
	const char* username = "root";
	const char* database = "school";
	const char* password = "beykoz";
	const char* hostname = "localhost";
	unsigned int port = 3306;
	const char* unixsocket = NULL ;
	unsigned long clientflag = 0;

	public:
		explicit Course(string courseName, string lecturerName, string time, int numberOfStudentsEnrolled);
	
		string getCourseName();
		string getLecturerName();
		string getTime();
		int getNoOfSt();
		
		void displayCourseInfo();	
		void displayClassScheduleForCourse1();
		void displayClassScheduleForCourse2();
		void displayClassScheduleForCourse3();
		void displayClassScheduleForCourse4();
		
	protected:
		string cName;
		string lName;
		string cTime;
		int nstEnrld;
};


#endif
