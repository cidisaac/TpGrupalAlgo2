typedef struct TDAConvertidor{
	TDAXML xml;
	TDAJSON json;
}TDAConvertidor;

/* 
PRE: No tiene.
POST: Convierte xml a json segun las rutas especificadas.
	  En caso de error devuelve el mensaje correspondiente. */

int xml2jason(TDAConvertidor * tc,char * rutaXml,char * rutaJson);

/*
PRE: No tiene.
POST: Convierte json a xml segun las rutas especificadas.
	  En caso de error devuelve el mensaje correspondiente. */

int json2xml(TDAConvertidor * tc,char * rutaJson,char * rutaXml);

//HACER LA IMPLEMENTACION...

