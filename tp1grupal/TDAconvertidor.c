#include "TDAconvertidor.h"

void iniciarTag(char *textoAParsear){
	printf("new element: %s\n", element);
}

void cierreTag(char *element){
	printf("close element: %s\n", element);
}

void nuevoValor(char *text){
	printf("new content: %s\n", text);
}



void parserXml(TDAconvertidor * tc)
{
	char buffer[256];
	int i = 0;
	int pos_b = 0;
	while(tc->xml[i] != NULL)
	{
		switch(tc->xml[i])
		{
			case '<': //empieza un elemento
				
				if (pos_b < i-1)
				{
					strncpy(buffer,(tc->xml)+pos_b+1,i-pos_b);
					buffer[i-pos_b-1] = 0;
					nuevoValor(buffer);
				}
				pos_b=i;
				break;
			case '>': //cierre de un elemento

				if ((tc->xml)[pos_b+1] == '/') //significa que era una etiqueta de cierre
				{
					strncpy(buffer,(tc->xml)+pos_b+2,i-pos_b-2);
					buffer[i-pos_b-2]=0;
					cierreTag(buffer);   //cierra el elemento sin incluir la barra "/"
				}
				else
				{
					strncpy(buffer, xml+pos_b+1, i-pos_b-1);
					buffer[i-pos_b-1]=0;
					iniciarTag(buffer);             //inicia el elemento
				}
				pos_b=i;

		}
		i++;
	}
}

