def buscar_valor(lista, valor):  #define a função buscar_valor e usalista e valor como parâmetro
    if valor in lista: #condicional para saber se valor esta dentro de lista
        return lista.index(valor) #retorna o indice de valor se a condição for verdadeira
    else:
        return -1 #retorna -1 se for falsa

indices = buscar_valor([10, 20, 30, 40], 30) #atribui à variavel indices  a função, tendo [10, 20, 30, 40] como lista e 30 como valor
print(indices) 
