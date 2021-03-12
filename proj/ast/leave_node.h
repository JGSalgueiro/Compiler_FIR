// IMCOMPLETE TODO!  

#ifndef __FIR_AST_LEAVE_NODE_H__
#define __FIR_AST_LEAVE_NODE_H__

#include <cdk/ast/basic_node.h>
#include <cdk/ast/literal_node.h>
#include <cdk/ast/expression_node.h>

namespace fir {

    /**
     * Class for describing leave instruction nodes.
     */
    class leave_node: public cdk::basic_node {
        cdk::expression_node *_integ;

    public:
        inline leave_node(int lineno, cdk::expression_node *integ) :
            cdk::basic_node(lineno) , _integ(integ){
        }

    public:
        inline cdk::expression_node *integ(){
            return _integ;
        }
        
        void accept(basic_ast_visitor *sp, int level) {
            sp->do_leave_node(this, level);
        }
  };

} // fir

#endif