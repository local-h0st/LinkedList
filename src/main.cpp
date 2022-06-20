#include <iostream>
#include "DulNode.h"

int main()
{
    DulNode InitialNode("Pelikan Souveran m400");
    InitialNode.printContent(1);
    InitialNode.addNodeAfterCurrent("aaaaaaaaaaaa");
    InitialNode.printContent(1);
    InitialNode.addNodeAfterCurrent("bbbbbbbbbbbb");
    InitialNode.printContent(1);

    // InitialNode.addNodeAfterCurrent("This is PureLov3");

    InitialNode.movPrev();
    InitialNode.printContent(1);

    InitialNode.movPrev();
    InitialNode.printContent(1);

    InitialNode.movPrev();
    InitialNode.printContent(1);

    InitialNode.movPrev();
    InitialNode.printContent(1);
}