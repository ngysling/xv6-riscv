{ pkgs ? import <nixpkgs> {} }:

let
  toolchain = pkgs.pkgsCross.riscv64-embedded.buildPackages;
in
pkgs.mkShell {
  packages = [
    pkgs.gnumake
    pkgs.qemu
    pkgs.bc
    pkgs.git
    toolchain.gcc
    toolchain.binutils
  ];

  shellHook = ''
    export TOOLPREFIX=riscv64-none-elf-
  '';
}
