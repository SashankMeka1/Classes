#pragma once
#include <iostream>
#include "music.h"
using namespace std;
class movie: public music{
	public:
		movie();
		char * get_rating();
};
