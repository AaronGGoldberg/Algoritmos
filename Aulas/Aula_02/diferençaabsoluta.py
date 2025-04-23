lista = [9,7,2,6,1,5,3,2,8,7]
indices = ["",""]
contador = 0
diferença = 0
while (contador < len(lista) - 1):
    if (abs(lista[contador] - lista[contador + 1]) > diferença):
        diferença = abs(lista[contador] - lista[contador + 1])
        indices.insert(0, contador)
        indices.insert(1, contador + 1)

    if (contador == len(lista) - 2):
        break
    contador += 1
print (f'A maior diferença é {diferença} que se encontram nos indices {indices[0]} e {indices[1]}')