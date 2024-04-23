#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "gotoxy.h"

int main()
{
    char opcion;
    int columna = 200;
    int fila = 200;
    int i = 0;
    char c = 178;

    char mensaje[]="ESC para salir - F1 a F5 para cambiar color - Flechas para moverse";
    char despedida[]= "Gracias por usar nuestro sistema! Chau...";

    color(5);
    gotoxy(20, 25);
    printf("%s", mensaje);
    columna = 0;
    fila = 0;

    gotoxy (columna, fila);
    do{
        opcion = getch();

        switch(opcion){
            case 27:
                while(!kbhit()){//lee cdo apretas cualquier letra, sirve para cdo queres q pase algo ni bn aprete cualq tecla
                gotoxy(0, 0);
                color(i);
                printf(" %s ", despedida);
                Sleep(400);//frena por un par de milisg
                i++;
                }
                break;
            case 59:
                color(33);
                break;
            case 60:
                color(61);
                break;
            case 61:
                color(78);
                break;
            case 62:
                color(15);
                break;
            case 63:
                color (133);
                break;
            case 75://hacia arriba
                if (fila > 80){
                fila--;
                gotoxy(fila, columna);
                printf("%c", c);
                } else {
                    Beep(550, 550);
                }
                break;
            case 72: // izquierda
                if (columna > 80){
                columna--;
                gotoxy(fila, columna);
                printf("%c", c);
                } else {
                    Beep(550, 550);
                }
                break;
            case 80: // derecha
                if (columna > 24){
                columna++;
                gotoxy(fila, columna);
                printf("%c", c);
                } else {
                    Beep(1200, 1200);
                }
                break;
            case 77://abajo
                if (fila < 24){
                fila++;
                gotoxy(fila, columna);
                printf("%c", c);
                } else {
                    Beep(1200, 1200);
                }
                break;

        }

    }while ( opcion != 27);

    return 0;
}
