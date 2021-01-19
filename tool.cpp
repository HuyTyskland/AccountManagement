/*
 * tool.cpp
 *
 *  Created on: Jan 19, 2021
 *      Author: PC
 */
#include<iostream>
#include<string>
#include "tool.h"

using namespace std;

int returnHyphenIndex(string line)
{
	int index = 0;
	for(int i = 0; i < (int)line.length(); i++)
		if (line[i] == '-')
			index = i;
	return index;
}



