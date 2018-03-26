# Sum of num divisble by 3 and 5 upto 1000

def sumN(n):
    return ((n * (n+1)) // 2)

def sumDivisibleBy(num, upto):
    linearUpto = (upto-1)//num
    return num * sumN(linearUpto)

upto = int(input())
ans = sumDivisibleBy(3,upto) + sumDivisibleBy(5,upto) - sumDivisibleBy(15,upto)
print(ans)
