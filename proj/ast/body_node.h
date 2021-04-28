#ifndef __FIR_AST_BODY_NODE_H__
#define __FIR_AST_BODY_NODE_H__

#include <cdk/ast/basic_node.h>

namespace fir {
  class body_node: public cdk::basic_node {
      block_node *_prologue, *_main_block, *_epilogue;

  public:
    inline body_node(int lineno, block_node *prologue, block_node *main_block, block_node *epilogue) :
        cdk::basic_node(lineno), _prologue(prologue), _main_block(main_block), _epilogue(epilogue){
    }

  public:
    inline block_node *prologue() {
      return _prologue;
    }

    inline block_node *main_block() {
      return _main_block;
    }

    inline block_node *epilogue() {
      return _epilogue;
    }

    void accept(basic_ast_visitor *sp, int level) {
      sp->do_body_node(this, level);
    }

  };
} // fir

#endif