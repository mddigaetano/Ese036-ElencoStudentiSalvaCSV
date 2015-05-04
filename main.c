#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definisci le costanti
#define N 3
#define MAX_STRLEN 30
#define FNAME "elenco.csv"

// Definisci il tipo di dato struct s_studente
struct s_studente {
    char nome[MAX_STRLEN+1];
    char cognome[MAX_STRLEN+1];
    int eta;
    char classe[MAX_STRLEN+1];
};

// Definisci studente come struct s_studente
typedef struct s_studente studente;

int main(int argc, char** argv) {
    int i;
    FILE *pfile;
    studente alunno;
    
    if(pfile=fopen(FNAME,"w")){
        fprintf(pfile,"Nome;Cognome;Eta';Classe\n");
        
        for(i=0;i<N;i++){
            printf("Inserisci il nome del %d° alunno: ",i+1);
            scanf("%s", alunno.nome);
            fprintf(pfile,"%s;",alunno.nome);
            printf("Inserisci il cognome del %d° alunno: ",i+1);
            scanf("%s", alunno.cognome);
            fprintf(pfile,"%s;",alunno.cognome);
            printf("Inserisci l'eta' del %d° alunno: ",i+1);
            scanf("%d", &alunno.eta);
            fprintf(pfile,"%d;",alunno.eta);
            printf("Inserisci la classe del %d° alunno: ",i+1);
            scanf("%s", alunno.classe);
            fprintf(pfile,"%s\n",alunno.classe);
            printf("\n");
        }
        
        fclose(pfile);
    }
    else
        exit(1);
    
    return (EXIT_SUCCESS);
}