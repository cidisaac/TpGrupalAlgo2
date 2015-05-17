typedef struct TDAJSON
{
	char * tagPrincipal;
	TDAListaSimple atributos;
	FILE * jsonFile;
}TDAJSON;

/*
PRE: No tiene.
POST: Inicializa el TDAJSON con el archivo cml que persiste en rutaJson. */

int jsonCargar(TDAJSON * TDAJson,char * rutaJson);

/*
PRE: TDAJSON correctamente inicializado en memoria.
POST: Guarda el TDAJSON en el archivo xml que persistira en rutaJson. */

int jsonGuardar(TDAJSON * TDAJson,char * rutaJson);

//HACER LA IMPLEMENTACION DE LOS ELEMENTOS DE LA LISTA DE ATRIBUTOS PARA REPRESENTAR EL XML EN MEMORIA
