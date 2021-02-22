#include "binarySearchTree.h"


int main()
{
    BinarySearchTree b;
    fillTree(&b);
    cout << "Display in order" << endl;
    b.print_inorder();
}