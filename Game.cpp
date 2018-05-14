#include "main.hpp"

int main()
{
    Gameboard g1;
    g1.setGameSpace(0,0,'x');
    g1.setGameSpace(0,1,'x');
    g1.setGameSpace(0,2,'x');
    g1.setGameSpace(0,3,'y');
    g1.setGameSpace(1,0,'x');
    g1.setGameSpace(2,0,'x');
    g1.setGameSpace(3,0,'x');
    g1.setGameSpace(3,1,'x');
    g1.setGameSpace(3,2,'x');
    g1.setGameSpace(3,3,'x');

    if(g1.fourInRow() == 1)
    {
        cout<<"Got 4 consecutive X in a row! WIN \n\n";
    }
    else
    {
        cout<<"X did not get four in a row :(\n\n";
    }

    g1.printInfo();

    std::cout<<"   ____________THE END______________   "<<std::endl;
    return 0;
}
