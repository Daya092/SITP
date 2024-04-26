#include <stdio.h>
#include <string.h>
int SITP()
{
    int Numero;
    printf("Bienvenido, ingresa 1 si quieres consultar las rutas entre semana y 2 para fines de semana\n");
    scanf("%d", &Numero);
    if (Numero == 1) {
        printf("Estas son las rutas que puedes consultar\n");

        printf("C104\n");
        printf("C116\n");
        printf("D203\n");
        printf("B110\n");
        printf("B314\n");

        printf("Ingresa la ruta que deseas consultar letras en Mayuscula: \n");

        char Ruta[6];
        scanf("%s", Ruta);

        char C104[] = "Portal Suba, La Fontana, Compartir, Tibabuyes, Fontanar, Bilbao, Rodesia";
        char C116[] = "San Carlos, El Tunal, Calle 40, Carvajal, Americas, Normandia, Bonanza";
        char D203[] = "Chico, Molinos, Santa Barbara, Prado, Bulevar Niza, AV Boyaca, La Serena";
        char B110[] = "Portal 80, Quirigua, Carrera 90, Avenida Cali, Minuto de Dios, Boyaca, Avenida 68";
        char B314[] = "Las Brisas, El refugio, La Aldea, Belen, Boston, Fontibon, Tintal, Calle 26";

        if (strcmp(Ruta, "C104") == 0) {
            printf("Estas son las paradas del C104:\n%s\n", C104);
        }
        else if (strcmp(Ruta, "C116") == 0) {
            printf("Estas son las paradas del C116:\n%s\n", C116);
        }
        else if (strcmp(Ruta, "D203") == 0) {
            printf("Estas son las paradas del D203:\n%s\n", D203);
        }
        else if (strcmp(Ruta, "B110") == 0) {
            printf("Estas son las paradas del B110:\n%s\n", B110);
        }
        else if (strcmp(Ruta, "B314") == 0) {
            printf("Estas son las paradas del B314:\n%s\n", B314);
        }
    }
    
    
    else if (Numero == 2) {
        printf("Estas son las rutas que puedes consultar para el fin de semana\n");
        
        printf("A704\n");
        printf("C123\n");
        printf("F718\n");
        printf("F401\n");
        printf("G502\n");
        
        printf("Ingresa la ruta que deseas consultar letras en Mayuscula: \n");
        
        char Ruta2[6];
        scanf("%s",Ruta2);
        
        char A704[] = "Nuevo Portal, La Reforma, Restrepo, La Aurora, El Tunal, La Sabana,Las Nieves";
        char C123[] = "Prados Castilla, El Tintal, Villa Alsacia, Salitre, Calle 63, Carrera 17, El chico";
        char F718[] = "Centro Usme, La aurora, Farroquia San Andres, Bellavista, El Virrey, El Tunal";
        char F401[] = "Suba Salitre, Uniagraria, Carrera 55, Carrera 62, Iberia, Granada, Niza, AV Boyaca";
        char G502[] = "El Dorado, CIAC, La Cabaña, Fontibon, El Tintal, Corabastos, Olarte, Calle 42";
    
        if (strcmp(Ruta2, "A704") == 0) {
            printf("Estas son las paradas del A704:\n%s\n", A704);
        }
        else if (strcmp(Ruta2, "C123") == 0) {
            printf("Estas son las paradas del C123:\n%s\n", C123);
        }
        else if (strcmp(Ruta2, "F718") == 0) {
            printf("Estas son las paradas del F718:\n%s\n", F718);
        }
        else if (strcmp(Ruta2, "F401") == 0) {
            printf("Estas son las paradas del F401:\n%s\n", F401);
        }
        else if (strcmp(Ruta2, "G502") == 0) {
            printf("Estas son las paradas del G502:\n%s\n", G502);
        }
        
    }

    return 0;
}

int main() {
    SITP();
    return 0;
}
