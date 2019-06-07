#include <stdio.h>
#include <string.h>


#define STR_HISTOGRAM_MAX_TAM   (256)


void strhist( const char * str, int hist[ STR_HISTOGRAM_MAX_TAM ] )
{
    memset( hist, 0, sizeof(int) * STR_HISTOGRAM_MAX_TAM );

    while( *str )
        hist[ *str++ ]++;
}


void exibir_histograma( int hist[STR_HISTOGRAM_MAX_TAM], int min )
{
    int i = 0;
    int j = 0;

    for( i = 0; i < STR_HISTOGRAM_MAX_TAM; i++ )
    {
        if( (isprint(i)) && (hist[i] >= min) )
        {
            printf("[%c]: %d ", i, hist[i] );
            printf("\n");
        }
    }
}


void inverso( const char * str )
{
    int i = 0;

    for( i = strlen(str) - 1; i >= 0; i-- )
        printf("%c", str[i] );

    printf("\n");
}


int main( int argc, char ** argv )
{
    /* String original */
    char string[] = "Essa eh a string como exemplo\n";

    /* Histogama */
    int h[ STR_HISTOGRAM_MAX_TAM ];

    /* Exibe string original */
    printf("%s\n", string );

    /* Calcula histograma da string  */
    strhist( string, h );

    /* Exibe histograma das amostras com 2 ou mais ocorrencias */
    exibir_histograma( h, 1 );

    printf("\nFrase invertida: \n");
    /* Exibe string invertida */
    inverso( string );

    return 0;
}
