#include <iostream>
#include <string>
#include "BinaryNodeTree.h"

using namespace std;

void print(string& item)
{
	cout << item << endl;
}

int main()
{
	BinaryNodeTree<string>* treePtr = new BinaryNodeTree<string>();

	treePtr->add("Nancy");
	treePtr->add("Tony");
	treePtr->add("Dave");
	treePtr->add("Sam");

	treePtr->inorderTraverse(print);
	system("Pause");
	return 0;
}