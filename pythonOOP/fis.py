"""
->
#OOPs



->PROCEDURAL PROGRAMMING

num1 = 10
num2 = 5

sum = num1+ num2
diff = num1-num2
print(sum)
print(diff)

->FUNCTIONAL PROGRAMMING

def add_number(a,b):
  print(a+b)
def subtract_number(a,b):
  print(a-b)
  
add_number(10,5)
subtract_number(20,5)

->OBJECT ORIENTED PROGRAMMING
class calculator:
  def add(self,a,b):
    print(a+b)
  def sub(self,a,b):
    print(a-b)
  def multi(self,a,b):
    print(a*b)

calc = calculator() # Object of the class 
calc.multi(10,20)
calc.add(10,20)
calc.sub(10,5)

->class - object - example
class car:
  def start(self):
   print(f"The {self.color} {self.model} car is Cruising.")
cruising

car1 = car()
car1.model = "Toyota"
car1.color = "Red"

car2 = car()
car2.model = "Honda"
car2.color = "Blue"

car1.start()
car2.start()
->init FUNCTION
It is a special method that calls itself in the class and sets the properties of the object.

class car:
  def __init__(self, model, color):
    self.model = model
    self.color = color

  def start(self):
   print(f"The {self.color} {self.model} car is Cruising.")

car1 = car("toyota","white")
car1.start()

->
->
->
->
->
->
"""











