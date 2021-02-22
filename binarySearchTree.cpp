#include "binarySearchTree.h"

void BinarySearchTree::insert(Student p)
{
    tree_node* t = new tree_node;
    tree_node* parent;
    t->data = p;
    t->left = NULL;
    t->right = NULL;
    parent = NULL;

    if (isEmpty()) root = t;
    else
    {

        tree_node* curr;
        curr = root;

        while (curr)
        {
            parent = curr;
            if (t->data.getMark() > curr->data.getMark()) curr = curr->right;
            else curr = curr->left;
        }

        if (t->data.getMark() < parent->data.getMark())
            parent->left = t;
        else
            parent->right = t;
    }
}

void BinarySearchTree::print_inorder()
{
    inorder(root);
}

void BinarySearchTree::inorder(tree_node* p)
{
    if (p != NULL)
    {
        if (p->left) inorder(p->left);
        cout << p->data.getId() << " " << p->data.getFName() << "  " << p->data.getLName() << "  " << p->data.getMark() << endl;
        if (p->right) inorder(p->right);
    }
    else return;
}


void fillTree(BinarySearchTree* b)
{
    ifstream file;
    file.open("students.txt");
    if (!file) {
        cout << " Error opening file. " << endl;
    }
    string fName;
    string lName;
    int mark;
    int id;
    Student p;
    while (file >> id >> fName >> lName >> mark)
    {
        p.setFName(fName);
        p.setLName(lName);
        p.setMark(mark);
        p.setId(id);
        cout << "List of students" << endl;
        cout << p.getId() << " " << p.getFName() << "  " << p.getLName() << "  " << p.getMark() << endl;
        (*b).insert(p);
    }
    file.close();
}