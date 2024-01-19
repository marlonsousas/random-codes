#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

class RandomClass {
public:
    RandomClass() {
        std::cout << "Construindo RandomClass!" << std::endl;
    }

    void generateRandomNumbers(int count) {
        std::vector<int> randomNumbers;

        for (int i = 0; i < count; ++i) {
            int randomNumber = rand() % 100;
            randomNumbers.push_back(randomNumber);
        }

        std::cout << "Números aleatórios gerados: ";
        std::for_each(randomNumbers.begin(), randomNumbers.end(), [](int num) {
            std::cout << num << " ";
        });
        std::cout << std::endl;

        int sum = std::accumulate(randomNumbers.begin(), randomNumbers.end(), 0);
        double mean = static_cast<double>(sum) / count;

        std::cout << "Soma dos números: " << sum << std::endl;
        std::cout << "Média dos números: " << mean << std::endl;
        std::cout << "Raiz quadrada da média: " << std::sqrt(mean) << std::endl;
    }
};

int main() {
    RandomClass randomObject;
    randomObject.generateRandomNumbers(5);

    return 0;
}
