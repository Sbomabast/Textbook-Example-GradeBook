#include<iostream>
#include<string>
using namespace std;
// GradeBook class definition
class GradeBook{
	
public: 
	GradeBook(string name){
		setCourseName(name);
	}
	void displayMessage(){
		cout << "Welcome to the GradeBook for "<< getCourseName() << "!" << endl;
	}
	void setCourseName(string name){
		courseName = name;
	}
	string getCourseName(){
		return courseName;
	}
private:
	string courseName;
};

int main(){
	string nameOfCourse;
	GradeBook myGradeBook("Computer Methods 3");
	cout << "Please enter the course name" << endl;
	getline(cin, nameOfCourse);
	myGradeBook.setCourseName(nameOfCourse);
	myGradeBook.displayMessage();
	system("pause");
	return 0;
}