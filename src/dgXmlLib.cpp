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


void exploitReadData(X_Document *doc);


int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	X_Document doc;
	X_DocumentReader reader;
	FILE *fh=fopen("../data/sample.xml","r");
	if (fh!=NULL)
	{
		reader.Read(fh,&doc);
		fclose(fh);
	}
	else
	{
		printf("ERROR: main: could not open input file\n");
	}

	//doc.print();
	exploitReadData(&doc);

	printf("\nEND\n");
	return 0;
}

void exploitReadData(X_Document *doc)
{
	//get master node employeeData
	if (doc->nodes.size()>0)
	{
		X_Node *employeeData=&doc->nodes.at(0);
		//get all sub nodes
		for (auto & employee : employeeData->nodes)
		{
			//verify that node name is expected
			if (employee.name=="employee")
			{
				std::string employeeName=employee.getContentOfSubNode("name");
				std::string employeeAddress=employee.getContentOfSubNode("address");
				std::string employeeType=employee.getContentOfAttribute("type");
				std::string employeeHiring=employee.getContentOfAttribute("hiring");
				//do something with the data:
				//note, in this example, the data is just print out
				printf("employee data:\n");
				printf("\tname: %s\n",employeeName.c_str());
				printf("\taddress: %s\n",employeeAddress.c_str());
				printf("\ttype: %s\n",employeeType.c_str());
				printf("\thiring: %s\n",employeeHiring.c_str());
			}
		}
	}
	else
	{
		printf("ERROR: printReadData: read document contains no master node\n");
	}
	printf("note: last node is expected empty\n");
}
