#ifndef __FIR_AST_LEAVE_NODE_H__
#define __FIR_AST_LEAVE_NODE_H__

#include <cdk/ast/expression_node.h>

namespace fir {
  class leave_node: public cdk::basic_node {
    cdk::expression_node *_lit;

  public:
    inline leave_node(int lineno) :
        cdk::basic_node(lineno) {
    }
    inline leave_node(int lineno, cdk::expression_node *lit) :
        cdk::basic_node(lineno), _lit(lit) {
    }

  public:
    inline cdk::expression_node *lit() {
      return _lit;
    }
    void accept(basic_ast_visitor *sp, int level) {
      sp->do_leave_node(this, level);
    }
  };
} // fir

#endif
