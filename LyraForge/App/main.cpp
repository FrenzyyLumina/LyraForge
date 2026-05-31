#include <iostream>
#include "application.h"

using namespace LyraForge;


class Andromeda : public Application {
    public:
        Andromeda() {
            std::cout << "is this n*licious? Is this too much voodoo for our purposes? For our mission statement?" << std::endl;
            std::cout << "Our mission is to be a hybrid Roblox + CryEngine. Is this too much voodoo?" << std::endl;
            std::cout << "This is voodoo; the question is - is this too much. And this is the hardest question you could ever face in programming." << std::endl;
        }
};

int main(int argc, char** argv[]) {
    std::cout << "That bird has no idea what he's looking at." << std::endl;
    std::cout << "And yet what does the bird do? Does he panic? No, he can't really panic, he just does the best he can." << std::endl;
    return 0;
}