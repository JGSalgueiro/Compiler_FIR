#ifndef __FIR_AST_BLOCK_NODE_H__
#define __FIR_AST_BLOCK_NODE_H__

#include <cdk/ast/sequence_node.h>

namespace fir {
  class block_node: public cdk::basic_node {
    cdk::sequence_node *_variables , *_instructions;

  public:
    inline block_node(int lineno, cdk::sequence_node *variables, cdk::sequence_node *instructions) :
        cdk::basic_node(lineno), _variables(variables), _instructions(instructions) {
    }

  public:
    inline cdk::sequence_node *variables() {
      return _variables;
    }

    inline cdk::sequence_node *instructions() {
      return _instructions;
    }

    void accept(basic_ast_visitor *sp, int level) {
      sp->do_block_node(this, level);
    }

  };
} // fir

#endif
