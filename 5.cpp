#include "5.h"

template <typename T>
void NewVec(std::list <T>& l, std::vector <T>& v, int sizel, int sizev) {
	
	std::list <int>::iterator itr;

	//nechethye elements - 1st, 3rd, 5th...
	//chetnye - 0th, 2nd, 4th, 6th...
	int i = 1;
	for (itr = l.begin(); itr != l.end(); itr++) {
		v.at(i) = *itr;
		i += 2;
		itr++;
	}
	
	std::vector <int>::iterator it;
	for (it = v.begin(); it != v.end(); it++) {
		std::cout << *it << " ";
	}
}

void task5() {
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

	std::vector<int>::iterator it;  //vector printiing
	for (it = vec.begin(); it != vec.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::list<int>::iterator it2;   //list printing
	for (it2 = list.begin(); it2 != list.end(); it2++) {
		std::cout << *it2 << " ";
	}
	std::cout << std::endl;

	NewVec(list, vec, l, v);
}