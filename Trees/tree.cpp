/*
for creating multiple tree childs
node{
int data;
list<node*>child;
}
*/
#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
    
};

node * buildtree(node *root)
{
  cout<<"enter data for tree: ";
  int d;
  cin>>d;
  root = new node(d);

  if(d == -1){
    return NULL;
  }

  cout<<"enter data for inserting data in left: "<<d<<endl;
  root->left = buildtree(root->left);
  cout<<"enter data for inserting data into right: "<<d<<endl;
  root->right = buildtree(root->right);
}

int main()
{
 node *root = NULL;
 //creating a tree
 root = buildtree(root);
}