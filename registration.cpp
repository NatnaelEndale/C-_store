#include <iostream>
#include <fstream>

using namespace std;

struct Address {
    char kk[50];
    int woreda;
    long phoneNumber;
};

struct Student {
    char idNo[20];
    char fName[30];
    Address address;
};

// Function declarations
Student getData();
void registerStudent(const char* fname);
void displayAll(const char* fname);

Student getData() {
    Student s;

    cout << "Enter ID No: ";
    cin >> s.idNo;

    cout << "Enter First Name: ";
    cin >> s.fName;

    cout << "Enter Kebele: ";
    cin >> s.address.kk;

    cout << "Enter Woreda: ";
    cin >> s.address.woreda;

    cout << "Enter Phone Number: ";
    cin >> s.address.phoneNumber;

    return s;
}

void registerStudent(const char* fname) {
    Student s = getData();
    fstream file(fname, ios::binary | ios::app);

    if (file) {
        file.write(reinterpret_cast<char*>(&s), sizeof(s));
        cout << "Student registered successfully.\n";
        file.close();
    } else {
        cout << "Error opening file.\n";
    }
}

void displayAll(const char* fname) {
    Student s;
    fstream file(fname, ios::binary | ios::in);

    if (!file) {
        cout << "Error opening file.\n";
        return;
    }

    cout << "\n--- Student List ---\n";
    while (file.read(reinterpret_cast<char*>(&s), sizeof(s))) {
        cout << "ID No: " << s.idNo << endl;
        cout << "First Name: " << s.fName << endl;
        cout << "Kebele: " << s.address.kk << endl;
        cout << "Woreda: " << s.address.woreda << endl;
        cout << "Phone: " << s.address.phoneNumber << endl;
        cout << "----------------------\n";
    }

    file.close();
}

int main() {
    const char* filename = "students.dat";
    char ans;
    int choice;

    do {
        cout << "\n====== MENU ======\n";
        cout << "1. Register a student\n";
        cout << "2. Display all students\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                registerStudent(filename);
                break;
            case 2:
                displayAll(filename);
                break;
            case 3:
                cout << "Exiting program...\n";
                return 0;
            default:
                cout << "Invalid choice!\n";
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> ans;

    } while (ans == 'y' || ans == 'Y');

    return 0;
}
