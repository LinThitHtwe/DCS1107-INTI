#include <iostream>
#include <cstring>

int main()
{
    // Initial strings
    char s1[50] = "Happy Holiday!";
    char s2[50] = "Good Luck!";
    char s3[50];

    // 1) strcpy: copy entire s1 into s3
    strcpy(s3, s1);
    std::cout << "After strcpy(s3, s1):\n";
    std::cout << "  s1: " << s1 << "\n";
    std::cout << "  s2: " << s2 << "\n";
    std::cout << "  s3: " << s3 << "\n\n";

    // 2) strncpy: copy first 5 chars of s1 into s3
    strncpy(s3, s1, 5);
    s3[6] = '\0'; // terminate at position 5
    std::cout << "After strncpy(s3, s1, 5):\n";
    std::cout << "  s3: " << s3 << "\n\n";

    // 3) strcat: append s2 onto the end of s1
    strcat(s1, s2);
    std::cout << "After strcat(s1, s2):\n";
    std::cout << "  s1: " << s1 << "\n";
    std::cout << "  s2: " << s2 << "\n\n";

    // 4) strcmp: compare s1 vs s2
    int cmp = strcmp(s1, s2);
    std::cout << "Result of strcmp(s1, s2): " << cmp << "\n";
    if (cmp == 0)
    {
        std::cout << "  -> s1 and s2 are equal\n";
    }
    else if (cmp > 0)
    {
        std::cout << "  -> s1 is greater than s2\n";
    }
    else
    {
        std::cout << "  -> s1 is less than s2\n";
    }

    return 0;
}
