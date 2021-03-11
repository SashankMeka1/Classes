#pragma once
#include <iostream>
#include "movie.h"
#include <cstring>
using namespace std;
class game:public movie{//inherit from game because of similar functions
	public:
		game();
		char *get_pub();
};
