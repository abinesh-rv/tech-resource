###################oops#####################

##################basic#####################

# class Dog:

#     def __init__(self,name,age):
#         self.name = name
#         self.age = age
    
#     def set_age(self,age):
#         self.age = age
    
#     def get_details(self):
#         return [self.name,self.age]
    
#     def add(self,x):
#         return x+1
    
#     def bark(self):
#         print("barking")

# dog = Dog("max",11)
# dog.set_age(9)
# print(dog.get_details())
# print(dog.add(10))
# dog.bark() 

##################### multiple classes################

# class Student:
#     def __init__(self,name,age,grade):
#         self.name = name
#         self.age = age
#         self.grade = grade
    
#     def get_grade(self):
#         return self.grade
    
# class Course:
#     def __init__(self,name,max_students):
#         self.name = name
#         self.max_students = max_students
#         self.students = []
    
#     def add_students(self,student):
#         if len(self.students) < self.max_students :
#             self.students.append(student)  

#     def avg_grade(self):
#           total = 0
#           for n in self.students:
#               total += n.get_grade()
#           return total/len(self.students)
        
# s1 = Student("one",20,80)
# s2 = Student("two",30,85)
# s3 = Student("three",40,75)

# c1 = Course("maths",5)

# c1.add_students(s1)
# c1.add_students(s2)

# print(c1.avg_grade())

################################### inheritance #########################

class Pet:
    def __init__(self,name,age):
        self.name = name
        self.age = age
    
    def speak(self):
        print("do not speak")

    def one(self):
        return "hii"

class Dog(Pet):
    def speak(self):
        print("bark")
    
    def two(self):
        print(super().one())
    
class Cat(Pet):
    def __init__(self,name,age,color):
        super().__init__(name,age)
        self.color = color

    def get_details(self):
        return [self.name,self.age,self.color]

    def speak(self):
        print("meaw")

p1 = Pet("one",10)
d1 = Dog("two",20)
c1 = Cat("three",30,"white")

p1.speak()
d1.speak()
c1.speak()
d1.two()
print(c1.get_details())

####################################cls attributes and methods###############################

# class Person:
#     number_of_people = 0

#     def __init__(self,name):
#         self.name=name
#         Person.add_person()
    
#     @classmethod
#     def show_number_of_people(cls):
#         return cls.number_of_people
    
#     @classmethod
#     def add_person(cls):
#         cls.number_of_people +=1

# Person.number_of_people = 10
# p1 = Person("one")
# print(p1.number_of_people)

########################################static methods############################

# class Math:

#     @staticmethod
#     def add5(x):
#         return x+5
    
#     @staticmethod
#     def add10(x):
#         return x+10
    
#     @staticmethod
#     def pr():
#         print("run")

# Math.pr()
