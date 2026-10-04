# // 1. Write a program to enter two integers, two floating

# // numbers and then perform all arithmetic operations

# // on them.


a = int(input("enter your a number: "))
b = int(input("enter your b number: "))
print("sum of product is :", a + b)
print("sub of product is :", a - b)
print("div of product is :", a / b)
print("multiplication of product is :", a * b)



# // 2. Write a program to calculate Simple Interest for

# // values of p, r, t entered by the user


p = float(input("Enter your principal : "))
r = float(input("Enter rate of interest: "))
t = float(input("Enter your time: "))

si = (p * r * t) / 100

print("Simple Interest =", si)






# // 4. Write a python program to find factorial of a

# // numbe


n = int(input("Enter your number: "))

factorial = 1

for i in range(1, n + 1):
    factorial = factorial * i

print("Factorial of your number is =", factorial)







# // 6. Write a python program to construct the following

# // pattern using nested for loop:

# // *

# // * *

# // * * *

# // * * * *

# //  * * * * *


for i in range(1, 6):

    for j in range(1, i + 1):
        print("*", end=" ")

    print()





# // 7. Write a program to check whether a number is an

# // Armstrong number or not



n = int(input("Enter a number: "))

original = n
sum = 0

while n != 0:

    remainder = n % 10
    sum = sum + remainder * remainder * remainder
    n = n // 10

if sum == original:
    print(original, "is Armstrong number")
else:
    print(original, "is not Armstrong number")