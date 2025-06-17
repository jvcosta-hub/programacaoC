Explicação do Código:
Definições e Matrizes: O código define um tabuleiro de batalha naval de tamanho 10x10 e três matrizes de habilidades (cone, cruz e octaedro) de tamanho 5x5.

Funções para Criar Habilidades: Cada função (criarCone, criarCruz, criarOctaedro) preenche suas respectivas matrizes com valores 1 para áreas afetadas e 0 para áreas não afetadas.

Aplicar Habilidade: A função aplicarHabilidade sobrepõe a matriz da habilidade no tabuleiro baseando-se nas coordenadas fornecidas.

Exibição do Tabuleiro: A função exibirTabuleiro imprime o estado atual do tabuleiro no console.
Main: No main, inicializamos o tabuleiro, aplicamos os navios e as habilidades, e finalmente exibimos o resultado.

Para executar programas em C, você precisa seguir alguns passos básicos. Aqui está um guia simples:

Instale um compilador: Primeiro, você precisa de um compilador C. Uma opção popular é o GCC (GNU Compiler Collection). Se você estiver usando Linux, ele pode já estar instalado. Para Windows, você pode usar o MinGW ou o Cygwin. No macOS, você pode instalar o Xcode Command Line Tools.

Compile o código: Abra o terminal ou prompt de comando e navegue até o diretório onde seu arquivo está salvo. Use o seguinte comando para compilar:

gcc batalha_naval.c -o batalha_naval
Isso criará um arquivo executável batalha_naval

Execute o programa: Depois de compilar, você pode executar o programa com o seguinte comando:

No Linux ou macOS:
./batalha_naval
No Windows:
batalha_naval.exe
Verifique a saída: Depois de executar, você verá a saída do seu programa no terminal.
