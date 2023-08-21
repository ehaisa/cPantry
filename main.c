#include <stdio.h>
#include <locale.h>

void menuPrincipal(void);
void telaInfos(void);

/// Programa Principal ///

int main(void) {
    setlocale(LC_ALL,"Portuguese_Brazil");
    menuPrincipal();
    telaInfos();
}

/// Fun��es ///

void menuPrincipal(void) {
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
    printf("///                   Centro de Ensino Superior do Serid�                   ///\n");
    printf("///                 Departamento de Computa��o e Tecnologia                 ///\n");
    printf("///                    Disciplina DCT1106 -- Programa��o                    ///\n");
    printf("///            Projeto Sistema de Controle de Despensa Dom�stica            ///\n");
    printf("///                 Developed by @ehaisa -- since Aug, 2023                 ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                  = = = = = My Home Pantry = = = = =                     ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Ver Itens Armazenados                                     ///\n");
    printf("///            2. Guardar Novos Itens                                       ///\n");
    printf("///            3. Editar Despensa                                           ///\n");
    printf("///            4. Relat�rios                                                ///\n");
    printf("///            5. Sobre o Sistema                                           ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

void telaInfos(void) {
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
    printf("///                   Centro de Ensino Superior do Serid�                   ///\n");
    printf("///                 Departamento de Computa��o e Tecnologia                 ///\n");
    printf("///                    Disciplina DCT1106 -- Programa��o                    ///\n");
    printf("///            Projeto Sistema de Controle de Despensa Dom�stica            ///\n");
    printf("///                 Developed by @ehaisa -- since Aug, 2023                 ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                  = = = = = My Home Pantry = = = = =                     ///\n");
    printf("///                                                                         ///\n");
    printf("///  Esse programa n�o foi feito para uso comercial, tendo uma natureza     ///\n");
    printf("///  estritamente acad�mica, sendo feito para a aplica��o pr�tica dos       ///\n");
    printf("///  conceitos repassados e discutidos em sala de aula. O programa tamb�m   ///\n");
    printf("///  tem prop�sito avaliativo, sendo uma ferramenta para avaliar o          ///\n");
    printf("///  desempenho da desenvolvedora e sua compreens�o do assunto.             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}