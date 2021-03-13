#ifndef __FIR_AST_RETURN_NODE_H__
#define __FIR_AST_RETURN_NODE_H__


namespace fir {

  /**
   * Class for describing the function's return node.
   */
  class return_node: public cdk::basic_node {
    cdk::expression_node *_retVal;

  public:
    return_node(int lineno, cdk::expression_node * retVal):
    cdk::basic_node(lineno), _retVal(retVal) {
  }
  public:
    cdk::expression_node *retVal() {
      return _retVal;
    }

  public:
    void accept(basic_ast_visitor *sp, int level) {
      sp->do_return_node(this, level);
    }

  };

} // fir

#endif