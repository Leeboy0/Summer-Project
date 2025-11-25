#include "../include/mylib.hpp"
#include <iostream>
#include <numeric>
using namespace std;

Student createStudent (const string& name, const vector<int>& grades){
    Student s;
    s.name = name;
    s.grades = grades;
    s.average = calculateAverage(grades);
    s.lettergrade = getLetterGrade(s.average);
    return s;
}

double calculateAverage(const vector<int>& grades){
    double sum = accumulate(grades.begin(), grades.end(), 0);
    return sum/grades.size();
}

char getLetterGrade(double average){
    if(average >= 90.0) return 'A';
    if(average >= 80.0) return 'B';
    if(average >= 70.0) return 'C';
    if(average >= 60.0) return 'D';
    return 'F';
}

void printStudent(const Student& s) {
    cout << s.name << "- Average: " << s.average
    <<"(" << s.lettergrade << ") \n";
}

void printAllStudents(const vector<Student>& students) {
    for (const auto& s:students){
        printStudent(s);
    }
}
