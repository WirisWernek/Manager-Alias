# Manager-Alias

Que tal gerenciar todos os seus alias de um único local? Pesquisar e encontrar o que você precisa sem ter que ficar lendo diversos arquivos? Este é o CLI certo para você.

Com o Manager-Alias fica muito mais fácil encontrar seus alias diretamente no seu terminal.

## Instalando o Manager-Alias

Faça o clone do repositório do Manager-Alias:

`git clone https://github.com/WirisWernek/Manager-Alias.git`

Entre no diretório do Manager-Alias:

`cd Manager-Alias`

Compile o código:

`g++ main.cpp`

Execute o comando pwd para ver o caminho absoluto do diretório do Manager-Alias:

`pwd`

Crie um alias para o binário no arquivo .zshrc:

`nano ~/.zshrc`

Adicione no arquivo a seguinte linha:

`export MALIAS="{Caminho devolvido do pwd}"`

`alias malias=$MALIAS/a.out`

Ex:

`export MALIAS="/home/wiris/Documentos/CLI"`

`alias malias=$MALIAS/a.out`

Recarregue o arquivo .zshrc:

`source ~/.zshrc`

Se o seu arquivo de configuração do zsh não estiver no diretório padrão, adicione o caminho do arquivo no arquivo .zshrc:
<br>

## Utilização

Para utilizar o Manager-Alias, basta digitar o comando malias.

Ex: `malias`

Se você quser apenas burcar um alias a partir de um comando específico, basta digitar o comando malias e o comando que você deseja buscar.

Ex: `malias 'vagrant up'`
