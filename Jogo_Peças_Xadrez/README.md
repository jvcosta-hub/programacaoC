Explicação do Código:
Movimento da Torre:
Utiliza um loop for que repete 5 vezes, imprimindo "Direita" a cada iteração.

Movimento do Bispo:
Utiliza um loop while que incrementa uma variável j até que ela alcance 5, imprimindo "Cima, Direita" em cada iteração.

Movimento da Rainha:
Utiliza um loop do-while, que garante que o bloco de código seja executado pelo menos uma vez. Ele imprime "Esquerda" enquanto a variável k for menor que 8.

Movimento do Cavalo:
Loop for: O primeiro loop é um for que itera duas vezes, representando os dois movimentos para baixo. Em cada iteração, imprime "Baixo".
Loop while: Dentro do loop for, há um loop while que executa uma vez (já que o movimento é de apenas uma casa), imprimindo "Esquerda".


Para executar programas em C, você precisa seguir alguns passos básicos. Aqui está um guia simples:

Instale um compilador: Primeiro, você precisa de um compilador C. Uma opção popular é o GCC (GNU Compiler Collection). Se você estiver usando Linux, ele pode já estar instalado. Para Windows, você pode usar o MinGW ou o Cygwin. No macOS, você pode instalar o Xcode Command Line Tools.

Compile o código: Abra o terminal ou prompt de comando e navegue até o diretório onde seu arquivo está salvo. Use o seguinte comando para compilar:

gcc xadrez.c -o xadrez
Isso criará um arquivo executável chamado xadrez.

Execute o programa: Depois de compilar, você pode executar o programa com o seguinte comando:

No Linux ou macOS:
./xadrez
No Windows:
xadrez.exe
Verifique a saída: Depois de executar, você verá a saída do seu programa no terminal.
