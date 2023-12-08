# Save Student Data


The provided C++ code is a simple console-based program that allows the user to either enter new student data or view existing student data. It uses file handling to store and retrieve student information in a text file named "Student_data.txt." The program defines a `Student` class with attributes such as name, note1, note2, and noteMoyenne (average note). Here is a summary of the code:

### Student Class:
- Represents a student with attributes: `NameOfStudent`, `note1`, `note2`, and `noteMoyenne`.
- Provides methods to set and validate note values.
  
### Global Vector:
- `vector<Student>` bookList; is declared globally to store student objects.

### Main Function:
- Displays a menu to the user (1 for adding a new student, 2 for viewing students, 3 for exit).
- Calls corresponding functions based on user input.

### addStudent Function:
- Takes user input for a new student's name, note1, and note2.
- Calculates the average note (`noteMoyenne`).
- Appends the student data to "Student_data.txt."
### seeStuden Function:
- Reads and searches for a student by name in "Student_data.txt."
- Displays the student's information if found; otherwise, prints "Student not found."

## the program appends the student's information to the file in the following format:
```
Name: [NameOfStudent]
note1: [note1]
note2: [note2]
note Moyenne: [noteMoyenne]
-----------------
```
## Here are 10 examples of student data entries in the specified format:
```
  Name: Alice Smith
  note1: 78
  note2: 85
  note Moyenne: 81
  -----------------
  Name: Bob Johnson
  note1: 90
  note2: 88
  note Moyenne: 89
  -----------------
  Name: Emily Davis
  note1: 75
  note2: 92
  note Moyenne: 83
  -----------------
  Name: Michael Brown
  note1: 82
  note2: 79
  note Moyenne: 80
  -----------------
  Name: Sophia Lee
  note1: 95
  note2: 91
  note Moyenne: 93
  -----------------
  Name: Daniel Miller
  note1: 87
  note2: 88
  note Moyenne: 87
  -----------------
  Name: Olivia Wilson
  note1: 93
  note2: 89
  note Moyenne: 91
  -----------------
  Name: Ethan Taylor
  note1: 80
  note2: 85
  note Moyenne: 82
  -----------------
  Name: Chloe Martinez
  note1: 88
  note2: 90
  note Moyenne: 89
  -----------------
  Name: Noah Johnson
  note1: 91
  note2: 87
  note Moyenne: 89
  -----------------
```
