
: ${DOTFILES:=~/.dotfiles}
export DOTFILES

# read initial local settings, ths can override other stuff
DOTFILES_LOCAL_BASHRC_INIT=~/.local/dotfiles/bash/bashrc-local.inc
if [ -f $DOTFILES_LOCAL_BASHRC_INIT ]; then
    . $DOTFILES_LOCAL_BASHRC_INIT
fi

if ${DOTFILE_BASH_INCLUDE_ALL:-true} ; then
    source $DOTFILES/bash/bash-complete-alias.inc
    source $DOTFILES/bash/bash-aliases.inc
    source $DOTFILES/bash/bash-history.inc
    source $DOTFILES/bash/bash-prompt.inc
fi


# load extra local settings, that might depend on previous includes, especially complete-alias
DOTFILES_LOCAL_BASHRC_FINAL=~/.local/dotfiles/bash/bashrc-local-final.inc
if [ -f $DOTFILES_LOCAL_BASHRC_FINAL ]; then
    . $DOTFILES_LOCAL_BASHRC_FINAL
fi
