#include <string.h>

#define memcpy	copia n bytes entre dos áreas de memoria que no deben solaparse
#define memmove	copia n bytes entre dos áreas de memoria; al contrario que memcpy las áreas pueden solaparse
#define memchr	busca un valor a partir de una dirección de memoria dada y devuelve un puntero a la primera ocurrencia del valor buscado o NULL si no se encuentra
#define memcmp	compara los n primeros caracteres de dos áreas de memoria
#define memset	sobre escribe un área de memoria con un patrón de bytes dado
#define strcat	añade una cadena al final de otra
#define strncat	añade los n primeros caracteres de una cadena al final de otra
#define strchr	localiza un carácter en una cadena, buscando desde el principio
#define strrchr	localiza un carácter en una cadena, buscando desde el final
#define strcmp	compara dos cadenas alfabéticamente ('a'!='A')
#define strncmp	compara los n primeros caracteres de dos cadenas numéricamente ('a'!='A')
#define strcoll	compara dos cadenas según la colación actual ('a'=='A')
#define strcpy	copia una cadena en otra
#define strncpy	copia los n primeros caracteres de una cadena en otra
#define strerror devuelve la cadena con el mensaje de error correspondiente al número de error dado
#define strlen	devuelve la longitud de una cadena
#define strspn	devuelve la posición del primer carácter de una cadena que no coincide con ninguno de los caracteres de otra cadena dada
#define strcspn	devuelve la posición del primer carácter que coincide con alguno de los caracteres de otra cadena dada
#define strpbrk	encuentra la primera ocurrencia de alguno de los caracteres de una cadena dada en otra
#define strstr	busca una cadena dentro de otra
#define strtok	parte una cadena en una secuencia de tokens
#define strxfrm	transforma una cadena en su forma de colación (??)
#define strrev	invierte una cadena