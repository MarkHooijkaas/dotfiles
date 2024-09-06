
: ${DOTFILES:=$(dirname $(dirname ${BASH_SOURCE[0]}))}

echo $DOTFILES


if [ -f $DOTFILES/bash/local/bashrc-$HOSTNAME-$USER.inc ]; then
  source $DOTFILES/bash/local/bashrc-$HOSTNAME-$USER.inc
else
  source $DOTFILES/bash/bash-init.inc
  source $DOTFILES/bash/bash-include-all.inc
fi
