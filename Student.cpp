#include <iostream>
#include <string>
#include <windows.h>

#include <mysql.h>
#include <mysqld_error.h>
#include <sstream>

#include <iomanip>
#include <stdlib.h>
#include <conio.h>
#include "Student.h"

using namespace std;


Student::Student(long int student_no ,string student_name,string dob ,string contact_info,string enrollment_status)
{
	studentNo = student_no;
	studentName = student_name;
	DateOb = dob;
	contactInfo = contact_info;
	enrollmentStatus = enrollment_status;
	
}
long int Student::getStNo()
{
	return studentNo;
}

string Student::getStName()
{
	return studentName;
}

string Student::getDob()
{
	return DateOb;
}

string Student::getContactInfo()
{
	return contactInfo;
}

string Student::getEnrollmentStatus()
{
	return enrollmentStatus;
}

void Student::displayStudentInfo()
{
	cout << "\n\t\t\tStudent No:	" << getStNo() << endl;
	cout << "\t\t\t Student Name: " << getStName() << endl;
	cout << "\t\t\tDate of birth: " << getDob() << endl;
	cout << "\t\t\tContact Information:	" << getContactInfo() << endl;
	cout << "\t\t\tEnrollment status: " <<getEnrollmentStatus() <<endl;
}

void Student::newAnnouncments()
{
	int operation;
	do 
	{
		system("cls");
		int i;
		cout << "For internship announcements enter 1"<<endl
			 << "For exam schedule announcements enter 2"<<endl
			 << "For other announcements enter 3"<<endl
			 << "0 to exit"<<endl;
		cin >> i;
		if (i == 1)
		{
			cout << "Attention college students!" << endl;
		    cout << "We are excited to announce that our company is offering a summer internship program for talented and motivated students." << endl;
		    cout << "This is a great opportunity to gain hands-on experience in your field of study and to build your professional network." << endl;
		    cout << "The internship program will run for 8 weeks, starting in June. All majors are welcome to apply." << endl;
		    cout << "If you are interested, please visit our website for more information and to submit your application." << endl;
		    cout << "We look forward to receiving your application and considering you for this exciting opportunity!" << endl;
		}	 	
		else if(i == 2)
		{
			cout << "Attention college students!" << std::endl;
	    cout << "We are writing to remind you about the upcoming final exam for our course." << endl;
	    cout << "The exam will be held on Friday, May 14th at 9:00 AM in Room 123 of the Student Union Building." << endl;
	    cout << "Please make sure to arrive on time and to bring your student ID and any necessary materials, such as pens and paper." << endl;
	    cout << "If you have any conflicts with the exam time, please contact the instructor as soon as possible to make arrangements." << endl;
	    cout << "We wish you the best of luck on the exam and encourage you to review the material thoroughly in the coming days." << endl;
		}
		else if(i == 3) 
		{
			std::string announcements[] = 
			{
		        "Attention students! There will be a meeting of the Student Council on Monday at 4:00 PM in Room 201.",
		        "The library will be closed on Friday for maintenance. Please plan accordingly.",
		        "The campus bookstore is having a sale on textbooks this week. Stop by and save some money on your course materials!",
		        "Don't forget about the career fair next Tuesday! This is a great opportunity to meet with potential employers and learn about job and internship opportunities.",
		        "The annual charity bake sale will be held on Wednesday in the Student Union Building. All proceeds go to a local homeless shelter. Come out and support a good cause!",
		        "There will be a guest lecture on Friday by a renowned scientist in the field of physics. The lecture will take place at 2:00 PM in the auditorium."
		    };
		
		    // Seed the random number generator
		    std::srand(std::time(nullptr));
		
		    // Generate a random index
		    int index = std::rand() % 6;
		
		    // Output the random announcement
		    std::cout << announcements[index] << std::endl;
		}
		
		else 
		{
			cout << "error enter correct input.\n";
		}
			cout <<"\n\n\n";
			cout << "enter any key to see other messages and 0 to exit."<<endl;
	} while(operation != 0);
	
	
	

} 

void Student::displayClassScheduleForStudent1()
{
    std::string schedule[4][7] = {
    {"Computer graphics", "Physics II", "Data structures and algorithm", "Computer graphics", "Physics II", "Free", "Free"},
    {"Artificial intelligence", "Object oriented programming", "Calculus II", "Artificial intelligence", "Object oriented programming", "Free", "Free"},
    {"Data structures and algorithm", "Computer graphics", "Physics II", "Data structures and algorithm", "Computer graphics", "Free", "Free"},
    {"Calculus II", "Artificial intelligence", "Object oriented programming", "Calculus II", "Artificial intelligence", "Free", "Free"}
  };

  // Print the table header
  std::cout << "| Time          | Monday        | Tuesday       | Wednesday     | Thursday      | Friday        | Saturday      | Sunday        |" << std::endl;
  std::cout << "|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|" << std::endl;

  // Print the schedule
  for (int i = 0; i < 4; i++) {
    std::string time;
    if (i == 0) {
      time = "9:00am-10:30am";
    } else if (i == 1) {
      time = "10:30am-12:00pm";
    } else if (i == 2) {
      time = "1:00pm-2:30pm";
    } else {
      time = "2:30pm-4:00pm";
    }
    std::cout << "| " << time << " |";
    for (int j = 0; j < 7; j++) {
      std::cout << " " << schedule[i][j] << " " << "|";
    }
    std::cout << std::endl;
  }
}

void Student::printResultForStudents()
{
	cout << setw(10) << "Student" << setw(8) << "Quiz" << setw(8) << "Midterm" << setw(8) << "Final" << setw(10) << "Project" << endl;
  cout << setw(10) << "--------" << setw(8) << "--------" << setw(8) << "--------" << setw(8) << "--------" << setw(10) << "--------" << endl;

  cout << setw(10) << "Alice" << setw(8) << 90 << setw(8) << 95 << setw(8) << 85 << setw(10) << 88 << endl;
  cout << setw(10) << "Bob" << setw(8) << 75 << setw(8) << 80 << setw(8) << 70 << setw(10) << 77 << endl;
  cout << setw(10) << "Charlie" << setw(8) << 88 << setw(8) << 90 << setw(8) << 92 << setw(10) << 94 << endl;
  cout << setw(10) << "Dave" << setw(8) << 82 << setw(8) << 84 << setw(8) << 78 << setw(10) << 81 << endl;
  cout << setw(10) << "Eve" << setw(8) << 95 << setw(8) << 97 << setw(8) << 96 << setw(10) << 98 << endl;
  cout << setw(10) << "Frank" << setw(8) << 70 << setw(8) << 72 << setw(8) << 68 << setw(10) << 71 << endl;
  cout << setw(10) << "Grace" << setw(8) << 80 << setw(8) << 82 << setw(8) << 76 << setw(10) << 79 << endl;
  cout << setw(10) << "Holly" << setw(8) << 85 << setw(8) << 87 << setw(8) << 83 << setw(10) << 86 << endl;
  cout << setw(10) << "Iris" << setw(8) << 90 << setw(8) << 92 << setw(8) << 88 << setw(10) << 91 << endl;
  cout << setw(10) << "Jake" << setw(8) << 75 << setw(8) << 77 << setw(8) << 73 << setw(10) << 76 << endl;
}

bool Student::whichStudent()
{
	int sections [5];
	for (int i = 0; i<5 ; i++)
	{
		int section1 = 0;
		if (sections [i] != 0)
		{
			cout << "Select which course you want to choose"
				 << "Object-Oriented Programming, Physics II, Calculus II, Calculus I, or Introduction to Programming";
				 
			sections[i] = section1 + 1;
			break;
		}
		else
		{
			break;
		}
	}
	return 1;
}

bool Student::fullOrNot()
{
	int i, subjects[5];
	for (int student = 0; student < 30 ; student++)
	{
		for (i = 0; i < 5 ; i++)
	{
		subjects[i] = subjects[i];
	}
	}
	return 1;
}