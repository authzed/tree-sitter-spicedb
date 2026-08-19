# tree-sitter-spicedb

SpiceDB schema grammars for [tree-sitter].

The top-level files in the [queries directory][qd] target [Helix]. Standalone
[Neovim queries][nq] live in `queries/neovim` so each query set can track its
editor's conventions and be upstreamed independently.

## Neovim

These instructions target the current `main` branch of [nvim-treesitter]. Add
the following to your Neovim configuration:

```lua
vim.api.nvim_create_autocmd("User", {
  pattern = "TSUpdate",
  callback = function()
    local parsers = require("nvim-treesitter.parsers")

    parsers.spicedb = {
      install_info = {
        url = "https://github.com/jzelinskie/tree-sitter-spicedb",
        queries = "queries/neovim",
      },
    }

    parsers.cel = {
      install_info = {
        url = "https://github.com/bufbuild/tree-sitter-cel",
        queries = "queries",
      },
    }
  end,
})

vim.filetype.add({ extension = { zed = "spicedb" } })

vim.api.nvim_create_autocmd("FileType", {
  pattern = "spicedb",
  callback = function()
    vim.treesitter.start()
  end,
})
```

Install both parsers from Neovim:

```vim
:TSInstall spicedb cel
```

The SpiceDB parser configuration installs the Neovim highlight and injection
queries with the parser. Installing the CEL parser enables syntax highlighting
inside caveat expressions.

[tree-sitter]: https://github.com/tree-sitter/tree-sitter
[qd]: https://github.com/jzelinskie/tree-sitter-spicedb/tree/main/queries
[nq]: https://github.com/jzelinskie/tree-sitter-spicedb/tree/main/queries/neovim
[Helix]: https://github.com/helix-editor/helix
[Neovim]: https://neovim.io/
[nvim-treesitter]: https://github.com/nvim-treesitter/nvim-treesitter
