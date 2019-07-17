/***********************************
 * Kris-Kros Game Kit
 *----------------------------------
 * Kris-Kros Map Generator source
 * File: convert.h
 *
 * Made by Marek Pol��ek
 * Github.com/Polda18
 *
 * GNU-GPL v3.0
 * 2019
 ***********************************/

#include <string>

#ifndef CONVERT_H
#define CONVERT_H

namespace mapgen
{
	namespace converter
	{
		int convert(bool v, bool o, bool c, bool f, bool l,
			std::string inFname,
			std::string outFname,
			std::string capFname,
			std::string ftFname,
			std::string lang);
	}
}

#endif