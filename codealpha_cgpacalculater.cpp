#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// Structure to hold course information
struct Course {
    float grade;
    int credit;
};

int main() {
    int numCourses;
    float totalCredits = 0, totalGradePoints = 0;

    cout << "Enter the number of courses: "; 
    cin >> numCourses;

    vector<Course> courses(numCourses);

    // Input course details
    for (int i = 0; i < numCourses; ++i) {
        cout << "\nCourse " << i + 1 << ":\n";
        cout << "Enter grade (on a 10-point scale):";
        cin >> courses[i].grade;

        cout << "Enter credit hours: ";
        cin >> courses[i].credit;

        // Calculating totals
        totalGradePoints += courses[i].grade * courses[i].credit;
        totalCredits += courses[i].credit;
    }

    // Calculate CGPA
    float cgpa = totalGradePoints / totalCredits;

    // Display individual course details
    cout << "\n-----------------------------";
    cout << "\nCourse\tGrade\tCredits";
    cout << "\n-----------------------------";
    for (int i= 0; i < numCourses; ++i) {
        cout << "\n" << i + 1 << "\t "<< fixed << setprecision(2)
             << courses[i].grade << "\t" << courses[i].credit;
    }

    // Display CGPA
    cout << "\n-----------------------------";
    cout <<"\nTotal Credits: "<< totalCredits;
    cout <<  "\nCGPA: " << fixed << setprecision(2) << cgpa << endl;

    return 0;
}
