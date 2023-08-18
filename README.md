# [C++] Sort standard vector by multiple attributes

pseudo-code
---
```c
#include <algorithm>

int main()
{
    std::vector<Student> students;

    auto rule_ascending = [](Student st1, Student st2) -> bool {
        if (st1.class_no != st2.class_no) {
            return st1.class_no < st2.class_no;
        } else {
            return st1.number < st2.number;
        }
    };

    std::sort(students.begin(), students.end(), rule_ascending);

    return 0;
}
```