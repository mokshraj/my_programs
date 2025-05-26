# #1. Write a python program to demonstrate basic data type and the concept of object identity.
# x = 5
# y = 5
# print("same values : ",x == y)  # True (same value)
# print("same ids : ",id(x) == id(y))  # True (same object identity, because small integers are cached)
# # Different object identity even with the same value
# a = "hello"
# b = ''.join(['h', 'e', 'l', 'l', 'o'])
# print("same values : ",a == b)  # True (same value)
# print("same ids : ",id(a) == id(b))  # False (different object identity)

# #2.	Write a python program to calculate area of triangle by heron’s formulae.
# # heron’s formulae : √[s(s-a)(s-b)(s-c)]
# import math
# a = int(input("Enter side a of triangle : "))
# b = int(input("Enter side b of triangle : "))
# c = int(input("Enter side c of triangle : "))
# s = (a+b+c)/2
# print(f"The area of given triangle is : {math.sqrt(s*(s-a)*(s-b)*(s-c))}")

# #3.	Write a python program to find the grade of the students based on marks scored in 5 subjects.
# total = int(input("Enter total marks obtainable : "))
# sub1 = (int(input("Enter marks for subject 1 : "))/total)*100
# sub2 = (int(input("Enter marks for subject 2 : "))/total)*100
# sub3 = (int(input("Enter marks for subject 3 : "))/total)*100
# sub4 = (int(input("Enter marks for subject 4 : "))/total)*100
# sub5 = (int(input("Enter marks for subject 5 : "))/total)*100
# avgper = (sub1 + sub2 + sub3 + sub4 + sub5)/5
# print()
# if(avgper in range(90,101)):
#     print("Your Grade is A+ (Excellent): 90-100%")
# elif(avgper in range(80,90)):
#     print("Your Grade is A (Very Good): 80-89%")
# elif(avgper in range(70,80)):
#     print("Your Grade is B+ (Good): 70-79%")
# elif(avgper in range(60,70)):
#     print("Your Grade is B (Average): 60-69%")
# elif(avgper in range(50,60)):
#     print("Your Grade is C (Below Average): 50-59%")
# elif(avgper in range(40,50)):
#     print("Your Grade is D (Poor): 40-49%")
# else:
#     print("Your Grade is F (Fail): Below 40%")

# #4.	Write a python program to check whether a number is palindrome or not.
# num = input("Enter a no. for check : ")
# if(int(num) == int(num[::-1])):
#     print(f"{num} is a palindrome number.")
# else:
#     print(f"{num} is not a palindrome number.")

# #5.	Write a python program to print all the prime numbers below a number taken as input from the user ( Using while loop)
# num = int(input("Enter a no. : "))
# i = 2
# prime = []
# while(i<num):
#     j=2
#     flag = True
#     while(j<i):
#         if(i%j == 0):
#             flag = False
#             break
#         j=j+1
#     if(flag):
#         prime.append(i)
#     i=i+1
# print(f"The list of prime numbers below {num} is : {prime}.")

# #6.	Write a python program to find the sum of the given series up to n numbers taken as input from the user.
# #•	1+1/!2+1/!3+……..1/!n
# #•	1+2**2+3**3+………n**n
# import math
# num = int(input("Enter a no. : "))
# sum1 = 1
# sum2 = 1
# for i in range(2,num+1):
#     sum1 = sum1 + 1/math.factorial(i)
# for i in range(2,num+1):
#     sum2 = sum2 + i**i
# print(f"1+1/!2+1/!3+……..1/!n : {sum1}")
# print(f"1+2**2+3**3+………n**n : {sum2}")

# #7.	Write a python program to create a list of n numbers taken input from the user. Calculate the mean, median and mode for the created list.
# set=[]
# while True:
#     i=input("Enter a no. or type exit to exit : ")
#     if(i == "exit"):
#         break
#     else:
#         try :
#             set.append(int(i))
#         except:
#             print("invalid input")
# print(f"mean of set : {set} is {sum(set)/len(set)}")
# if(len(set)%2==0):
#     print(f"median of set:{set} is {(set[int((len(set)/2)-1)]+set[int(len(set)/2)])/2}")
# else:
#     print(f"median of set:{set} is {set[int(len(set)/2)]}")
# mode = 0
# for i in range(0,len(set)):
#     if(i<len(set)):
#         if(set.count(set[i])>mode):
#             mode = set[i]
# if(set.count(mode)==1):
#     print(f"mode of set : {set} doesn't exist")
# else:
#     print(f"mode of set : {set} is {mode}")

# #8.	Write a python program to take a string as input and count the vowels, digits and consonants. Store and display the result in dictionary format.
# str  = input("Enter a string : ")
# v=c=d=0
# for i in str:
#     if i.isalpha():
#         if i in "aeiouAEIOU":
#             v = v+1
#         else:
#             c = c+1
#     elif i in "0123456789":
#         d = d+1
# print(f"Total number of digits in string is {d}")
# print(f"Total number of vowels in the string is {v}")
# print(f"Total number of consonants in the string is {c}")

# #9. Create a GUI-based calculator with buttons for digits and operators that perform calculations when clicked.
# import tkinter as tk # import tkinter
# def button_click(value):
#     current = buffer['text']  # Get current display text 
#     if value == 'C':  # Clear
#         buffer.config(text='')
#     elif current == 'Error':
#         buffer.config(text=''+ value)
#     elif value == '=':  # Calculate
#         try:
#             result = eval(current)
#             buffer.config(text=str(result))
#         except:
#             buffer.config(text='Error')
#     else:  # Add digit/operator to display
#         buffer.config(text=current + value)
# main = tk.Tk() #make main window
# main.title("calculator") #set window title
# main.configure(bg="#2B2B2B") # set window background
# frame = tk.Frame(main,background="white",padx= 50,pady= 50) # make calculator view window
# frame.place(relx=0.05, rely=0.05, relwidth=0.9, relheight=0.2)
# buffer = tk.Label(
#     frame,
#     text="",
#     background="white",
#     foreground="black",
#     anchor="e",  # 'e' for east (right) alignment
#     justify="right",
#     wraplength=350
# )
# buffer.place(relx=0.0, rely=0.1, relwidth=0.9)
# frame2=tk.Frame(main,background="#D3D3D3",padx= 50,pady= 50) # make button frame
# frame2.place(relx=0.05,rely= 0.3,relwidth=0.9, relheight=0.65)
# buttons = [                 # define buttons
#     '7', '8', '9', '/',
#     '4', '5', '6', '*',
#     '1', '2', '3', '-',
#     'C', '0', '=', '+'
# ]
# for i, button_value in enumerate(buttons):
#     row = i // 4  # Integer division to determine row
#     col = i % 4   # Modulus to determine column
#     button = tk.Button(
#         frame2,
#         text=button_value,
#         background="white",
#         foreground="black",
#         width=5,
#         height=2,
#         command=lambda x=button_value: button_click(x)
#     )
#     button.grid(row=row, column=col, padx=5, pady=5)
# main.geometry("500x500")
# main.mainloop()

# #10. Write a program to create two sets taking input from the user and perform the following operations
# def create_set():
#     set_items = set()
#     print("Give empty input to continue :")
#     while True:
#         item = input("Enter an element: ")
#         if item == '':
#             break
#         try:
#             set_items.add(int(item))
#         except ValueError:
#             print("Please enter a valid integer")
#     return set_items
# # Get input for two sets
# print("\tEnter elements for first set:\n")
# set1 = create_set()
# print("\n\tEnter elements for second set:\n")
# set2 = create_set()
# # Perform set operations
# print("\nSet Operations Results:")
# print(f"Set 1: {set1}\n")
# print(f"Set 2: {set2}\n")
# print(f"Union: {set1 | set2}\n")
# print(f"Intersection: {set1 & set2}\n")
# print(f"Difference (Set1 - Set2): {set1 - set2}\n")
# print(f"Symmetric Difference: {set1 ^ set2}\n")
# print(f"Are sets disjoint?: {set1.isdisjoint(set2)}\n")
# print(f"Is Set1 subset of Set2?: {set1 <= set2}\n")
# print(f"Is Set1 superset of Set2?: {set1 >= set2}\n")

# #11. Write a program that extracts and prints the characters from an input string that are present at prime indices (0-based index) using slicing.
# def isprime(a):
#     if a < 2 or a == 4:  # 0 and 1 are not prime
#         return False
#     elif a == 2:  # 2 is prime
#         return True
#     for i in range(2,(a//2)):
#         if a%i == 0:
#             return False
#     return True
# str = input("Enter a string : ")
# for i in range(len(str)):
#     if isprime(i):
#         print(str[i],end="")

# #12. Write a recursive function to calculate the factorial of a number.
# def factorial(a):
#     if a == 1:
#         return 1
#     else:
#         return factorial(a-1)*a
# a = int(input("Enter a number : "))
# print(factorial(a))

# #13. Write a program to create two sets taking input from the user and perform the following operations on them using operators and set methods
# #     • Union
# #     • Intersection
# #     • Symmetric difference
# #     • Difference
# #     • Sets are disjoint or not
# def create_set():
#     set_items = set()
#     print("Give empty input to continue :")
#     while True:
#         item = input("Enter an element: ")
#         if item == '':
#             break
#         try:
#             set_items.add(int(item))
#         except ValueError:
#             print("Please enter a valid integer")
#     return set_items
# # Get input for two sets
# print("\tEnter elements for first set:\n")
# set1 = create_set()
# print("\n\tEnter elements for second set:\n")
# set2 = create_set()
# # Perform set operations
# print("\nSet Operations Results:")
# print(f"Set 1: {set1}\n")
# print(f"Set 2: {set2}\n")
# print(f"Union: {set1 | set2}\n")
# print(f"Intersection: {set1 & set2}\n")
# print(f"Difference (Set1 - Set2): {set1 - set2}\n")
# print(f"Symmetric Difference: {set1 ^ set2}\n")
# print(f"Are sets disjoint?: {set1.isdisjoint(set2)}\n")
# print(f"Is Set1 subset of Set2?: {set1 <= set2}\n")
# print(f"Is Set1 superset of Set2?: {set1 >= set2}\n")

# #14. Design a to overload + operator to add two Time objects to calculate total time
# class time:
#     def __init__(self,hour,minute):
#         self.hour = hour
#         self.minute = minute
#     def __add__(self,o):
#         nhour = self.hour + (o.minute + self.minute)//60
#         nminute = (o.minute + self.minute)%60
#         return nhour,nminute
# t1 = time(1,30)
# t2 = time(1,30)
# print(t1+t2)

# #15. Write a Python program to open a text file named data.txt, read all the contents line by line, and count the number of lines, words, and characters in the file. Display the counts.
# import os
# line_count = 0
# word_count = 0
# char_count = 0
# #get current directory of the file
# current_dir = os.path.dirname(os.path.abspath(__file__))
# try:
#     file = open(current_dir+"/"+"data.txt", 'r')
#     for line in file:
#         line_count += 1
#         word_count += len(line.split())
#         char_count += len(line)
#     file.close()
#     # Display results
#     print(f"\nFile Statistics for data.txt :")
#     print(f"Number of lines: {line_count}")
#     print(f"Number of words: {word_count}")
#     print(f"Number of characters: {char_count}")
# except FileNotFoundError:
#     print("Error: File not found!")
# except Exception as e:
#     print(f"Error: {str(e)}")

# #16. Create a class Book
# class book:
#     def  __init__(self,title,author,ISBN):
#         self.title = title
#         self.author = author
#         self.ISBN = ISBN
#     def display_info(self):
#         print("--------------------\n")
#         print(f"Tile: {self.title}")
#         print(f"Auther: {self.author}")
#         print(f"ISBN: {self.ISBN}\n")
#         print("--------------------\n")
# # Create book objects with example values
# book1 = book("The Great Gatsby", "F. Scott Fitzgerald", "978-0743273565")
# book2 = book("To Kill a Mockingbird", "Harper Lee", "978-0446310789")
# book3 = book("1984", "George Orwell", "978-0451524935")
# # Display book information
# book1.display_info()
# book2.display_info()
# book3.display_info()

# #17. Create a base class Shape with a method area()
# class Shape:
#     def __init__(self):
#         pass
#     def area(self):
#         pass  # Base method that will be overridden
# class Rectangle(Shape):
#     def __init__(self, width, height):
#         super().__init__()
#         self.width = width
#         self.height = height
#     def area(self):
#         return self.width * self.height
# class Circle(Shape):
#     def __init__(self, radius):
#         super().__init__()
#         self.radius = radius
#     def area(self):
#         return 3.14159 * self.radius ** 2
# # Create shape objects
# shapes = [
#     Rectangle(5, 3),
#     Circle(4),
#     Rectangle(2, 7),
#     Circle(3)
# ]
# # Using polymorphism to calculate areas
# for i, shape in enumerate(shapes, 1):
#     print(f"Shape {i} Area: {shape.area():.2f}")

# #18. Write a program in Python to demonstrate following operations:
# #a) Simple inheritance
# #b) Multiple inheritance
# # Simple Inheritance Example
# class Animal:
#     def __init__(self, name):
#         self.name = name
#     def speak(self):
#         pass
# #
# class Dog(Animal):  # Dog inherits from Animal
#     def speak(self):
#         return f"{self.name} says Woof!"
# #
# # Multiple Inheritance Example
# class Vehicle:
#     def __init__(self, brand):
#         self.brand = brand
#     def start_engine(self):
#         return f"{self.brand}'s engine is starting"
# #
# class Electric:
#     def __init__(self, battery_capacity):
#         self.battery_capacity = battery_capacity
#     def charge(self):
#         return f"Charging {self.battery_capacity}kWh battery"
# #
# class ElectricCar(Vehicle, Electric):  # Inherits from both Vehicle and Electric
#     def __init__(self, brand, battery_capacity):
#         Vehicle.__init__(self, brand)
#         Electric.__init__(self, battery_capacity)
#     def get_info(self):
#         return f"{self.brand} EV with {self.battery_capacity}kWh battery"
# #
# # Create and use objects directly
# print("\nSimple Inheritance Example:")
# dog = Dog("Buddy")
# print(dog.speak())
# #
# print("\nMultiple Inheritance Example:")
# car = ElectricCar("Mustang", 75)
# print(car.start_engine())
# print(car.charge())
# print(car.get_info())

# #19. A Python program to simulate an ATM withdrawal system.
# class InsufficientBalanceError(Exception):
#     def __init__(self, balance, amount):
#         self.balance = balance
#         self.amount = amount
#         self.message = f"Cannot withdraw ₹{amount}. Balance is ₹{balance}"
#         super().__init__(self.message)
# def withdraw(balance, amount):
#     if amount > balance:
#         raise InsufficientBalanceError(balance, amount)
#     return balance - amount
# # Usage example
# try:
#     balance = 10000
#     print("Please input Withdraw Amount : ",end="")
#     amount = int(input())
#     withdraw(balance,amount)
#     balance = balance-amount
#     print(f"withdrawed ₹{amount}. Balance is now ₹{balance}")
# except InsufficientBalanceError as e:
#     print(e)

# #20. Design a GUI application to change color of a label on button click.
# import tkinter as tk
# main = tk.Tk()
# def cchange():
#     label.config(background="green")
# label = tk.Label(main,text="label")
# button = tk.Button(text="Change colour",command=cchange)
# label.pack(side="top")
# button.pack(side="bottom")
# main.mainloop()

#21. Implement a GUI temperature converter that takes input in Celsius and converts it to Fahrenheit when a button is clicked.
import tkinter as tk
def convert():
    try:
        label2.config(text=f"Fahrenheit : {(float(entry.get()) * (9/5)) + 32 }")
    except ValueError:
        label2.config(text="Please enter a valid number")
main = tk.Tk()
main.title("Celsius to Fahrenheit")
main.configure(bg="#D3D3D3")
label1 = tk.Label(main,text="Celsius : ")
label2 = tk.Label(main,text="Fahrenheit : ")
entry = tk.Entry(main,background="white",foreground="black")
label1.grid(row=0,column=0)
entry.grid(row=0,column=1,columnspan=3)
label2.grid(row=1,column=1)
button = tk.Button(main,text="Convert",command=convert)
button.grid(row=2,column=1)
main.mainloop()