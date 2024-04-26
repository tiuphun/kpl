/* 
 * @copyright (c) 2008, Hedspi, Hanoi University of Technology
 * @author Huu-Duc Nguyen
 * @version 1.0
 */

#include <stdio.h>
#include "reader.h"

FILE *inputStream;
int lineNo, colNo;
int currentChar;

int readChar(void) {
  currentChar = getc(inputStream);
  colNo ++;
  if (currentChar == '\n') {
    lineNo ++;
    colNo = 0;
  }
  return currentChar;
}

int openInputStream() {
  	inputStream = fopen("test\\example1.kpl", "rt");
    if (inputStream == NULL) {
      	printf("Not found!\n");
		return IO_ERROR;
	}
    else printf("Opened file successfully!\n");
	lineNo = 1;
	colNo = 0;
	readChar();
	return IO_SUCCESS;
}

void closeInputStream() {
  fclose(inputStream);
}
