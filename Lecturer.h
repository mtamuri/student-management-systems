#ifndef LECTURER_H
#define LECTURER_H

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



class Lecturer
{
	const char* username = "root";
	const char* database = "school";
	const char* password = "beykoz";
	const char* hostname = "localhost";
	unsigned int port = 3306;
	const char* unixsocket = NULL ;
	unsigned long clientflag = 0;
	
	public:
		explicit Lecturer(string lecturer_name, string course_one, string course_two, int number_of_section_one, int number_of_section_two );
		
		//getters
		string getLectureName() const;
		string getCourseOne() const;
		string getCourseTwo() const;	
		int getNoOfSecOne() const;
		int getNoOfSecTwo() const;
		
		
		void displayClassScheduleForLecturer1();
		void displayClassScheduleForLecturer2();
		void displayClassScheduleForLecturer3();
		void displayClassScheduleForLecturer4();
		void displayClassScheduleForLecturer5();
		void displayClassScheduleForLecturer6();
		void displayClassScheduleForLecturer7();
		void displayClassScheduleForLecturer8();
		void displayClassScheduleForLecturer9();
		void displayClassScheduleForLecturer10();
		
		void displayExamScheduleForLecturer();
		void displayLecturerInfo();		
		
	protected:
			string lecturerName;
			string courseOne;
			string courseTwo;
			int numberOfSectionOne;
			int numberOfSectionTwo;	
		
};
#endif