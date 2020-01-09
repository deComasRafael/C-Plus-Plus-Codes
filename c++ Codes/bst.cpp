#include "bst.h"
#include<fstream>
#include<string>

bool bst::empty()

{

	return (root == 0);

}

void bst::insert(string item)

{

	insert(root, item);

}

void bst::insert(treenode * & loc_ptr, string item)

{

	if (loc_ptr == 0)

	{

		loc_ptr = new treenode;

		loc_ptr->lchild = loc_ptr->rchild = 0;

		loc_ptr->info = item;

	}

	else if (loc_ptr->info>item)

		insert(loc_ptr->lchild, item);

	else if (loc_ptr->info<item)

		insert(loc_ptr->rchild, item);

	else

		cout << "the item is already in the tree\n";

}

treenode * bst::search_tree(string item)

{

	return search_tree(root, item);

}

treenode * bst::search_tree(treenode * loc_ptr, string item)

{

	if (loc_ptr != 0)

	{

		if (loc_ptr->info == item)

			return loc_ptr;

		else if (loc_ptr->info>item)

			return search_tree(loc_ptr->lchild, item);

		else

			return search_tree(loc_ptr->rchild, item);

	}

	else

		return loc_ptr;

}

void bst::del_name(string item)

{

	del_name(root, item);

}

void bst::del_name(treenode * & loc_ptr, string item)

{

	if (loc_ptr == 0)

		cout << "item not in tree\n";

	else if (loc_ptr->info > item)

		del_name(loc_ptr->lchild, item);

	else if (loc_ptr->info < item)

		del_name(loc_ptr->rchild, item);

	else

	{

		treenode * ptr;

		if (loc_ptr->lchild == 0)

		{

			ptr = loc_ptr->rchild;

			delete loc_ptr;

			loc_ptr = ptr;

		}

		else if (loc_ptr->rchild == 0)

		{

			ptr = loc_ptr->lchild;

			delete loc_ptr;

			loc_ptr = ptr;

		}

		else

		{

			ptr = inorder_succ(loc_ptr);

			loc_ptr->info = ptr->info;

			del_name(loc_ptr->rchild, ptr->info);

		}

	}

}

treenode * bst::inorder_succ(treenode * loc_ptr)

{

	treenode *ptr = loc_ptr->rchild;

	while (ptr->lchild != 0)

	{

		ptr = ptr->lchild;

	}

	return ptr;

}

void bst::print_tree()

{

	print_tree(root);

}

void bst::print_tree(treenode * loc_ptr)

{

	if (loc_ptr != 0)

	{

		print_tree(loc_ptr->lchild);

		cout << loc_ptr->info << endl;

		print_tree(loc_ptr->rchild);

	}

}

bst::~bst()

{

	while (root != 0)

	{

		del_name(root->info);

	}

}

void bst::county_ranges(const string & min_range, const string & max_range)
{
	county_ranges(root, min_range, max_range);
}

void bst::county_ranges(treenode * & loc_ptr, const string & min_range, const string & max_range)
{
	if (loc_ptr != 0)
	{
		

		if (loc_ptr->info <= max_range && loc_ptr->info >= min_range)
		{
			cout << loc_ptr->info << " ";
		}
		
		county_ranges(loc_ptr->lchild, min_range, max_range);
	}
}

void bst::sorted_info()

{

	//Open the file in write mode.

	string fname = "county_data.txt";

	ofstream file(fname.c_str());

	//Call the auxillary function.

	sorted_info(root, file);

	//Close the file and print the message.

	file.close();

	cout << "\nInfo stored in the file " << fname << endl;

}

//Define the function to store the info

// in the file

void bst::sorted_info(treenode * & loc_ptr, ofstream &file)

{

	if (loc_ptr != 0)

	{

		//Call the function recursively with the left child.

		sorted_info(loc_ptr->lchild, file);

		//Store the information in the file.


		file << " " << loc_ptr->info << endl;

		//Call the function recursively with the left child.

		sorted_info(loc_ptr->rchild, file);

	}

}
