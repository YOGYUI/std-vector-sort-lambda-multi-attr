class Student:
    name: str
    class_no: int
    number: int

    def __init__(self, name: str, class_no: int, number: int):
        self.name = name
        self.class_no = class_no
        self.number = number
    
    def __repr__(self) -> str:
        return f"Name: {' ' * (10 - len(self.name)) + self.name}, Class: {self.class_no}, Number: {self.number}"

if __name__ == '__main__':
    students = [
        Student('Eugene', 2, 2),
        Student('Grace', 1, 2),
        Student('John', 3, 1),
        Student('Michelle', 2, 3),
        Student('Sophia', 3, 2),
        Student('Elizabethe', 1, 3),
        Student('Amanda', 1, 1),
        Student('Catherine', 3, 3),
        Student('Henry', 2, 1),
    ]
    print('before sorting')
    print('\n'.join([str(x) for x in students]))
    
    students_sorted = sorted(students, key = lambda x: (x.class_no, x.number))
    print('after sorting')
    print('\n'.join([str(x) for x in students_sorted]))
    
