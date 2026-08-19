#!/bin/sh

set -eu

root=$(CDPATH= cd -- "$(dirname -- "$0")/.." && pwd)
dist="$root/dist"
nvim_dist="$dist/neovim"
helix_dist="$dist/helix"

mkdir -p "$dist"
cp -r "$root/queries" "$helix_dist"

mkdir -p "$nvim_dist"
sed 's/@variable\.other\.member/@variable.member/g' \
  "$root/queries/highlights.scm" > "$nvim_dist/highlights.scm"
cp "$root/queries/injections.scm" "$nvim_dist/injections.scm"
