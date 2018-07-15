#include <iostream>
#include "Blockchain.h"

using namespace std;

int main()
{
    clock_t start;
    double duration;

    start = std::clock();

    CreateBlockchain bChain = CreateBlockchain();

    cout << "Mining block 1..." << endl;
    bChain.AddBlock(Block(1, "Block 1 Data"));
    duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
    std::cout<<"Elapsed Time: "<< duration <<"seconds"<<'\n'<<"\n";

    cout << "Mining block 2..." << endl;
    bChain.AddBlock(Block(2, "Block 2 Data"));
    duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
    std::cout<<"Elapsed Time: "<< duration <<"seconds"<<'\n'<<"\n";

    cout << "Mining block 3..." << endl;
    bChain.AddBlock(Block(3, "Block 3 Data"));
    duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
    std::cout<<"Elapsed Time: "<< duration <<"seconds"<<'\n'<<"\n";

    cout << "Mining block 4..." << endl;
    bChain.AddBlock(Block(4, "Block 4 Data"));
    duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
    std::cout<<"Elapsed Time: "<< duration <<"seconds"<<'\n'<<"\n";

    cout << "Mining block 5..." << endl;
    bChain.AddBlock(Block(5, "Block 5 Data"));
    duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
    std::cout<<"Elapsed Time: "<< duration <<"seconds"<<'\n'<<"\n";

    return 0;
}