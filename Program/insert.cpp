#include<iostream>
using namespace std;
template<class itemtype>
void Treetype <itemtype>::Insertitem(itemtype item)
{
	insert(root,item);
}
template<class itemtype>
void insert(TreeNode<itemtype>*&Tree,itemtype item)
{
	if(Tree==NULL)
	{
		Tree=new TreeNode<itemtype>;
		Tree->info=item;
	}
	else if(item<Tree->info)
	insert(Tree->,item);
	else
	insert(Tree->right,item);
}
