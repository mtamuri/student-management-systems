#include <iostream>
#include <string>
#include <windows.h>

#include <mysql.h>
#include <mysqld_error.h>
#include <sstream>

#include <iomanip>
#include <stdlib.h>
#include <conio.h>
#include "Admin.h"
using namespace std;


Admin::Admin()
{
}
	
	MYSQL* connectdatabase()
	{
		const char* hostname = "localhost";
		const char* username = "root";
		const char* password = "beykoz";
		const char* database = "school";
		unsigned int port = 3306;
		const char* unixsocket = NULL ;
		unsigned long clientflag = 0;
		MYSQL* conn;
		conn = mysql_init(0);
		conn = mysql_real_connect(conn, hostname , username, password, database, port, unixsocket, clientflag);
		MYSQL_ROW row;
    	MYSQL_RES* res;
		if(conn)
		{
			cout << "connected to database. "<< endl;
			return conn;
		}
		else
		{
			cout << "Failed to connect to databse." << endl;
			return conn;
		}
	}
void Admin::forSetStudent()
{ 
	const char* hostname = "localhost";
	const char* username = "root";
	const char* password = "beykoz";
	const char* database = "school";
	unsigned int port = 3306;
	const char* unixsocket = NULL ;
	unsigned long clientflag = 0;

	MYSQL * conn = connectdatabase();
	MYSQL_ROW row;
	MYSQL_RES* res;
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, hostname , username, password, database, port, unixsocket, clientflag);
		
	if(conn)
	{
		int qstate = 0;
		stringstream ss;
		string student_no, student_name, date_of_birth, contact_information, enrollemt_status;
		
		cout << "Enter Student Id: ";
		cin >> student_no;
		
		cout<< "Name: ";
		cin >> student_name ;
	
		cout<< "Birth date: ";
		cin >> date_of_birth ;
						
		cout<< "Contact (Phone Number): ";
		cin >> contact_information ;	
					
		cout<< "Is he/she enrolled?: ";
		cin >> enrollemt_status ;
		
		ss << "INSERT INTO student(student_no, student_name, date_of_birth, contact_information, enrollemt_status ) VALUES('"+student_no+"', '"+student_name+"', '"+date_of_birth+"', '"+contact_information+"', '"+enrollemt_status+"')";
		string query = ss.str();
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
		if(qstate == 0)
		{
			cout << "Record inserted...\n";
		}
		else
		{
			cout << "Failed to insert...\n";
		}
	}
	else { cout << "error";
	}

	
	
	
}

void Admin::forGetStudent()
{
	const char* hostname = "localhost";
	const char* username = "root";
	const char* password = "beykoz";
	const char* database = "school";
	unsigned int port = 3306;
	const char* unixsocket = NULL ;
	unsigned long clientflag = 0;

	MYSQL * conn = connectdatabase();
	MYSQL_ROW row;
	MYSQL_RES* res;
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, hostname , username, password, database, port, unixsocket, clientflag);

	if(conn)
	{
		int qstate = mysql_query(conn,"SELECT student_no, student_name, date_of_birth, contact_information, enrollemt_status");
		if(!qstate){
			res = mysql_store_result(conn);
			
			while(row= mysql_fetch_row(res)){
				cout<< row[0]<<"\t | \t"<< row[1]<<"\t | \t"<< row[2]<<"\t | \t"<< row[3]<<"\t | \t"<< row [4]<<"\t | \t"<< row[5]<<"\t | \t"<< row[6]<<"\t | \t"<< row[7]<< endl << endl;
			}
		}
	}
}

//


void Admin::forSetClasses()
{ 
	string class_name, instructor_name, class_time,  number_of_students_enrolled;
	const char* hostname = "localhost";
	const char* username = "root";
	const char* password = "beykoz";
	const char* database = "school";
	unsigned int port = 3306;
	const char* unixsocket = NULL ;
	unsigned long clientflag = 0;

	MYSQL * conn ;
	MYSQL_ROW row;
	MYSQL_RES* res;
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, hostname , username, password, database, port, unixsocket, clientflag);
		
	if(conn)
	{
		int qstate = 0;
		stringstream ss;
		
		cout << "Enter Class Name: ";
		cin >> class_name;
		
		cout<< "Instructor name: ";
		cin >> instructor_name ;
		
		cout<< "Class time: ";
		cin >> class_time ;
	
		cout<< "Number of students enrolled: ";
		cin >> number_of_students_enrolled ;
					
		ss << "INSERT INTO classes(class_name, instructor_name, class_time,  number_of_students_enrolled ) VALUES('"+class_name+"', '"+instructor_name+"', '"+class_time+"', '"+number_of_students_enrolled+"')";
		string query = ss.str();
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
		if(qstate == 0)
		{
			cout << "Record inserted...\n";
		}
		else
		{
			cout << "Failed to insert...\n";
		}
	}
	else { cout << "error";
	}

	
	
	
}
void Admin::forGetClasses()
{
	const char* hostname = "localhost";
	const char* username = "root";
	const char* password = "beykoz";
	const char* database = "school";
	unsigned int port = 3306;
	const char* unixsocket = NULL ;
	unsigned long clientflag = 0;

	MYSQL * conn ;
	MYSQL_ROW row;
	MYSQL_RES* res;
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, hostname , username, password, database, port, unixsocket, clientflag);

	if(conn)
	{
		int qstate = mysql_query(conn,"SELECT class_name, instructor_name, class_time,  number_of_students_enrolled from classes");
		if(!qstate){
			res = mysql_store_result(conn);
			
			while(row= mysql_fetch_row(res)){
				cout<< row[0]<<"\t | \t"<< row[1]<<"\t | \t"<< row[2]<<"\t | \t"<< row[3]<<"\t | \t"<< row [4]<<"\t | \t"<< row[5]<<"\t | \t"<< row[6]<<"\t | \t"<< row[7]<< endl << endl;
			}
		}
	}
}

void Admin::forSetLecturer()
{ 
	string lecturerName, numberOfSectionsForCourse1, numberOfSectionsForCourse2,  course1, course2;
	const char* hostname = "localhost";
	const char* username = "root";
	const char* password = "beykoz";
	const char* database = "school";
	unsigned int port = 3306;
	const char* unixsocket = NULL ;
	unsigned long clientflag = 0;

	MYSQL * conn ;
	MYSQL_ROW row;
	MYSQL_RES* res;
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, hostname , username, password, database, port, unixsocket, clientflag);
		
	if(conn)
	{
		int qstate = 0;
		stringstream ss;
		
		cout << "Enter Lecturer Name: ";
		cin >> lecturerName;
		
		cout<< "Enter name of first course lecturer gives: ";
		cin >> course1 ;
		
		cout<< "Enter name of second course lecturer gives: ";
		cin >> course2 ;

		
		cout<< "Number of Sections for first course the lecturer gives: ";
		cin >> numberOfSectionsForCourse1 ;
		
		cout<< "Number of Sections for second course the lecturer gives: ";
		cin >> numberOfSectionsForCourse2 ;
	
		
					
		ss << "INSERT INTO lecturer(lecturerName, numberOfSectionsForCourse1, numberOfSectionsForCourse2,  course1, course2 ) VALUES('"+lecturerName+"', '"+numberOfSectionsForCourse1+"', '"+numberOfSectionsForCourse1+"', '"+course1+"','"+course2+"')";
		string query = ss.str();
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
		if(qstate == 0)
		{
			cout << "Record inserted...\n";
		}
		else
		{
			cout << "Failed to insert...\n";
		}
	}
	else { cout << "error";
	}
	
}

void Admin::forGetLecturer()
{
	const char* hostname = "localhost";
	const char* username = "root";
	const char* password = "beykoz";
	const char* database = "school";
	unsigned int port = 3306;
	const char* unixsocket = NULL ;
	unsigned long clientflag = 0;

	MYSQL * conn ;
	MYSQL_ROW row;
	MYSQL_RES* res;
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, hostname , username, password, database, port, unixsocket, clientflag);

	if(conn)
	{
		int qstate = mysql_query(conn,"SELECT lecturerName, numberOfSectionsForCourse1, numberOfSectionsForCourse2,  course1, course2 from lecturer");
		if(!qstate){
			res = mysql_store_result(conn);
			
			while(row= mysql_fetch_row(res)){
				cout<< row[0]<<"\t | \t"<< row[1]<<"\t | \t"<< row[2]<<"\t | \t"<< row[3]<<"\t | \t"<< row [4]<<"\t | \t"<< row[5]<<"\t | \t"<< row[6]<<"\t | \t"<< row[7]<< endl << endl;
			}
		}
	}
}
