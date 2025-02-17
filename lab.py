# x = 'hello world'
# print(x)
# z = input("Enter str to replace")
# a = x.find(z)
# if a == -1:
#     print("str not found")
#     exit()
# y = input("Enter str to insert")
# x = x[0:a]+y+x[a+1:]
# print(x)

a = []
for i in range(3):
    a.append(int(input(f"Enter {i+1} side of triangle")))
if(a[0]+a[1] == a[2] or a[0]+a[1]>a[1]):
    print(a)
    print("the triangle is valid")
else:
    print("the triangle is invlaid")