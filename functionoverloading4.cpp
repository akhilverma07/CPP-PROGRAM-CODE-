#include <iostream>
#include <string>

using namespace std;

class Course {
protected:
    string courseCode;
    string instructor;

public:
    Course(string code, string instructor) : courseCode(code), instructor(instructor) {}

    virtual void displayInfo() = 0;
    virtual void specificFunctionality() = 0;
    virtual ~Course() {}
};

class Lecture : public Course {
private:
    int maxEnrollment;

public:
    Lecture(string code, string instructor, int maxEnrollment) : Course(code, instructor), maxEnrollment(maxEnrollment) {}

    void displayInfo() override {
        cout << "Course Code: " << courseCode << endl;
        cout << "Instructor: " << instructor << endl;
        cout << "Max Enrollment: " << maxEnrollment << endl;
    }

    void specificFunctionality() override {
        cout << "Checking enrollment status for lecture..." << endl;
        // Implement specific functionality for lectures here
    }
};

class Seminar : public Course {
private:
    // Specific attributes for Seminar can be added here

public:
    Seminar(string code, string instructor) : Course(code, instructor) {}

    void displayInfo() override {
        cout << "Course Code: " << courseCode << endl;
        cout << "Instructor: " << instructor << endl;
    }

    void specificFunctionality() override {
        cout << "Implementing specific functionality for seminar..." << endl;
        // Implement specific functionality for seminars here
    }
};

class Lab : public Course {
private:
    string equipmentRequirements;

public:
    Lab(string code, string instructor, string equipmentRequirements) : Course(code, instructor), equipmentRequirements(equipmentRequirements) {}

    void displayInfo() override {
        cout << "Course Code: " << courseCode << endl;
        cout << "Instructor: " << instructor << endl;
        cout << "Equipment Requirements: " << equipmentRequirements << endl;
    }

    void specificFunctionality() override {
        cout << "Listing equipment for lab..." << endl;
        // Implement specific functionality for labs here
    }
};

int main() {
    Course* courses[3];
    courses[0] = new Lecture("CS101", "Dr. Smith", 100);
    courses[1] = new Seminar("CS201", "Prof. Johnson");
    courses[2] = new Lab("CS301", "Dr. Brown", "Computers, Projector");

    for (int i = 0; i < 3; ++i) {
        courses[i]->displayInfo();
        courses[i]->specificFunctionality();
        cout << endl;
    }

    for (int i = 0; i < 3; ++i) {
        delete courses[i];
    }

    return 0;
}
