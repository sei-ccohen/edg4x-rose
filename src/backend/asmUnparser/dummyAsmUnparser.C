// dummy function definitions to use when binary support is disabled.  ROSETTA still generates the binary IR node types, so
// we have to still define some of the functions they use.
#include "sage3basic.h"
#include "AsmUnparser_compat.h"

// Dummy declaration for the rose::BinaryAnalysis namespace
namespace rose {
namespace BinaryAnalysis {

} // namespace
} // namespace

std::string unparseExpression(SgAsmExpression*, const rose::BinaryAnalysis::AsmUnparser::LabelMap*, const RegisterDictionary*) {
    abort();
}

void rose::BinaryAnalysis::AsmUnparser::initDiagnostics() {}
