#include "Simulate.h"

using namespace std;

string fileName = "Test/1";

int main()
{
    read_elf(fileName);
    setup();
    while (simulate_one_step())
        ;
}
