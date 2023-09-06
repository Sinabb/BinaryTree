#pragma once

#include <iostream>
#include <queue>
#include <stack>
namespace mytree
{
	struct Node
	{
		int mData;
		Node* mpLeft;
		Node* mpRight;

		Node(int data = 0, Node* pLeft = nullptr, Node* pRight = nullptr)
		{
			mData = data;
			mpLeft = pLeft;
			mpRight = pRight;
		}
	};

	class BinaryTree
	{
	private:
		Node* mpRoot;
	public:
		BinaryTree()
		{
			mpRoot = CreateNode(0);
		}
		Node* CreateNode(int value, Node* pLeft = nullptr, Node* pRight = nullptr)
		{
			return new Node(value, pLeft, pRight);
		}
		Node* GetRoot() { return mpRoot; }

		Node* InsertLeft(Node* parent, int value)
		{
			parent->mpLeft = CreateNode(value);
			return parent->mpLeft;
		}

		Node* InsertRight(Node* parent, int value)
		{
			parent->mpRight = CreateNode(value);
			return parent->mpRight;
		}


	public:
		void Visit(Node* node) { std::cout << node->mData << ""; }
		void BreadthFirstSearch()
		{
			std::queue<Node*> q;
			q.push(mpRoot);

			while (!q.empty())
			{
				auto node = q.front();
				Visit(node);
				q.pop();

				if (node->mpLeft)
				{
					q.push(node->mpLeft);
				}
				if (node->mpRight !=nullptr)
				{
					q.push(node->mpRight);
				}
			}
		}
		void DepthFirstSearch()
		{
			std::stack<Node*> s;

			s.push(mpRoot);

			while (!s.empty())
			{
				auto node = s.top();
				Visit(node);
				s.pop();

				if (node->mpRight)s.push(node->mpRight);
				if (node->mpLeft)s.push(node->mpLeft);
				
			}
		}

		void DFSRecursive(Node* node)
		{
			//base case
			if (!node)
			{
				return;
			}

			//recursive case
			DFSRecursive(node->mpLeft);
			DFSRecursive(node->mpRight);
		}

		void PreOrder(Node* node)
		{
			//base case
			if (!node)
			{
				return;
			}

			//recursive case
			Visit(node);
			DFSRecursive(node->mpLeft);
			DFSRecursive(node->mpRight);
		}

		void inOrder(Node* node)
		{
			//base case
			if (!node)
			{
				return;
			}

			//recursive case
			DFSRecursive(node->mpLeft);
			Visit(node);
			DFSRecursive(node->mpRight);
		}

		void PostOrder(Node* node)
		{
			//base case
			if (!node)
			{
				return;
			}

			//recursive case
			DFSRecursive(node->mpLeft);
			DFSRecursive(node->mpRight);
			Visit(node);
		}
	};
}

