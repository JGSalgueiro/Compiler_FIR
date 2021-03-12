// IMCOMPLETE TODO!  

#ifndef __FIR_AST_WHILE_NODE_H__
#define __FIR_AST_WHILE_NODE_H__

#include <cdk/ast/basic_node.h> // MAYBE WRONG

namespace fir {

    /**
     * Class for describing leave instruction nodes.
     */
    class leave_node: public cdk::basic_node {
    // TODO 

    public:
        inline break_node(int lineno) :
            cdk::basic_node(lineno) {
        }

    public:
        void accept(basic_ast_visitor *sp, int level) {
            sp->do_leave_node(this, level);
        }
  };

} // fir

#endif