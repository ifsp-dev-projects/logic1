dicionario={'ana':15, 'eduardo':16, 'rafael':41}
def idade_pessoa( nome):
    return dicionario.get(nome, "nome não encontrado")
nome2=input("digite o nome")
print(f"a idade de {nome2} é; {idade_pessoa(nome2)}")
 # retorna a idade do nome digitado no input caso esteja no dicionario, se não estiver devolve "nome não encontrado"