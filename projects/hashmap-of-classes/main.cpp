#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

struct Student {
  string surname;
  int grade;

  Student(string cSurname, int cGrade) {
    surname = cSurname;
    grade = cGrade;
  }
};

int main() {
  unordered_map<string, Student> students;
  students.insert(make_pair("Dzyuba", Student("Dzyuba", 9)));
  students.insert(make_pair("Nesterov", Student("Nesterov", 7)));

  for (auto item : students) {
    cout << item.second.grade << endl;

    int studentGrade = item.second.grade;

    if (studentGrade < 9) {
      string studentSurname = item.second.surname;
      cout << studentSurname << " has a bad mark." << endl;
    }
  }

  return 0;
}
