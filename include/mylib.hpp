#ifndef MYLIB_HPP
#define MYLIB_HPP

#include <string>
#include <vector>
using namespace std;

struct Student {
    string name;
    vector<int> grades;

    double average = 0.0;
    char lettergrade = 'F';
};

// ---- Function Declarations ----
Student createStudent (const string& name, const vector<int>& grades);

double calculateAverage(const vector<int>& grades);

char getLetterGrade(double average);

void printStudent(const Student& student);

void printAllStudents(const vector<Student>& students);

#endif // MYLIB_HPP
