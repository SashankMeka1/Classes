#include<iostream>
#include "media.h"
#include <cstring>
using namespace std;
char* media::get_year(){
	return year;
}//universal get title get year and print
char* media::get_title(){
	return title;
}
void media::print(){
	cout << "Title "<<title<<endl;
	cout <<"Year "<< year<<endl;
	if(strlen(field_one)){
		cout <<field_one<<endl;
	}
	cout << field_two<<endl;
	cout << field_three<<endl;
}
media::~media(){
	cout << "Are you sure that you would like to delete?"<<endl;
	print();
	cin.getline(response,150);
	if(response[0]=='y'){
		cout << "Deleted"<<endl;
	}
	else{
		print();
		cout << "Please re-add"<<endl;
	}
}
char media::response[150];
int media::type;
