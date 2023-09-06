#include <iostream>
#include "binarytree.h"

using namespace mytree;
	//	1
	// 2 3
	//45  67

int main()
{
	BinaryTree myTree;

	auto pRoot = myTree.GetRoot();
	pRoot->mData = 1;

	auto pNode = myTree.InsertLeft(pRoot, 2);
	myTree.InsertLeft(pNode, 4);
	myTree.InsertRight(pNode, 5);
	pNode = myTree.InsertRight(pRoot, 3);
	myTree.InsertLeft(pNode, 6);
	myTree.InsertRight(pNode, 7);

	myTree.BreadthFirstSearch();
	std::cout << std::endl;
	myTree.DepthFirstSearch();
	std::cout << std::endl;
	myTree.DFSRecursive();
}

/*
	mytree::BinaryTree myTree;

	auto pRoot = myTree.GetRoot();
	pRoot->mData = 1;

	auto pNode = myTree.InsertLeft(pRoot, 2);
	myTree.InsertLeft(pNode, 4);
	myTree.InsertRight(pNode, 5);
	pNode = myTree.InsertRight(pRoot, 3);
	myTree.InsertLeft(pNode, 6);
	myTree.InsertRight(pNode, 7);

	std::cout << pRoot->mData << std::endl;
	std::cout << pRoot->mpLeft->mData<< pRoot->mpRight->mData << std::endl;
	std::cout << pRoot->mpLeft->mpLeft->mData << pRoot->mpLeft->mpRight->mData
			<< pRoot->mpRight->mpLeft->mData << pRoot->mpRight->mpRight->mData;
*/