//header file for the node and trie class. The node class will be the individual nodes of the trie

#include <string>
#include <iostream>
#include <memory>

namespace trie
{
	class node
	{
	public:
		//constructors
		node();
		node(char);

	private:
		std::unique_ptr<node>;
		char data;

	};

	class trie
	{

	};
}