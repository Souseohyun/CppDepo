#include<iostream>


template<typename t> void ifBiggerSwap(t& t1, t& t2) {
	if (t1 > t2) {
		t temp = t1;
		t1 = t2;
		t2 = temp;
	}
}
//模板例外显式化
template<int s = 10>void ifBiggerSwap(int*& a, int*& b) {

}


template<typename type, size_t count> void mySort(type(&array)[count], void (*compare)(type&, type&)) {
	for (int i = count; i > 0; i--) {
		for (int j = 0; j < i -1; j++) {
			compare(array[j], array[j + 1]);
		}
	}
}
template<typename T>
T ave(T a, T b) {
	return a + b;
}
namespace spd {
	class Myclass {
	public:
		void class_func() {
			std::cout << "inline _func" << std::endl;
		};
		int mp{};
	private:
		int money{};
	};
	void _func() {
		std::cout << "u can try." << std::endl;
	};
}

int add(int a, int b,int c) {
	return a + b * c;
}


int main() {

	system("pause");
}
