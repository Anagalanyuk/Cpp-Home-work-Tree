#include<iostream>

#include"Node.h"

#include"Tree.h"

using namespace std;

int main()
{
	Tree<int> tree;
	tree.Add(50);
	tree.Add(40);
	tree.Add(30);
	tree.Add(31);
	tree.Add(32);
	tree.Add(28);
	tree.Add(27);
	tree.Add(26);
	//tree.Previous(tree.Search(40));
	//tree.Print(tree.GetRoot());
	//cout << endl;
	tree.Remove(10);
	tree.Remove(50);
	tree.Add(50);
	tree.Add(60);
	tree.Add(70);
	tree.Add(14);
	tree.Add(19);
	tree.Add(20);
	tree.Add(6);
	tree.Add(1);
	tree.Add(4);
	//tree.Print(tree.GetRoot());
	//cout << endl;
	//tree.Previous(tree.Search(15));
	//cout << "\nresult:" << tree.Remove(10) << endl;
	//cout << "\nresult:" << tree.Remove(13) << endl;
	//cout << "\nresult:" << tree.Remove(14) << endl;
	//cout << "\nresult:" << tree.Remove(5) << endl;
	//cout << "\nresult:" << tree.Remove(6) << endl;
	//cout << "\nresult:" << tree.Remove(7) << endl;
	////cout << "\nresult:" << tree.Remove(1) << endl;
	//cout << "\nresult:" << tree.Remove(3) << endl;
	//cout << "\nresult:" << tree.Remove(4) << endl;
	//cout << "\nresult:" << tree.Remove(13) << endl;
	//cout << "\nresult:" << tree.Remove(15) << endl;
	//cout << "\nresult:" << tree.Remove(17) << endl;
	//cout << "\nresult:" << tree.Remove(19) << endl;
	//cout << "\nresult:" << tree.Remove(20) << endl;
	//cout << "\nresult:" << tree.Remove(25) << endl;
	//cout << "\nresult:" << tree.Remove(50) << endl;
	//cout << "\nresult:" << tree.Remove(60) << endl;
	//cout << "\nresult:" << tree.Remove(70) << endl;
	//cout << "size:" <<tree.GetSize() << endl;


	tree.Print(tree.GetRoot());
 }