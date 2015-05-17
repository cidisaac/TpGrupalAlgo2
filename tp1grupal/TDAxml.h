typedef struct TDAXML
{
	char * tagPrincipal
	TDAListaSimple atributos;
	FILE * xmlFile;
}TDAXML;

/*
PRE: No tiene.
POST: Inicializa el TDAXML con el archivo xml que persiste en rutaXml. */
int xmlCargar(TDAXML * TDAXml,char * rutaXml);

/*
PRE: TDAXml correctamente inicializado en memoria.
POST: Guarda el TDAXML en el archivo xml que persistira en rutaXml. */
int xmlGuardar(TDAXML * TDAXml,char * rutaXml);

//HACER LA IMPLEMENTACION DE LOS ELEMENTOS DE LA LISTA DE ATRIBUTOS PARA REPRESENTAR EL XML EN MEMORIA
