/*******************************************************************************
Autor: Elvis Michael Souza Serafim
Componente Curricular: Algoritmos I
Concluido em: 28/11/2017
Declaro que este código foi elaborado por mim de forma individual e não contém nenhum
trecho de código de outro colega ou de outro autor, tais como provindos de livros e
apostilas, e páginas ou documentos eletrônicos da Internet. Qualquer trecho de código
de outra autoria que não a minha está destacado com uma citação para o autor e a fonte
do código, e estou ciente que estes trechos não serão considerados para fins de avaliação.
******************************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

typedef struct
{
    char nomeproponente[100];
    char tipopropo[20];
} Proponente;

typedef struct
{
    char tituloProposta[100];
    int horarioproposta;
    int diaproposta;
    int contadorproposta;
    char tipo[100];
    Proponente proponentes[5];
} Proposta;

typedef struct
{
    char nomecurso[100];
    Proposta apresenta[10];
} Curso;
int numero(int qtdcurso)
{
    int qtd;
    scanf("%d", &qtd);
    fflush(stdin);
    return qtd;
}

void mostracursos()
{
    printf("Tecnologia e Ciências Exatas\n\n");
    printf("[1] - Engenharia Civil\n");
    printf("[2] - Engenharia da Computação\n");
    printf("[3] - Engenharia de Alimentos\n");
    printf("[4] - Licenciatura em Matemática\n");
    printf("[5] - Lic. e Bacharelado em Física\n");
    printf("[6] - Licenciatura em Química\n");

    printf("Ciências Humanas e Filosofia\n\n");
    printf("[7] - Administração\n");
    printf("[8] - Ciências Contábeis\n");
    printf("[9] - Ciências Econômicas\n");
    printf("[10] - Lic. e Bacharelado em Filosofia\n");
    printf("[11] - Licenciatura em História\n");
    printf("[12] - Lic. e Bacharelado em Geografia\n");
    printf("[13] - Licenciatura em Pedagogia\n");
    printf("[14] - Direito\n");
    printf("[15] - Psicologia\n\n");

    printf("Letras e Artes\n\n");
    printf("[16] - Licenciatura em Letras Vernáculas\n");
    printf("[17] - Licenciatura em Letras c/ Inglês\n");
    printf("[18] - Licenciatura em Letras c/ Francês\n");
    printf("[19] - Licenciatura em Letras c/ Espanhol\n");
    printf("[20] - Licenciatura em Música\n\n");

    printf("Ciências Naturais e da Saúde\n\n");
    printf("[21] - Licenciatura em Ciências Biológicas\n");
    printf("[22] - Bacharelado em Ciências Biológicas\n");
    printf("[23] - Licenciatura em Educação Física\n");
    printf("[24] - Enfermagem\n");
    printf("[25] - Odontologia\n");
    printf("[26] - Farmácia\n");
    printf("[27] - Medicina\n");
    printf("[28] - Agronomia\n");
}

void escolha(int curs, Curso cursos[])
{
    int i;
    int escolhacurso[28];

    for (i=0; i<curs; i++)
    {
        printf("Digite o %d numero correspondente do curso escolhido\n", i+1);
        scanf("%d", &escolhacurso[i]);
        while(escolhacurso[i] == 0 || escolhacurso[i] > 28)
        {
            printf("Curso inválido\n");
            printf("Digite novamente o numero do curso escohido\n");
            scanf("%d", &escolhacurso[i]);
        }
        switch (escolhacurso[i])
        {

        case 1:
            printf("Curso escolhido: [1] - Engenharia Civil\n\n");
            strcpy(cursos[i].nomecurso, "Engenharia Civil\n\n");
            break;
        case 2:
            printf("Curso escolhido: [2] - Engenharia da Computação\n\n");
            strcpy(cursos[i].nomecurso,"Engenharia da Computação\n");
            break;
        case 3:
            printf("Curso escolhido: [3] - Engenharia de Alimentos\n\n");
            strcpy(cursos[i].nomecurso,"Engenharia de Alimentos");
            break;
        case 4:
            printf("Curso escolhido:[4] - Licenciatura em Matemática\n\n");
            strcpy(cursos[i].nomecurso,"Matematica");
            break;
        case 5:
            printf("Curso escolhido:[5] - Lic. e Bacharelado em Física\n\n");
            strcpy(cursos[i].nomecurso,"Fisica");
            break;
        case 6:
            printf("Curso escolhido:[6] - Licenciatura em Química\n\n");
            strcpy(cursos[i].nomecurso,"Quimica");
            break;
        case 7:
            printf("Curso escolhido:[7] - Administração\n\n");
            strcpy(cursos[i].nomecurso,"Administracao");
            break;
        case 8:
            printf("Curso escolhido:[8] - Ciências Contábeis\n\n");
            strcpy(cursos[i].nomecurso,"Ciências Contábeis");
            break;
        case 9:
            printf("Curso escolhido:[9] - Ciências Econômicas\n\n");
            strcpy(cursos[i].nomecurso,"Ciências Econômicas");
            break;
        case 10:
            printf("Curso escolhido:[10] - Lic. e Bacharelado em Filosofia\n\n");
            strcpy(cursos[i].nomecurso,"Filosofia");
            break;
        case 11:
            printf("Curso escolhido:[11] - Licenciatura em História\n\n");
            strcpy(cursos[i].nomecurso,"Historia");
            break;
        case 12:
            printf("Curso escolhido:[12] - Lic. e Bacharelado em Geografia\n\n");
            strcpy(cursos[i].nomecurso,"Geografia");
            break;
        case 13:
            printf("Curso escolhido:[13] - Licenciatura em Pedagogia\n\n");
            strcpy(cursos[i].nomecurso,"Pedagogia");
            break;
        case 14:
            printf("Curso escolhido:[14] - Direito\n\n");
            strcpy(cursos[i].nomecurso,"Direito");
            break;
        case 15:
            printf("Curso escolhido:[15] - Psicologia\n\n");
            strcpy(cursos[i].nomecurso,"Psicologia");
            break;
        case 16:
            printf("Curso escolhido:[16] - Licenciatura em Letras Vernáculas\n\n");
            strcpy(cursos[i].nomecurso,"Letras Vernáculas");
            break;
        case 17:
            printf("Curso escolhido:[17] - Licenciatura em Letras c/ Inglês\n\n");
            strcpy(cursos[i].nomecurso,"Letras c/ Inglês");
            break;
        case 18:
            printf("Curso escolhido:[18] - Licenciatura em Letras c/ Francês\n\n");
            strcpy(cursos[i].nomecurso," Letras c/ Francês");
            break;
        case 19:
            printf("Curso escolhido:[19] - Licenciatura em Letras c/ Espanhol\n");
            strcpy(cursos[i].nomecurso,"Letras c/ Espanhol");
            break;
        case 20:
            printf("Curso escolhido:[20] - Licenciatura em Música\n\n");
            strcpy(cursos[i].nomecurso,"Musica");
            break;
        case 21:
            printf("Curso escolhido:[21] - Licenciatura em Ciências Biológicas\n\n");
            strcpy(cursos[i].nomecurso," Licenciatura em Ciências Biológicas");
            break;
        case 22:
            printf("Curso escolhido:[22] - Bacharelado em Ciências Biológicas\n\n");
            strcpy(cursos[i].nomecurso,"Bacharelado em  Ciências Biológicas");
            break;
        case 23:
            printf("Curso escolhido:[23] - Licenciatura em Educação Física\n\n");
            strcpy(cursos[i].nomecurso,"Educacao Fisica");
            break;
        case 24:
            printf("Curso escolhido:[24] - Enfermagem\n\n");
            strcpy(cursos[i].nomecurso,"Enfermagem");
            break;
        case 25:
            printf("Curso escolhido:[25] - Odontologia\n\n");
            strcpy(cursos[i].nomecurso,"Odontologia");
            break;
        case 26:
            printf("Curso escolhido:[26] - Farmácia\n\n");
            strcpy(cursos[i].nomecurso,"Farmacia");
            break;
        case 27:
            printf("Curso escolhido:[27] - Medicina\n\n");
            strcpy(cursos[i].nomecurso,"Medicina");
            break;
        case 28:
            printf("Curso escolhido:[28] - Agronomia\n\n");
            strcpy(cursos[i].nomecurso,"Agronomia");
            break;
        }
    }
}
int comparaproposta(Curso cursos[], int contador)
{
    int i;
    for (i=0; i<contador; i++)
    {
        if (cursos[i].apresenta[i].contadorproposta >= 10)
        {
            printf("Maximo de propostas para este curso alcançado\n");
            return 1;
        }
        else
            return 0;
    }
}
void cursoproposta(Curso cursos[], int contador)
{
    int i;
    for (i = 0; i<contador; i++)
    {
        printf("Digite o titulo da proposta do curso %s\n", cursos[i].nomecurso);
        fflush(stdin);
        gets(cursos[i].apresenta[i].tituloProposta);
    }
}
void dataproposta(Curso cursos[], int contador)
{
    int i;
    for (i=0; i<contador; i++)
    {
        printf("Digite a data desejada da proposta do curso %s\n",cursos[i].nomecurso);
        scanf("%d",&cursos[i].apresenta[i].diaproposta);
        fflush(stdin);

        while (cursos[i].apresenta[i].diaproposta < 23 && cursos[i].apresenta[i].diaproposta > 24)
        {
            printf("Comando invalido\n");
            printf("Digite novamente a data desejada do curso %s\n", cursos[i].nomecurso);
            scanf("%d\n",&cursos[i].apresenta[i].diaproposta);
        }
    }
}
void horaproposta(Curso cursos[], int contador)
{
    int i,horario;
    for(i=0; i<contador; i++)
    {
        printf("Digite o horário desejado da proposta do curso %s\n", cursos[i].nomecurso);
        scanf("%d\n", &horario);

        while (horario > 19 || horario < 8)
        {
            printf("Comando invalido\n");
            printf("Digite novamente o horário desejado do curso %s\n", cursos[i].nomecurso);
            scanf("%d\n", &horario);
        }

        while ((strcasecmp(cursos[i].nomecurso,cursos[i].nomecurso)== 0) && cursos[i].apresenta[i].diaproposta == cursos[i].apresenta[i].diaproposta &&
                horario == cursos[i].apresenta[i].horarioproposta)
        {
            printf("Horário não disponivel\n");
            printf("Digite outro horario para o curso %s\n", cursos[i].nomecurso);
            scanf("%d\n", &horario);
        }
        cursos[i].apresenta[i].horarioproposta = horario;
    }
}
void tipoapresentacao(Curso cursos[], int contador)
{
    int i,tipoapresenta;

    for(i=0; i<contador; i++)
    {

        printf("Tipo de apresentação da proposta do curso %s\n", cursos[i].nomecurso);
        printf("Digite [1]: ORAL || [2]: OFICINA || [3] POSTER [4]: LABORATÓRIO\n");
        fflush(stdin);
        scanf("%d", &tipoapresenta);

        while (tipoapresenta != 1 && tipoapresenta !=2 && tipoapresenta != 3 && tipoapresenta != 4)
        {
            printf("Comando invalido\n");
            printf("Digite novamente o tipo de apresentação da proposta do curso %s\n", cursos[i].nomecurso);
            printf("Digite [1]: ORAL || [2]: OFICINA || [3] POSTER [4]: LABORATÓRIO\n");
            scanf("%d", &tipoapresenta);
        }

        switch (tipoapresenta)
        {

        case 1:
            strcpy(cursos[i].apresenta[i].tipo, "Oral");
            break;
        case 2:
            strcpy(cursos[i].apresenta[i].tipo, "Oficina");
            break;
        case 3:
            strcpy(cursos[i].apresenta[i].tipo, "Poster");
            break;
        case 4:
            strcpy(cursos[i].apresenta[i].tipo, "Laboratorio");
            break;
        }
    }
}

void proponentess (Curso cursos[], int contador)
{

    int i,propo,alunoprof,j;

    for (i =0; i<contador; i++)
    {
        printf("Digite a quantidade de proponentes do curso %s\n", cursos[i].nomecurso);
        printf("OBS: Máximo 5 proponentes\n");
        scanf("%d", &propo);

        while(propo > 5 || propo <= 0)
        {
            printf("Comando invalido\n");
            printf("Digite novamente a quantidade de proponentes do curso %s\n", cursos[i].nomecurso);
            scanf("%d", &propo);
        }

        for (j=0; j<propo; j++)
        {
            printf("Digite o %d proponente\n", j+1);
            fflush(stdin);
            gets(cursos[j].apresenta[j].proponentes[j].nomeproponente);
            printf("O proponente acima é aluno ou professor ?\n");
            printf("Digite [1] para aluno ou [2] para professor\n");
            scanf("%d", &alunoprof);

            while(alunoprof != 1 && alunoprof != 2)
            {
                printf("Comando invalido\n");
                printf("Digite [1] para aluno ou [2] para professor\n");
                scanf("%d", &alunoprof);

                switch (alunoprof)
                {

                case 1:
                    strcpy(cursos[j].apresenta[j].proponentes[j].tipopropo, ": ALuno");
                    break;

                case 2:
                    strcpy(cursos[j].apresenta[j].proponentes[j].tipopropo, ": Professor");
                    break;

                }
            }
        }
    }
}


void contadorpropo(Curso cursos[], int contador)
{
    int i;
    for (i=0; i<contador; i++)
    {
        cursos[i].apresenta[i].contadorproposta++;
    }

}
void abreaqr(Curso cursos[], int contador)
{
    int i,j;
    char nomearq[50];
    FILE*arq = NULL;
    printf("Digite o nome do arquivo que deseja salvar\n");
    fflush(stdin);
    gets(nomearq);
    strcat(nomearq,".txt");
    arq = fopen(nomearq,"a");

    fprintf(arq, "\t\t RELATORIO DA FEIRA DE GRADUACAO\n\n");

    for (i=0; i<contador; i++)
    {
        fprintf(arq, "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        fprintf(arq, "CURSO: %s\n", cursos[i].nomecurso);
        fprintf(arq,"PROPOSTA: %s\n", cursos[i].apresenta[i].tituloProposta);
        fprintf(arq,"DATA: %d de outubro\n", cursos[i].apresenta[i].diaproposta);
        fprintf(arq,"HORARIO %d:00\n", cursos[i].apresenta[i].horarioproposta);
        fprintf(arq,"TIPO DE APRESENTACAO: %s\n", cursos[i].apresenta[i].tipo);

        for (i=0; i<5; i++)
        {
            fprintf(arq,"PROPONENTE %d: %s\n", i+1, cursos[i].apresenta[i].proponentes[i].nomeproponente);
            fprintf(arq,"%s\n", cursos[i].apresenta[i].proponentes[i].tipopropo);
        }
        fprintf(arq,"|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    }
    fclose(arq);

}
int main()
{
    int i,opcao;
    Proponente proponen;
    Proposta propo;
    Curso cursos[100];
    setlocale(LC_ALL,"Portuguese");
    int qtdcursos,recebeqtd;
    printf("\t\tBEM VINDO AO CADASTRO DE PROPOSTAS DA FEIRA DE GRADUAÇÃO\n\n");
    do
    {
    printf("digite a quantidade de cursos\n");
    numero(qtdcursos);
    recebeqtd = numero(qtdcursos);
    printf("Cursos disponiveis\n");
    mostracursos();
    escolha(recebeqtd,cursos);
    cursoproposta(cursos,recebeqtd);
    dataproposta(cursos,recebeqtd);
    horaproposta(cursos,recebeqtd);
    tipoapresentacao(cursos,recebeqtd);
    proponentess(cursos,recebeqtd);
    contadorpropo(cursos,recebeqtd);
    printf("Deseja realizar nova proposta ? Digite 1 para finalizar ou 0 para realizar nova proposta\n");
    scanf("%d", &opcao);
}
while(opcao == 0);

abreaqr(cursos,recebeqtd);
}
