lista=list (range (1,11))
def substituir_elemento(lista):
    return [-1 if x%2!=0 else x for x in lista] 
# x for x cria uma nova lista com os itens da anterior, se fosse x*2 for x criaria uma lista com os valores com o dobro da anterior
resposta=substituir_elemento(lista)
print (resposta)
# substitui todos os elementos impares por -1