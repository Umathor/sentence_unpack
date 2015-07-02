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
int node::set_next(int index, char input){
	if(index < 0 || index >= next.size() || next[index])
		return -1;
	next[index] = std::make_shared<node>(input);
	return next[index]->get_data();
}