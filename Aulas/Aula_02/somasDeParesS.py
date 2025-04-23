A = []
contador = 0
somasS= 0
print('Quantos valores na Array?')
tamArray = int(input())
print('Qual o valor Alvo?')
s = int(input())
while (contador < tamArray):
    temp = int(input())
    if (temp < 0):
        print ('Digite um valor válido!')
    else:    
        A.append(temp)
        contador += 1

for i in range (len(A)):
    for j in range (len(A)):
        if (A[i] + A[j] == s and i != j):
            somasS += 1
            print ( i , j )

print (f'O total de somas de pares resultadas em S é {somasS}! ')