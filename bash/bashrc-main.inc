
: ${DOTFILES:=$(dirname $(dirname ${BASH_SOURCE[0]}))}

echo $DOTFILES
echo  $DOTFILES/local/bashrc-$HOSTNAME-$USER.inc

if [ -f .config/local/bashrc-main-$HOSTNAME-$USER.inc ]; then
  source .config/local/bashrc-main-$HOSTNAME-$USER.inc
elif [ -f $DOTFILES/local/bashrc-main-$HOSTNAME-$USER.inc ]; then
  source $DOTFILES/local/bashrc-main-$HOSTNAME-$USER.inc
else
  source $DOTFILES/bash/bash-init.inc
  source $DOTFILES/bash/bash-include-all.inc
fi
