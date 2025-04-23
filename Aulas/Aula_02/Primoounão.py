N = int(input())

if (N > 0):
    contador = 1
    divisores = 0
    while (contador <= N):
        if (N % contador == 0):
            divisores += 1
        contador += 1
else:
    print('Digite um valor válido!')



if (divisores > 2):
    print (f'O Número {N} não é primo pois possue {divisores} divisores!')
else:
    print (f'O Número {N} é primo pois possue {divisores} divisores!')

