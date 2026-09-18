# Learning Management System (C++)

A simple OOP-based Learning Management System built in C++ for a university project.  
It demonstrates classes, inheritance, and file handling in a multi-file structure.

## 📂 Project Structure
- header/: contains all header files (student.hpp, instructor.hpp, course.hpp, etc.)
- src/: contains implementation files (.cpp)
- test/: contains main.cpp and executable

## 🚀 Features
- Add and manage students, instructors, and courses  
- Set student attendance while adding  
- Instructor dashboard display after adding  

## 🛠️ Technologies
C++, Visual Studio Code, Git & GitHub

## 💡 How to Run
```bash
g++ src/*.cpp test/main.cpp -o lms
./lms

## 📂 Project Structure
updated_LMS_project/
│
├── header/
│   ├── assignment.hpp
│   ├── course.hpp
│   ├── instructor.hpp
│   ├── lms.hpp
│   ├── student.hpp
│   ├── user.hpp
│   └── utils.hpp
│
├── src/
│   ├── assignment.cpp
│   ├── course.cpp
│   ├── instructor.cpp
│   ├── lms.cpp
│   ├── student.cpp
│   ├── user.cpp
│   └── utils.cpp
│
├── test/
│   ├── main.cpp
│   └── out.exe
