#include <iostream>
#include <string>
#include <windows.h>

#include <mysql.h>
#include <mysqld_error.h>
#include <sstream>

#include <iomanip>
#include <stdlib.h>
#include <conio.h>
#include "Exam.h"

using namespace std;

Exam::Exam(long int stId, int classId, double quiz, double final , double project )
{
	st_id = stId;
	class_id = classId;
	
}
void Exam::setQuiz(double quiz)
{
	cout << "Enter quiz result: "<<endl;
	cin >> quiz;
	r_quiz = quiz;
}

void Exam::setFinal(double final)
{
	cout << "Enter final result: "<<endl;
	cin >> final;
	r_final = final;
}

void Exam::setProject(double project)
{
	cout << "Enter project result: "<<endl;
	cin >> project;
	r_project = project;
}


long int Exam::getStId()
{
	return st_id;
}

int Exam::getClassId()
{
	return class_id;
}

double Exam::getQuiz()
{
	return r_quiz;
}

double Exam::getFinal()
{
	return r_final;
}

double Exam::getProject()
{
	return r_project;
}

double Exam::getTotalResult()
{
//	cout << "Please enter your quiz result, final result and project result respectively: "<< endl;
//	cin>> Exam::r_quiz;
//	cin>> Exam::r_project;
//	cin>> Exam::r_final;
	return totalResult;
}

void Exam::calculateGPA()
{
    int q;
    system("cls");
    cout<<"-------------- GPA Calculating -----------------"<<endl;
    cout<<" How many subject's points do you want to calculate? : ";
    cin>>q;

    float credit [q];
    float point [q];

    cout<<endl;
    for(int i=0;i<q;i++)
    {
        cout<<"Enter the credit for the subject "<<i+1<<": ";
        cin>>credit[i];
        cout<<endl;
        cout<<"Enter the point of the subject "<<i+1<<": ";
        cin>>point[i];
        cout<<"-----------------------------------\n\n"<<endl;
    }

    float sum=0;
    float tot;
    for(int j=0;j<q;j++)
    {
        tot=credit[j]*point[j];
        sum=sum+tot;
    }

    float totCr=0;
    for(int k=0;k<q;k++)
    {
        totCr=totCr+credit[k];
    }

    cout<<"\n\n\nTotal Points: "<<sum<<" . Total Credits: "<<totCr<<" .Total GPA: "<<sum/totCr<<" ."<<endl;


    sub:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                calculateGPA();
                break;
        case 2:
                displayMessageForExam();
                break;
        case 3:
                exit(EXIT_SUCCESS);

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
    }
}

void Exam::calculateCGPA()
{
    system("cls");
    int l;
    cout<<"-------------- CGPA Calculating -----------------\n\n"<<endl;
    cout<<"How many semester results do you want input? :";
    cin>>l;
    cout<<"\n\n"<<endl;
    float semrs[l];
    int i;

    for(i=0;i<l;i++)
    {
        cout<<" Enter Semester "<<i+1<<" Result(GPA): ";
        cin>>semrs[i];
        cout<<"\n"<<endl;
    }

    float semtot=0;
    for(int j=0;j<l;j++)
    {
        semtot=semtot+semrs[j];
    }

    cout<<"******** Your CGPA is "<<semtot/l<<" **********"<<endl;


    sub:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                calculateCGPA();
                break;
        case 2:
                displayMessageForExam();
                break;
        case 3:
                exit(EXIT_SUCCESS);

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
    }

}

void Exam::method()
{
    system("cls");
    cout<<"--------------- Method of Calculating GPA & CGPA ---------------\n\n"<<endl;
    cout<<" GPA= Sum of (Credit*Point) / total of credits \n"<<endl;
    cout<<" CGPA=  Sum of GPA / number of semesters "<<endl;
    cout<<"-----------------------------------------------------------------\n\n"<<endl;

    sub:
    int inmenu;
    cout<<"1. Go Back to Main Menu"<<endl;
    cout<<"2. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                displayMessageForExam();
                break;
        case 2:
                exit(EXIT_SUCCESS);

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
    }
}

void Exam::convertor() const
{
	
	if (totalResult >= 90)
	{
		cout << "A+\n";
	}
	
	else if (totalResult >= 80)
	{
		cout << "A\n";
	}
	
	else if (totalResult >= 70)
	{
		cout << "B+\n";
	}
	
	else if (totalResult >= 60)
	{
		cout << "B\n";
	}
	
	else if (totalResult >= 50)
	{
		cout << "C\n";
	}
	
	else if (totalResult >= 40)
	{
		cout << "D\n";
	}
	
	else if (totalResult >= 30)
	{
		cout << "E\n";
	}
	
	else if (totalResult <= 30)
	{
		cout << "F\n";
	}
	
	else 
	{
		cout << "Enter Valid Marks\n";
	}
}

void Exam::displayMessageForExam()
{
    system("cls");
    int input;
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"                    GPA & CGPA Calculator (Developed by Ohid)             "<<endl;
    cout<<"--------------------------------------------------------------------------\n"<<endl;
    cout<<"            MENU:"<<endl;
    cout<<"                   1. Calculate GPA (Grade Point Average)"<<endl;
    cout<<"                   2. Calculate CGPA (Cummulative Grade Point Average)"<<endl;
    cout<<"                   3. Method that is applied here for calclating GPA & CGPA"<<endl;
    cout<<"                   4. Exit Application"<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;
    sub:
    cout<<"Enter your choice: ";
    cin>>input;
    switch(input)
    {
        case 1:
                calculateGPA();
                break;

        case 2:
                calculateCGPA();
                break;
        case 3:
                method();
                break;
        case 4:
                exit(EXIT_SUCCESS);
                break;
        default:
            cout<<"You have entered wrong input.Try again!\n"<<endl;
            goto sub;
            break;
    }
        
}






