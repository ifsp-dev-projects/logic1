nomes=['maria']
def adicionar_nomes (lista, nomes):
    lista.append(nomes)
    return lista
nomes=adicionar_nomes(nomes, 'ana')
nomes=adicionar_nomes(nomes, 'melissa')
nomes=adicionar_nomes(nomes, 'eduardo')
print(nomes)

#adiciona nomes na lista com função