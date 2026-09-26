/******************************************************************************

Disciplina: INF101 - Programação de Computadores I
Nome: Pedro Henrique Miranda de Carvalho
Data: 26/09/2026
Descição: Trabalho – Implementação de um Sistema de Registro e Gestão de Contas Bancárias

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    //Variaveis

    string nomeCliente, cpf;

    int numeroConta;

    int Poupanca = 1, Corrente = 2;

    double saldoAtual;

    bool contaAtiva;

    int tipoConta;
    int total = 0;
    int banco;

    //Código

    //cout << ("Teste");
    cout << ("\n***************************\n");
    cout << ("**   BANCO PEDROBANK'S   **\n");
    cout << ("***************************\n");
    cout << "1 - Cadastrar Conta\n";
    cout << "2 - Consultar Conta\n";
    cout << "3 - Verificar Saldo\n";
    cout << "4 - Alterar Tipo da Conta\n";
    cout << "5 - Ativar/Desativar Conta\n";
    cout << "6 - Sair\n";
    cout << "Escolha uma opção: ";  
    cin >> banco;  

        //Seguir Ordem numeroConta, nomeCliente, cpf, tipoConta (Poupança/Corrente), saldoAtual

    switch (banco){

        //-----------------CADASTRO------------------

        case 1: 
        if (total == 1){
            cout << ("Ja tem uma conta cadastrada com essas informações\n");
            break;
        }

        cout << ("Numero da conta: ");
        cin >> numeroConta;
        if (numeroConta <= 0){
            cout << ("Numero da conta deve ser maior que zero\n");
            break;
        }

        cout <<("Nome do Titular: ");
        cin >> nomeCliente;

        cout << ("CPF: ");
        cin >> cpf;

        cout << ("Tipo da conta (1 - Poupança ou 2 - Corrente): ");
        cin >> tipoConta;
        if (tipoConta != Poupanca && tipoConta != Corrente){
            cout << ("Tipo de Conta de invalido\n");
            break;
        }

        cout << ("Saldo Atual: ");
        cin >> saldoAtual;
        if (saldoAtual < 0){
            cout << ("O valor inicial não pode ser menor que zero.\n");
            break;
        }

        contaAtiva = true;
        total = 1;
        cout << ("Conta cadastrada com sucesso!\n");
        break;

        //------------------------CONSULTA---------------------
        //Seguir Ordem numeroConta, nomeCliente, cpf, tipoConta (Poupança/Corrente), saldoAtual

        case 2: 
        cout << ("Consultar Conta");
        break;

        case 3: 
        cout << ("Verificar Saldo");
        break;

        case 4: 
        cout << ("Alterar Tipo da Conta");
        break;

        case 5: 
        cout << ("Ativar/Desativar Conta");
        break;

        case 6: 
        cout << ("Sair");
        break;

        default: 
        cout << ("Opção Invalida");
        break;
        
    }

    return 0;
}