#include <iostream>
#include <string>
#include <windows.h>
#include <mysql.h>
#include <mysqld_error.h>
#include <sstream>


using namespace std;

const char* hostname = "localhost";
const char* username = "root";
const char* password = "beykoz";
const char* database = "school";
unsigned int port = 3306;
const char* unixsocket = NULL ;
unsigned long clientflag = 0;


int main()
{
	MYSQL* conn;


	int student_no;
	string student_name;
	string starting_date;
	string registration_date;
	int term;
	string faculty;
	string advisor;
	string program;


	bool ProgramIsOpened = true;
	int answer;

	char* consult;
	char* sentence;
	string sentence_aux;



	if (!(conn = mysql_init(0)))
	{
		cout<< "ERROR: MySQL object could not be created."<<endl;

	}

	else
	{
		if(!mysql_real_connect(conn, hostname , username, password, database, port, unixsocket, clientflag))
		{
			cout<< "ERROR: some database info is wrong or do not exist."<<endl;
			cout<< mysql_error(conn) <<endl;
		}
		else
		{

			cout << "Logged in." << endl << endl;

			while (ProgramIsOpened)
			{
				cout << "Enter Student Id: ";
				cin >> student_no;
				//cin.ignore(100, '\n');
				cout<< "Name: ";
				cin >> student_name ;

				cout<< "Starting date: ";
				cin >> starting_date ;

				cout<< "Trem: ";
				cin >> term ;

				cout<< "Faculty: ";
				cin >> faculty ;

				cout<< "Advisor: ";
				cin >> advisor ;

				cout<< "Program: ";
				cin >> program ;

				cout<< "Registration date: ";
				cin >> registration_date ;



				sentence_aux = "INSERT INTO student(student_no, student_name, starting_date, term, faculty, advisor, program, registration_date ) VALUES(student_no, student_name, starting_date, term, faculty, advisor, program, registration_date)";
				sentence = new char[sentence_aux.length() + 1];
				strcpy(sentence, sentence_aux.c_str());

		//		consult = new char[strlen(sentence) + sizeof(int) + strlen(Name) + strlen(BirthDate) + sizeof(float) ];
		//		sprintf(consult , sentence , College_ID, Name, BirthDate, Grade);


				if(mysql_ping(conn))
				{
					cout << "Error: Impossible to connect." << endl;
					cout << mysql_error(conn) << endl ;

				}

				if(mysql_query(conn, consult))
				{
					cout << "ERROR: " << mysql_error(conn) << endl ;
					rewind(stdin);
					getchar();
				}
				else
				{
					cout<< "Info added correctly." << endl;
				}
				mysql_store_result(conn);

				cout << endl << "Another?" << endl;
				cout <<"[1]: Yes" << endl;
				cout <<"[0]: No" << endl;
				cout <<"Answer: " << endl;
				cin.ignore(100, '\n');
				if (answer == 0)
				{
					ProgramIsOpened = false;
				}
				cout << endl ;
			}
		}
	}

	cout << "BYE!" << endl;
	return 0;
}
