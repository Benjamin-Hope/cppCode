#pragma once
template <typename T>
T print_cat_ears(T item) { //T means any type but must return it, if we use void no

	std::cout << " " << item << "   " << item << " " << "\n";
	std::cout << item << item << item << " " << item << item << item << "\n";

	return item;
}