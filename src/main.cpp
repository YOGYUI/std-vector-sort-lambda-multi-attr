#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

class Student 
{
public:
    Student(const char* name, int class_no, int number) {
        memcpy(m_name, name, 32);
        m_class_no = class_no;
        m_number = number;
    }
    ~Student() {}
    void print() {
        std::cout << "Name: " << ", Class: " << m_class_no << ", Number: " << m_number << "\n";
    }
private:
    char m_name[32];
    int m_class_no;
    int m_number;
};

int main(int argc, char *argv[]) 
{
    std::vector<Student> students;
    students.push_back(Student("Eugene", 2, 2));
    students.push_back(Student("Grace", 1, 2));
    students.push_back(Student("John", 3, 1));
    students.push_back(Student("Michelle", 2, 3));
    students.push_back(Student("Sophia", 3, 2));
    students.push_back(Student("Elizabethe", 1, 3));
    students.push_back(Student("Amanda", 1, 1));
    students.push_back(Student("Catherine", 3, 3));
    students.push_back(Student("Henry", 2, 1));

    std::cout << "before sorting\n";
    for (auto & s : students) {
        s.print();
    }

    std::cout << "after sorting\n";

    return 0;
}