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
    void Print(node* );
    void Clear(node* &);

    ~Tree();
    node *root;
};

#endif //GL_L3_TREE_H