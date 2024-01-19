#include <iostream>
#include <vector>
#include <string>

// Definindo a classe Funcionario
class Funcionario {
public:
    Funcionario(const std::string& nome, int idade, double salario)
        : nome(nome), idade(idade), salario(salario) {}

    void exibirDados() const {
        std::cout << "Nome: " << nome << ", Idade: " << idade << ", Salário: $" << salario << std::endl;
    }

    // Outras funções/métodos relevantes para a classe Funcionario
    // ...

private:
    std::string nome;
    int idade;
    double salario;
};

// Função para exibir o menu
void exibirMenu() {
    std::cout << "\n----- Menu -----\n";
    std::cout << "1. Adicionar Funcionário\n";
    std::cout << "2. Exibir Funcionários\n";
    std::cout << "3. Sair\n";
    std::cout << "-----------------\n";
    std::cout << "Escolha uma opção: ";
}

int main() {
    std::vector<Funcionario> funcionarios;

    while (true) {
        exibirMenu();

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nome;
                int idade;
                double salario;

                std::cout << "Digite o nome do funcionário: ";
                std::cin >> nome;

                std::cout << "Digite a idade do funcionário: ";
                std::cin >> idade;

                std::cout << "Digite o salário do funcionário: $";
                std::cin >> salario;

                Funcionario novoFuncionario(nome, idade, salario);
                funcionarios.push_back(novoFuncionario);

                std::cout << "Funcionário adicionado com sucesso!\n";
                break;
            }
            case 2:
                std::cout << "\n----- Lista de Funcionários -----\n";
                for (const auto& funcionario : funcionarios) {
                    funcionario.exibirDados();
                }
                std::cout << "-------------------------------\n";
                break;
            case 3:
                std::cout << "Encerrando o programa. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
