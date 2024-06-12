
def fizzBuz(n):
    if n%3==0 and n%5==0:
        print("fizzbuz")
    elif n%3==0:
        print("fiz")
    elif n%5==0 :
        print("buzz")
    else:
        print("the number is not divisible by 3 and 5")
        
        
fizzBuz(45)