#ifndef BST_H_INCLUDED
#define BST_H_INCLUDED




#include <iostream>

#include <string>

using namespace std;

class treenode

{

public:

	string info;

	treenode *lchild, *rchild;

};

class bst

{

public:

	bst() { root = 0; }

	~bst();

	bool empty();

	void insert(string item);

	void insert(treenode * &, string item);

	void del_name(string item);

	void del_name(treenode * & loc_ptr, string item);

	treenode * search_tree(treenode *, string item);

	treenode * search_tree(string item);

	treenode * inorder_succ(treenode *);

	void print_tree();

	void print_tree(treenode *);

	void sorted_info();

	void sorted_info(treenode * &, ofstream&);

	void county_ranges(const string &, const string &);

	void county_ranges(treenode * &, const string &, const string &);

private:

	treenode *root;

}; 

#endif	
