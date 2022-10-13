print("BINARY TO DECIMAL CONVERSION.")
print("-----------------------------")
x=int(input("Enter the number->"))
sum=0
count=0
while x!=0:
    r=x%10
    sum=sum+(2**count)*r
    count=count+1
    x=x//10
print("DECIMAL NUMBER IS->",sum)

