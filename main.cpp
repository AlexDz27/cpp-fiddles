#include <iostream>

using namespace std;

struct Student {
  public:
    string surname;
    int groupNumber;
    double marksAverage;
    int *marks;

    Student(string Csurname, int CgroupNumber, double CmarksAverage, int *Cmarks) {
      surname = Csurname;
      groupNumber = CgroupNumber;
      marksAverage = CmarksAverage;
      marks = Cmarks;
    }
};

int main() {
  int myMarks[] = {3, 4};

  Student myStudent("Dz", 123123, 8, myMarks);

  cout << myStudent.surname << endl;
  cout << myStudent.groupNumber<< endl;
  cout << myStudent.marksAverage<< endl;

  cout << myStudent.marks[0] << endl;

//  for (auto item : myStudent.marks) {
//    cout << item << endl;
//  }

  return 0;
}