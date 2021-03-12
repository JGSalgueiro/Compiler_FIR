#ifndef __FIR_AST_RETURN_NODE_H__
#define __FIR_AST_RETURN_NODE_H__


namespace fir {

  /**
   * Class for describing the function's return node.
   */
  class return_node: public cdk::basic_node {

  public:
    return_node(int lineno):
    cdk::basic_node(lineno) {
  }

  public:
    void accept(basic_ast_visitor *sp, int level) {
      sp->do_return_node(this, level);
    }

  };

} // fir

#endif