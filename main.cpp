#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void addStudent();
void seeStuden();
class Student {
public:
    string NameOfStudent;
    int note1;
    int note2;
    int noteMoyenne;

    Student(string NameOfStudent, int note1,int note2, int noteMoyenne) {
        this->NameOfStudent = NameOfStudent;
        this->note1 = note1;
        setnote1(note1);
        this->note2 = note2;
        setnote2(note2);
        setnoteMoyenne(noteMoyenne);
    }

    void setnoteMoyenne(int noteMoyenne) {
        this->noteMoyenne = (noteMoyenne < 0) ? 0 : noteMoyenne;
    }
    void setnote1(int note1) {
        this->note1 = (note1 < 0) ? 0 : note1;
    }
    void setnote2(int note2) {
        this->note2 = (note2 < 0) ? 0 : note2;
    }
};

int main() {
    vector<Student> bookList; // Moved the vector to a global scope
    int Book;
    std::cout << "1: Do you want enter a new student " << std::endl;
    std::cout << "2: Do you want see student" << std::endl;
    std::cout << "3: Do you want Exit" << std::endl;
    std::cout << "Select 1 or 2 or 3: ";
    std::cin >> Book;

    if (Book == 1) {
        getchar();
        system("cls");
        addStudent();
        printf("\n\n");
        main();
    } else if (Book == 2) {
        getchar();
        system("cls");
        seeStuden();
        printf("\n\n");
        main();
    } else {
        return 0;
    }
}


void addStudent() {
    vector<Student> bookList;
    string name;
    int ote1, ote2;

    cout << "Enter the name, note 1, and note 2 : ";
    cin >> name >> ote1 >> ote2;

    float eMoyenne = (ote1 + ote2) / 2; // Calculate the average

    Student newStudent(name, ote1, ote2, eMoyenne);
    bookList.push_back(newStudent);

    ofstream outputFile("Student_data.txt", ios::app);

    if (!outputFile.is_open()) {
        cerr << "Error opening file for writing!" << endl;
    }

    outputFile << "Name: " << newStudent.NameOfStudent << "\n";
    outputFile << "note1: " << newStudent.note1 << "\n";
    outputFile << "note2: " << newStudent.note2 << "\n";
    outputFile << "note Moyenne: " << newStudent.noteMoyenne << "\n";
    outputFile << "-----------------\n";

    outputFile.close();

    cout << "New student data has been appended to Student_data.txt" << endl;
}


void seeStuden() {
    std::ifstream inputFile("Student_data.txt");

    if (!inputFile.is_open()) {
        std::cerr << "Error opening file for reading!" << std::endl;
    }

    string searchName;
    cout << "Enter the name of the student you want to search: ";
    cin >> searchName;

    std::string line;
    bool found = false;
    while (std::getline(inputFile, line)) {
        size_t foundPos = line.find("Name: " + searchName);
        if (foundPos != string::npos) {

            cout << line << endl;
            std::getline(inputFile, line); // Read the next line (note1)
            cout << line << endl;
            std::getline(inputFile, line); // Read the next line (note2)
            cout << line << endl;
            std::getline(inputFile, line); // Read the next line (note Moyenne)
            cout << line << endl;
            std::getline(inputFile, line);
            cout << line << endl;
            found = true;
        }
    }

    inputFile.close();

    if (!found) {
        cout << "Student not found!" << endl;
    }
}
