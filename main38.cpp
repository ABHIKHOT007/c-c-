#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left,*right;
};

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

void verticalsum(Node *node, int hd, map<int,int> &hash)
{
    if(node==NULL){
        return;
    }

    verticalsum(node->left,hd-1,hash);
    hash[hd]+=node->data;
    verticalsum(node->right,hd+1,hash);
}

void versum(Node *root)
{
    map<int,int>hash;
    map<int,int>::iterator it;

    verticalsum(root,0,hash);

    for(it=hash.begin();it!=hash.end();it++){
        cout<<it->first<<"="<<it->second<<endl;
    }
}

int main()
{
    Node *root = newNode(10);
    root->left = newNode(20);
    root->right = newNode(30);
    root->left->right = newNode(40);
    root->right->right = newNode(50);
    root->left->right->left = newNode(60);
    root->right->left->right = newNode(70);
    root->left->right->right = newNode(80);

    versum(root);
    return 0;

}