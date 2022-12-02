#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{

    FILE *tabelaProdutos;
    FILE *tabelaVendas;
    FILE *tabelaClientes;
    FILE *tabelaTransacoes;

    int n1;
    int n2;

    system("COLOR 05");

    while (n1 != 4)
    {
        system("cls");
        printf("\t\t Fake Store \n\n");
        printf("1-cliente\n2-produto\n3-compra/venda\n");
        printf("\t\tPor favor, digite sua opcao: ");
        scanf("%d", &n1);

        switch (n1)
        {
        case 1:
            system("cls");
            printf("1-Adicione um cliente \n2-Buscar um cliente \n3-Atualizar um cliente \n4-Deletar um cliente \n");
            scanf("%d", &n2);

            switch (n2)
            {
            case 1:
                system("cls");
                printf("\t\tCliente\n\n");
                tabelaClientes = fopen("listaCliente.txt", "a");

                struct dadosCliente
                {
                    char nome[50];
                    char idade[50];
                    char cpf[50];
                };

                struct dadosCliente cliente;

                printf("Nome do(a) cliente: ");
                scanf("%s", &cliente.nome);

                printf("\nIdade: ");
                scanf("%s", &cliente.idade);
                getchar();

                printf("\nCPF:  ");
                scanf("%s", &cliente.cpf);

                fprintf(tabelaClientes, "%s\n %s\n %s  ", cliente.nome, cliente.idade, cliente.cpf);
                fclose(tabelaClientes);

                system("pause");

                break;

            case 2:
                system("cls");
                printf("\t\tExibindo cadastro...\n");
                tabelaClientes = fopen("listaCliente.txt", "r");

                while (fscanf(tabelaClientes, "%s%s%s", cliente.nome, cliente.idade,
                              cliente.cpf) != -1)
                {
                    printf("Nome da cliente: %s\nIdade: %s\nCPF: %s\n", cliente.nome,
                           cliente.idade, cliente.cpf);
                    system("Pause");
                    getchar();
                }

                fclose(tabelaClientes);
                break;

            case 3:
                system("cls");

                fclose(tabelaClientes);

                break;

            case 4:
                system("cls");
                int op;

                printf("Deseja excluir tudo?\n 1-Excluir tudo.\n2-Nao excluir");
                scanf("%d", &op);

                if (op == 1)
                {
                    struct midia;
                    tabelaClientes = fopen("listaCliente.txt", "w");
                    printf("Os dados foram excluidos...\n");
                    fclose(tabelaClientes);
                    getchar();
                }

                break;
            }

            break;
        case 2:
            system("cls");
            printf("1 - Criar produto\n");
            printf("2 - Buscar produto\n");
            printf("3 - Atualizar produto\n");
            printf("4 - Deletar produto\n");
            scanf("%d", &n2);

            switch (n2)
            {
            case 1:
                system("cls");
                printf("\tProduto...\n");
                tabelaClientes = fopen("listaCliente.txt", "a");

                struct dadosProdutos
                {
                    char produtoD[50];
                    char codigoD[50];
                };

                struct dadosProdutos produtos;

                printf("\nNome produto: ");
                scanf("%s", &produtos.produtoD);

                printf("\nCodigo produto: ");
                scanf("%s", &produtos.codigoD);

                fprintf(tabelaProdutos, "%s\n%s\n", produtos.produtoD,
                        produtos.codigoD);
                fclose(tabelaProdutos);
                break;

                break;
            case 2:
                system("cls");
                printf("\tExibindo cadastro..\n");
                tabelaProdutos = fopen("listaProduto.txt", "r");

                while (fscanf(tabelaProdutos, "%s\n%s\n", produtos.produtoD,
                              produtos.codigoD) != -1)
                {
                    printf("Nome do produto: %s\nCodigo do produto: %s\n",
                           produtos.produtoD, produtos.codigoD);
                    system("pause");
                }

                fclose(tabelaProdutos);

                break;
                break;

            case 3:
                system("cls");

                break;

            case 4:
                system("cls");
                int op2;
                printf("Deseja excluir tudo?\n1 - Excluir tudo\n2 - Não "
                       "Excluir");
                scanf("%d", &op2);
                if (op2 == 1)
                {
                    struct midia;
                    tabelaProdutos = fopen("listaProduto.txt", "w");
                    printf("Todos dados excluidos...");
                    fclose(tabelaProdutos);
                }

                break;
            }
            break;
            break;

        case 3:
            system("cls");
            printf("Escolha:\n1- Compra\n2 - Venda");
            scanf("%d", &n2);

            switch (n2)
            {
            case 1:
                system("cls");
                printf("Compra...\n");
                printf("1 - Criar uma compra\n2 - Buscar uma compra na lista\n3 - "
                       "Modificar as compras\n4 - Deletar uma compra");
                scanf("%d", &n2);

                switch (n2)
                {
                case 1:
                    system("cls");
                    printf("\tCompra...\n");
                    tabelaTransacoes = fopen("listaTransacoes.txt", "a");

                    struct dadosCompras
                    {
                        char modeloC[50];
                        char unidadeC[50];
                        char pagamentoC[50];
                    };

                    struct dadosCompras compras;

                    printf("Modelo do produto: ");
                    scanf("%s", &compras.modeloC);

                    printf("Quantas unidades deseja: ");
                    scanf("%s", &compras.unidadeC);

                    printf("\nForma de pagamento: ");
                    scanf("%s", &compras.pagamentoC);

                    fprintf(tabelaTransacoes, "%s %s %s", compras.modeloC,
                            compras.unidadeC, compras.pagamentoC);
                    fclose(tabelaTransacoes);

                    break;

                case 2:
                    system("cls");
                    printf("\tExibindo compras...\n");
                    tabelaTransacoes = fopen("listaTransacoes.txt", "r");

                    while (fscanf(tabelaTransacoes, "%s%s%s", compras.modeloC,
                                  compras.unidadeC, compras.pagamentoC) != -1)
                    {
                        printf("Modelo do produto: %s\nQuantas unidades deseeja: %s\nForma "
                               "de pagamento: %s\n",
                               compras.modeloC, compras.unidadeC, compras.pagamentoC);
                        system("pause");
                    }

                    fclose(tabelaTransacoes);

                    break;

                case 4:
                    system("cls");
                    int op3;
                    printf("Deseja excluir tudo?\n1 - Excluir tudo\n2 - NÃO "
                           "EXCLUIR");
                    scanf("%d", &op3);
                    if (op3 == 1)
                    {
                        struct midia;
                        tabelaTransacoes = fopen("listaTransacoes.txt", "w");
                        printf("Todos os dados foram excluidos...\n");
                        system("pause");
                        fclose(tabelaTransacoes);
                    }

                    break;
                }
                break;
            case 2:
                system("cls");
                printf("\tVendas...\n");
                printf("1 - Criar uma venda\n2 - Buscar uma venda na lista\n3 - "
                       "Modificar uma venda\n4 - Deletar uma venda\n");
                scanf("%d", &n2);

                switch (n2)
                {
                case 1:
                    system("cls");
                    printf("\tVendas...\n");

                    tabelaVendas = fopen("listaVendas.txt", "a");

                    struct dadosVendas
                    {
                        char nome[50];
                        char modeloV[50];
                        char unidadesV[50];
                        char pagamentoV[50];
                    };

                    struct dadosVendas vendas;

                    printf("Seu nome: ");
                    scanf("%s", &vendas.nome);

                    printf("Modelo: ");
                    scanf("%s", &vendas.modeloV);

                    printf("Unidades a vender: ");
                    scanf("%s", &vendas.unidadesV);

                    printf("Formas de pagamento: ");
                    scanf("%s", &vendas.pagamentoV);

                    fprintf(tabelaVendas, "%s\n%s\n%s\n%s\n", vendas.nome, vendas.modeloV,
                            vendas.unidadesV, vendas.pagamentoV);
                    fclose(tabelaVendas);

                    break;

                case 2:
                    system("cls");
                    printf("Exibindo vendas...");
                    tabelaVendas = fopen("listaVendas.txt", "r");

                    while (fscanf(tabelaVendas, "%s\n%s\n%s\n%s", vendas.nome,
                                  vendas.modeloV, vendas.unidadesV,
                                  vendas.pagamentoV) != -1)
                    {
                        printf("Seu nome: %s\nModelo: %s\nUnidades a vender: %s\nFormas de "
                               "Pagamento: %s\n",
                               vendas.nome, vendas.modeloV, vendas.unidadesV,
                               vendas.pagamentoV);
                        system("pause");
                    }
                    fclose(tabelaVendas);

                    break;

                case 4:
                    system("cls");
                    int op4;
                    printf("DESEJA REALMENTE EXCLUIR TODOS DADOS? 1 - EXCLUIR TUDO 2 - "
                           "NÃO EXCLUIR");
                    scanf("%d", &op4);
                    if (op4 == 1)
                    {
                        struct midia;
                        tabelaVendas = fopen("listaVendas.txt", "w");
                        printf("Os dados foram excluidos...");
                        system("pause");
                        fclose(tabelaVendas);
                    }

                    break;
                }
                break;
            }
        }
    }
}
