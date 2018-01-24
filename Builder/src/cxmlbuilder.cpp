/*
 * cxmlbuilder.cpp
 *
 *  Created on: 23-Jan-2018
 *      Author: Mani Kumar
 */

#include "cxmlbuilder.h"

namespace mani_dp {

// Xml node
CXmlNode::CXmlNode(const string& name = string()) :
      m_nodeName(name), m_nodeValue("") {
}

CXmlNode CXmlNode::addAttribute(const string& attr, const string& val)
{
   m_attributes[attr] = val;
   return *this;
}

CXmlNode CXmlNode::addValue(const string& value)
{
   m_nodeValue = value;
   return *this;
}

string CXmlNode::toString()
{
   string str;
   str = "<" + m_nodeName + map2string(m_attributes) + ">"
         + m_nodeValue
         + "</" + m_nodeName + ">";
   return str;
}

// Xml builder
CXmlBuilder::CXmlBuilder(const CXmlNode& root) :
      m_RootXmlNode(root), m_CurrentXmlNode(root) {
}

CXmlNode CXmlBuilder::build() const {
   return m_RootXmlNode;
}

} /* namespace mani_dp */
