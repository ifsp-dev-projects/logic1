class contabancaria:
    def __init__ (self, titular, saldo=0.0):
        self.titular=titular
        self._saldo=saldo
    def depositar(self, deposito):
        self._saldo+=deposito
        print(f"deposito de {deposito}R$ feito!")
    def sacar (self, saque):
        if self._saldo>=saque:
            self._saldo-=saque
            print(f"saque de {saque} R$ feito")
        else:
            print(f"o saldo não é suficiente")
    def saldoatual(self):
        return self._saldo
    

p=contabancaria("joao", 1000)
p.depositar(100)
print(f"Saldo após depósito: R$ {p.saldoatual()}")
p.sacar(900)
print(f"Saldo após depósito: R$ {p.saldoatual()}")


