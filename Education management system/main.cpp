//#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct student
{
     string firstName;
     string lastName;
     string id;
     string level;
     string courses;
     string grades;
     string register_;

}studentData;

struct doctor
{
    string firstName;
    string lastName;
    string degree;
    string courses;
    string mobile;

}docData[80];

struct Course
{
    string courseName;
    string courseCode;
    string doctorName;
    string grade;

}corData[50];

struct studentGrade
{
    string grade;
    string studentID;
    string answer;

};

int main()
{
    int i=0,j;
    char choice;

    while(1)
    {
        system("cls");

        cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
        cout<<"\n\n\t\t\tEducation Management System \n\n";
        cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
        cout<<"\n\n\t\t\tMain Application\n\n";
        cout<<"Enter your choice: "<<endl;
        cout<<"1.Students information"<<endl;
        cout<<"2.Doctors information"<<endl;
        cout<<"3.Courses information"<<endl;
        //cout<<"4.Grades information"<<endl;
        cout<<"4.Exit"<<endl;
        cin>>choice;

        system("cls");


        switch(choice)
        {
            //1.Students information

            case '1':
            {

                while(1)
                {
                    system("cls");
                    cout<<"\t\t\tStudents Information\n\n\n";
                    cout<<"Enter your choice: "<<endl;
                    cout<<"1.Add new student\n";
                    cout<<"2.Find a student\n";
                    cout<<"3.Find your courses\n";
                    cout<<"4.Add new course\n";
                    cout<<"5.Return to main\n";
                    cin>>choice;
                    switch (choice)
                    {
                        //Insert new student data
                        case '1':
                        {
                            ofstream f1("student.txt",ios::app);
                            for(i=0; choice!='n'||choice!='N' ;++i)
                            {
                                if((choice=='y')||(choice=='Y')||(choice=='1'))
                                {
                                    cout<<"Enter First name: ";
                                    cin>>studentData.firstName;
                                    cout<<"Enter Last name: ";
                                    cin>>studentData.lastName;
                                    cout<<"Enter student ID: ";
                                    cin>>studentData.id;
                                    cout<<"Enter student level: ";
                                    cin>>studentData.level;
                                    cout<<"Enter student courses: ";
                                    cin>>studentData.courses;
                                    cout<<"Enter student Grade: ";
                                    cin>>studentData.grades;

                                    f1<<studentData.firstName<<endl<<studentData.lastName<<endl
                                    <<studentData.id<<endl<<studentData.level<<endl
                                    <<studentData.courses<<studentData.grades<<endl;

                                    cout<<"If you want to enter new data enter Y, if not enter N to Finish:  ";
                                    cin>>choice;
                                }
                            }
                            f1.close();

                        }
                        continue;

                        //Display student data
                        case '2':
                        {
                            ifstream f2("student.txt");
                            cout<<"Enter the first name of student that you search for : ";
                            string str;
                            cin>>str;
                            cout<<endl;
                            int notFound=0;
                            for(j=0; (j<i)||(!f2.eof());++j)
                            {
                                getline(f2,studentData.firstName);
                                if(studentData.firstName==str)
                                {
                                    notFound = 1;
                                    cout<<"First Name: "<<studentData.firstName<<endl;
                                    getline(f2,studentData.lastName);
                                    cout<<"Last Name: "<<studentData.lastName<<endl;

                                    getline(f2,studentData.level);
                                    cout<<"Level: "<<studentData.level<<endl;

                                    getline(f2,studentData.id);
                                    cout<<"ID number: "<<studentData.id<<endl;
                                    cout<<"------------------------------------------"<<endl;
                                }
                            }

                            if(notFound==0)
                            {
                                cout<<"No Record Found"<<endl;
                            }

                            f2.close();
                            cout<<"Press any key two times to continue";
                        }
                        continue;

                        //Find your courses
                        case '3':
                        {
                            ifstream f2("student.txt");
                            cout<<"Enter your first name to find your courses : ";
                            string str;
                            cin>>str;
                            cout<<endl;
                            int notFound=0;
                            for(j=0; (j<i)||(!f2.eof());++j)
                            {
                                getline(f2,studentData.firstName);
                                if(studentData.firstName==str)
                                {
                                    notFound=1;
                                    cout<<"First Name: "<<studentData.firstName<<endl;
                                    getline(f2,studentData.lastName);
                                    cout<<"Last Name: "<<studentData.lastName<<endl;
                                    getline(f2,studentData.level);
                                    cout<<"Level: "<<studentData.level<<endl;
                                    getline(f2,studentData.id);
                                    cout<<"ID number: "<<studentData.id<<endl<<endl;
                                    getline(f2,studentData.courses);
                                    cout<<"Your courses are : "<<studentData.courses<<endl;
                                    cout<<"------------------------------------------"<<endl;
                                }
                            }

                            if(notFound==0)
                            {
                                cout<<"You do not have any courses yet"<<endl;
                            }

                            f2.close();
                            cout<<"Press any key two times to continue";

                        }
                        continue;

                        //Add new courses
                        case '4':
                        {
                            ifstream f2("student.txt");
                            cout<<"Enter your first name to add your new course : ";
                            string str;
                            cin>>str;
                            cout<<endl;
                            int notFound=0;
                            for(j=0; (j<i)||(!f2.eof());++j)
                            {
                                getline(f2,studentData.firstName);
                                if(studentData.firstName==str)
                                {
                                    notFound = 1;
                                    cout<<"First Name: "<<studentData.firstName<<endl;
                                    getline(f2,studentData.lastName);
                                    cout<<"Last Name: "<<studentData.lastName<<endl;
                                    getline(f2,studentData.level);
                                    cout<<"Level: "<<studentData.level<<endl;
                                    getline(f2,studentData.id);
                                    cout<<"ID number: "<<studentData.id<<endl;
                                    getline(f2,studentData.courses);
                                    cout<<"Your courses are before adding your course : "<<studentData.courses<<endl;
                                    cout<<"Enter your new courses: ";
                                    ofstream f1("student.txt",ios::app);
                                    cin>>studentData.courses;
                                    f1<<studentData.courses<<endl;
                                    cout<<"Your new course are : "<<studentData.courses<<endl;
                                    cout<<"------------------------------------------"<<endl;

                                }

                            }
                            if(notFound==0)
                            {
                                cout<<"Your name not here, Or may be you are not allowed to add new courses"<<endl;
                            }

                            f2.close();
                            cout<<"Press any key two times to continue";

                        }

                        case '5':
                        {
                            break;
                        }
                    }
                    break;
                }
            }
            continue;

            //Doctors information
            case '2':
            {

                while(1)
                {
                    system("cls");

                    cout<<"\t\t\tDoctors Information\n\n\n";
                    cout<<"Enter your choice: "<<endl;
                    cout<<"1.Add new Doctor\n";
                    cout<<"2.Find a Doctor\n";
                    cout<<"3.Return to main\n";
                    cin>>choice;

                    switch (choice)
                    {
                        //Add new Doctor
                        case '1':
                        {
                            ofstream d1("doctor.txt",ios::app);
                            for(i=0; choice!='n'&& choice!='N' ;++i)
                            {
                                if((choice=='Y')||(choice=='y')||(choice=='1'))
                                {
                                    cout<<"Enter Doctor First name: ";
                                    cin>>docData[i].firstName;
                                    cout<<"Enter Doctor Last name:: ";
                                    cin>>docData[i].lastName;
                                    cout<<"Enter Doctor degree: ";
                                    cin>>docData[i].degree;
                                    cout<<"Enter Doctor courses: ";
                                    cin>>docData[i].courses;
                                    cout<<"Enter Doctor Phone Number: ";
                                    cin>>docData[i].mobile;

                                    d1<<docData[i].firstName<<endl<<docData[i].lastName<<endl
                                    <<docData[i].degree<<endl<<docData[i].courses<<endl
                                    <<docData[i].mobile<<endl;

                                    cout<<"If you want to enter new data please enter Y , If not enter N : ";
                                    cin>>choice;
                                }
                            }
                            system("cls");

                            d1.close();
                        }

                        continue;

                        //Search for doctor
                        case '2':
                        {
                            ifstream d2("doctor.txt");
                            cout<<"Enter the name of the doctor that you search for : ";
                            //find
                            string str;
                            cin>>str;

                            cout<<endl;
                            int notFound=0;
                            for(j=0 ;((j<i)||(!d2.eof())) ;++j)
                            {
                                getline(d2,docData[j].firstName);
                                if(docData[j].firstName==str)
                                {
                                    notFound=1;
                                    cout<<"First name: "<<docData[j].firstName<<endl;
                                    getline(d2,docData[j].lastName);
                                    cout<<"Last name: "<<docData[j].lastName<<endl;
                                    getline(d2,docData[j].degree);
                                    cout<<"Qualification: "<<docData[j].degree<<endl;

                                    getline(d2,docData[j].courses);
                                    cout<<"Course that doctor teach: "<<docData[j].courses<<endl;

                                    getline(d2,docData[j].mobile);
                                    cout<<"Phone Number: "<<docData[j].mobile<<endl;
                                    cout<<"------------------------------------------"<<endl;
                                }
                            }

                            d2.close();
                            if(notFound==0)
                            {
                                cout<<"Your doctor not here :D, Try to search for another doctor :v "<<endl;
                            }

                            cout<<"Press any key two times to continue";

                        }
                        continue;

                        //Return to main
                        case '3':
                        {
                            break;
                        }
                    }
                    break;
                }
            }
            continue;

            //Courses information
            case '3':
            {
                while(1)
                {
                    system("cls");

                    cout<<"\t\t\tCourses Information\n\n\n";
                    cout<<"Enter your choice: "<<endl;
                    cout<<"1.Add new course\n";
                    cout<<"2.Find a course\n";
                    cout<<"3.Return to main\n";
                    cin>>choice;

                    switch (choice)
                    {
                        //Add new course
                        case '1':
                        {
                            ofstream c1("course.txt",ios::app);
                            for(i=0; choice!='n'&& choice!='N' ;++i)
                            {
                                if((choice=='Y')||(choice=='y')||(choice=='1'))
                                {
                                    cout<<"Enter Course Name: ";
                                    cin>>corData[i].courseName;
                                    cout<<"Enter Course Code: ";
                                    cin>>corData[i].courseCode;
                                    cout<<"Enter Course's Doctor: ";
                                    cin>>corData[i].doctorName;
                                    cout<<"Enter Course Grade: ";
                                    cin>>corData[i].grade;

                                    c1<<corData[i].courseName<<endl<<corData[i].courseCode<<endl
                                    <<corData[i].doctorName<<endl<<corData[i].grade<<endl;

                                    cout<<"If you want to enter new data please enter Y , If not enter N to finish: ";
                                    cin>>choice;
                                }
                            }
                            system("cls");

                            c1.close();
                        }
                        continue;

                        //Find a course
                        case '2':
                        {
                            ifstream c2("course.txt");
                            cout<<"Enter the name of the course that you search for : ";
                            string str;
                            cin>>str;

                            cout<<endl;
                            int notFound=0;
                            for(j=0 ;((j<i)||(!c2.eof())) ;++j)
                            {
                                getline(c2,corData[j].courseName);
                                if(corData[j].courseName==str)
                                {
                                    notFound=1;
                                    cout<<"Course name : "<<corData[j].courseName<<endl;
                                    getline(c2,corData[j].courseCode);
                                    cout<<"Course ID : "<<corData[j].courseCode<<endl;
                                    getline(c2,corData[j].doctorName);
                                    cout<<"Doctor : "<<corData[j].doctorName<<endl;
                                    getline(c2,corData[j].grade);
                                    cout<<"Grade : "<<corData[j].grade<<endl;
                                    cout<<"------------------------------------------"<<endl;
                                }
                            }

                            c2.close();
                            if(notFound==0)
                            {
                                cout<<"Your course not here"<<endl;
                            }

                            cout<<"Press any key two times to continue";

                        }
                        continue;

                        //Return to main
                        case '5':
                        {
                            break;
                        }
                    }
                    break;
                }
            }
            continue;

            case '4':
            {
                break;
            }
        }
    break;
    }

    return 0;
}



