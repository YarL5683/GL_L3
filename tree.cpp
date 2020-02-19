#include "tree.h"
#include <iostream>

Tree::Tree()
{
    root = nullptr;
    std::cout << "> ";

    //While input != 0 -> read and add new leaf
    while(1==1)
    {
        int input_data;

        std::cin >> input_data;

        if(input_data != 0)
            Add(root, input_data);
        else
            break;
    }
    //Print Tree
    Print(root);
}

void Tree::Add(node*& leaf, int input)
{
    if(leaf != nullptr)
    {
        if(input > leaf->data)
            Add(leaf->right, input);
        else
            Add(leaf->left, input);
    }
    else
    {
        leaf = new node;
        leaf->data = input;
        leaf->left = nullptr;
        leaf->right = nullptr;
    }
}

void Tree::Print(node *leaf)
{
    if(leaf->left != nullptr)
        Print(leaf->left);

    std::cout << leaf->data << " ";

    if(leaf->right != nullptr)
        Print(leaf->right);
}

//Recursive descent on a tree. Delete nodes from leaf to root
void Tree::Clear(node* &a)
{
    if(a->left != nullptr)
        Clear(a->left);

    if(a->right != nullptr)
        Clear(a->right);

    delete a;
}

Tree::~Tree()
{
   Clear(root);
}