#include <iostream> 
using namespace std; 

struct Node { 
	int key; 
	 Node *left, *right; 
}; 
Node* newNode(int item) 
{ 
	Node* temp = new Node; 
	temp->key = item; 
	temp->left = temp->right = NULL; 
	return temp; 
} 
void inorder(Node* root) 
{ 
	if (root != NULL) { 
		inorder(root->left); 
		cout<<root->key; 
		inorder(root->right); 
	} 
} 
   Node* insert(Node* node, int key) 
{ 
	if (node == NULL) 
		return newNode(key); 
	if (key < node->key) 
		node->left = insert(node->left, key); 
	else
		node->right = insert(node->right, key); 
	return node; 
} 
  Node*  deleteNode(Node* root, int k) 
{ 
	// Base case 
	if (root == NULL) 
		return root; 
	if (root->key > k) { 
	root->left=deleteNode(root->left, k); 
		return root; 
	} 
	else if (root->key < k) { 
		root->right=deleteNode(root->right, k); 
		return root; 
	} 
	// If one of the children is empty 
	if (root->left == NULL) { 
		Node* temp = root->right; 
		delete root; 
		return temp; 
	} 
	else if (root->right == NULL) { 
		Node* temp = root->left; 
		delete root; 
		return temp; 
	} 

	// If both children exist 
	else { 

		Node* succParent = root->right; 
		Node *succ = root->right; 
		while (succ->left != NULL) { 
			succParent = succ; 
			succ = succ->left; 
		}
		succParent->left = succ->right; 
		root->key = succ->key; 
		delete succ;		 
		return root; 
	} 
} 
int main() 
{   
     int n;
	cout<<"Let us create following BST" <<endl;
	cout<<"\t    5" ;
	cout<<endl;
	cout<<"	 3   17 ";
	cout<<endl;
	cout<<"\t2 4 16 18 "<<endl;
	Node* root = NULL; 
	root = insert(root, 5); 
	root = insert(root, 3); 
	root = insert(root, 2); 
	root = insert(root, 4); 
	root = insert(root, 17); 
	root = insert(root, 16); 
	root = insert(root, 18); 

	cout<<"Inorder traversal of the given tree"<<endl; 
	inorder(root); 
	cout<<endl;
	for(int i=0;i<3;i++)
	{
    cout<<"Enter the number to deleted"<<endl;
    cin>>n;
    root=deleteNode(root,n);
    inorder(root);
    cout<<endl;
	}
	return 0; 
} 

