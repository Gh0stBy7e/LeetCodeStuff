#include <format>
#include <algorithm>
#include <iostream>
#include <list>
#include <string>

void maths() {
std::string x, e;
std::string res;
std::list<int> numbers {121, -121, 10};
bool isPalindrome;

    std::list<int>::iterator it = numbers.begin();

    for (it = numbers.begin(); it != numbers.end(); it++) {
        x = std::to_string(*it);
        e = x;
        std::reverse(x.begin(), x.end());

        if (e.compare(x)) {
            isPalindrome = true;
            std::cout << "No." << std::endl;
        }
        else if (!e.compare(x)) {
            std::cout << "Palindrome" << std::endl;
        }
    }
}

int main() {

    std::cout << "This is a *calculcator* for your palindromes !! :3\n";

    maths();


}
