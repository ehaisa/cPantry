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
void itensHigiene(void);
void itensAlimentos(void);
void criarItens(void);
void editarItem(void);
void criarCategoria(void);
void searchCategorias(void);
void criarSubcategoria(void);
void telaCategorias(void);

/// Programa Principal ///

int main(void) {
    setlocale(LC_ALL,"Portuguese_Brazil"); // Corrige os acentos, fonte: https://youtu.be/hB6KFP6luL4
    menuPrincipal();
    telaItens();
    itensLimpeza();
    itensHigiene();
    itensAlimentos();
    telaCategorias();
    criarCategoria();
    criarSubcategoria();
    searchCategorias();
    criarItens();
    editarItem();
    telaInfos();
    telaDev();
}

/// CRUDs ///

void criarItens(void) {
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
    printf("///                     = = = = = Novo Item = = = = =                       ///\n");
    printf("///                                                                         ///\n");
    printf("///            Tipo (ex: Arroz):                                            ///\n");
    printf("///            Categoria (ex.: Alimentação):                                ///\n");
    printf("///            Subcategoria (ex.: Molhos):                                  ///\n");
    printf("///            Preço:                                                       ///\n");
    printf("///            Quantidade:                                                  ///\n");
    printf("///            Data de Validade:                                            ///\n");
    printf("///            Data de Aquisição:                                           ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void editarItem(void) {
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
    printf("///                  = = = = = Editar Despensa = = = = =                    ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Alterar Quantidade                                        ///\n");
    printf("///            2. Alterar Tipo                                              ///\n");
    printf("///            2. Alterar Categoria                                         ///\n");
    printf("///            3. Excluir Item                                              ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///            Qual opção deseja modificar? (Informe o número) ");
    scanf("%c", &op);
    getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void criarCategoria(void) {
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
    printf("///                   = = = = = Nova Categoria = = = = =                    ///\n");
    printf("///                                                                         ///\n");
    printf("///            Nome:                                                        ///\n");
    printf("///            Descrição da Categoria:                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar(); 
}

void criarSubcategoria(void) {
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
    printf("///                 = = = = = Nova Subcategoria = = = = =                   ///\n");
    printf("///                                                                         ///\n");
    printf("///            Nome:                                                        ///\n");
    printf("///            Categoria Principal:                                         ///\n");    
    printf("///            Descrição da Subcategoria:                                   ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar(); 
}

void searchCategorias(void) {
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
    printf("///                = = = = = Procurar Categoria = = = = =                   ///\n");
    printf("///                                                                         ///\n");
    printf("///            Qual categoria ou subcategoria gostaria de procurar?         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
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
    printf("///            4. Procurar Categoria                                        ///\n");
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

void itensHigiene(void) {
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
    printf("///                  = = = = = Higiene Pessoal = = = = =                    ///\n");
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

void itensAlimentos(void) {
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
    printf("///                    = = = = = Alimentação = = = = =                      ///\n");
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

void telaCategorias(void) {
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
    printf("///            = = = = = Categorias e Subcategorias = = = = =               ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Criar Categoria                                           ///\n");
    printf("///            2. Criar Subcategoria                                        ///\n");
    printf("///            3. Pesquisar                                                 ///\n");
    printf("///            4. Editar                                                    ///\n");
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