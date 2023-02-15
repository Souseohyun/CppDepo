#include<iostream>
#include<array>
#include<vector>

void myScanf(char endChar) {
	char c{};
	while ((c = std::cin.get()) != endChar) {
		if (c >= '0' && c <= '9') {}
		else if (c >= 'a' && c <= 'z') {
			std::cout << char(c - 32);
		}
		else if (c >= 'A' && c <= 'Z') {
			std::cout << char(c + 32);
		}
	}
}

int main() {
	
	myScanf('@');

	system("pause");
	return 0;
}