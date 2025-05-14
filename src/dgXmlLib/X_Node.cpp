/*****************************************************************************/
/* Copyright Tawazun 2023 */
/* Project: Interface Tool */
/* Author: David Gil */
/*****************************************************************************/

/* System Includes ***********************************************************/
#include "X_Node.h"

#include <iostream>

/* Application Includes ******************************************************/

/* Public Methods  ***********************************************************/
X_Node::X_Node(std::string name_p)
{ // Constructor
	//std::cout << "Hello X_Node x" << std::endl;
	this->name=name_p;
}

void X_Node::print(int ident)
{
	//std::cout << "X_Node: " << std::endl;
	//std::cout << "  name: " << this->name << std::endl;

	//name
	for (int ix=0;ix<ident;ix++)
	{
		printf(" ");
		//printf("%d",ident);
	}
	std::cout <<  this->name;
	for (auto & element : this->attributes) {
			element.print();
		}

	//content
	std::cout << " : ";
	if (this->content.length()>0)
	{
		std::cout << this->content ;
	}
	std::cout << std::endl;

	for (auto & element : this->nodes) {
		element.print(ident+1);
	}
}

/* Public Functions ******************************************************/
/* none */

/* Private Methods  ***********************************************************/
/* none */

/* Private Functions ******************************************************/
/* none */
