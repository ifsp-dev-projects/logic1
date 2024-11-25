dicionario={'frança':"paris", 'brasil': "brasilia", 'argentina': "buenos aires"}
def pais_capital(pais):
    return dicionario.get(pais, "país não encontrado")
pais2=input("digite um pais")
print(pais_capital(pais2))
