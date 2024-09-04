
: ${DOTFILES:=~/.dotfiles}
export DOTFILES

: ${XDG_DATA_HOME:=~/.local/share}
: ${XDG_STATE_HOME:=~/.local/state}

function dotfile_verbose() {
    if ${DOTFILE_VERBOSE:-false}; then
        echo $@
    fi
}
