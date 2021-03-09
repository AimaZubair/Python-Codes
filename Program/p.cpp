#include <iostream>
using namespace std;
template<class T> 
class DFS
{
private:
	struct Node
	{
		Node* left;
		Node* right;
		T data;
	};
    	Node* root;
public:
	DFS()
	{
		root = NULL;
	}
	void print_inorder();
	void inorder(Node*);
	void print_preorder();
	void preorder(Node*);
	void print_postorder();
	void postorder(Node*);
	void insert(T);

void insert(T d)
{
	Node* t = new Node;
	Node* parent;
	t->data = d;
	t->left = NULL;
	t->right = NULL;
	parent = NULL;

	if(root==NULL)
	 root = t;
	else
	{
		Node* curr;
		curr = root;
		while(curr)
		{
			parent = curr;
			if(t->data > curr->data) curr = curr->right;
			else curr = curr->left;
		}

		if(t->data < parent->data)
			parent->left = t;
		else
			parent->right = t;
	}
}
void print_inorder()
{
	inorder(root);
}
void inorder(Node* p)
{
	if(p != NULL)
	{
		if(p->left) inorder(p->left);
		cout<<" "<<p->data<<" ";
		if(p->right) inorder(p->right);
	}
	else return;
}
void print_preorder()
{
	preorder(root);
}
void preorder(tree_node* p)
{
	if(p != NULL)
	{
		cout<<" "<<p->data<<" ";
		if(p->left) preorder(p->left);
		if(p->right) preorder(p->right);
	}
	else return;
}
void print_postorder()
{
	postorder(root);
}

void postorder(tree_node* p)
{
	if(p != NULL)
	{
		if(p->left) postorder(p->left);
		if(p->right) postorder(p->right);
		cout<<" "<<p->data<<" ";
	}
	else return;
}
};
int main()
{
	DFS<char> b;
	char tmp;
	int ch;
	while(1)
	{
		cout<<endl<<endl;
		cout<<" ----------------------------- "<<endl;
		cout<<" 1. Insertion/Creation "<<endl;
		cout<<" 2. In-Order Traversal "<<endl;
		cout<<" 3. Pre-Order Traversal "<<endl;
		cout<<" 4. Post-Order Traversal "<<endl;
		cout<<" 7. Exit "<<endl;
		cout<<" Enter your choice : ";
		cin>>ch;
		switch(ch)
		{
		case 1 : cout<<" Enter data to be inserted : ";
			cin>>tmp;
			b.insert(tmp);
			break;
		case 2 : cout<<endl;
			cout<<" In-Order Traversal "<<endl;
			cout<<" -------------------"<<endl;
			b.print_inorder();
			break;
		case 3 : cout<<endl;
			cout<<" Pre-Order Traversal "<<endl;
			cout<<" -------------------"<<endl;
			b.print_preorder();
			break;
		case 4 : cout<<endl;
			cout<<" Post-Order Traversal "<<endl;
			cout<<" --------------------"<<endl;
			b.print_postorder();
			break;
		case 5: system("pause");                                                      
			return 0;
			break;
		}
	}
}

