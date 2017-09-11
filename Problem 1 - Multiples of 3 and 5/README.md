## Question 1
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

---

## Solution

####*Naive Method*

 - If you do it naively, what you can do is loop over all numbers from 3 to 999 and check if they are divided by 3 or 5 and add it a variable sum.

In python :

```python3
sum = 0
for i in range(3, 1000):
    if not i%3 or not i%5:
        sum += i
print(sum)
```

 - But this method will perform poorly for larger values like 1,000,000,000 or greater. (In case your variable doesn't overflows.)

 - A better method will be to sum the multiples of 3 below 1000 and the multiples of 5 below 1000 and then subtract multiples of 15 from sum. (Because 15 will be duplicated for 3 and 15.)

In python:
```python3
def sumOfMultiples(n, upto):
    sum = 0
    for i in range(n,upto,n):
        sum += i
    return sum

ans = sumOfMultiples(3) + sumOfMultiples(5) - sumOfMultiples(15)
print(ans)
```

####*A Good Solution*

 - Now lets look at the pattern we form when solving this question:

    - For Multiples of 3, the pattern is 
```
      3 + 6 + 9 + 12 + ... + 999 = 3 * (1+2+...+333)
```

    - For Multiples of 5, the pattern is 
```
    5 + 10 + ... + 995 = 5 * (1+2+...+199)
```

    - For Multiples of 15, the pattern is 
```
    15 + 30 + ... + 990 = 15 * (1+2+ ... + 66)
```


 - So, what we can do is, use the arithmetic progression formula for adding numbers upto n i.e., ``` sum(1..n) = n(n+1) / 2```

 - Now, we can add numbers from 1 to floor(999/n) for n and multiply by n to find the sum of multiples.

 - See the solutions for implementation.

