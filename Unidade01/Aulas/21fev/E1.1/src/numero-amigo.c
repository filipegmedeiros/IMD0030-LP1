#include <stdio.h>

typedef struct _conta
{

    char* nome;
    int agencia;
    int conta;
    int saldo;


}conta;

void saldo(conta* usuario)
{
    printf("%d",usuario -> saldo);

}


void sacar(conta* usuario)
{
int saque;
printf("Digite o valor do saque");
scanf("%d", saque);


while ( saque > usuario -> saldo)
{
    printf("Você não tem esse montante.");
    scanf("%d", saque);
}

usuario -> saldo = usuario -> saldo - saque;

}

void depositar(conta* usuario)
{

int deposito;
printf("Digite o valor do deposito");
scanf("%d", deposito);


while ( deposito > 5000 || deposito < 0)
{
    printf("Vá numa agencia depositar manualmente.\n");
    printf("ou digite um valor abaixo de 5000");
    scanf("%d", deposito);
}

usuario -> saldo = usuario -> saldo + deposito;

}




void inserir_cartao(conta *usuario)
{
    printf("Tá entrando aqui? ");
    scanf(" %s", usuario -> nome);

    scanf(" %d", usuario -> agencia);

    scanf(" %d", usuario -> conta);
    printf("Tá saindo aqui? \n");
}


int main()
{
    conta *db = malloc(sizeof(conta));
    inserir_cartao(db);


}