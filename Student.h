#ifndef STUDENT_H
#define STUDENT_H

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



class Student
{
	const char* username = "root";
	const char* database = "school";
	const char* password = "beykoz";
	const char* hostname = "localhost";
	unsigned int port = 3306;
	const char* unixsocket = NULL ;
	unsigned long clientflag = 0;
	
	public:
		explicit Student(long int student_no ,string student_name,string dob ,string contact_info,string enrollment_status);
		long int getStNo();
		string getStName();
		string getDob();
		string getContactInfo();
		string getEnrollmentStatus();
		
		void displayStudentInfo();	
		static void newAnnouncments();
		void printResultForStudents();
		void displayClassScheduleForStudent1();
		
		bool whichStudent();
		bool fullOrNot ();
		
	
	protected:
		int studentNo;
		string studentName;
		string DateOb;
		string contactInfo;
		string enrollmentStatus;		
		
};
#endif
//string student_name ,string starting_date,string registration_date,string faculty,string advisor,string program,string student_no,string term