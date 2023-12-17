package risor

import _ "github.com/applejag/tree-sitter-risor/src"

//#include "../../src/tree_sitter/parser.h"
//const TSLanguage *tree_sitter_risor();
import "C"
import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_risor())
	return sitter.NewLanguage(ptr)
}
