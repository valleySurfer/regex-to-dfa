#include "DFA.h"
#include "RegexTree.h"

int main() {
  auto tree = RegexTree("(a+b)(b+aa*b)*(a+aa*(a+$))");
  auto dfa = DFA(tree);
  dfa.CreateDotFile("example.gv");
}
