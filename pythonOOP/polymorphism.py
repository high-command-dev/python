"""
# polymorphism means "many forms"
# A function or a method having same name but have different working

class bird:
  def fly (self):
    print("bird is flying")

class airplane:
  def fly(self):
    print("Airplane is flying")
# main
bird=bird()
airplane=airplane()
bird.fly()
airplane.fly() 

There are two types of polymorphism :
1. Compile-Time Polymorphism 
(i) Method / Function Overloading (Method Overloading is not directly supported in python so we use default arguments -> so we use a method in a multiple way )

class calculator :
  def add(self,a,b,c=0)://default argument
    print(a+b+c)

calc = calculator()

calc.add(2,5)
calc.add(2,3,4)


(ii)Operator Overloading

2. Run-Time Polymorphism 
(i)Method Overriding

#parent class
class animal:
  def make_sound(self):
    print("animal makes a sound")
#child class
class dog(animal):
  def make_sound(self):
    print("dog barks")
#child class
class cat(animal):
  def make_sound(self):
    print("cat meows")

#object create 
animal = animal()
dog = dog()
cat = cat()

animal.make_sound()
dog.make_sound()
cat.make_sound()

#Real Life scenario

class MediaPlayer:
  def play(self):
    print("playing media")

class AudioPlayer(MediaPlayer):
  def play(self):
    print("playing audio")

class VideoPlayer(MediaPlayer):
  def play(self):
    print("playing video")

media=MediaPlayer()
audio = AudioPlayer()
video = VideoPlayer()

media.play()
audio.play()
video.play()

"""
