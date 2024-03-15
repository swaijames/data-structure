n = 5
f = 1
if n < 0:
    print("Negative numbers")
elif n == 0 or n == 1:
    print(1)
else:
    for i in range(1, n + 1):
        f = f * i
    print(f)


# using function
def factorial(num):
    if num == 0 or num == 1:
        return 1
    else:
        return num * factorial(num - 1)


print(factorial(20))
