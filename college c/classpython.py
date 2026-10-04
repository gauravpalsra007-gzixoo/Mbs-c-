a="i love python programming"
s1=a.lower()
print(s1)
vowels="aeiou"
vctr=0
for ch in  s1:
    if ch in vowels:
        vctr=vctr+1
print("total numebr of vowels are",vctr)