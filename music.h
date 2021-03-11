#pragma once
#include <iostream>
#include "media.h"
using namespace std;
class music: public media{
	public:
		music();
		char * get_creator(),* get_pub(), *get_dur();
};

