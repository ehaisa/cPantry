// TODAS AS TELAS FORAM FEITAS COM BASE NO EXEMPLO DADO PELO PROFESSOR FLAVIUS GORGONIO
// fonte: https://github.com/FlaviusGorgonio/LinguaSolta

#include <stdio.h>
#include <locale.h> // Biblioteca necessaria para corrigir os acentos
#include <stdlib.h>

void menuPrincipal(void);
void telaInfos(void);
void telaDev(void);
void telaItens(void);
void itensLimpeza(void);

/// Programa Principal ///

int main(void) {
    setlocale(LC_ALL,"Portuguese_Brazil"); // Corrige os acentos, fonte: https://youtu.be/hB6KFP6luL4
    menuPrincipal();
    telaItens();
    itensLimpeza();
    telaInfos();
    telaDev();
}

/// Telas ///

void menuPrincipal(void) {
    char op;
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
    printf("///                   Centro de Ensino Superior do Seridó                   ///\n");
    printf("///                 Departamento de Computação e Tecnologia                 ///\n");
    printf("///                    Disciplina DCT1106 -- Programação                    ///\n");
    printf("///            Projeto Sistema de Controle de Despensa Doméstica            ///\n");
    printf("///                 Developed by @ehaisa -- since Aug, 2023                 ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                  = = = = = My Home Pantry = = = = =                     ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Ver Itens Armazenados                                     ///\n");
    printf("///            2. Guardar Novos Itens                                       ///\n");
    printf("///            3. Editar Despensa                                           ///\n");
    printf("///            4. Relatórios                                                ///\n");
    printf("///            5. Sobre o Sistema                                           ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///            Qual opção deseja acessar? (Informe o número) ");
    scanf("%c", &op);
    getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void telaItens(void) {
    char op;
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               ===========================================               ///\n");
    printf("///               =                                         =               ///\n");
    printf("///               =              My Home Pantry             =               ///\n");
    printf("///               =                                         =               ///\n");
    printf("///               ===========================================               ///\n");
    printf("///                 Developed by @ehaisa -- since Aug, 2023                 ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                 = = = = = Itens Armazenados = = = = =                   ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Limpeza Doméstica                                         ///\n");
    printf("///            2. Higiene Pessoal                                           ///\n");
    printf("///            3. Alimentação                                               ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///            Qual opção deseja acessar? (Informe o número) ");
    scanf("%c", &op);
    getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void itensLimpeza(void) {
    char op;
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               ===========================================               ///\n");
    printf("///               =                                         =               ///\n");
    printf("///               =              My Home Pantry             =               ///\n");
    printf("///               =                                         =               ///\n");
    printf("///               ===========================================               ///\n");
    printf("///                 Developed by @ehaisa -- since Aug, 2023                 ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                 = = = = = Limpeza Doméstica = = = = =                   ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Pesquisar Item                                            ///\n");
    printf("///            2. Visualizar Todos                                          ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///            Qual opção deseja acessar? (Informe o número) ");
    scanf("%c", &op);
    getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void telaInfos(void) {
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
    printf("///                   Centro de Ensino Superior do Seridó                   ///\n");
    printf("///                 Departamento de Computação e Tecnologia                 ///\n");
    printf("///                    Disciplina DCT1106 -- Programação                    ///\n");
    printf("///            Projeto Sistema de Controle de Despensa Doméstica            ///\n");
    printf("///                 Developed by @ehaisa -- since Aug, 2023                 ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                  = = = = = My Home Pantry = = = = =                     ///\n");
    printf("///                                                                         ///\n");
    printf("///  Esse programa não foi feito para uso comercial, tendo uma natureza     ///\n");
    printf("///  estritamente acadêmica, sendo feito para a aplicação prática dos       ///\n");
    printf("///  conceitos repassados e discutidos em sala de aula. O programa também   ///\n");
    printf("///  tem propósito avaliativo, sendo uma ferramenta para avaliar o          ///\n");
    printf("///  desempenho da desenvolvedora e sua compreensão do assunto.             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void telaDev(void) {
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
    printf("///                   Centro de Ensino Superior do Seridó                   ///\n");
    printf("///                 Departamento de Computação e Tecnologia                 ///\n");
    printf("///                    Disciplina DCT1106 -- Programação                    ///\n");
    printf("///            Projeto Sistema de Controle de Despensa Doméstica            ///\n");
    printf("///                 Developed by @ehaisa -- since Aug, 2023                 ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                  = = = = = My Home Pantry = = = = =                     ///\n");
    printf("///                                                                         ///\n");
    printf("///            Este projeto exemplo foi desenvolvido por:                   ///\n");
    printf("///                                                                         ///\n");
    printf("///            discente Isa Laura D. Araújo                                 ///\n");
    printf("///            E-mail: isalaura1304@gmail.com                               ///\n");
    printf("///            Instagram: @ylsix                                            ///\n");
    printf("///            Git: https://github.com/ehaisa/cPantry.git                   ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}