#ifndef __FIR_AST_FUNCTION_DECLARATION_H__
#define __FIR_AST_FUNCTION_DECLARATION_H__

#include <string>
#include <cdk/ast/sequence_node.h>
#include <cdk/ast/typed_node.h>



namespace fir {

  /**
   * Class for describing function definitions.
   */

  class function_declaration_node: public cdk::typed_node {
    int _qualifier;
    std::string _identifier;
    cdk::sequence_node *_arguments;
    block_node *_block;

  public:
    function_declaration_node(int lineno, int qualifier,  cdk::basic_type *type, std::string &identifier,
                             cdk::sequence_node *arguments, block_node *block) :
        cdk::typed_node(lineno), _qualifier(qualifier), _identifier(identifier), _arguments(arguments), _block(block) {
    
        //(this)->type(std::shared_ptr<cdk::basic_type>(type));
    }


  public:
    int qualifier() {
      return _qualifier;
    }
    const std::string &identifier(){
      return _identifier;
    }
    cdk::sequence_node *arguments() {
      return _arguments;
    }
    block_node *block() {
      return _block;
    }

    void accept(basic_ast_visitor *sp, int level) {
      sp->do_function_declaration_node(this, level);
    }

  };

}//fir

#endif