#include <bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node* left;
		Node* right;
		Node(int item){
			this->data = item;
			this->left = nullptr;
			this->right = nullptr;
		}
		Node* insert(int item,Node* root){
			Node* temp = new Node(item);
			if(!root) return temp;
			queue<Node*> q;
			q.push(root);
			while(!q.empty()){
				Node* temp1 = q.front();
				if(temp1->left && temp1->right){
					q.pop();
					q.push(temp1->left);
					q.push(temp1->right);
				}
				if(temp1->left)
					{temp1->right = temp;break;}
				else 
					{temp1->left = temp;break;}				
			}	
			return root;
		}
		void post_print(Node* root){
			
		}
};
int main(int argc, char const *argv[])
{
	
	return 0;
}