package risor_test

import (
	"context"
	"testing"

	risor "github.com/applejag/tree-sitter-risor/bindings/go"
	sitter "github.com/smacker/go-tree-sitter"
	"github.com/stretchr/testify/assert"
)

func TestGrammar(t *testing.T) {
	assert := assert.New(t)

	n, err := sitter.ParseCtx(context.Background(), []byte("var a = 1"), risor.GetLanguage())
	assert.NoError(err)
	assert.Equal(
		"(source_file (var_declaration name: (expression_list (identifier)) value: (int_literal)))",
		n.String(),
	)
}
