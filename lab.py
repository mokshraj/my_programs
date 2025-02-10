x = 'hello world'
print(x)
z = input("Enter str to replace")
a = x.find(z)
if a == -1:
    print("str not found")
    exit()
y = input("Enter str to insert")
x = x[0:a]+y+x[a+1:]
print(x)