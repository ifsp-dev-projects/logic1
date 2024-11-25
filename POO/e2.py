class carro:
    def __init__ (self, marca, modelo, ano):
        self.marca=marca
        self.modelo=modelo
        self.ano=ano
    def exibirdet(self):
        print(f"a marca do carro é: {self.marca}, o modelo do carro é: {self.modelo} e o ano do carro é: {self.ano}")
c1=carro("honda", "hr-v", 2018)
c1.exibirdet()