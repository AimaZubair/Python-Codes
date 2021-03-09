#include<iostream>
using namespace std;
template<class T>
class DFS
{
	struct Node
	{
		T data;
	  Node* left;
	  Node* right;
	}	;
public:
		void insert(T);
		void print_inorder();
		void inorder(Node*);
		void print_preorder();
		void preorder(Node*);
		void print_postorder();
		void postorder(Node*);
		
	 insert(struct Node* Node,T key)
{
		if(Node==NULL)
	    return newnode(key);
			else if(key<Node->data)
	insert(Node->left,key);
	else
	insert(Node->right,key);
	return Node;
}
};
int main()
{
	DFS<int> b;
    int tmp;
    cout<<"Enter number to insert:";
    cin>>tmp;
    b.insert(tmp);
}
