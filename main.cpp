#include<iostream>


class BTreeNode
{

    private:

        int *keys;
        int numKeys;
        int m;
        bool leaf;
        BTreeNode **C;

    public:

        BTreeNode(int _t, bool _leaf);

        void traverse();

        BTreeNode *search(int k);

        friend class BTree;
};


class BTree
{

    private:

        BTreeNode *root;
        int m;
    public:

        BTree(int _m)
        {  root = NULL;  m = _m; }


        void traverse()
        {  if (root != NULL) root->traverse(); }


        BTreeNode* search(int key)
        {  return (root == NULL)? NULL : root->search(key); }
};


BTreeNode::BTreeNode(int _t, bool _leaf)
{

    m = _m;
    leaf = _leaf;

    keys = new int[2*m-1];
    C = new BTreeNode *[2*m];
 
    numKeys = 0;
}
