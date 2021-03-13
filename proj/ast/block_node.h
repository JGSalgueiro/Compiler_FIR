#ifndef __FIR_AST_BLOCK_H__
#define __FIR_AST_BLOCK_H__

#include <cdk/ast/basic_node.h>
#include "targets/basic_ast_visitor.h"

namespace fir {

  class block_node: public cdk::basic_node {
    cdk::sequence_node *_instructions ,*_declarations;

  public:
    inline block_node(int lineno, cdk::sequence_node *instructions,cdk::sequence_node *declarations) :
        cdk::basic_node(lineno), _instructions(instructions), _declarations(declarations) {
    }

  public:
    
    inline cdk::sequence_node *instructions() {
      return _instructions;
    }
    inline cdk::sequence_node *declarations() {
      return _declarations;
    }
    void accept(basic_ast_visitor *sp, int level) {
      sp->do_block_node(this, level);
    }

  };

} // fir

#endif
