/**
 * @file build-info.h
 *
 * @brief [Llama.cpp]'s build information, containing the build number and build commit short hash used.
 *
 * This file is typically automatically generated by [Llama.cpp]'s CMake, however this doesn't play well with Rust
 * crates. To work around this limitation, CMake is entirely skipped, with most of its functionality being ported to
 * build.rs and this file should be manually updated whenever [Llama.cpp]'s git submodule of is updated.
 *
 * [Llama.cpp][https://github.com/ggerganov/llama.cpp]
 */

#ifndef BUILD_INFO_H
#define BUILD_INFO_H

#define BUILD_NUMBER 3197
#define BUILD_COMMIT "557b653"

#endif // BUILD_INFO_H
