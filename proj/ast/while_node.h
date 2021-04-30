#ifndef __FIR_AST_WHILE_NODE_H__
#define __FIR_AST_WHILE_NODE_H__

#include <cdk/ast/expression_node.h>

namespace fir {

  /**
   * Class for describing while-cycle nodes.
   */
  class while_node: public cdk::basic_node {
    cdk::expression_node *_condition;
    cdk::basic_node *_block;
    cdk::basic_node *_finally;
    // Finally is optional

  public:
    inline while_node(int lineno, cdk::expression_node *condition, cdk::basic_node *block) :
        basic_node(lineno), _condition(condition), _block(block) { 
        _finally = 0;// Defines that finnaly is a null pointer
    }

    inline while_node(int lineno, cdk::expression_node *condition, cdk::basic_node *block, cdk::basic_node *finally) :
    basic_node(lineno), _condition(condition), _block(block), _finally(finally) {
    }

  public:
    inline cdk::expression_node *condition() {
      return _condition;
    }
    inline cdk::basic_node *block() {
      return _block;
    }
    inline cdk::basic_node *finally() {
      return _finally;
    }

    void accept(basic_ast_visitor *sp, int level) {
      sp->do_while_node(this, level);
    }

  };

}

#endif