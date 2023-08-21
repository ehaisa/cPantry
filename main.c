#include <stdio.h>
#include <locale.h>

void menuPrincipal(void);

/// Programa Principal ///

int main(void) {
    setlocale(LC_ALL,"Portuguese_Brazil");
    menuPrincipal();
}

/// Funções ///

void menuPrincipal(void) {
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
    printf("\n");
}