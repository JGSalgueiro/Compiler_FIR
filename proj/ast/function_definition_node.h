#ifndef __FIR_AST_FUNCTION_DEFINITION_H__
#define __FIR_AST_FUNCTION_DEFINITION_H__

#include <cdk/ast/sequence_node.h>
#include <cdk/ast/variable_node.h>
#include <cdk/ast/typed_node.h>

namespace fir {
  /**
   * Class for describing function definitions.
   */
  class function_definition_node: public cdk::typed_node {
    int _qualifier;
    std::string _identifier;
    cdk::sequence_node *_arguments;
    body_node *_body;
    return_node *_ret;

  public:
    inline function_definition_node(int lineno, int qualifier, std::string &identifier, cdk::sequence_node *arguments, body_node *body, return_node *ret) :
        cdk::typed_node(lineno), _qualifier(qualifier), _identifier(identifier), _arguments(arguments), _body(body), _ret(ret)  {
        type(cdk::primitive_type::create(0, cdk::TYPE_VOID));
    }


  public:
    inline int qualifier() {
      return _qualifier;
    }
    inline std::string &identifie(){
      return _identifier;
    }
    
    inline cdk::sequence_node *arguments() {
      return _arguments;
    }
    
    inline body_node *body() {
      return _body;
    }

    inline return_node* ret() {
      return _ret;
    }

    void accept(basic_ast_visitor *sp, int level) {
      sp->do_function_definition_node(this, level);
    }

  };

}

#endif