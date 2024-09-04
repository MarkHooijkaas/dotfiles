
function dotfile_include() {
    dotfile_verbose including $1
    source $DOTFILES/bash/$1
}
dotfile_include bash-complete-alias.inc
dotfile_include bash-aliases.inc
dotfile_include bash-aliases-git.inc
dotfile_include bash-aliases-kube.inc
dotfile_include bash-history.inc
dotfile_include bash-prompt.inc
