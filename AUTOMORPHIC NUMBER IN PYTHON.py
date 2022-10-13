print("AUTOMORPHIC NUMBER")
print("--------------------")
x=int(input("enter the number->"))
y=x*x
print(y)
flag=0
while x!=0:
    if x%10!=y%10:
        flag=1
    x=x//10
    y=y//10
if flag==0:
    print("AUTOMORPHIC NUMBER.")
else:
    print("NOT A AUTOMORPHIC NUMBER.")

