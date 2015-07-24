//main file for sentence unpack
//Daniel Seger

#include "trie.h"

using namespace trie_class;
using namespace std;

int main(){
	node test;

	cout<< test.get_data() << endl;

	test.set_data('a');

	test.set_array();

	test.set_next(23);

	shared_ptr<node> test2 = test.get_next(23).lock();

	cout << test.get_data() << ' ' << test2->get_data() << endl;

	return 0;
}