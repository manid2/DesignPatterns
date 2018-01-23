#include <iostream>

#include "inc/cxmldom.h"
//#include "inc/cburgerbuilder.h"

using namespace mani_dp;

int main() {

   /*Burger* burger = BurgerBuilder(14).AddPepperoni().AddLettuce()..AddTomato().build();
   burger->showFlavors();*/

   ManiXmlDOMVerionNode *verNode = new ManiXmlDOMVerionNode(1, 2);
   ManiXmlDOMInfoNode   *infoNode = new ManiXmlDOMInfoNode("Mani_info");
   ManiXmlDOMRootNode *rootNode = new ManiXmlDOMRootNode(verNode, infoNode);

   ManiXmlDOM *xmlDom = new ManiXmlDOM(rootNode);

   XMLString dom(xmlDom->build());
   std::cout << "\nMani DOM sample\n"
             << dom
             << "\n";
}
