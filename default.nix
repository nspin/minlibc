{ stdenv, fetchgit }:

stdenv.mkDerivation {
  name = "foolibc";

  src = /home/nick/k/foo;

  builder = builtins.toFile "builder.sh" ''
    source $stdenv/setup
    unpackPhase
    cd $sourceRoot
    make
    mkdir $out
    cp -r include $out
    mkdir $out/lib
    cp libc.a $out/lib
  '';
}
