#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

                //   T A S K  3 

// Create a program that manages student grades. Allow the user
// to input student names and their corresponding grades.
// Calculate the average grade and display it along with the highest
// and lowest grades.


struct Task3
{
    string name;
    char grade;

};

int main()
{
    vector<Task3>group_of_students;
    string name;
    char grade;
    char choice;

    cout<<"Display the average Grades "<<endl;

     do{
        Task3 students;

        cout<<"Please enter the Student's name :"<<endl;
        cin>>students.name;

        cout<<"Please enter the Student's Grade :"<<endl;
        cin>>students.grade;


        group_of_students.push_back(students);

        cout<<"Do you want to enter another student's name and grade ?  (y/n) :"<<endl;
        cin>>choice;
     }
         while(choice == 'y' || choice == 'Y');

         double sum = 0;
         char average;
         char highestGrade = group_of_students[0].grade;
         char lowestGrade = group_of_students[0].grade;

         for (const auto& students : group_of_students) 
         {
            // calculating the sum of student's grade

        sum += students.grade;
        highestGrade = min(highestGrade, students.grade);
        lowestGrade = max(lowestGrade, students.grade);
         }

        //  calculating the average 
    average = sum / group_of_students.size();

         cout <<"Display the result :-"<<endl;
         cout << "Average Grade of students are : " << average <<endl;
         cout << "Highest Grade of student is : " << highestGrade <<endl;
         cout << "Lowest Grade of student is : " << lowestGrade << std::endl;


        return 0;


}