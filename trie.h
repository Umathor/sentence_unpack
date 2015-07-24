//header file for the node and trie class. The node class will be the individual nodes of the trie
//the trie will be used to hold a searchable dictionary to help solve the daily programmer challenge#209
//Daniel Seger

#include <string>
#include <iostream>
#include <memory>
#include <vector>

namespace trie_class
{
	class node
	{
	public:
		//constructors
		node();
		node(char input);
		//modifiers
		int set_data(char input);
		int set_array();
		int set_next(int index);
		//accessors
		char get_data();
		bool compare_data(char compare);
		std::weak_ptr<trie_class::node> get_next(int index);


	private:
		std::vector<std::shared_ptr<trie_class::node>> next;
		char data;
	};

	class trie
	{
	public:

	private:
		std::shared_ptr<node> head;
	};
}