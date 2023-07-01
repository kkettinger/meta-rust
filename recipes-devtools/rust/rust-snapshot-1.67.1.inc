## This is information on the rust-snapshot (binary) used to build our current release.
## snapshot info is taken from rust/src/stage0.json
## Rust is self-hosting and bootstraps itself with a pre-built previous version of itself.
## The exact (previous) version that has been used is specified in the source tarball.
## The version is replicated here.
## TODO: find a way to add additional SRC_URIs based on the contents of an
##       earlier SRC_URI.

SNAPSHOT_VERSION = "1.66.1"

# TODO: Add hashes for other architecture toolchains as well. Make a script?
SRC_URI[rust-std-snapshot-x86_64.sha256sum] = "c5e2c9b160bd8d99514f13cfbc0e42a722fd9ca14e6aaca4b9b77731a7a48377"
SRC_URI[rustc-snapshot-x86_64.sha256sum] = "242855e2626860aede6957dc56481cc02acf8cad12fa5bbbcbd93f9c51f0b3ad"
SRC_URI[cargo-snapshot-x86_64.sha256sum] = "a636f83eb2327a66f484b9592ab305c6642df16fc80d0d1cb727e766a60da904"

SRC_URI[rust-std-snapshot-aarch64.sha256sum] = "9d96ba6a5a255339cd04af079d906753d56c85503c727279c227d24bd4987e24"
SRC_URI[rustc-snapshot-aarch64.sha256sum] = "b4d842594ba11a84712c2d1bbf7f7945cfcc2485c72861a23b488fefba5c6a45"
SRC_URI[cargo-snapshot-aarch64.sha256sum] = "61736a6ec61a4eaa9a7b3f219d9f8166ae97c1acd54b5e904c15fb8caff06250"

SRC_URI[rust-std-snapshot-powerpc64le.sha256sum] = "4c64a09be872b5832b50d681fbe29691b6a5d3e23ee5535020fa22b8b453c770"
SRC_URI[rustc-snapshot-powerpc64le.sha256sum] = "3b4322b519b0f7fbcf88511b2061be1499921517d810d7696be58a16467d4589"
SRC_URI[cargo-snapshot-powerpc64le.sha256sum] = "29fa2e003f4bf3e37a3fb506d5b7ab19eb6412b5966d865e082b354637d5d84a"

SRC_URI += " \
    https://static.rust-lang.org/dist/${RUST_STD_SNAPSHOT}.tar.xz;name=rust-std-snapshot-${RUST_BUILD_ARCH};subdir=rust-snapshot-components \
    https://static.rust-lang.org/dist/${RUSTC_SNAPSHOT}.tar.xz;name=rustc-snapshot-${RUST_BUILD_ARCH};subdir=rust-snapshot-components \
    https://static.rust-lang.org/dist/${CARGO_SNAPSHOT}.tar.xz;name=cargo-snapshot-${RUST_BUILD_ARCH};subdir=rust-snapshot-components \
"

RUST_STD_SNAPSHOT = "rust-std-${SNAPSHOT_VERSION}-${RUST_BUILD_ARCH}-unknown-linux-gnu"
RUSTC_SNAPSHOT = "rustc-${SNAPSHOT_VERSION}-${RUST_BUILD_ARCH}-unknown-linux-gnu"
CARGO_SNAPSHOT = "cargo-${SNAPSHOT_VERSION}-${RUST_BUILD_ARCH}-unknown-linux-gnu"
