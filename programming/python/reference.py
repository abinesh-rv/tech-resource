# OOPS in python

#section 1

# #class
# class Se:
#      #class attribute
#   alias="keyboard"

#   def __init__(self,name,age,role):
#     #intsance attribute
#     self.name=name
#     self.age=age
#     self.role=role

#   def code(self):
#     #instance method
#     print(f"{self.name} is writing code...")

#   def code_in_lang(self,lang):
#     print(f"{self.name} is writing code in {lang}")

#   def info(self):
#     info = f"name = {self.name},age={self.age},role={self.role}"
#     return info

#   #dunder method
#   def __str__(self):
#     info = f"name = {self.name},age={self.age},role={self.role}"
#     return info

#   def __eq__(self,other):
#     return self.name == other.name and self.age == other.age



# #instance
# s1 = Se("vashi","20","vadak")
# s2 = Se("ashok","19","gayu")
# s3 = Se("ashok","25","gayu")

# print(s1.name)
# print(s2.alias)
# s1.code()
# s2.code_in_lang("python")
# print(s1)
# print(s2 == s3)

# section 2 - inheritance

#inherits,extends,override
# class Employee:

#     def __init__(self,name,age):
#         self.name=name
#         self.age=age

#     def work(self):
#         print(f"{self.name} is working...")
    
# class frontendDev(Employee):
    
#     def __init__(self,name,age,level):
#       super().__init__(name,age)
#       self.level=level

#     def work(self):
#         print(f"{self.name} is debugging....") 

# class backendDev(Employee):
    
#     def work(self):
#         print(f"{self.name} is working in database....") 

# f1=frontendDev("adhi",19,1)
# b1=backendDev("pavan",20)
# print(f1.name)
# f1.work()
# b1.work()

#section 3 - encapsulation

# class SoftwareEngineer:

#     def __init__(self,name,age):
#         self.name = name
#         self.age = age
#         self._salary = 5000
#         self._num_bugs_solved = 0

#     def get_sal(self):
#         return self._salary

#     def set_sal(self,value):
#         self._salary = value

# s1 = SoftwareEngineer("tanur",25)

# s1.set_sal(6000)
# print(s1.get_sal())

#section 4 properties

# class Software:
#     def __init__(self,name,age):
#         self.name = name
#         self.age = age
#         self._salary = 5000
#         self._num_bugs_solved = 0

#     @property
#     def sal(self):
#         return self._salary

#     @sal.setter
#     def sal(self,value):
#         self._salary = value

# s1 = Software("tanur",25)

# s1.sal = 8000

# print(s1.sal)


 


