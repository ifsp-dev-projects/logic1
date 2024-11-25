def calcularmedias (notas): #define a função calcular medias com "notas" sendo o parâmetro
    total=sum(notas) #atribui à variavel "total" a soma de todas as notas
    media=total/len(notas) #atribui à variavel media o total dividido pela quantidade de itens atribuidos a nota
    return media #retorna a media quando a função é chamada
notas=[7,8,9] #atribui valor a variavel nome, nesse caso sendo definido como uma lista com os valores 7, 8 e 9
resultado=calcularmedias(notas) #atribui à variavel resultado a funçao calcularmedia em relação a variavel notas, calculando a media entre 7, 8 e 9
print(resultado)  #printa o resultado da media de 7, 8 e 9 (8)