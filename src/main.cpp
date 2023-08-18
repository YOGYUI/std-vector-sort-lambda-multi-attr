#include <cstring>
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
        std::cout << "Name: " << m_name;
        for (int i = 0; i < 10 - strlen(m_name); i++)
            std::cout << " ";
        std::cout << ", Class: " << m_class_no << ", Number: " << m_number << "\n";
    }

    int GetClassNo() {
        return this->m_class_no;
    }

    int GetNumber() {
        return this->m_number;
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

    // ascending
    auto rule_ascending = [](Student st1, Student st2) -> bool {
        if (st1.GetClassNo() != st2.GetClassNo()) {
            return st1.GetClassNo() < st2.GetClassNo();
        } else {
            return st1.GetNumber() < st2.GetNumber();
        }
    };
    std::sort(students.begin(), students.end(), rule_ascending);

    /*
    // descending
    auto rule_descending = [](Student st1, Student st2) -> bool {
        if (st1.GetClassNo() != st2.GetClassNo()) {
            return st1.GetClassNo() > st2.GetClassNo();
        } else {
            return st1.GetNumber() > st2.GetNumber();
        }
    };
    std::sort(students.begin(), students.end(), rule_descending);
    */

    /*
    auto rule_custom = [](Student st1, Student st2) -> bool {
        if (st1.GetClassNo() != st2.GetClassNo()) {
            return st1.GetClassNo() < st2.GetClassNo();
        } else {
            return st1.GetNumber() > st2.GetNumber();
        }
    };
    std::sort(students.begin(), students.end(), rule_custom);
    */

    std::cout << "after sorting\n";
    for (auto & s : students) {
        s.print();
    }

    return 0;
}