/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Name:			Tucker Dane Walker
//
//	Date:			09 December 2016
//
//	Description:	The Switch Class
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Switch.h"

/***************************************************************************************************
**	default constructor for Switch
***************************************************************************************************/
Switch::Switch() : Object('S', "Colored", 2, 2, "Switch")
{
	color = "none";
	weight = 100;
}

/***************************************************************************************************
**	constructor for Stone initializing rowPos and colPos
***************************************************************************************************/
Switch::Switch(int row, int col, string c, char s) : Object(s, "Colored", row, col, "Switch")
{
	color = c;
	symbol = 'S';
	tripped = false;
}

/***************************************************************************************************
**	deconstructor for Stone
***************************************************************************************************/
Switch::~Switch()
{
}

/***************************************************************************************************
**	Sets up Stone
***************************************************************************************************/
void Switch::setSwitch(int row, int col, string c, char s)
{
	this->symbol = s;
	this->rowPos = row;
	this->colPos = col;
	this->color = c;
	this->type = "Switch";
}

/***************************************************************************************************
**	returns the weight of the object
***************************************************************************************************/
int Switch::getWeight()
{
	return weight;
}

/***************************************************************************************************
**	returns the weight of the object
***************************************************************************************************/
void Switch::setWeight(int w)
{
	weight = w;
}

/***************************************************************************************************
**	returns the name of the Object
***************************************************************************************************/
string Switch::getName()
{
	return color;
}

/***************************************************************************************************
**	flips the switch
***************************************************************************************************/
void Switch::setTripped(bool t)
{
	tripped = t;
}

/***************************************************************************************************
**	flips the switch
***************************************************************************************************/
bool Switch::getTripped()
{
	return tripped;
}