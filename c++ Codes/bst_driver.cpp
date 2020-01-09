//Sample driver. Make correction and changes as necessary

#include "bst.h"
#include<fstream>
#include<string>

int main()

{

	cout << "Test1: default constructor\n";

	bst myTree;

	myTree.print_tree();

	cout << "End Test1\n";

	cout << "Test2:insert\n";

	myTree.insert("new-county 234658");

	myTree.print_tree();

	cout << "End Test2\n";

	cout << "Test3: county_ranges\n";

	myTree.county_ranges("bbbb", "k");

	cout << "End Test3\n";

	cout << "Test4: del_name\n";

	myTree.del_name("miami-dade");

	myTree.print_tree();

	cout << "End Test4\n";

	cout << "Test5: sorted_info\n";

	myTree.sorted_info();

	cout << "End Test5\n";

	return 0;

}