#include <iostream>
#include <vector>
#include <map>
using namespace std;
 
// Structure for a binary tree node
struct Node
{
    int key;
    Node *left, *right;
};
 
// A utility function to create a new node
struct Node* newNode(int key)
{
    struct Node* node = new Node;
    node->key = key;
    node->left = node->right = NULL;
    return node;
}
void utility(Node* root , std::map<int, std::vector<int> > &m , int hd){
	if(!root)
		return;
	m[hd].push_back(root->key);
	utility(root->left , m , hd - 1);
	utility(root->right , m , hd + 1);
}
void printVerticalOrder(Node* root){
	if(!root)
		return;
	std::map<int, std::vector<int> > m;
	int hd(0);
	utility(root , m , hd);
	map<int , vector<int> >::iterator it;
	for(it = m.begin() ; it != m.end() ; it++){
		for(int i = 0 ; i < it->second.size() ; i++)
			cout<<it->second[i]<<"\t";
		cout<<endl;
	}
}
int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);
    root->right->right->right = newNode(9);
    cout << "Vertical order traversal is \n";
    printVerticalOrder(root);
    return 0;
}