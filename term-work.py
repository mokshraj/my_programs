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
# print(f"Is Set1 subset of Set2?: {set1 <= set2}\n")
# print(f"Is Set1 superset of Set2?: {set1 >= set2}\n")

#11. Write a program that extracts and prints the characters from an input string that are present at prime indices (0-based index) using slicing.
def isprime(a):
    for i in range(2,a//2):
        if a%i == 0:
            return True
    return False
str = input("Enter ")