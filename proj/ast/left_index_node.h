#ifndef __FIR_AST_LEFT_INDEX_H__
#define __FIR_AST_LEFT_INDEX_H__

#include <cdk/ast/lvalue_node.h>
#include "targets/basic_ast_visitor.h"

// Used to indexing pointers
namespace fir {

  class left_index_node: public cdk::lvalue_node {
    cdk::expression_node *_base;
    cdk::expression_node *_index;

  public:
    left_index_node(int lineno, cdk::expression_node *base, cdk::expression_node *index) :
        cdk::lvalue_node(lineno), _base(base), _index(index) {
    }

  public:
    cdk::expression_node *base() {
      return _base;
    }
    cdk::expression_node *index() {
      return _index;
    }

  public:
    void accept(basic_ast_visitor *sp, int level) {
      sp->do_left_index_node(this, level);
    }

  };

}//fir

#endif
