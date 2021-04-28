#ifndef __FIR_AST_WRITE_NODE_H__
#define __FIR_AST_WRITE_NODE_H__

#include <cdk/ast/expression_node.h>

namespace fir {

  /**
   * Class for describing write nodes.
   */
  class write_node: public cdk::basic_node {
    cdk::sequence_node *_argument;
    /** write and writeln keyboards are represented on the same node
     * is_writeln indicates the keyword present on the source code
     */
    bool _isWriteln;

  public:
    inline write_node(int lineno, cdk::sequence_node *argument, bool isWriteln) :
        cdk::basic_node(lineno), _argument(argument), _isWriteln(isWriteln) {
    }

  public:
    inline cdk::sequence_node *argument() {
      return _argument;
    }

    inline bool isWriteln() {
      return _isWriteln;
    }

    void accept(basic_ast_visitor *sp, int level) {
      sp->do_write_node(this, level);
    }

  };

} // fir

#endif