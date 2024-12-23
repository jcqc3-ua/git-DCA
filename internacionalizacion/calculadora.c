#include <stdio.h>
#include <stdlib.h>
#include <libintl.h>
#include <locale.h>

#define _(x) gettext(x)

void limpiarBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void menu() {
    printf(_("Selecciona una operación:\n"));
    printf(_("1. Suma\n"));
    printf(_("2. Resta\n"));
    printf(_("3. Multiplicación\n"));
    printf(_("4. División\n"));
    printf(_("5. Salir\n"));
}

int main(int argc, char const *argv[])
{

    setlocale(LC_ALL, "");
    bindtextdomain("calculadora", "./mo");
    textdomain("calculadora");

    int opcion = 0;
    float a, b;

    while (opcion != 5) {
    menu();
    printf(_("Introduce tu opción: "));
    if (scanf("%d", &opcion) != 1) {
        printf(_("Entrada no válida. Por favor, introduce un número.\n"));
        limpiarBuffer();
        opcion = 0; // Reiniciar la opción para evitar salir del bucle
        continue;
    }

    if (opcion >= 1 && opcion <= 4) {
        printf(_("Introduce el primer número: "));
        if (scanf("%f", &a) != 1) {
            printf(_("Entrada no válida. Por favor, introduce un número.\n"));
            limpiarBuffer();
            continue;
        }
        printf(_("Introduce el segundo número: "));
        if (scanf("%f", &b) != 1) {
            printf(_("Entrada no válida. Por favor, introduce un número.\n"));
            limpiarBuffer();
            continue;
        }

        switch (opcion) {
            case 1:
                printf(_("Resultado: %.2f\n"), a + b);
                break;
            case 2:
                printf(_("Resultado: %.2f\n"), a - b);
                break;
            case 3:
                printf(_("Resultado: %.2f\n"), a * b);
                break;
            case 4:
                if (b != 0) {
                    printf(_("Resultado: %.2f\n"), a / b);
                } else {
                    printf(_("Error: No se puede dividir por cero.\n"));
                }
                break;
            case 5:
                break;
        }
    }
}
    return 0;
}
