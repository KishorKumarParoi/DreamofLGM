#include<bits/stdc++.h>
using namespace std;

struct node
{
    int roll;
    node *left, *right;

    node()
    {
        left = NULL;
        right = NULL;
    }
};

node *root;

void insert(int roll)
{
    if(root==NULL)
    {
        root = new node();
        root->roll = roll;
    }

    else
    {
        node *current = root, *parent;
        while(current!=NULL)
        {
            if(roll<current->roll)
            {
                parent=current; //keep track of parent node
                current=current->left;
            }
            else
            {
                parent=current;
                current=current->right;
            }
        }
        node *newnode=new node();
        newnode->roll=roll;
        if(newnode->roll<parent->roll) parent->left=newnode;
        else parent->right=newnode;
    }
}

void print_preorder(node *current)
{
    if(current==NULL) return;
    cout<<current->roll<<endl;
    print_preorder(current->left);
    print_preorder(current->right);

}

int main()
{
    insert(100);
    insert(50);
    insert(150);
    insert(10);
    insert(20);

    print_preorder();
    print_preorder();

    return 0;
}
