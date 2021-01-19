# gecko-plus

C++用に作成されたメモリの書き込みや読み込みが出来るライブラリ

# DEMO

```
// 書き込み
memory::write::address(0x10000000)->uint32(0x11000000); // アドレス10000000に11000000を書き込む
// 読み込み
memory::read::address(0x10000000)->uint32(); // アドレス10000000の値を読み込む
```

# Usage

```
make clean && make
```

# Requirement

* devkitPPC
* JGecko U
* ELF Function Utility
* Visual Studio Code (Notepad++などでも可)

# License

gecko-plus is under [MIT license](https://en.wikipedia.org/wiki/MIT_License).
