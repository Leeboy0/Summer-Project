#include "../include/mylib.hpp"

using namespace std;

int main() {
    Student s1 = createStudent("Alice", {75, 89, 45});
    Student s2 = createStudent("Bro", {95, 99, 85});

    printAllStudents({s1, s2});
}