#include<bits/stdc++.h>
using namespace std;

struct node
{
    int roll;
    node *next;
};

node *root = NULL;

void append(int roll)
{
    if(root==NULL)
    {
        root = new node();
        root->roll = roll;
        root->next = NULL;
    }
    else
    {
        node *current_node = root ;    //making a copy of root node address
        while(current_node->next!=NULL)
        {
            current_node = current_node->next;     //going to the next address
        }

        node *newnode = new node();   //creating a new node
        newnode->roll = roll;
        newnode->next = NULL;

        current_node->next = newnode;   //linking the last node with the new node
    }
}


void delete_node(int roll)
{
    node *current_node = root;
    node *prev_node = NULL;

    while(current_node->roll!=roll)
    {
        prev_node = current_node;
        current_node = current_node->next;
    }

    if(current_node == root)
    {
        node *temp = root;
        root = root->next;

        delete(temp);
    }
    else
    {
        prev_node->next = current_node->next;
        delete(current_node);
    }

}



void print()
{
    node *current_node = root;
    while(current_node!=NULL)
    {
        printf("%d\n",current_node->roll);
        current_node = current_node->next;
    }
}

int main()
{
    append(5);
    append(6);
    append(4);

    print();

    return 0;
}
