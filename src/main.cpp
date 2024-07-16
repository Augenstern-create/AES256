#include <stdio.h>
#include <string.h>
#include "AesAlgorithm.h"
#include <iostream>
static char aesJsonKey[] = {(char)0x1A, (char)0xF6, (char)0xA5, (char)0xA3, (char)0xBE, (char)0x15, (char)0x38,
                            (char)0x46, (char)0xF5, (char)0xFE, (char)0x0E, (char)0x1E, (char)0xE5, (char)0x63};
int
main(void)
{

    int ptrJsonLen;
	char* stringmeass="alsdafldlaksdjflaksd-.,123+-/*";
     std::cout<<stringmeass<<std::endl;   
char *ptrHexString = LSOEncodeDataWithKey(stringmeass, strlen(stringmeass), aesJsonKey, sizeof(aesJsonKey), &ptrJsonLen);
std::cout<<ptrHexString<<std::endl;
char *ptrJson = LSODecodeDataWithKey(ptrHexString, strlen(ptrHexString), aesJsonKey,
                                                sizeof(aesJsonKey), &ptrJsonLen);
                                                std::cout<<ptrJson<<std::endl;         
	return (0);
}