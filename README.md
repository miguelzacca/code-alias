# code-alias

Adds an simple alias for `code`. Made for Linux only.

## Config

To use, create a tools folder, and place the `code-alias` inside. Just run for the first time:

```bash
mkdir ~/tools
cd ~/tools
git clone https://github.com/miguelzacca/code-alias.git
chmod +x ./code-alias/main
./code-alias/main
cd ~
```

## Doc

- `c desk <dir>` to `code Desktop/<dir>`

- `c doc <dir>` to `code Documents/<dir>`

- `c too <dir>` to `code tools/<dir>`

- `c - <dir>` to `code ./<dir>`

## Warn

The alias will be added to ~/.bashrc automatically. The command is in `src/config.sh`.

## More

To add some extra simple aliases to ~/.bashrc run:

```bash
cd ~
chmod +x ~/tools/code-alias/more.sh
./tools/code-alias/more.sh
```
- `e` to `exit`

- `cls` to `clear`

- `cdd` to `cd ~/Desktop`
