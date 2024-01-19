#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

// Definindo a classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(const std::string& nomeCliente, double saldoInicial)
        : nomeCliente(nomeCliente), saldo(saldoInicial) {}

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de depósito inválido.\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de $" << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Erro: Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    void verificarSaldo() const {
        std::cout << "Saldo atual: $" << saldo << std::endl;
    }

private:
    std::string nomeCliente;
    double saldo;
};

int main() {
    std::vector<ContaBancaria> contas;

    while (true) {
        std::cout << "\n----- Sistema Bancário -----\n";
        std::cout << "1. Criar Nova Conta\n";
        std::cout << "2. Acessar Conta Existente\n";
        std::cout << "3. Sair\n";
        std::cout << "-----------------------------\n";
        std::cout << "Escolha uma opção: ";

        int escolha;
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nomeCliente;
                double saldoInicial;

                std::cout << "Digite seu nome: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, nomeCliente);

                std::cout << "Digite o saldo inicial: $";
                std::cin >> saldoInicial;

                ContaBancaria novaConta(nomeCliente, saldoInicial);
                contas.push_back(novaConta);

                std::cout << "Conta criada com sucesso!\n";
                break;
            }
            case 2: {
                int numeroConta;
                std::cout << "Digite o número da conta: ";
                std::cin >> numeroConta;

                if (numeroConta >= 1 && numeroConta <= contas.size()) {
                    ContaBancaria& contaAtual = contas[numeroConta - 1];

                    std::cout << "\n----- Operações na Conta -----\n";
                    std::cout << "1. Depositar\n";
                    std::cout << "2. Sacar\n";
                    std::cout << "3. Verificar Saldo\n";
                    std::cout << "4. Voltar ao Menu Principal\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "Escolha uma opção: ";

                    int escolhaConta;
                    std::cin >> escolhaConta;

                    switch (escolhaConta) {
                        case 1: {
                            double valorDeposito;
                            std::cout << "Digite o valor a depositar: $";
                            std::cin >> valorDeposito;
                            contaAtual.depositar(valorDeposito);
                            break;
                        }
                        case 2: {
                            double valorSaque;
                            std::cout << "Digite o valor a sacar: $";
                            std::cin >> valorSaque;
                            contaAtual.sacar(valorSaque);
                            break;
                        }
                        case 3:
                            contaAtual.verificarSaldo();
                            break;
                        case 4:
                            break;
                        default:
                            std::cout << "Opção inválida.\n";
                    }
                } else {
                    std::cout << "Conta não encontrada.\n";
                }
                break;
            }
            case 3:
                std::cout << "Encerrando o sistema bancário. Adeus!\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
