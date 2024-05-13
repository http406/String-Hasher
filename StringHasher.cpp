#include <iostream>
#include <functional> // for std::hash
#include <string>

int main() {
    // Define some strings
    std::string str1 = "Hello";
    std::string str2 = "World";
    
    // Create hash objects
    std::hash<std::string> hasher;
    
    // Calculate hashes
    size_t hash1 = hasher(str1);
    size_t hash2 = hasher(str2);
    
    // Output the hashes
    std::cout << "Hash of \"" << str1 << "\": " << hash1 << std::endl;
    std::cout << "Hash of \"" << str2 << "\": " << hash2 << std::endl;
    
    return 0;
}
