//implementation of trie and node classes
//Daniel Seger

#include "trie.h"

using namespace trie_class;

node::node() : data('!'){	}

node::node(char input) : data(input){	}

//set the data to a certain value
int node::set_data(char input){
	data = input;
	return data;
}
//initializes the vector from 0 and returns vector size 
//if vector size has already been set then returns vector size
int node::set_array(){
	if(next.size() == 0)
		next.resize(27);
	return next.size();
}
//initializes the next pointer at the index from null to the provided value. returns value of pointer
//if the pointer is already initialized then return -1
//if index is out of bounds then return -1
int node::set_next(int index){
	if(index < 0 || index >= next.size() || next[index])
		return -1;
	next[index] = std::make_shared<trie_class::node>(index+97);
	return next[index]->get_data();
}

//get_data returns character stored in node
char node::get_data(){
	return data;
}

//compare data will compare the passed in value and return true if they are the same and false otherwise
bool node::compare_data(char compare){
	if(compare == data)
		return true;
	return false;
}
//returns a weak ptr pointing to the next data value at index
std::weak_ptr<trie_class::node> node::get_next(int index){
	std::weak_ptr<trie_class::node> temp = next[index];
	return temp;
}