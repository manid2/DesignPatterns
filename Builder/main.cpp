#include <iostream>

#include "inc/cxmldom.h"

// Forward declarations
class Burger;
class BurgerBuilder;

class Burger {
public:
   Burger(int size) :
         m_size(size) {
   }
   void showFlavors() {
      std::cout << m_size;
      if(m_cheese)
         std::cout << "-cheese";
      if(m_peperoni)
         std::cout << "-peperoni";
      if(m_lettuce)
         std::cout << "-lettuce";
      if(m_tomato)
         std::cout << "-tomato";
      std::cout << std::endl;
   }

public:
   int m_size = 7;
   bool m_cheese = false;
   bool m_peperoni = false;
   bool m_lettuce = false;
   bool m_tomato = false;
};

class BurgerBuilder {
public:
   BurgerBuilder(int size) {
      m_burger = new Burger(size);
   }
   BurgerBuilder& AddCheese() {
      m_burger->m_cheese = true;
      return *this;
   }
   BurgerBuilder& AddPepperoni() {
      m_burger->m_peperoni = true;
      return *this;
   }
   BurgerBuilder& AddLettuce() {
      m_burger->m_lettuce = true;
      return *this;
   }
   BurgerBuilder& AddTomato() {
      m_burger->m_tomato = true;
      return *this;
   }
   Burger* Build() {
      return m_burger;
   }
private:
   Burger* m_burger;
};


using namespace mani_dp;

int main() {
   Burger* burger = BurgerBuilder(14).AddPepperoni().AddLettuce()./*.AddTomato().*/Build();
   burger->showFlavors();


   ManiXmlDOMVerionNode *verNode = new ManiXmlDOMVerionNode(1, 2);
   ManiXmlDOMInfoNode   *infoNode = new ManiXmlDOMInfoNode("Mani_info");
   ManiXmlDOMRootNode *rootNode = new ManiXmlDOMRootNode(verNode, infoNode);

   ManiXmlDOM *xmlDom = new ManiXmlDOM(rootNode);

   XMLString dom(xmlDom->build());
   std::cout << "\nMani DOM sample\n"
             << dom
             << "\n";
}
