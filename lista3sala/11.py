maior = float('-inf')
menor = float('inf')
for i in range(5):
    numero = int(input("Digite um valor: "))
    if numero > maior:
        maior = numero
    if numero < menor:
        menor = numero
print("O maior valor é:", maior)
print("O menor valor é:", menor)
