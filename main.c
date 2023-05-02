#include "docs-omp.h"
#include "docs-omp.c"


main(){
	Documento *documento;
	Armario *armario;
	documento = ler_file();
	armario = armario_inicial(armario, documento);
	armario = ordenar_armario(documento);
}
