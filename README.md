# tree-sitter-spicedb

SpiceDB schema language grammars for [tree-sitter].

The queries in the [queries directory][qd] are written to be somewhat editor agnostic.
To generate queries for each editor you must execute `scripts/gen-editor-queries.sh`.

Current supported editors:

- [Helix]
- [Neovim]

[tree-sitter]: https://github.com/tree-sitter/tree-sitter
[qd]: https://github.com/jzelinskie/tree-sitter-spicedb/tree/main/queries
[Helix]: https://github.com/helix-editor/helix
[Neovim]: https://github.com/nvim-treesitter/nvim-treesitter
