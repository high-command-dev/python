"""
Inheritance is fundamental concept which inherits proprties of base class into a derived class
# Type of inheritance 
(i) single level -> p to c
class parent :
  def show(self):
    print("This is parent class")

class child(parent):
  def display(self):
    print("This is child class")

child =child()
child.display()
child.show()

(ii) multiple inheritance -> p1 , p2 to c
class mother :
  def show_mother(self):
    print("This is mother class")

class father:
  def show_father(self):
    print("This is father class ")

class child(mother, father):
  def show_child(self):
    print("This is child class")

child =child()
child.show_mother()
child.show_father()
child.show_child()

(iii) multilevel inheritance-> p1->c1 to c2
class grandfather :
  def show_grandfather(self):
    print("Grandfather")

class father(grandfather):
  def show_father(self):
    print("Father")

class child(father):
  def show_child(self):
    print("Child")

child =child()
child.show_grandfather()
child.show_father()
child.show_child()

father = father()
father.show_grandfather()

(iv) hierarchical inheritance ->p to c1, c2

(v) hybrid inheritance p1-> c1,c2   c1 to c3, c2 to c3

"""
class parents :
  def show_parents(self):
    print("This is parent class")

class boy(parents):
  def show_boy(self):
    print("THis is boy")

class girl(parents):
  def show_girl(self):
    print("This is girl")

boy = boy()
girl = girl()

boy.show_parents()
boy.show_boy()

girl.show_girl()
girl.show_parents()

