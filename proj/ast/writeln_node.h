#ifndef __FIR_AST_WRITELN_NODE_H__
#define __FIR_AST_WRITELN_NODE_H__

#include <cdk/ast/expression_node.h>

namespace fir{
    /**
     * Class for describing write nodes.
     */
    class writeln_node: public cdk::basic_node {
        cdk::expression_node *_argument;
        bool _newline = false;

    public:
        inline writeln_node(int lineno, cdk::expression_node *argument, bool newline = false) :
            cdk::basic_node(lineno), _argument(argument), _newline(newline){
        }

        public:    
            inline cdk::expression_node *argument() {
                return _argument;
            }
            inline bool newline() {
                return _newline;
            }
            void accept(basic_ast_visitor *sp, int level) {
                sp->do_writeln_node(this, level);
            }
    };
} // fir

#endif