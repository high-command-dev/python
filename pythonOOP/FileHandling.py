"""
File is used to store data permanently in Memory

Operations on File:
1) Open a File
f1 = open('abc.txt')
File Modes (r,w,x,a,t,b,+)
1) 'r' means open a file in read mode
2)'w'->write mode (truncate) and if null it will create it
3)'x' ->it is exclusive creation
4)'a' ->append mode
5)'b' ->binary
6)'+' ->open a file for updating




2) Read/Write





3) Close the File




"""

# f = open('new.txt')
# print(f.read())

f = open('new.txt','w')
f.write("""Hello This is Ashutosh
This is the File for Python File Handling\nPython is impotant for interviews\n""")
f.close()

# f = open('new.txt')
# print(f.read())

f = open('new.txt','a')
f.write("So Practice it daily")
f.close()

# f = open('new.txt')
# print(f.read())

f = open('new.txt')
# print(f.read(5))
# print(f.tell())
# f.seek(10)
# print(f.tell())
# print(f.read(11))

# f.seek(0)
# for line in f:
#   print(line)

# print(f.readline())
# print(f.readline(20))
# print(f.readline(200)) ->it will only read a single line

# print(f.readlines()) #provide output in a from of list