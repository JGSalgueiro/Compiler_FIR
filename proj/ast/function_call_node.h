
#ifndef __FIR_AST_FUNCTION_CALL_NODE_H__
#define __FIR_AST_FUNCTION_CALL_NODE_H__

#include <cdk/ast/variable_node.h>
#include <cdk/ast/sequence_node.h>
#include <cdk/ast/expression_node.h>

namespace fir {

  /**
   * Class for describing function_call nodes.
   */
  class function_call_node: public cdk::expression_node {
    std::string _identifier;
    cdk::sequence_node *_arguments;

  public:
    inline function_call_node(int lineno, std::string &identifier, cdk::sequence_node *arguments) :
        cdk::expression_node(lineno), _identifier(identifier), _arguments(arguments) {
    }
    
    inline function_call_node(int lineno, const std::string &identifier) :
        cdk::expression_node(lineno), _identifier(identifier), _arguments(new cdk::sequence_node(lineno)) {
    }

  public:
    inline std::string &identifier() {
      return _identifier;
    }

    inline cdk::sequence_node *arguments() {
      return _arguments;
    }

    void accept(basic_ast_visitor *sp, int level) {
      sp->do_function_call_node(this, level);
    }

  };

} // fir

#endif
