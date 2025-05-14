import random

n, menor, maior = map(int, input().split())
print(n)
for i in range(n):
    print(random.randrange(menor, maior + 1), end=" ")
print()