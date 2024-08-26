soma = 0
contador = 0
maior = float('-inf')
menor = float('inf')
soma_par=0
soma_impar=0
faixas = {
    "faixa 1": {"contagem": 0, "soma": 0},
    "faixa 2": {"contagem": 0, "soma": 0},
    "faixa 3": {"contagem": 0, "soma": 0},
    "faixa 4": {"contagem": 0, "soma": 0},
    "faixa 5": {"contagem": 0, "soma": 0}
}
pares=[]
impares=[]
while True:
    n = input("Digite um valor qualquer a ser calculado, quando desejar parar e calcular, digite um caractere:")
    try:
        n = float(n)
        soma += n
        contador += 1
        if n < menor:
            menor = n
        if n > maior:
            maior = n

        if n%2==0:
            pares.append(n)
            soma_par+=n
        else:
            impares.append(n)
            soma_impar+=n

        if n < 0:
            faixa = "faixa 1"
        elif 0 <= n < 15:
            faixa = "faixa 2"
        elif 15 <= n < 100:
            faixa = "faixa 3"
        elif 101 <= n < 1000:
            faixa = "faixa 5"
        elif n >= 1000:
            faixa = "faixa 4"
        else:
            continue  # Ignorar números fora das faixas definidas

        faixas[faixa]["contagem"] += 1
        faixas[faixa]["soma"] += n
    except ValueError:
        break

if contador > 0:
    media = soma / contador
    print("A média dos valores inseridos é: {:.2f}".format(media))
    print("O menor valor é: ", menor)
    print("O maior valor é: ", maior)
    print("valores pares:",pares,"a soma é:",soma_par)
    print("valores impares:", impares,"a soma é:", soma_impar)
else:
    print("Nenhum número foi inserido.")

for faixa_nome, dados in faixas.items():
    print(faixa_nome + " - Total de elementos: " + str(dados['contagem']) + ", Total da faixa: {:.2f}".format(dados['soma']))
