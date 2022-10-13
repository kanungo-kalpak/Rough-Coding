print("PRIME PALINDROME NUMBER")
print("------------------------")

n=int(input("enter the number->"))

store=n
p=0
for i in range(2,n):
    if n%i==0:
        print("not a prime number")
        break
else:
    while n!=0:
        r=n%10
        p=p*10+r
        n=n//10
    if store==p:
        print("this is a palindrome and prime number.")
    else:
        print("this is prime number but not palindrome")
