/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    double preco, desconto, novoPreco;
    printf ("informe o preco do produto:");
    scanf("%lf", &preco);
    desconto = preco * 0.09;
    novoPreco = preco - desconto;
    printf ("novo preco: %.2lf\n", novoPreco);
    return 0;

}
