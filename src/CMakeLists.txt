cmake_minimum_required(VERSION 3.10)

# set the project name
project(dgXmlLibExample)


# add the executable
add_executable(
	dgXmlLibExample
	"dgXmlLib.cpp"
	"dgXmlLib/X_Attribute.cpp"
	"dgXmlLib/X_Document.cpp"
	"dgXmlLib/X_DocumentReader.cpp"
	"dgXmlLib/X_Node.cpp"
	)


