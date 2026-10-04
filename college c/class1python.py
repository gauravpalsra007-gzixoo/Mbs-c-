s = input("Enter a string: ")
n = len(s)

first = s[0]
last = s[-1]
middle = s[n // 2] if n % 2 != 0 else s[n // 2 - 1] + s[n // 2]

print("First character:", first)
print("Last character:", last)
print("Middle character:", middle)