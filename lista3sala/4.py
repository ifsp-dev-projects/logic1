N = int(input("Digite um número menor ou igual a 50: "))

if N <= 50:
    produto = N
    while produto < 250:
        print(produto)
        produto=produto*3
else:
    print("O número digitado é maior que 50.")

