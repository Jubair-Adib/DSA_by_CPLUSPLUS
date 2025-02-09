#include <iostream>
#include <vector>

// Function to swap two characters
void swap(char &a,char &b) {
    char temp=a;
    a=b;
    b=temp;
}

// Recursive function to generate permutations
void generatePermutations(std::string &str, int start, int end) {
    if (start == end) {
        // Print the current permutation with spaces
        for (char ch : str) {
            std::cout << ch << " ";
        }
        std::cout << std::endl;
        return;
    }

    for (int i = start; i <= end; i++) {
        swap(str[start], str[i]); // Swap current index with the start
        generatePermutations(str, start + 1, end); // Recurse for the next index
        swap(str[start], str[i]); // Backtrack
    }
}

int main() {
    int n;
    std::cin>>n;
    std::string input;
    for(int i=0;i<n;i++) input+='A'+i; // Append 'A', 'B', 'C', etc.
    generatePermutations(input,0,input.length()-1);
    return 0;
}
