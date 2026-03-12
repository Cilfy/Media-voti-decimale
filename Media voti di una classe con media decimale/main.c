// Media di una classe con media decimale
#include <stdio.h>

int main( void )
{
    unsigned int counter; // numero di voti letti
    int grade; // valore del voto
    int total; // somma dei voti
    
    float average; // numero con punto decimale per la Media
    
    // fase di inizializzazione
    total = 0; // inizializza il totale
    counter = 0; // inizializza il contatore del ciclo
    
    // fase di elaborazione
    // ricevi il primo voto dall'utente
    printf( "%s", "Enter grade, -1 to end: "); // prompt
    scanf( "%d", &grade ); // leggi il voto dall'utente
    
    // ripeti finchè non viene letto il valore sentinella
    while(grade != -1) {
        total = total + grade; // aggiungi il voto al totale
        counter = counter + 1; //incrementa il contatore
        
    // ricevi il voto successivo
    printf( "%s", "Enter grade, -1 to end: "); // prompt
    scanf("%d", &grade); // leggi il prossimo voto
    } // fine di while
    
    // fase di chiusura
    // se l'utente ha inserito almeno un voto
    if ( counter  != 0) {
        
        // calcola la media di tutti i voti inseriti
        average = ( float ) total / counter; // evita il troncamento
        
        //stampa la media con la precisione di due cifre
        printf("Class average is %.2f\n", average );
    
    } // fine di if
    else { // se non sono stati inseriti voti, stampa un messaggio
        puts( "No grades were entered");
    } // fine di else
    
} // fine della funzione main