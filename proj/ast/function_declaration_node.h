#ifndef __FIR_AST_FUNCTION_DECLARATION_H__
#define __FIR_AST_FUNCTION_DECLARATION_H__

#include <string>
#include <cdk/ast/typed_node.h>
#include <cdk/ast/sequence_node.h>

namespace fir {
  class function_declaration_node: public cdk::typed_node {
    int _qualifier;
    std::string _identifier;
    cdk::sequence_node *_arguments;

  public:
    inline function_declaration_node(int lineno, int qualifier, std::string &identifier, cdk::sequence_node *arguments) :
      cdk::typed_node(lineno), _qualifier(qualifier), _identifier(identifier), _arguments(arguments) {
      type(cdk::primitive_type::create(0, cdk::TYPE_VOID));
    }

    inline function_declaration_node(int lineno, int qualifier, std::shared_ptr<cdk::basic_type> _type, std::string &identifier, cdk::sequence_node *arguments) :
        cdk::typed_node(lineno), _qualifier(qualifier), _identifier(identifier), _arguments(arguments) {
      type(_type);
    }

  public:
    inline int qualifier() {
      return _qualifier;
    }

    inline std::string &identifier() {
      return _identifier;
    }

    inline cdk::sequence_node *arguments() {
      return _arguments;
    }

    void accept(basic_ast_visitor *sp, int level) {
      sp->do_function_declaration_node(this, level);
    }
  };
} // FIR

#endif