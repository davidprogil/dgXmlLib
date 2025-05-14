//============================================================================
// Name        : dgXmlLib.cpp
// Author      : David Gil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * Structure:
 * - Document
 * - Node
 * - Attributes
 *
 */

#include <iostream>
using namespace std;
#include "./dgXmlLib/X_DocumentReader.h"

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	X_Document doc;
	X_DocumentReader reader;
	FILE *fh=fopen("./data/sample.xml","r");
	if (fh!=NULL)
	{
		reader.Read(fh,&doc);
		fclose(fh);
	}
	else
	{
		printf("ERROR: main: could not open input file\n");
	}

	doc.print();

	printf("\nEND\n");
	return 0;
}
