#ifndef EXAM_H
#define EXAM_H

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

class Exam
{
	const char* username = "root";
	const char* database = "school";
	const char* password = "beykoz";
	const char* hostname = "localhost";
	unsigned int port = 3306;
	const char* unixsocket = NULL ;
	unsigned long clientflag = 0;
	
	public:
		explicit Exam(long int stId, int classId, double quiz, double final , double project);
		
		//setters 
		void setQuiz(double quiz);
		void setFinal(double final);
		void setProject(double project);
			
		//getters 
		long int getStId();
		int getClassId();
		double getQuiz();
		double getFinal();
		double getProject();
		double getTotalResult();
	
		void convertor() const; // which converts 100 to A's	
		void calculateGPA();
		void calculateCGPA();
		void method();
		void displayMessageForExam();

		

	protected:
		long int st_id;
		int class_id;
		double r_quiz;
		double r_final;
		double r_project;
		double totalResult = r_quiz + r_final + r_project;
		
	
};
#endif
