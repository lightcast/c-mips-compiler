#include "CastExpression.hpp"

CastExpression::CastExpression() : rvalue(NULL) {}

CastExpression::CastExpression(std::string cast_type, int pointer_depth, Expression* expression)
:
cast_type(Type(cast_type, pointer_depth)),
rvalue(expression)
{}

void CastExpression::Debug(std::ostream& dst, int indent) const {
	dst << "((";
	dst << cast_type.name();
	dst << ") ";
	rvalue->Debug(dst, indent);
	dst << ")";
}

Type CastExpression::GetType(VariableMap& bindings) const {
	return cast_type;
}
