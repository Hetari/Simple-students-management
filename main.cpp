#include <iostream>
#include <fstream>
#include <vector>
#include <conio.h>       // getch()
#include <bits/stdc++.h> // sort
#include <windows.h>     // system
using namespace std;
#include "student_struct.hpp"
#include "delete_student.hpp"
#include "print_data.hpp"
#include "add_student.hpp"
#include "sort_id.hpp"
#include "start.hpp"

int main()
{
    vector<Student> students;
    int student_id;
    char option;

    start();
    do
    {
        option = getch();
        system("cls");
        switch (option)
        {
        case '1':
            int numbers;
            cout << "Enter the numbers of students: ";
            cin >> numbers;
            for (size_t i = 0; i < numbers; i++)
            {
                add(students, students.size());
            }
            break;
        case '2':
            print_all(students, students.size());
            break;
        case '3':
            cout << "Enter the id of student: ";
            cin >> student_id;
            select(students, student_id);
            break;
        case '4':
            cout << "Enter the id of student: ";
            cin >> student_id;
            dele(students, student_id);
            break;
        case '5':
            sort(students.begin(), students.end(), compare); // The compare function in sort_id.hpp file
            print_all(students, students.size());
            break;
        case '6':
            cout << "Enter the id of student: ";
            cin >> student_id;
            edit_student(students, student_id, students.size());
        }
        system("pause");
        start();
    } while (option != 'e');
}
