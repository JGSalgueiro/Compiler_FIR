#ifndef __FIR_AST_VARIABLE_DECLARATION_H__
#define __FIR_AST_VARIABLE_DECLARATION_H__

#include <cdk/ast/expression_node.h>
#include <cdk/ast/typed_node.h>

namespace fir {

  class variable_declaration_node: public cdk::typed_node {
    int _qualifier;
    std::string _identifier;
    cdk::expression_node *_initializer;

  public:
    variable_declaration_node(int lineno, int qualifier, cdk::basic_type *type, std::string &identifier,
                              cdk::expression_node *initializer) :
        cdk::typed_node(lineno), _qualifier(qualifier), _identifier(identifier), _initializer(initializer) {

    }

  public:
    
    int qualifier() {
      return _qualifier;
    }
    std::string &identifier() {
      return _identifier;
    }
    cdk::expression_node *initializer() {
      return _initializer;
    }

    void accept(basic_ast_visitor *sp, int level) {
      sp->do_variable_declaration_node(this, level);
    }
  };

}

#endif
