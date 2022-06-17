#include <iostream>
#include "DulNode.h"

int main()
{
    DulNode InitialNode("Pelikan Souveran m400");
    InitialNode.printContent(1);
    InitialNode.addNodeAfterCurrent("Montblanc");
    InitialNode.addNodeAfterCurrent("This is PureLov3");


    InitialNode.movNext();
    InitialNode.printContent(1);

    InitialNode.movNext();
    InitialNode.printContent(1);

    InitialNode.movNext();
    InitialNode.printContent(1);
}