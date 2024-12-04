#include <iostream>
#include <set>

int main() {
    int sizeA, sizeB;
    std::set<int> setA, setB;

    // Nh?p s? lu?ng ph?n t? và các ph?n t? c?a t?p h?p A
    std::cin >> sizeA;
    for (int i = 0; i < sizeA; i++) {
        int element;
        std::cin >> element;
        setA.insert(element);
    }

    // Nh?p s? lu?ng ph?n t? và các ph?n t? c?a t?p h?p B
    std::cin >> sizeB;
    for (int i = 0; i < sizeB; i++) {
        int element;
        std::cin >> element;
        setB.insert(element);
    }

    // Tìm t?p giao c?a hai t?p h?p
    std::set<int> intersection;
    for (int element : setA) {
        if (setB.find(element) != setB.end()) {
            intersection.insert(element);
        }
    }

    // Ki?m tra và in k?t qu?
    if (intersection.empty()) {
        std::cout << "none" << std::endl;
    } else {
        for (int element : intersection) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
