#include <iostream>
using namespace std;
template<class T> 
class BinarySearchTree
{
private:
	struct node
	{
		node* left;
		node* right;
		T data;
	};
public:
	void print_inorder();
	void inorder(node*);
	void print_preorder();
	void preorder(node*);
	void print_postorder();
	void postorder(node*);
	void insert(node*,T);
};
template<class T>
void BinarySearchTree<T>::insert(node* tree_node,T key)
{
	 if (tree_node == NULL) 
	 return new tree_node(root,key); 
  
    /* Otherwise, recur down the tree */
    if (key < tree_node->key) 
        tree_node->left  = insert(tree_node->left, key); 
    else if (key > tree_node->key) 
        tree_node->right = insert(tree_node->right, key);    
  
    /* return the (unchanged) node pointer */
    return tree_node; 
}
template<class T>
void BinarySearchTree<T>::print_inorder()
{
	inorder(root);
}
template<class T>
void BinarySearchTree<T>::inorder(node* p)
{
	if(p != NULL)
	{
		if(p->left)  inorder(p->left);
		cout<<" "<<p->data<<" ";
		if(p->right) inorder(p->right);
	}
	else return;
}
template<class T>
void BinarySearchTree<T>::print_preorder()
{
	preorder(root);
}
template<class T>
void BinarySearchTree<T>::preorder(node* p)
{
	if(p != NULL)
	{
		cout<<" "<<p->data<<" ";
		if(p->left) preorder(p->left);
		if(p->right) preorder(p->right);
	}
	else return;
}
template<class T>
void BinarySearchTree<T>::print_postorder()
{
	postorder(root);
}

template<class T>
void BinarySearchTree<T>::postorder(node* p)
{
	if(p != NULL)
	{
		if(p->left) postorder(p->left);
		if(p->right) postorder(p->right);
		cout<<" "<<p->data<<" ";
	}
	else return;
}
int main()
{
	BinarySearchTree<char> b;
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
		struct node* root=NULL;
		switch(ch)
		{
		case 1 : cout<<" Enter data to be inserted : ";
			cin>>tmp;
			b.insert(root,tmp);
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
