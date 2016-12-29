//binary_tree.h
//btree prototype define by ricardotaborda@github https://github.com/um-prog-tools/btree
//implemention knova
//begin date: 2016-12-29
#include <iostream>
#include <cstdlib>

//may change int to other type of INDEX?
#define INDEX int	


using namespace std;

class btree
{
private:

    struct node
    {
        node* left = NULL;
        node* right = NULL;
        INDEX index = 0;
    };
    node* rootNode;

public:

    btree();
    bool isEmpty();

    void insert(DATA_TYPE value);
    void remove(int index);

    void print_inorder();
    void print_preorder();
    void print_postorder();

    bool search(INDEX index);

private:
	//meta operation
	node* GetNextNode();

    void inorder(node* n);
    void preorder(node* n);
    void postorder(node* n);

    bool search_element(node*, int);

};