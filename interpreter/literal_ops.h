// Basic arithmetic operations on Literal values for MonArithExpression and
// BinArithExpression evaluation.

#ifndef INTERPRETER_LITERAL_OPS_H_
#define INTERPRETER_LITERAL_OPS_H_

#include "proto/language.pb.h"

#include <string>

namespace steinlang {

// x is input and output.
// x should be int or float.
void Neg(Literal* x);

// x is input and output.
// x should be a bool val.
void BoolNot(Literal* x);

// x and y are inputs, the result is stored into x.
// x and y should both be the same type: bool, int, or float.
void Add(Literal* x, Literal* y);
void Sub(Literal* x, Literal* y);
void Mul(Literal* x, Literal* y);
void Div(Literal* x, Literal* y);

// x and y are inputs, the result is stored into x.
// x and y should both be the same type: bool, int, float, or string.
void CompareGt(Literal* x, Literal* y);
void CompareGe(Literal* x, Literal* y);
void CompareLt(Literal* x, Literal* y);
void CompareLe(Literal* x, Literal* y);
void CompareEq(Literal* x, Literal* y);
void CompareNe(Literal* x, Literal* y);

// x and y are inputs, the result is stored into x.
// x and y should both be bools.
void BoolAnd(Literal* x, Literal* y);
void BoolOr(Literal* x, Literal* y);

}  // namespace steinlang

#endif  // INTERPRETER_LITERAL_OPS_H_
