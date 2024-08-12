while True:
    op = input("Digite uma operação (+, -, *, /) ou 'S' para sair: ")
    if op=='S':
        print("Saindo do programa...")
        break
    if op in ['+', '-', '*', '/']:
        a = float(input("Digite o primeiro número: "))
        b = float(input("Digite o segundo número: "))
        
        if op=='+':
            r = a + b
            print("Resultado:", r)
        elif op=='-':
            r = a - b
            print("Resultado:", r)
        elif op== '*':
            r = a * b
            print("Resultado:", r)
        elif op== '/':
            if b != 0:
                r = a / b
                print("Resultado:", r)
            else:
                print("Erro: Divisão por zero não é permitida.")
    else:
        print("Operação inválida. Tente novamente.")
