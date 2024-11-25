class pessoa:
    def __init__(self, nome, idade):
        self.nome=nome
        self.idade=idade
    def exibirinfo(self):
        print(f"o nome é: {self.nome}, a idade é: {self.idade}")
p1=pessoa("ana", 15)
p2=pessoa("eduardo", 16)
p1.exibirinfo()
p2.exibirinfo()