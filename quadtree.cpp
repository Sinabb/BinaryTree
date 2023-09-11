#include "quadtree.h"

using namespace mytree;

mytree::Point::QuadTree::QuadTree {Point{}}, bottomRight{ Point{} },
node {nullptr},
nw{}, ne {},sw{}, se{}
{
}


mytree::Point::QuadTree::QuadTree(Point topl, Point Botr) :QuadTree()
{
	topLeft = topl;
	bottomRgiht = Botr;
}

bool mytree::Point::QuadTree::IsInBound(Point pt)
{
	return pt.x >= topLeft.x && pt.x <= bottomRight.x &&
		pt.y >= topLeft.y && pt.y <= bottomRight.y;
}



void mytree::Point::QuadTree::Insert(Node* node)
{
	if (node ==nullptr)
	{
		return;
	}

	if (!IsInBound(node->pos))
	{
		return;
	}

	if (std::abs(topLeft.x - bottomRight.x)<= 1&&
		std::abs(topLeft.y - bottomRight.y)<=1)

	{
		if (this->node == nullptr)
		{
			this->node = node;
		}
		return;
	}

	//recursive
	//서쪽
	if (node->pos.x <= (topLeft.x + bottomRight.x)/2)
	{

	}
	// 동쪽
	if ()
	{

	}

}
