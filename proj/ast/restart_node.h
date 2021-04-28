#ifndef __FIR_AST_RESTART_NODE_H__
#define __FIR_AST_RESTART_NODE_H__

#include <cdk/ast/expression_node.h>

namespace fir {

  /**
   * Class for describing_restart nodes.
   */
  class restart_node: public cdk::basic_node {
    cdk::expression_node *_lit;

  public:
    inline restart_node(int lineno, cdk::expression_node *lit) :
        cdk::basic_node(lineno), _lit(lit) {
    }
    inline restart_node(int lineno) :
        cdk::basic_node(lineno) {
    }

  public:
    inline cdk::expression_node *lit() {
      return _lit;
    }

    void accept(basic_ast_visitor *sp, int level) {
      sp->do_restart_node(this, level);
    }

  };

} // fir

#endif
