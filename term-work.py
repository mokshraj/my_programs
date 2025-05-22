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

# #14. Design a class for rational numbers that supports arithmetic operations (+, -, *, /) using operator overloading.
# class arop():
#     def __init__(self,a):
#         self.a = a
#     def __add__(self,o):
#         return self.a + o.a
#     def __sub__(self,o):
#         return self.a - o.a
#     def __mul__(self,o):
#         return self.a * o.a
#     def __truediv__(self,o):
#         return self.a / o.a
# a = arop(10)
# print(a + a)
# print(a - a)
# print(a * a)
# print(a / a)

# #15. Implement a function that sorts a list of student objects based on multiple criteria (e.g., marks, age) using higher-order functions.
# class student():
#     def __init__(self,name,age,marks):
#         self.name = name
#         self.age = age
#         self.marks = marks
# def sortstudent(a):
#     if len(a)%2==0:
#         length = len(a)//2
#     else:
#         length = len(a)//2 +1
#     for i in range(length):
#         for j in range(i,len(a)):
#             if a[i].name == a[j].name :
#                 if a[i].age == a[j].age:
#                     if a[i].marks > a[j].marks:
#                         a[i],a[j] = a[j],a[i]
#                 elif a[i].age > a[i+1].age:
#                     a[i],a[j] = a[j],a[i]
#             elif a[i].name > a[i+1].name :
#                 a[i],a[j] = a[j],a[i]
# # Create list of students
# a = []
# n = int(input("Enter the no of students : "))
# for i in range(n):
#     print(f"\nFor student {i+1} :\n")
#     name = input("Enter the name : ")
#     age = int(input("Enter age : "))
#     marks = float(input("Enter the marks : "))
#     # Create a new Student object for each student
#     a.append(student(name, age, marks))
# sortstudent(a)
# print(f"\nsorted student list :\n")
# print("\tname\t\tage\t\tmarks")
# print("\t____\t\t___\t\t_____")
# for i in range(n):
#     print(f"{i+1}\t{a[i].name}\t\t{a[i].age}\t\t{a[i].marks}")

# #16. Implement a Python program that simulates a race condition between multiple threads and uses synchronization techniques to prevent data corruption.(A.I)
# import threading
# import time
# # Shared resource
# class Counter:
#     def __init__(self):
#         self.count = 0
#         self.lock = threading.Lock()  # Create a lock for synchronization
    
#     def increment_without_lock(self):
#         # Unsafe method - demonstrates race condition
#         current = self.count
#         time.sleep(0.1)  # Simulate some processing time
#         self.count = current + 1
    
#     def increment_with_lock(self):
#         # Safe method - uses lock for synchronization
#         with self.lock:
#             current = self.count
#             time.sleep(0.1)  # Simulate some processing time
#             self.count = current + 1
# #
# def demonstrate_race_condition():
#     counter = Counter()
#     threads = []
# #
#     # Create threads without synchronization
#     print("\nDemonstrating race condition (without lock):")
#     for _ in range(5):
#         thread = threading.Thread(target=counter.increment_without_lock)
#         threads.append(thread)
#         thread.start()
# #
#     # Wait for all threads to complete
#     for thread in threads:
#         thread.join()
# #
#     print(f"Expected count: 5")
#     print(f"Actual count: {counter.count}")  # Will likely be less than 5 due to race condition
# #
# def demonstrate_synchronization():
#     counter = Counter()
#     threads = []
# #
#     # Create threads with synchronization
#     print("\nDemonstrating synchronization (with lock):")
#     for _ in range(5):
#         thread = threading.Thread(target=counter.increment_with_lock)
#         threads.append(thread)
#         thread.start()
# #
#     # Wait for all threads to complete
#     for thread in threads:
#         thread.join()
# #
#     print(f"Expected count: 5")
#     print(f"Actual count: {counter.count}")  # Will be exactly 5
# #
# if __name__ == "__main__":
#     demonstrate_race_condition()
#     demonstrate_synchronization()

# #17. Write a program in Python to demonstrate following operations:
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

# #18. Write a Python program to store and retrieve objects using pickle.
# import pickle
# class Person:
#     def __init__(self, name, age, city):
#         self.name = name
#         self.age = age
#         self.city = city
    
#     def __str__(self):
#         return f"Name: {self.name}, Age: {self.age}, City: {self.city}"
# # Create list to store Person objects
# people = []
# # Get number of people to add
# n = int(input("Enter number of people to add: "))
# # Input person details
# for i in range(n):
#     print(f"\nEnter details for person {i+1}:")
#     name = input("Name: ")
#     age = int(input("Age: "))
#     city = input("City: ")
#     people.append(Person(name, age, city))
# # Save to file using pickle
# with open('people.pkl', 'wb') as file:
#     pickle.dump(people, file)
# print("\nData saved to file successfully!")
# # Read from file
# print("\nReading data from file:")
# with open('people.pkl', 'rb') as file:
#     loaded_people = pickle.load(file)
# # Display loaded data
# print("\nStored People:")
# print("-------------")
# for person in loaded_people:
#     print(person)

# #19. Develop a basic Python chat application that allows two users to send and receive text messages over a network.(A.I)
# import socket
# import threading
# #
# class ChatServer:
#     def __init__(self, host='127.0.0.1', port=5555):
#         self.server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
#         self.server.bind((host, port))
#         self.server.listen(2)
#         self.clients = []
#         print(f"Server running on {host}:{port}")
#     def broadcast(self, message, sender=None):
#         for client in self.clients:
#             if client != sender:
#                 try:
#                     client.send(message)
#                 except:
#                     self.clients.remove(client)
#     def handle_client(self, client):
#         while True:
#             try:
#                 message = client.recv(1024)
#                 if message:
#                     self.broadcast(message, client)
#                 else:
#                     self.clients.remove(client)
#                     break
#             except:
#                 self.clients.remove(client)
#                 break
#     def start(self):
#         while True:
#             client, address = self.server.accept()
#             print(f"Connected with {address}")
#             self.clients.append(client)
#             thread = threading.Thread(target=self.handle_client, args=(client,))
#             thread.start()
# #
# class ChatClient:
#     def __init__(self, host='127.0.0.1', port=5555):
#         self.client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
#         self.client.connect((host, port))
#         self.username = input("Enter your username: ")

#     def receive_messages(self):
#         while True:
#             try:
#                 message = self.client.recv(1024).decode()
#                 print(message)
#             except:
#                 print("Connection lost!")
#                 self.client.close()
#                 break
#     def send_messages(self):
#         while True:
#             try:
#                 message = input()
#                 if message.lower() == 'quit':
#                     self.client.close()
#                     break
#                 full_message = f"{self.username}: {message}"
#                 self.client.send(full_message.encode())
#             except:
#                 print("Connection lost!")
#                 self.client.close()
#                 break
#     def start(self):
#         receive_thread = threading.Thread(target=self.receive_messages)
#         send_thread = threading.Thread(target=self.send_messages)
#         receive_thread.start()
#         send_thread.start()
# # Run as server
# if __name__ == "__main__":
#     choice = input("Run as (s)erver or (c)lient? ").lower()
#     if choice == 's':
#         server = ChatServer()
#         server.start()
#     elif choice == 'c':
#         client = ChatClient()
#         client.start()

# #20. Write a Python program that demonstrates multithreading by creating multiple threads that perform different tasks simultaneously.
# import threading
# import time
# import random
# #
# class TaskThread:
#     def __init__(self):
#         self.result1 = 0
#         self.result2 = 0
#         self.result3 = 0
#         self.lock = threading.Lock()
#     def countdown_task(self, seconds):
#         print(f"\nCountdown starting from {seconds} seconds")
#         while seconds:
#             print(f"Time remaining: {seconds} seconds")
#             time.sleep(1)
#             seconds -= 1
#         with self.lock:
#             self.result1 = "Countdown completed"
#             print(f"\nTask 1: {self.result1}")
#     def number_generator(self, count):
#         print("\nGenerating random numbers")
#         numbers = []
#         for _ in range(count):
#             numbers.append(random.randint(1, 100))
#             time.sleep(0.5)
#         with self.lock:
#             self.result2 = sum(numbers)
#             print(f"\nTask 2: Sum of generated numbers = {self.result2}")
#     def fibonacci(self, n):
#         print("\nCalculating Fibonacci sequence")
#         a, b = 0, 1
#         fib = []
#         for _ in range(n):
#             fib.append(a)
#             a, b = b, a + b
#             time.sleep(0.3)
#         with self.lock:
#             self.result3 = fib
#             print(f"\nTask 3: Fibonacci sequence = {self.result3}")
# # Create thread instances
# task = TaskThread()
# # Create threads with different tasks
# thread1 = threading.Thread(target=task.countdown_task, args=(5,))
# thread2 = threading.Thread(target=task.number_generator, args=(8,))
# thread3 = threading.Thread(target=task.fibonacci, args=(10,))
# # Start all threads
# print("Starting all threads...\n")
# thread1.start()
# thread2.start()
# thread3.start()
# # Wait for all threads to complete
# thread1.join()
# thread2.join()
# thread3.join()
# print("\nAll tasks completed!")
# print(f"Task 1 Result: {task.result1}")
# print(f"Task 2 Result: {task.result2}")
# print(f"Task 3 Result: {task.result3}")

# #21. Create a GUI program to display images from a folder and allow users to navigate through them using next/previous buttons.
# import tkinter as tk
# from PIL import Image, ImageTk
# import os
# def next_image():
#     global current_index, image
#     current_index = (current_index + 1) % len(image_files)
#     load_image()
# def prev_image():
#     global current_index, image
#     current_index = (current_index - 1) % len(image_files)
#     load_image()
# def load_image():
#     global image
#     image_path = os.path.join(current_dir, image_files[current_index])
#     image = Image.open(image_path)
#     resize_image(None)
# def resize_image(event):
#     # Initialize dimensions
#     if event:
#         width = event.width
#         height = event.height
#     else:
#         # For initial load, set minimum dimensions
#         width = 800
#         height = 600
    
#     if width <= 0 or height <= 0:  # Prevent division by zero
#         return
#     # Calculate new dimensions maintaining aspect ratio
#     image_ratio = image.width / image.height
#     window_ratio = width / height
#     if window_ratio > image_ratio:
#         new_height = height
#         new_width = int(new_height * image_ratio)
#     else:
#         new_width = width
#         new_height = int(new_width / image_ratio)
#         # Resize image
#     resized_image = image.resize((new_width, new_height), Image.Resampling.LANCZOS)
#     photo = ImageTk.PhotoImage(resized_image)
#         # Update label
#     image_label.configure(image=photo)
#     image_label.image = photo
# # Get list of images from current directory
# current_dir = os.path.dirname(os.path.abspath(__file__))
# image_files = [f for f in os.listdir(current_dir) if f.lower().endswith(('.png', '.jpg', '.jpeg', '.gif'))]
# current_index = 0
# # Initial window setup
# main = tk.Tk()
# main.title("Image Viewer")
# main.geometry("800x600")
# # Create main frame for the entire content
# main_frame = tk.Frame(main)
# main_frame.pack(fill='both', expand=True)
# # Create frame for image
# image_frame = tk.Frame(main_frame)
# image_frame.pack(fill='both', expand=True)
# # Create image label
# image_label = tk.Label(image_frame)
# image_label.pack(fill='both', expand=True)
# # Create button frame at the bottom
# button_frame = tk.Frame(main_frame)
# button_frame.pack(fill='x', side=tk.BOTTOM, padx=5, pady=5)
# # Create navigation buttons
# prev_button = tk.Button(button_frame, text="Previous", command=prev_image)
# prev_button.pack(side=tk.LEFT, padx=5)
# next_button = tk.Button(button_frame, text="Next", command=next_image)
# next_button.pack(side=tk.RIGHT, padx=5)
# # Bind resize event to image frame instead of main frame
# if image_files:
#     load_image()
#     image_frame.bind('<Configure>', resize_image)
# main.mainloop()

# #22. Design a simple calculator using Tkinter (or PyQt) with buttons for basic arithmetic operations.
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

#23. Implement a GUI temperature converter that takes input in Celsius and converts it to Fahrenheit when a button is clicked.
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