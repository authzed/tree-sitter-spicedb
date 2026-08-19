# tree-sitter-spicedb

SpiceDB schema grammars for [tree-sitter].

The queries in the [queries directory][qd] target [Helix]. Most captures are
portable, and a small [Neovim] extension provides the remaining compatibility.

## Neovim

These instructions target the current `main` branch of [nvim-treesitter]. Add
the following to your Neovim configuration, replacing `spicedb_path` with the
path to this checkout:

```lua
local spicedb_path = vim.fn.expand("~/src/tree-sitter-spicedb")

vim.api.nvim_create_autocmd("User", {
  pattern = "TSUpdate",
  callback = function()
    local parsers = require("nvim-treesitter.parsers")

    parsers.spicedb = {
      install_info = {
        path = spicedb_path,
        queries = "queries",
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

Finally, install the Neovim-specific capture override as an `after` query:

```sh
repo=/absolute/path/to/tree-sitter-spicedb
config=${XDG_CONFIG_HOME:-$HOME/.config}/nvim
mkdir -p "$config/after/queries/spicedb"
ln -sfn "$repo/queries/neovim/highlights.scm" \
  "$config/after/queries/spicedb/highlights.scm"
```

The SpiceDB parser configuration links the base highlight and injection queries
from this checkout. The `after` query extends them with Neovim's
`@variable.member` capture. Installing the CEL parser enables syntax
highlighting inside caveat expressions.

[tree-sitter]: https://github.com/tree-sitter/tree-sitter
[qd]: https://github.com/jzelinskie/tree-sitter-spicedb/tree/main/queries
[Helix]: https://github.com/helix-editor/helix
[Neovim]: https://neovim.io/
[nvim-treesitter]: https://github.com/nvim-treesitter/nvim-treesitter
