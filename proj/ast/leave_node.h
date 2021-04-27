#ifndef __FIR_AST_LEAVE_NODE_H__
#define __FIR_AST_LEAVE_NODE_H__

#include <cdk/ast/expression_node.h>
#include <cdk/ast/integer_node.h>


namespace fir {

    /**
     * Class for describing leave instruction nodes.
     */
    class leave_node: public cdk::basic_node {
        cdk::integer_node *_integ;

    public:
        inline leave_node(int lineno, cdk::integer_node *integ) :
            cdk::basic_node(lineno) , _integ(integ){
        }
        inline leave_node(int lineno) :
            cdk::basic_node(lineno){
        }

    public:
        inline cdk::integer_node *integ(){
            return _integ;
        }
        
        void accept(basic_ast_visitor *sp, int level) {
            sp->do_leave_node(this, level);
        }
  };

} // fir

#endif