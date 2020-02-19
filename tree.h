//
// Created by admin on 19.02.2020.
//

#ifndef GL_L3_TREE_H
#define GL_L3_TREE_H

class Tree{
    public:
    struct node{
        int data;
        node *left;
        node * right;};

    Tree();
    void Add(node* &, int);
    void Out(node* );
    void Clear(node* &);

    ~Tree();
    node *root;
};

#endif //GL_L3_TREE_H