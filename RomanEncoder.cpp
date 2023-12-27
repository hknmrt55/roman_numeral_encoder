#include <iostream>
#include <string>

std::string Encoder(int number)
{
    std::string encoded;
    int numbers[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
  
    for (int i = 0; i <= 12; i++) 
    {
      while (number >= numbers[i]) 
      {
        number -= numbers[i];
        encoded += symbols[i];
      }
    }

    return encoded;
}

int main()
{
    int number;

    while (true)
    {
        std::cout << "Enter a number between 0 and 3999: ";
        std::cin >> number;

        if (number >= 0 && number <= 3999)
        {
            break;
        }
        std::cout << "Invalid input. Please enter a number between 0 and 3999." << std::endl;
         std::cin.clear();

    }

    std::cout << "\n";
    std::cout << "Given number "<< number << " with Roman numerals is: " << Encoder(number) << std::endl;

    return 0;
}
