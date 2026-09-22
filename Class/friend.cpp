#include<iostream>
using namespace std;
class Student{
  private: int marks;
  public: Student(){marks=85;}
  //Teacger is declaired as a friend class
  friend class Teacher;
};
class Teacher{
  public: void displayMarks(Student s){
    //friend class can access private data member.
    cout<<"StudentMarks: "<<s.marks;
  }
};

int main() {
  Student s1;
  Teacher t1;
  t1.displayMarks(s1);
  return 0;
}