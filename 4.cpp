#include "4.h"

void Fillingvec(std::list <int> &l, std::vector <int> &vec) {

	std::list <int>::iterator itr;

	for (itr = l.begin(); itr != l.end(); itr++) {
		if ((*itr % 2) == 0) {
			vec.push_back(*itr);
		}
	}

	std::vector<int>::iterator it;

	for (it = vec.begin(); it != vec.end(); it++) {
		std::cout << *it << " ";
	}
}

void task4() {
	std::list <int> list;
	std::vector <int> vec;
	int n, el;

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> el;
		list.push_back(el);
	}

	Fillingvec(list, vec);
}
