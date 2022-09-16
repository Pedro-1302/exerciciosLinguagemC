#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int escolha = 0;

    printf("\n\t\t\tExercícios disponiveis : \n");
    printf("\n | [0] Zona de Testes,                                 | Testes");
    printf("\n | [1] Ex1 : Supermercado,                             | Primeira Aula");
    printf("\n | [2] Ex2 : Levantamento,                             | Aula 19/08");
    printf("\n | [3] Ex3 : Departamentos,                            | Aula 19/08");
    printf("\n | [4] Ex4 : Produtos,                                 | Aula 26/08");
    printf("\n | [5] Ex5 : Time de futebol,                          | Aula 26/08");
    printf("\n | [6] Ex6 : Fabrica,                                  | Aula 02/09");
    printf("\n | [7] Ex7 : Levantamento Caracteristicas Visuais,     | Aula 09/09");
    printf("\n | [8] Ex8 : INSS - IRRF,                              | Aula 09/09");
    printf("\n ...\n\n");
    printf("Qual exercício deseja executar?\n");
    printf("-> ");
    scanf("%d", &escolha);

    while (escolha != 0 && escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4 && escolha != 5 && escolha != 6 && escolha != 7 && escolha != 8)
    {
        printf("\n\tExercícios disponiveis : ");
        printf("\n | [0] Zona de Testes,                                 | Testes");
        printf("\n | [1] Ex1 : Supermercado,                             | Primeira Aula");
        printf("\n | [2] Ex2 : Levantamento,                             | Aula 19/08");
        printf("\n | [3] Ex3 : Departamentos,                            | Aula 19/08");
        printf("\n | [4] Ex4 : Produtos,                                 | Aula 26/08");
        printf("\n | [5] Ex5 : Time de futebol,                          | Aula 26/08");
        printf("\n | [6] Ex6 : Fabrica,                                  | Aula 02/09");
        printf("\n | [7] Ex7 : Levantamento Caracteristicas Visuais,     | Aula 09/09");
        printf("\n | [8] Ex8 : INSS - IRRF,                              | Aula 09/09");
        printf("\n...\n\n");
        printf("Qual exercício deseja executar?\n");
        printf("-> ");
        scanf("%d", &escolha);
    }

    switch (escolha)
    {
    case 0:
        return testes();
        break;

    case 1:
        return ex1();
        break;

    case 2:
        return ex2();
        break;

    case 3:
        return ex3();
        break;

    case 4:
        return ex4();
        break;

    case 5:
        return ex5();
        break;

    case 6:
        return ex6();
        break;

    case 7:
        return ex7();
        break;

    case 8:
        return ex8();
        break;

    default :
        return printf("Algo de errado aconteceu =(");
    }
}

int testes()
{
    system("cls");
    printf("\n\tTestes \n");

    char decisaoExercicio;
    printf("Executar exercico [S]Sim / [N]Não \n: ");
    while (decisaoExercicio != 'S' && decisaoExercicio != 'N')
    {
        scanf("%c", &decisaoExercicio);
        decisaoExercicio = toupper(decisaoExercicio);
        fflush(stdin);
    }

    if (decisaoExercicio == 'N')
    {
        system("cls");
        return main();
    }

    system("cls");
    printf("\n\tTestes \n");

    int x, y, escolha = 0;
    printf("\nN2: \n");
    scanf("%d", &x);
    printf("\nN2: \n");
    scanf("%d", &y);

    printf("\n   Deseja fazer: ");
    printf("\n[1] - Soma ");
    printf("\n[2] - Subtração ");
    printf("\n[3] - Multiplicação ");
    printf("\n[4] - Divisão \n:");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        return somar(x, y);
        break;

    case 2:
        return subtrair(x, y);
        break;

    case 3:
        return multiplicar(x, y);
        break;

    case 4:
        return dividir(x, y);
        break;

    default :
        return printf("Algo de errado aconteceu =(");
    }
}

void somar(int x, int y)
{
    return printf("\n%d", x + y);
}

void subtrair(int x, int y)
{
    return printf("\n%d", x - y);
}

void multiplicar(int x, int y)
{
    return printf("\n%d", x * y);
}

void dividir(int x, int y)
{
    return printf("\n%d", x / y);
}

//Primeira Aula
int ex1()
{
    system("cls");
    printf("\tExercicio 1: \n\n");

    char decisaoExercicio;
    printf("Executar exercico [S]Sim / [N]Não \n: ");
    while (decisaoExercicio != 'S' && decisaoExercicio != 'N')
    {
        scanf("%c", &decisaoExercicio);
        decisaoExercicio = toupper(decisaoExercicio);
        fflush(stdin);
    }

    if (decisaoExercicio == 'N')
    {
        system("cls");
        return main();
    }

    system("cls");
    printf("\tExercicio 1: \n\n");

    //Um supermercado está em promoção para clientes que vieram consumir acima de 300 reais,
    //o cliente terá um desconto de 10% no valor que exceder o valor mencionado
    //exibir
    //valor da compra
    //valor de desconto
    //valor a pagar
    float  compraCli, desconto, pagar;

    printf("Valor que o cliente ira comprar: ");
    scanf("%f", &compraCli);

    if (compraCli >= 300)
    {
        desconto = compraCli * 0.10;
    }
    else
    {
        desconto = 0;
    }
    pagar = compraCli - desconto;

    printf("\n\nCompra: R$ %.f", compraCli);
    printf("\n\nDesconto: R$ %.f", desconto);
}

//Aula 19/08
int ex2()
{
    system("cls");
    printf("\tExercicio 2: \n\n");

    char decisaoExercicio;
    printf("Executar exercico [S]Sim / [N]Não \n: ");
    while (decisaoExercicio != 'S' && decisaoExercicio != 'N')
    {
        scanf("%c", &decisaoExercicio);
        decisaoExercicio = toupper(decisaoExercicio);
        fflush(stdin);
    }

    if (decisaoExercicio == 'N')
    {
        system("cls");
        return main();
    }

    system("cls");
    printf("\tExercicio 2: \n\n");

    setlocale(LC_ALL, "Portuguese");

    int i = 0, m = 0, f = 0, soma = 0, mComXp = 0, fComXp = 0, m45 = 0;
    int idade, menor = 999;
    char sexo, xp, resp;
    float mediaIdadeF, percentual;

    do
    {
        i++;
        printf("|---- Cadastro Número %d ----|", i);
        printf("\nInforme a idade: ");
        scanf("%d", &idade);
        fflush(stdin);

        while  (idade <= 0)
        {
            printf("\nInforme a idade: ");
            scanf("%d", &idade);
            fflush(stdin);
        }

        printf("\nInforme o sexo (M/F): ");
        scanf("%c", &sexo);
        fflush(stdin);
        sexo = toupper(sexo);

        while  (sexo != 'F' && sexo != 'M')
        {
            printf("\nInforme o sexo (M/F): ");
            scanf("%c", &sexo);
            fflush(stdin);
            sexo = toupper(sexo);
        }

        printf("\nInforme a experiência (S/N): ");
        scanf("%c", &xp);
        fflush(stdin);
        xp = toupper(xp);

        while  (xp != 'S' && xp != 'N')
        {
            printf("\nInforme a experiência (S/N): ");
            scanf("%c", &xp);
            fflush(stdin);
            xp = toupper(xp);
        }

        if (sexo == 'F')
        {
            f++;
        }
        else if (sexo == 'M')
        {
            m++;
        }

        if (sexo == 'M' && xp == 'S')
        {
            soma += idade;
            mComXp++;
        }

        if (sexo == 'M' && idade > 45)
        {
            m45++;
        }

        if (sexo == 'F' && idade < 35 && xp == 'S')
        {
            fComXp++;
        }

        if (sexo == 'F' && xp == 'S' && menor > idade)
        {
            menor = idade;
        }

        printf("Deseja continuar a execução do programa: [S]Sim [N]Não \n");
        resp = getchar();
        resp = toupper(resp);
        fflush(stdin);

        while (resp != 'S' && resp != 'N')
        {
            printf("Deseja continuar a execução do programa: [S]Sim [N]Não \n");
            resp = getchar();
            resp = toupper(resp);
            fflush(stdin);
        }
        printf("\n");
    }
    while (resp != 'N');

    percentual = (float) (m45 * 100) / m;

    mediaIdadeF = (float) soma/mComXp;

    if (m != 0)
    {
        printf("\nQuantidade do Sexo Masculino: %d", m);

        if (mediaIdadeF > 0)
        {
            printf("\nMédia dos Homens com Experiência: %.2f", mediaIdadeF);
        }
        else
        {
            printf("\nNenhum dos homens do levantamento possuem experiência");
        }
        if (percentual > 0)
        {
            printf("\nPercentual de Homens com mais de 45 anos: %%%.f", percentual);
        }
        else
        {
            printf("\nNão existem homens com mais de 45 anos");
        }
    }
    else
    {
        printf("\n| -- Não existem homens no levantamento -- |");
    }

    if (f != 0)
    {
        printf("\n\nQuantidade do Sexo Feminino: %d", f);

        if (fComXp > 0)
        {
            printf("\nMulheres com menos de 35 anos e com Xp: %d", fComXp);
        }
        else
        {
            printf("\nNão existem mulheres com menos de 35 anos e com experiência");
        }
        if (f == 1)
        {
            printf("\nIdade: %d", idade);
        }
        else
        {
            printf("\nMenor idade entre mulheres com experiência: %d", menor);
        }

    }
    else
    {
        printf("\n| -- Não existem mulheres no levantamento -- |");
    }
}

//Aula 19/08
int ex3()
{
    system("cls");
    printf("\tExercicio 3: \n\n");

    char decisaoExercicio;
    printf("Executar exercico [S]Sim / [N]Não \n: ");
    while (decisaoExercicio != 'S' && decisaoExercicio != 'N')
    {
        scanf("%c", &decisaoExercicio);
        decisaoExercicio = toupper(decisaoExercicio);
        fflush(stdin);
    }

    if (decisaoExercicio == 'N')
    {
        system("cls");
        return main();
    }

    system("cls");
    printf("\tExercicio 3: \n\n");

    // Uma empresa possui em sua estrutura tres departamentos, e cada departamento possui N funcionarios, calcule e mostre
    //1) - A Quantidade de todos os funcionarios
    //2)- O Total de salarios de todos os departamentos
    //3) - o total de salarios por departamento
    //4) - O maior salario e qual departamento se encontra este salario

    setlocale(LC_ALL, "Portuguese");

    int i = 0, a = 0, dpto1, dpto2, dpto3, totalDpto;
    int fD1 = 0;
    float salariosDpto1 = 0, totalSalariosDpto1;
    int fD2 = 0;
    float salariosDpto2 = 0, totalSalariosDpto2;
    int fD3 = 0;
    float salariosDpto3 = 0, totalSalariosDpto3;
    float salarioTotalDptos;
    float maior = 0;

    for (i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            printf("| -- Departamento %d -- |\n", i+1);
            printf("Informe quantas pessoas existem no departamento %d \n", i+1);
            scanf("%d", &dpto1);

            for (fD1 = 0; fD1 < dpto1; fD1++)
            {
                printf("Informe o salário do %d° funcionário: R$\n", fD1 + 1);
                scanf("%f", &totalSalariosDpto1);
                salariosDpto1 += totalSalariosDpto1;

                if (totalSalariosDpto1 > maior)
                {
                    maior = totalSalariosDpto1;
                    a = 1;
                }
            }
        }
        if (i == 1)
        {
            printf("| -- Departamento %d -- |\n", i+1);
            printf("Informe quantas pessoas existem no departamento %d \n", i+1);
            scanf("%d", &dpto2);

            for (fD2 = 0; fD2 < dpto2; fD2++)
            {
                printf("Informe o salário do %d° funcionário: R$\n", fD2 + 1);
                scanf("%f", &totalSalariosDpto2);
                salariosDpto2 += totalSalariosDpto2;

                if (totalSalariosDpto2 > maior)
                {
                    maior = totalSalariosDpto2;
                    a = 2;
                }
            }
        }
        if (i == 2)
        {
            printf("| -- Departamento %d -- |\n", i+1);
            printf("Informe quantas pessoas existem no departamento %d \n", i+1);
            scanf("%d", &dpto3);

            for (fD3 = 0; fD3 < dpto3; fD3++)
            {
                printf("Informe o salário do %d° funcionário: R$\n", fD3 + 1);
                scanf("%f", &totalSalariosDpto3);
                salariosDpto3 += totalSalariosDpto3;

                if (totalSalariosDpto3 > maior)
                {
                    maior = totalSalariosDpto3;
                    a = 3;
                }
            }
        }
    }


    totalDpto  = dpto1 + dpto2 + dpto3;
    salarioTotalDptos = salariosDpto1 + salariosDpto2 + salariosDpto3;

    printf("\nTotal de pessoas nos departamentos: %d\n", totalDpto);
    printf("Total de salarios nos departamentos: R$%.2f\n", salarioTotalDptos);
    printf("Total no departamento 1: R$%.2f\n", salariosDpto1);
    printf("Total no departamento 2: R$%.2f\n", salariosDpto2);
    printf("Total no departamento 3: R$%.2f\n", salariosDpto3);
    printf("O Maior salario é R$%.2f e está no departamento %d", maior, a);
}

//Aula 26/08
int ex4()
{
    system("cls");
    printf("\tExercicio 4: \n\n");

    char decisaoExercicio;
    printf("Executar exercico [S]Sim / [N]Não \n: ");
    while (decisaoExercicio != 'S' && decisaoExercicio != 'N')
    {
        scanf("%c", &decisaoExercicio);
        decisaoExercicio = toupper(decisaoExercicio);
        fflush(stdin);
    }

    if (decisaoExercicio == 'N')
    {
        system("cls");
        return main();
    }

    system("cls");
    printf("\tExercicio 4: \n\n");

    setlocale(LC_ALL, "Portuguese");
    int n = 1, i = 0, o[n];
    float preco[n], valorImposto[n], custo[n], desconto[n], novoPreco[n], valorAdicional[n];
    char tipo[n], refrigeracao[n], situacao;


    do
    {
        printf("Informe o preço do produto\n");
        scanf("%f", &preco[i]);
        fflush(stdin);

        printf("\nTipos: [A]Alimentação / [L]Limpeza / [V]Vestuário\n");
        printf("Informe o tipo do produto\n");
        scanf("%c", &tipo[i]);
        fflush(stdin);
        tipo[i] = toupper(tipo[i]);

        while (tipo[i] != 'A' && tipo[i] != 'L' && tipo[i] != 'V')
        {
            printf("!! Informe um tipo válido !!\n");
            printf("Tipos: [A]Alimentação / [L]Limpeza / [V]Vestuário\n");
            printf("Informe o tipo do produto\n");
            scanf("%c", &tipo[i]);
            fflush(stdin);
            tipo[i] = toupper(tipo[i]);
        }

        printf("Necessita de refrigeração? [S]im / [N]ao\n");
        scanf("%c", &refrigeracao[i]);
        fflush(stdin);
        refrigeracao[i] = toupper(refrigeracao[i]);

        while (refrigeracao[i] != 'S' && refrigeracao[i] != 'N')
        {
            printf("!! Por favor, informe os campos corretos !!\n");
            printf("Necessita de refrigeração? [S]im / [N]ao\n");
            scanf("%c", &refrigeracao[i]);
            fflush(stdin);
            refrigeracao[i] = toupper(refrigeracao[i]);
        }

        printf("\n\n");

        if (refrigeracao[i] == 'N')
        {
            if (tipo[i] == 'A')
            {
                if (preco[i] < 15.0)
                {
                    valorAdicional[i] = 2.0;
                }
                else if (preco[i] >= 15.0)
                {
                    valorAdicional[i] = 5.0;
                }
            }
            else if (tipo[i] == 'L')
            {
                if (preco[i] < 10.0)
                {
                    valorAdicional[i] = 1.5;
                }
                else if (preco[i] >= 10.0)
                {
                    valorAdicional[i] = 2.5;
                }
            }
            else if (tipo[i] == 'V')
            {
                if (preco[i] < 30.0)
                {
                    valorAdicional[i] = 3.0;
                }
                else if (preco[i] >= 30.0)
                {
                    valorAdicional[i] = 2.5;
                }
            }
        }

        else if (refrigeracao[i] == 'S')
        {
            if (tipo[i] == 'A')
            {
                valorAdicional[i] = 8.0;
            }
            else if (tipo[i] == 'L')
            {
                valorAdicional[i] = 0.0;
            }
            else if (tipo[i] == 'V')
            {
                valorAdicional[i] = 2.0;
            }
        }

        if (preco[i] < 25.0)
        {
            valorImposto[i] = preco[i] * 0.05;
        }
        else if (preco[i] >= 25.0)
        {
            valorImposto[i] = preco[i] * 0.08;
        }

        custo[i] = preco[i] + valorImposto[i];

        if (tipo[i] != 'A' && refrigeracao[i] != 'S')
        {
            desconto[i] = custo[i] * 0.03;
        }
        else
        {
            desconto[i] = 0;
        }

        novoPreco[i] = custo[i] + valorAdicional[i] - desconto[i];

        if (novoPreco[i] <= 100)
        {
            o[i] = 1;
        }

        else if (novoPreco[i] > 100 && novoPreco[i] <= 180)
        {
            o[i] = 2;
        }

        else if (novoPreco[i] > 180)
        {
            o[i] = 3;
        }


        printf("Deseja continuar a execução do programa? [S]Sim / [N]Não");
        scanf("%c", &situacao);
        situacao = toupper(situacao);
        fflush(stdin);

        while (situacao != 'S' && situacao != 'N')
        {
            printf("Deseja continuar a execução do programa? [S]Sim / [N]Não");
            scanf("%c", &situacao);
            situacao = toupper(situacao);
            fflush(stdin);
        }

        if (situacao == 'S')
        {
            n++;
        }

        i++;
    }
    while (situacao != 'N');

    printf("\n\n");

    for (i = 0; i < n; i++)
    {
        printf("Novo preço do produto: %f\n", novoPreco[i]);

        if (o[i] == 1)
        {
            printf("O produto é Barato!\n");
        }
        if (o[i] == 2)
        {
            printf("O produto é Normal!\n");
        }
        if (o[i] == 3)
        {
            printf("O produto é Caro!\n");
        }

        printf("\n");
    }
}

//Aula 26/08
int ex5()
{
    system("cls");
    printf("\tExercicio 5: \n\n");

    char decisaoExercicio;
    printf("Executar exercico [S]Sim / [N]Não \n: ");
    while (decisaoExercicio != 'S' && decisaoExercicio != 'N')
    {
        scanf("%c", &decisaoExercicio);
        decisaoExercicio = toupper(decisaoExercicio);
        fflush(stdin);
    }

    if (decisaoExercicio == 'N')
    {
        system("cls");
        return main();
    }

    system("cls");
    printf("\tExercicio 5: \n\n");

    //Em um campeonato de futebol existem cinco times e cada time possui 5 jogadores.
    //Faça um programa que receba a idade, o peso e a altura decada um dos jogadores e calcule
    // A quantidade de jogadores com idade inferior a 18 anos
    //A media das idades do jogadores de cada time
    //A media de alturas de todos os jogadores
    // A porcentagem de jogadores com mais de 80 kilos entre os todos os jogadores do campeonato

    int i = 1, idade, menorIdade = 0, pesoMaiorOitenta = 0, x;
    float peso, altura;
    float somaTimeUm = 0, somaTimeDois = 0, somaTimeTres = 0, somaTimeQuatro = 0, somaTimeCinco = 0;
    float mediaIdadeUm, mediaIdadeDois, mediaIdadeTres, mediaIdadeQuatro, mediaIdadeCinco;
    float somaAlturas = 0, mediaAlturas;

    do
    {
        printf("\n");

        if (i > 0 && i <= 5)
        {
            printf("Jogador %d - Time 1\n", i);

            printf("\nInforme a idade: ");
            scanf("%d", &idade);

            printf("\nInforme o peso: ");
            scanf("%f", &peso);

            printf("\nInforme a altura: ");
            scanf("%f", &altura);

            somaTimeUm += idade;
        }

        printf("\n");

        if (i > 5 && i <= 10)
        {
            int a = 4;
            a++;

            printf("Jogador %d - Time 2\n", i - a);

            printf("\nInforme a idade: ");
            scanf("%d", &idade);

            printf("\nInforme o peso: ");
            scanf("%f", &peso);

            printf("\nInforme a altura: ");
            scanf("%f", &altura);

            somaTimeDois += idade;
        }

        printf("\n");

        if (i > 10 && i <= 15)
        {
            int a = 9;
            a++;

            printf("Jogador %d - Time 3\n", i - a);

            printf("\nInforme a idade: ");
            scanf("%d", &idade);

            printf("\nInforme o peso: ");
            scanf("%f", &peso);

            printf("\nInforme a altura: ");
            scanf("%f", &altura);

            somaTimeTres += idade;
        }

        printf("\n");

        if (i > 15 && i <= 20)
        {
            int a = 14;
            a++;

            printf("Jogador %d - Time 4\n", i - a);

            printf("\nInforme a idade: ");
            scanf("%d", &idade);

            printf("\nInforme o peso: ");
            scanf("%f", &peso);

            printf("\nInforme a altura: ");
            scanf("%f", &altura);

            somaTimeQuatro += idade;
        }

        printf("\n");

        if (i > 20 && i <= 25)
        {
            int a = 19;
            a++;
            printf("Jogador %d - Time 5\n", i - a);

            printf("\nInforme a idade: ");
            scanf("%d", &idade);

            printf("\nInforme o peso: ");
            scanf("%f", &peso);

            printf("\nInforme a altura: ");
            scanf("%f", &altura);

            somaTimeCinco += idade;
        }

        if (idade < 18)
        {
            menorIdade++;
        }

        somaAlturas += altura;

        if (peso > 80)
        {
            pesoMaiorOitenta++;
        }

        i++;
    }
    while (i < 26);

    x = (pesoMaiorOitenta * 100) / 25;

    mediaIdadeUm = somaTimeUm / 5;
    mediaIdadeDois = somaTimeDois / 5;
    mediaIdadeTres = somaTimeTres / 5;
    mediaIdadeQuatro = somaTimeQuatro / 5;
    mediaIdadeCinco = somaTimeCinco / 5;
    mediaAlturas = somaAlturas / 25;


    printf("\nQuantidade de Jogadores com idade inferior a 18 anos: %d", menorIdade);
    printf("\nMedia de idades time um: %f", mediaIdadeUm);
    printf("\nMedia de idades time dois: %f", mediaIdadeDois);
    printf("\nMedia de idades time tres: %f", mediaIdadeTres);
    printf("\nMedia de idades time quatro: %f", mediaIdadeQuatro);
    printf("\nMedia de idades time cinco: %f", mediaIdadeCinco);
    printf("\nMedia de altura nos times: %f", mediaAlturas);
    printf("\nPorcentagem de jogadores com peso maior que 80 kilos: %d%%", x);
}

//Aula 02/09:
int ex6()
{
    system("cls");
    printf("\nExercício 6\n\n");

    char decisaoExercicio;
    printf("Executar exercico [S]Sim / [N]Não \n: ");
    while (decisaoExercicio != 'S' && decisaoExercicio != 'N')
    {
        scanf("%c", &decisaoExercicio);
        decisaoExercicio = toupper(decisaoExercicio);
        fflush(stdin);
    }

    if (decisaoExercicio == 'N')
    {
        system("cls");
        return main();
    }

    system("cls");
    printf("\nExercício 6\n\n");

    int i = 0, numeroOperario[4], pecasMes[4], a[4], b[4];
    int numeroTotalPecas = 0,totalPecasHomens = 0, totalPecasMulheres = 0;
    int m, f;
    m = f = 0;
    float salarioOperario[4], totalSalarios = 0, mediaPecasHomens, mediaPecasMulheres;
    float somaSalarios = 0;
    char sexo[4], classeOperario[4][30];
    float maior = 0;
    float testeA, testeB;
    char numeroProntuario[4][8];

    do
    {
        printf("\nNúmero do Prontuario: ");
        scanf("%s", &numeroProntuario[i]);
        fflush(stdin);

        if (numeroProntuario[i] < 1)
        {
            printf("\nNúmero do Prontuario: ");
            scanf("%s", &numeroProntuario[i]);
            fflush(stdin);
        }

        printf("\nNúmero do Operário: ");
        scanf("%d", &numeroOperario[i]);
        fflush(stdin);

        if (numeroOperario[i] < 1)
        {
            printf("\nNúmero do Operário: ");
            scanf("%d", &numeroOperario[i]);
            fflush(stdin);
        }

        printf("\nNúmero de peças fabricadas no mês: ");
        scanf("%d", &pecasMes[i]);
        fflush(stdin);

        if (numeroOperario[i] < 1)
        {
            printf("\nNúmero de peças fabricadas no mês: ");
            scanf("%d", &pecasMes[i]);
            fflush(stdin);
        }

        printf("\nSexo [M]/[F]: ");
        scanf("%c", &sexo[i]);
        sexo[i] = toupper(sexo[i]);
        fflush(stdin);

        while (sexo[i] != 'M' && sexo[i] != 'F')
        {
            printf("\nSexo [M]/[F]: ");
            scanf("%c", &sexo[i]);
            sexo[i] = toupper(sexo[i]);
            fflush(stdin);
        }

        if (pecasMes[i] > 30.0 && pecasMes[i] < 36.0)
        {
            b[i] = pecasMes[i] - 30.0;
            salarioOperario[i] = (float) 1300.0 + (1300.0*(0.03*b[i]));
            strcpy(classeOperario[i], "C2");
            fflush(stdin);
        }
        else if (pecasMes[i] > 35.0)
        {
            a[i] = pecasMes[i] - 30.0;
            salarioOperario[i] = (float) 1300.0 + (1300.0*(0.05*a[i]));
            strcpy(classeOperario[i], "C3");
            fflush(stdin);
        }
        else if (pecasMes[i] < 31.0)
        {
            salarioOperario[i] = 1300.0;
            strcpy(classeOperario[i], "C1");
            fflush(stdin);
        }

        totalSalarios += salarioOperario[i];
        numeroTotalPecas += pecasMes[i];

        if (sexo[i] == 'M')
        {
            totalPecasHomens += pecasMes[i];
            m++;
        }
        if (sexo[i] == 'F')
        {
            totalPecasMulheres += pecasMes[i];
            f++;
        }

        if (salarioOperario[i] > maior)
        {
            maior = salarioOperario[i];
        }

        somaSalarios += salarioOperario[i];
        i++;
    }
    while (i < 4);

    mediaPecasHomens = (float) totalPecasHomens / m;
    mediaPecasMulheres = (float) totalPecasMulheres / f;

    for (i = 0; i < 4; i++)
    {
        printf("\nOperario numero %d", numeroOperario[i]);
        printf("\nProntuario: %s", numeroProntuario[i]);
        printf("\nValor a receber R$%.2f - Clase %s\n", salarioOperario[i], classeOperario[i]);
    }

    for (i = 0; i < 1; i++)
    {
        printf("\nTotal de peças fabricadas no mês: %d", numeroTotalPecas);
        if (mediaPecasHomens > 1)
        {
            printf("\nMedia das peças fabricadas por homens: %.2f", mediaPecasHomens);
        }
        else
        {
            printf("\nNão existem homens no levantamento");
        }
        if (mediaPecasMulheres > 1)
        {
            printf("\nMedia das peças fabricadas por mulheres: %.2f", mediaPecasMulheres);
        }
        else
        {
            printf("\nNão existem mulheres no levantamento");
        }
        printf("\nSoma dos salarios: R$%.2f", somaSalarios);
        printf("\nMaior salario: R$%.2f", maior);
    }

}

//Aula 09/09
int ex7()
{
    system("cls");
    printf("\nExercício 7\n\n");

    char decisaoExercicio;
    printf("Executar exercico [S]Sim / [N]Não \n: ");
    while (decisaoExercicio != 'S' && decisaoExercicio != 'N')
    {
        scanf("%c", &decisaoExercicio);
        decisaoExercicio = toupper(decisaoExercicio);
        fflush(stdin);
    }

    if (decisaoExercicio == 'N')
    {
        system("cls");
        return main();
    }

    system("cls");

    int idade, qtdCadastros = 0, i = 0, velhoMagro = 0, anao = 0, soma = 0;
    int azuis = 0, ruivaNotBlue = 0;
    float peso, altura, media, x;
    char corOlhos, corCabelos;

    printf("\n\nInfome quantas pessoas deseja cadastrar: ");
    scanf("%d", &qtdCadastros);
    fflush(stdin);

    while (qtdCadastros <= 0)
    {
        printf("\n\t\t| Os valor deve ser maior que 0 |");
        printf("\n\nInfome quantas pessoas deseja cadastrar: ");
        scanf("%d", &qtdCadastros);
        fflush(stdin);
    }
    printf("\n");

    while (i < qtdCadastros)
    {
        i++;

        printf("\nInforme a idade: ");
        scanf("%d", &idade);
        fflush(stdin);

        while(idade <= 0)
        {
            printf("\n\t\t| Os valor deve ser maior que 0 |");
            printf("\nInforme a idade: ");
            scanf("%d", &idade);
            fflush(stdin);
        }

        printf("\nInforme o peso: ");
        scanf("%f", &peso);
        fflush(stdin);

        while (peso <= 0)
        {
            printf("\n\t\t| Os valor deve ser maior que 0 |");
            printf("\nInforme o peso: ");
            scanf("%f", &peso);
            fflush(stdin);
        }

        printf("\nInforme a altura: ");
        scanf("%f", &altura);
        fflush(stdin);

        while (altura <= 0)
        {
            printf("\n\t\t| Os valor deve ser maior que 0 |");
            printf("\nInforme a altura: ");
            scanf("%f", &altura);
            fflush(stdin);
        }

        printf("\nInforme a Cor dos Olhos: ");
        printf("\n[A] Azul - [P] Preto - [V] Verde - [C] Castanho");
        scanf("%c", &corOlhos);
        fflush(stdin);
        corOlhos = toupper(corOlhos);

        while (corOlhos != 'A' &&
                corOlhos != 'P' &&
                corOlhos != 'V' &&
                corOlhos != 'C')
        {

            printf("\nInforme a Cor dos Olhos: ");
            printf("\n[A] Azul - [P] Preto - [V] Verde - [C] Castanho");
            scanf("%c", &corOlhos);
            fflush(stdin);
            corOlhos = toupper(corOlhos);
        }

        printf("\nInforme a Cor dos Cabelos: ");
        printf("\n[P] Preto - [C] Castanho - [L] Louro - [R] Ruivo");
        scanf("%c", &corCabelos);
        fflush(stdin);
        corCabelos = toupper(corCabelos);

        while (corCabelos != 'P' &&
                corCabelos != 'C' &&
                corCabelos != 'L' &&
                corCabelos != 'R')
        {
            printf("\nInforme a Cor dos Cabelos: ");
            printf("\n[P] Preto - [C] Castanho - [L] Louro - [R] Ruivo");
            scanf("%c", &corCabelos);
            fflush(stdin);
            corCabelos = toupper(corCabelos);
        }

        if (idade > 50 && peso < 60)
        {
            velhoMagro++;
        }

        if(altura < 1.50)
        {
            soma = soma + altura;
            anao++;
            media = (float) soma / anao;
        }

        if (corOlhos == 'A')
        {
            azuis++;
            x = (float) (100 * azuis) / i;
        }

        if (corCabelos == 'R' && corOlhos != 'A')
        {
            ruivaNotBlue++;
        }

        if (i == qtdCadastros)
        {
            printf("\n\t | Dados do Levantamento | ");
            if (velhoMagro == 0)
            {
                printf("\nExistem %.d pessoas com idade maior que 50 anos e peso menor que 60", velhoMagro);
            }
            else
            {
                printf("\nNão existem pessoas com idade maior que 50 anos e peso menor que 60");
            }

            if (media == 0)
            {
                printf("\nNão existem pessoas menores que 1.50");
            }
            else
            {
                printf("\nMedia das pessoas menores que 1.50: %.2f", media);
            }

            printf("\nQuantidade de pessoas ruivas que nao tem olhos azuis %.d", ruivaNotBlue);

            if (x == 0)
            {
                printf("\nNão existem pessoas com olhos azuis");
            }
            else
            {
                printf("\nPorcentagem de pessoas com olhos azuis: %.2f", x);
            }
        }
    }
}

//Aula 09/09
int ex8()
{
    system("cls");
    printf("\nExercício 8\n\n");

    char decisaoExercicio;
    printf("Executar exercico [S]Sim / [N]Não \n: ");
    while (decisaoExercicio != 'S' && decisaoExercicio != 'N')
    {
        scanf("%c", &decisaoExercicio);
        decisaoExercicio = toupper(decisaoExercicio);
        fflush(stdin);
    }

    if (decisaoExercicio == 'N')
    {
        system("cls");
        return main();
    }

    system("cls");
    printf("\nExercício 8\n\n");

    int horasTrabalhadas, qtdCadastros, i;
    float salarioHoras, salarioBruto, descontoINSS, descontoIRRF, baseIr, patrimonioLiquido;
    descontoINSS = descontoIRRF = baseIr = patrimonioLiquido = i = 0;;

    printf("\nInforme quantas pessoas deseja cadastrar no levantamento: ");
    scanf("%d", &qtdCadastros);

    while (i < qtdCadastros)
    {
        i++;

        printf("\n\nInforme as horas trabalhadas: ");
        scanf("%d", &horasTrabalhadas);

        while (horasTrabalhadas <= 0)
        {
            printf("\n\nInforme as horas trabalhadas: ");
            scanf("%d", &horasTrabalhadas);
        }

        printf("\nInforme o salario por hora: ");
        scanf("%f", &salarioHoras);

        while (salarioHoras <= 0)
        {
            printf("\nInforme o salario por hora: ");
            scanf("%f", &salarioHoras);
        }

        salarioBruto = (float) horasTrabalhadas * salarioHoras;

        //Condições INSS
        if (salarioBruto <= 1212.0)
        {
            descontoINSS = salarioBruto * 0.075;
        }
        else if (salarioBruto > 1212.0 && salarioBruto <= 2427.35)
        {
            descontoINSS = (salarioBruto - 1212.0) * 0.09 + 90.90;
        }
        else if (salarioBruto > 2427.35 && salarioBruto <= 3641.03)
        {
            descontoINSS = (salarioBruto - 2427.35) * 0.12 + 200.28;
        }
        else if (salarioBruto > 3641.03 && salarioBruto <= 7087.22)
        {
            descontoINSS = (salarioBruto - 3641.04) * 0.14 + 345.92;
        }
        else if (salarioBruto > 7087.22)
        {
            descontoINSS = 828.39;
        }


        //Condições IRRF
        if (salarioBruto <= 1903.98)
        {
            descontoIRRF = 0;
        }
        else if (salarioBruto > 1903.98 && salarioBruto <= 2826.65)
        {
            baseIr = salarioBruto - descontoINSS;
            descontoIRRF = (baseIr * 7.5/100) - 142.80;
        }
        else if (salarioBruto > 2826.66 && salarioBruto <= 3751.05)
        {
            baseIr = salarioBruto - descontoINSS;
            descontoIRRF = (baseIr * 15/100) - 354.80;
        }
        else if (salarioBruto > 3751.06 && salarioBruto <= 4664.68)
        {
            baseIr = salarioBruto - descontoINSS;
            descontoIRRF = (baseIr * 22.5/100) - 636.13;
        }
        else if (salarioBruto > 4664.68)
        {
            baseIr = salarioBruto - descontoINSS;
            descontoIRRF = (baseIr * 27.5/100) - 869.36;
        }

        patrimonioLiquido = salarioBruto - descontoINSS - descontoIRRF;

        printf("\n\t | Dados do Levantamento - Funcionário %d | ", i);
        printf("\nSalário Bruto: %.2f", salarioBruto);
        printf("\nDesconto INSS: %.2f", descontoINSS);
        printf("\nDesconto IRRF: %.2f", descontoIRRF);
        printf("\nPatrimônio Liquido: %.2f", patrimonioLiquido);
    }
}









