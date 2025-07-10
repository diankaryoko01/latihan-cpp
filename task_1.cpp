#include <iostream>
using namespace std;

int main() {
    // Getting input from user
    int math, science, english;
    string name;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter Math marks: ";
    cin >> math;
    
    cout << "Enter Science marks: ";
    cin >> science;
    
    cout << "Enter English marks: ";
    cin >> english;

    // Calculating the total marks, the average marks, and the result
    int total = math + science + english;
    double average = total / 3;
    string result = "Failed"; 
    if(average >= 40) {
        result = "Pass";
    }

    // Creating the report card
    cout << "---Report Card---" << endl;
    cout << "Name: " << name << endl;
    cout << "Math: " << math << endl;
    cout << "Science: " << science << endl;
    cout << "English: " << english << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;
    cout << "Result: " << result;

    return 0;
}