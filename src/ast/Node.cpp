#include "Node.hpp"

void Node::Debug(std::ostream &dst, int indent) const {
	dst << " (node: " << debug_extras << ")";
}

void Node::Print(std::ostream &dst, int indent) const {
}

std::string Node::spaces(int n) const {
	return std::string(n, ' ');
}
