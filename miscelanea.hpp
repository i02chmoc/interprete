#include <stdio.h>

int existeArchivo(const char* nombreArchivo) {
    FILE* archivo = fopen(nombreArchivo, "r");
    if (archivo != NULL) {
        fclose(archivo);
        return 1;
    } else {
        return 0;
    }
}
