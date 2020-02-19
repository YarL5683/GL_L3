//
// Created by admin on 19.02.2020.
//

#include "tree.h"
#include <iostream>

Tree::Tree()
{
    root = nullptr;
    //While input != 0 -> add new leaf
    while(1==1)
    {
        int input_data;
        std::cin >> input_data;

        if(input_data != 0)
            Add(root, input_data);
        else
            break;
    }

    Out(root);
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

void Tree::Out(node *leaf)
{
    if(leaf->left != nullptr)
        Out(leaf->left);

    std::cout << leaf->data << " ";

    if(leaf->right != nullptr)
        Out(leaf->right);
}

//Recursive descent on a tree. Delete items from leaf to root
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