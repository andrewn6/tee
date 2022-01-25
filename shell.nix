
{ pkgs ? import <nixpkgs> { } }:

pkgs.mkShell {
    packages =with pkgs; [
      gcc
      clang_12
      coreutils
      llvm
      cmake
    ];
}
