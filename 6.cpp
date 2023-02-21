#include "6.h"

void NewList(std::list <int>& l, std::vector <int>& v) {

	std::list <int> l2;
	std::vector<int>::reverse_iterator it = v.rbegin();
	std::list <int>::iterator tr = l.begin();
	while (it != v.rend()) {
		
		for (int i = 2; i != 0; i--) {
			l2.push_back(*tr); advance(tr, 1);
		}
		for (int i = 2; i != 0; i--) {
			l2.push_back(*it); it++;
		}

	}

	std::list <int>::iterator itr;
	for (itr = l2.begin(); itr != l2.end(); itr++) {
		std::cout << *itr << " ";
	}

}

void task6() {
	std::list <int> list;
	std::vector <int> vec;

	int v, l, el; //v - vector lenght, l - list lenght

	std::cin >> v >> l;
	if (v < l) {
		l = v;
	}

	for (int i = 0; i < v; i++) { //vector filling
		std::cin >> el;
		vec.push_back(el);
	}
	for (int i = 0; i < l; i++) { //list filling
		std::cin >> el;
		list.push_back(el);
	}

	std::vector<int>::iterator it;  //vector printing
	for (it = vec.begin(); it != vec.end(); it++) {
		std::cout << *it << " ";
	}std::cout << std::endl;

	std::vector<int>::reverse_iterator rit; //reverse vector printing
	for (rit = vec.rbegin(); rit != vec.rend(); rit++) {
		std::cout << *rit << " ";
	}std::cout << std::endl;


	std::list<int>::iterator it2;   //list printing
	for (it2 = list.begin(); it2 != list.end(); it2++) {
		std::cout << *it2 << " ";
	}std::cout << std::endl;

	std::list<int>::reverse_iterator rit2; //reverse list printing
	for (rit2 = list.rbegin(); rit2 != list.rend(); rit2++) {
		std::cout << *rit2 << " ";
	}std::cout << std::endl;

	NewList(list, vec);
}
