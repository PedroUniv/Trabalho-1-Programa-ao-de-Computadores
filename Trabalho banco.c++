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
            if (total == 0){
                cout << ("Nenhuma Conta Cadastrada.\n");
            break;
        }
        
        cout << ("\n----Dados da Conta----\n");
        cout << "Numero da Conta: " << numeroConta << "\n";
        cout << "Nome do Titular: " << nomeCliente << "\n";
        cout << "CPF do Titular: " << cpf << "\n";
        if (tipoConta == Poupanca){
            cout << "Conta Poupança\n";
        }else{
            cout << "Conta Corrente\n";
        }

        cout << "Saldo da Conta: R$" << saldoAtual << "\n";
        if (contaAtiva){
            cout << "Conta Existente!\n";
        }else{
            cout << "Conta não cadastrada.\n";
        }
        break;

        //------------------------Verificar Saldo---------------------

        case 3: 
        if (total == 0){
            cout << ("Nenhuma Conta Cadastrada.\n");
            break;
        }

        if (!contaAtiva){
            cout << "Conta não cadastrada.\n";
            break;
        }

        cout << "Saldo Atual: R$" << saldoAtual << "\n";
        break;

        //------------------------Alterar Tipo de Conta---------------------

        case 4: 
        if (total == 0){
            cout << ("Nenhuma Conta Cadastrada.\n");
        }
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