#include <iostream>
#include <string>
#include <windows.h>

#include <mysql.h>
#include <mysqld_error.h>
#include <sstream>
#include "Student.h"
#include "Course.h"
#include "Admin.h"
#include "Exam.h"
#include "Lecturer.h"

#include <iomanip>
#include <stdlib.h>
#include <conio.h>


using namespace std;
Lecturer Lecturer1("Ayşe Öztürk", "Computer Graphics", "Artificial Intelligence",50, 30);
Lecturer Lecturer2("Mustafa Kaya", "Computer Science","Data Structures and Algorithms" ,50, 30);
Lecturer Lecturer3("Ashenafi Nati", "ICT","History", 50, 150);
Lecturer Lecturer4("Aymen Omer",  "Art","Litrature", 100, 30);
Lecturer Lecturer5("Mohammed Kemal","Database Systems","Computer Architecture", 25, 25);
Lecturer Lecturer6("Rami Mustefa", "Machine Learning"," Computer Security", 15, 66);
Lecturer Lecturer7("Hayat Kemal", "Computer Networks","Software Engineering", 22, 65);
Lecturer Lecturer8("Zebiba Yusuf", "Introduction to programming","Calculus I", 90, 90);
Lecturer Lecturer9("Abdurahman Fereja", "Calculus II","Physics I", 75, 90);
Lecturer Lecturer10("Abdughefar Nejashi", "Physics II","Object oriented programming", 75, 75);

Student Student1(2104010073 , "Ammar Mohammed Tofik","14/05/2002" ,"ammarmtofik@yahoo.com", "Enrolled");
Student Student2(2103010033 , "Mohammed Abdurezak","11/03/2004" ,"thisstudent@yahoo.com", "Enrolled");
Student Student3(2004010043 , "Omer Abdulfetah","04/11/2000" ,"thatstudent@yahoo.com", "Not Registered");

Exam Exam1(2104010073, 201, 17.5, 33.4 ,  40 );


void displayMessage()
{
	int operation;
	do
	{
		cout <<"\n\t\t\t|-------------------------------------------------------|"
			<< "\n\t\t\t|                                                       |"
			<< "\n\t\t\t|          <-Welcome to Student management system->                 |"
			<< "\n\t\t	|A place where you can manage everything about this education institute.|"
			<< "\n\t\t\t|                                                       |"
			<< "\n\t\t\t|-------------------------------------------------------|" << endl;

		cout << "\n\t\t\t[1]-FOR ADMINIS" << endl;
		cout << "\t\t\t[2]-STAFF OPERATION" << endl;
		cout << "\t\t\t[3]-STUDENT OPERATIONS" << endl;
		cout << "\t\t\t[4]-EXIT THE PROGRAM" << endl;
		cout << "\n\t\t\tChoose the operation you want to perform     : ";
		cin >> operation;

		cin.clear();
		cin.get();
		if (operation == 1)
		{
			int password = 5627;
			int passEntry;
			int i;			
			for ( i =0 ; i <= 3 ; i++)
			{	
				system("cls");
				cout << "This operation is only for admins please enter the password: ";
				cin >> passEntry;
				if (passEntry == password)
				{
				int stOperation; 
				string choice = "";
				system("cls");
				cout << "\n\t\t\tPlease Enter which operations you want to choose. \n";
				cout << "\t\t\t Enter 1 if you want to add new students \n\t\t\t Enter 2 if you want to add new courses: \n\t\t\t Enter 3 if you want to add new Lecturer:"; 
				cin >> stOperation;
	
				switch (stOperation)
					{
						case 1:
						
							Admin::forSetStudent();
							cout << "\n\t\t\tWould you like to look another options Y-for-yes N-for-NO ? "; cin >> choice;
							if (choice == "n" || choice == "N")
							{
								system("Cls");
								break;
							}
							
							break;
						case 2:
							Admin::forSetClasses();
							cout << "\n\t\t\tWould you like to look another options Y-for-yes N-for-NO ? "; cin >> choice;
							if (choice == "n" || choice == "N")
							{
								system("Cls");
								break;
							}
						
							break;
						
						case 3:
							Admin::forSetLecturer();
							cout << "\n\t\t\tWould you like to look another options Y-for-yes N-for-NO ? "; cin >> choice;
							if (choice == "n" || choice == "N")
							{
								system("Cls");
								break;
							}
						
							break;
											
						default:
							cout << "\n\t\t\tInvalid. Please Choose from 1 or 2" << endl;
		
							
							break;
					}
				}
				else 
				{
					cout << "Try again\n You have limited attempts!!!";
					system("pause");
					system("cls");
				}
			}
				
			
		}
				
			

		
		else if (operation == 2)
		{
			int lcOperation;
			system("cls");
			cout << "\n\t\t\tPlease Enter which operations you want to choose. \n";
			cout << "\t\t\t Enter 1 if you want to see the Lecturers information \n\t\t\t Enter 2 if you want to see schedules: "; 
			cin>> lcOperation;
			string choice = "";
			switch (lcOperation)
				{
					case 1:
					
						int lecInfo;
					do{
						system("Cls");
						cout << "\t\t\t Enter 1 -10 there are currently 10 lectureres giving two different courses ath the same time to see them, enter with lecturer number: "; 
						cin>> lecInfo;
						switch (lecInfo)
						{
							case 1:
								Lecturer1.displayLecturerInfo();
								cout << "\n\t\t\tWould you like to look another options Y-for-yes N-for-NO ? "; cin >> choice;
								if (choice == "n" || choice == "N")
									{
										system("Cls");
										displayMessage();
									}
									break;											
									system("pause");
							case 2:
							
							Lecturer2.displayLecturerInfo();
							cout << "\n\t\t\tWould you like to look another options Y-for-yes N-for-NO ? "; cin >> choice;
							if (choice == "n" || choice == "N")
								{
									system("Cls");
									displayMessage();
								}
								break;				
						
						
							system("pause");
							
							case 3:
							
							Lecturer3.displayLecturerInfo();
							cout << "\n\t\t\tWould you like to look another options Y-for-yes N-for-NO ? "; cin >> choice;
							if (choice == "n" || choice == "N")
								{
									system("Cls");
									displayMessage();
								}
								break;				
						
						
							system("pause");
							
							case 4:
							
							Lecturer4.displayLecturerInfo();
							cout << "\n\t\t\tWould you like to look another options Y-for-yes N-for-NO ? "; cin >> choice;
							if (choice == "n" || choice == "N")
								{
									system("Cls");
									displayMessage();
								}
								break;				
						
						
							system("pause");
							
							case 5:
							
							Lecturer5.displayLecturerInfo();
							cout << "\n\t\t\tWould you like to look another options Y-for-yes N-for-NO ? "; cin >> choice;
							if (choice == "n" || choice == "N")
								{
									system("Cls");
									displayMessage();
								}
								break;				
						
						
							system("pause");
							
							case 6:
							
							Lecturer6.displayLecturerInfo();
							cout << "\n\t\t\tWould you like to look another options Y-for-yes N-for-NO ? "; cin >> choice;
							if (choice == "n" || choice == "N")
								{
									system("Cls");
									displayMessage();
								}
								break;				
						
						
							system("pause");
							
							case 7:
							
							Lecturer7.displayLecturerInfo();
							cout << "\n\t\t\tWould you like to look another options Y-for-yes N-for-NO ? "; cin >> choice;
							if (choice == "n" || choice == "N")
								{
									system("Cls");
									displayMessage();
								}
								break;				
						
						
							system("pause");
							
							case 8:
							
							Lecturer8.displayLecturerInfo();
							cout << "\n\t\t\tWould you like to look another options Y-for-yes N-for-NO ? "; cin >> choice;
							if (choice == "n" || choice == "N")
								{
									system("Cls");
									displayMessage();
								}
								break;				
						
						
							system("pause");
							
							case 9:
							
							Lecturer9.displayLecturerInfo();
							cout << "\n\t\t\tWould you like to look another options Y-for-yes N-for-NO ? "; cin >> choice;
							if (choice == "n" || choice == "N")
								{
									system("Cls");
									displayMessage();
								}
								break;				
						
						
							system("pause");
							
							case 10:
							
							Lecturer10.displayLecturerInfo();
							cout << "\n\t\t\tWould you like to look another options Y-for-yes N-for-NO ? "; cin >> choice;
							if (choice == "n" || choice == "N")
								{
									system("Cls");
									displayMessage();
								}
								break;				
						
						
							system("pause");
							
							default:
							cout << "\n\t\t\tInvalid Lectuer Number. Please Choose from 1-10" << endl;
							cout << "\n\t\t\tWould you like to look another products Y-for-yes N-for-NO ? "; cin >> choice;
		
							if (choice == "n" || choice == "N")
							{
								system("Cls");
								displayMessage();
							}
							break;
						}
					} while (choice == "Y" || "y");
					case 2:
						int scheduleInfo;
					do{	
						system("Cls");
						cout << "\t\t\t For which lecturer do you want to see the schedule? Enter from 1-10 to see: "; 
						cin>> scheduleInfo;
						switch (scheduleInfo)
						{
							case 1:
								Lecturer1.displayClassScheduleForLecturer1();
								cout << "\n\t\t\tWould you like to look another options Y-for-yes N-for-NO ? "; cin >> choice;
								if (choice == "n" || choice == "N")
									{
										system("Cls");
										displayMessage();
									}
									break;											
									system("pause");
							
							case 2:
								Lecturer2.displayClassScheduleForLecturer2();
								cout << "\n\t\t\tWould you like to look another options Y-for-yes N-for-NO ? "; cin >> choice;
								if (choice == "n" || choice == "N")
									{
										system("Cls");
										displayMessage();
									}
									break;											
									system("pause");
							
							case 3:
								Lecturer3.displayClassScheduleForLecturer3();
								cout << "\n\t\t\tWould you like to look another options Y-for-yes N-for-NO ? "; cin >> choice;
								if (choice == "n" || choice == "N")
									{
										system("Cls");
										displayMessage();
									}
									break;											
									system("pause");
							
							case 4:
								Lecturer4.displayClassScheduleForLecturer4();
								cout << "\n\t\t\tWould you like to look another options Y-for-yes N-for-NO ? "; cin >> choice;
								if (choice == "n" || choice == "N")
									{
										system("Cls");
										displayMessage();
									}
									break;											
									system("pause");
									
							case 5:
								Lecturer5.displayClassScheduleForLecturer5();
								cout << "\n\t\t\tWould you like to look another options Y-for-yes N-for-NO ? "; cin >> choice;
								if (choice == "n" || choice == "N")
									{
										system("Cls");
										displayMessage();
									}
									break;											
									system("pause");
									
							case 6:
								Lecturer6.displayClassScheduleForLecturer6();
								cout << "\n\t\t\tWould you like to look another options Y-for-yes N-for-NO ? "; cin >> choice;
								if (choice == "n" || choice == "N")
									{
										system("Cls");
										displayMessage();
									}
									break;											
									system("pause");
									
							case 7:
								Lecturer7.displayClassScheduleForLecturer7();
								cout << "\n\t\t\tWould you like to look another options Y-for-yes N-for-NO ? "; cin >> choice;
								if (choice == "n" || choice == "N")
									{
										system("Cls");
										displayMessage();
									}
									break;											
									system("pause");
									
							case 8:
								Lecturer8.displayClassScheduleForLecturer8();
								cout << "\n\t\t\tWould you like to look another options Y-for-yes N-for-NO ? "; cin >> choice;
								if (choice == "n" || choice == "N")
									{
										system("Cls");
										displayMessage();
									}
									break;											
									system("pause");
									
							case 9:
								Lecturer9.displayClassScheduleForLecturer9();
								cout << "\n\t\t\tWould you like to look another options Y-for-yes N-for-NO ? "; cin >> choice;
								if (choice == "n" || choice == "N")
									{
										system("Cls");
										displayMessage();
									}
									break;											
									system("pause");
									
							case 10:
								Lecturer10.displayClassScheduleForLecturer10();
								cout << "\n\t\t\tWould you like to look another options Y-for-yes N-for-NO ? "; cin >> choice;
								if (choice == "n" || choice == "N")
									{
										system("Cls");
										displayMessage();
									}
									break;											
									system("pause");
									
							default:
							cout << "\n\t\t\tInvalid Lectuer Number. Please Choose from 1-10" << endl;
							cout << "\n\t\t\tWould you like to look another products Y-for-yes N-for-NO ? "; cin >> choice;
		
							if (choice == "n" || choice == "N")
							{
								system("Cls");
								displayMessage();
							}
							break;						
						}
					} while (choice == "Y" || "y");	
						
				}
			}
		else if (operation == 3)
		{
			int studentOperation;			
			system("Cls");
			cout << "\n\t\t\tPlease Enter which operations you want to choose. \n";
			cout << "\t\t\t Enter 1 if you want to see the schedule for the students. \n\t\t\t Enter 2 if you want to see exam processes. \n\t\t\t Enter 3 if you want to see results. \n\t\t\t Enter 4 if you want to choose courses \n\t\t\t Enter 5 if you want to see announcements"; 
			cin>> studentOperation;
			string choice;
			switch (studentOperation)
			{
				
				case 1:
								Student1.displayClassScheduleForStudent1();
								cout << "\n\t\t\tWould you like to look another options Y-for-yes N-for-NO ? "; cin >> choice;
								if (choice == "n" || choice == "N")
									{
										system("Cls");
										displayMessage();
									}
									break;											
									system("pause");
				case 2:
								Exam1.displayMessageForExam();
								cout << "\n\t\t\tWould you like to look another options Y-for-yes N-for-NO ? "; cin >> choice;
								if (choice == "n" || choice == "N")
									{
										system("Cls");
										displayMessage();
									}
									break;											
									system("pause");
				
				case 3:
								system("Cls");
								Student1.printResultForStudents();
								cout << "\n\t\t\tWould you like to look another options Y-for-yes N-for-NO ? "; cin >> choice;
								if (choice == "n" || choice == "N")
									{
										system("Cls");
										displayMessage();
									}
									break;											
									system("pause");
				
				case 4:
								system("Cls");
								Student1.whichStudent();

								cout << "\n\t\t\tWould you like to look another options Y-for-yes N-for-NO ? "; cin >> choice;
								if (choice == "n" || choice == "N")
									{
										system("Cls");
										displayMessage();
									}
									break;											
									system("pause");					
									
				case 5:
								system("Cls");
								Student::newAnnouncments();
								cout << "\n\t\t\tWould you like to look another options Y-for-yes N-for-NO ? "; cin >> choice;
								if (choice == "n" || choice == "N")
									{
										system("Cls");
										displayMessage();
									}
									break;											
									system("pause");					
									
									
				default:
				cout << "\n\t\t\tInvalid input. Please Choose from 1-5" << endl;
				cout << "\n\t\t\tWould you like to look another products Y-for-yes N-for-NO ? "; cin >> choice;

				if (choice == "n" || choice == "N")
					{
						system("Cls");
						displayMessage();
					}
				break;					
				
			}
			
			system("pause");
		}
		else if (operation == 4)
		{
			// to exit the program
			cout << "\n\t\t\tGOOD BYE :) . COME BACK SOMEOTHER TIME....." << endl;
			exit(0);
		}
		else
		{
			system("cls");
			cout << "\n\t\t\tInvalid input. please Enter valid choice." << endl;

		}
	} while (operation != 4);

}

int main() 
{
	 displayMessage();
	return 0;
}

