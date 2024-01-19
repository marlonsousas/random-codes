#include <iostream>
#include <vector>
#include <string>

class Veiculo {
public:
    Veiculo(const std::string& modelo, const std::string& placa)
        : modelo(modelo), placa(placa) {}

    const std::string& getModelo() const {
        return modelo;
    }

    const std::string& getPlaca() const {
        return placa;
    }

private:
    std::string modelo;
    std::string placa;
};

class VagaEstacionamento {
public:
    VagaEstacionamento(int numero) : numero(numero), ocupada(false) {}

    int getNumero() const {
        return numero;
    }

    bool isOcupada() const {
        return ocupada;
    }

    void ocuparVaga(const Veiculo& veiculo) {
        if (!ocupada) {
            veiculoEstacionado = veiculo;
            ocupada = true;
            std::cout << "Veículo estacionado na vaga " << numero << ".\n";
        } else {
            std::cout << "Vaga já ocupada.\n";
        }
    }

    void liberarVaga() {
        if (ocupada) {
            veiculoEstacionado = Veiculo("", "");
            ocupada = false;
            std::cout << "Vaga " << numero << " liberada.\n";
        } else {
            std::cout << "Vaga já está vazia.\n";
        }
    }

    const Veiculo& getVeiculoEstacionado() const {
        return veiculoEstacionado;
    }

private:
    int numero;
    bool ocupada;
    Veiculo veiculoEstacionado;
};

class Estacionamento {
public:
    Estacionamento(int capacidade) : capacidade(capacidade) {
        for (int i = 1; i <= capacidade; ++i) {
            vagas.push_back(VagaEstacionamento(i));
        }
    }

    void exibirMenu() const {
        std::cout << "\n----- Sistema de Estacionamento -----\n";
        std::cout << "1. Estacionar Veículo\n";
        std::cout << "2. Liberar Vaga\n";
        std::cout << "3. Exibir Vagas Ocupadas\n";
        std::cout << "4. Sair\n";
        std::cout << "--------------------------------------\n";
        std::cout << "Escolha uma opção: ";
    }

    void estacionarVeiculo() {
        std::string modelo, placa;
        std::cout << "Digite o modelo do veículo: ";
        std::cin.ignore();
        std::getline(std::cin, modelo);
        std::cout << "Digite a placa do veículo: ";
        std::cin >> placa;

        Veiculo veiculo(modelo, placa);

        for (auto& vaga : vagas) {
            if (!vaga.isOcupada()) {
                vaga.ocuparVaga(veiculo);
                return;
            }
        }

        std::cout << "Estacionamento lotado. Não há vagas disponíveis.\n";
    }

    void liberarVaga() {
        int numeroVaga;
        std::cout << "Digite o número da vaga a ser liberada: ";
        std::cin >> numeroVaga;

        if (numeroVaga >= 1 && numeroVaga <= capacidade) {
            VagaEstacionamento& vaga = vagas[numeroVaga - 1];

            if (vaga.isOcupada()) {
                const Veiculo& veiculo = vaga.getVeiculoEstacionado();
                vaga.liberarVaga();
                std::cout << "Veículo " << veiculo.getModelo() << " (" << veiculo.getPlaca() << ") liberado.\n";
            } else {
                std::cout << "Vaga já está vazia.\n";
            }
        } else {
            std::cout << "Número de vaga inválido.\n";
        }
    }

    void exibirVagasOcupadas() const {
        std::cout << "\n----- Vagas Ocupadas -----\n";
        for (const auto& vaga : vagas) {
            if (vaga.isOcupada()) {
                const Veiculo& veiculo = vaga.getVeiculoEstacionado();
                std::cout << "Vaga " << vaga.getNumero() << ": " << veiculo.getModelo() << " (" << veiculo.getPlaca() << ")\n";
            }
        }
        std::cout << "--------------------------\n";
    }

private:
    int capacidade;
    std::vector<VagaEstacionamento> vagas;
};

int main() {
    int capacidadeEstacionamento;
    std::cout << "Digite a capacidade do estacionamento: ";
    std::cin >> capacidadeEstacionamento;

    Estacionamento estacionamento(capacidadeEstacionamento);

    while (true) {
        estacionamento.exibirMenu();

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1:
                estacionamento.estacionarVeiculo();
                break;
            case 2:
                estacionamento.liberarVaga();
                break;
            case 3:
                estacionamento.exibirVagasOcupadas();
                break;
            case 4:
                std::cout << "Encerrando o sistema de estacionamento. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
