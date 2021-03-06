#ifndef SYMBOLTAB_H
#define SYMBOLTAB_H

#include <string>
#include <memory>
#include <map>

namespace xcool {
    class SymbolTable;
    class Table {
        friend SymbolTable;
        public:
            bool insert(std::string , std::string);
            bool find(std::string);
            std::string get_value(std::string);
        private:
            std::shared_ptr<Table> parent;
            std::map<std::string, std::string> table;
    };
    class SymbolTable {
        public:
            void enter_scope();
            void exit_scope();
            bool insert(std::string , std::string);
            bool find(std::string);
            std::string get_value(std::string);
        private:
            std::shared_ptr<Table> currentTab;
   };
}



#endif