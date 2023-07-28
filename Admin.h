#ifndef ADMIN_H
#define ADMIN_H

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



class Admin
{
	const char* username = "root";
	const char* database = "school";
	const char* password = "beykoz";
	const char* hostname = "localhost";
	unsigned int port = 3306;
	const char* unixsocket = NULL ;
	unsigned long clientflag = 0;
	public:
		explicit Admin();
		
		static void forSetStudent();
		static void forGetStudent();
		
		static void forSetClasses();
		static void forGetClasses();
		
		static void forSetLecturer();
		static void forGetLecturer();
		
		
	protected:
				
		
};
#endif