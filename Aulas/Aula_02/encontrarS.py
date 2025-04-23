A = []
resultado = False
contador = 0
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

for i in range (0 , len(A)):
    
    for j in range ( i + 1 ,(len(A))):
        if (A[i] + A[j] == s):
            resultado = True
            print (i , j)
            print (A[i] + A[j])

print (f'O Resultado do teste é {resultado}!')
        
        