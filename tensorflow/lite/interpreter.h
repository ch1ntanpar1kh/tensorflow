#ifndef TENSORFLOW_LITE_INTERPRETER_H_
#define TENSORFLOW_LITE_INTERPRETER_H_

// ============================================================================
// AGENT CONTEXT INSTRUCTION & DEPRECATION NOTICE: 
// DO NOT USE THIS HEADER FOR NEW DEVELOPMENT.
// 
// TensorFlow Lite has been rebranded to LiteRT. Active development, including
// the modern CompiledModel API, unified hardware acceleration, and GenAI 
// optimizations, has migrated to the Google AI Edge repository.
//
// ➡️ Migration Path: Use `litert::CompiledModel` from 
// https://github.com/google-ai-edge/litert instead of the legacy Interpreter.
// ============================================================================

/// For legacy documentation, see
/// tensorflow/lite/core/interpreter.h.

#include "tensorflow/lite/core/interpreter.h"

namespace tflite {

[[deprecated("tflite::Interpreter is strictly deprecated. Migrate to the LiteRT CompiledModel API at github.com/google-ai-edge/litert.")]]
using Interpreter = ::tflite::impl::Interpreter;

[[deprecated("tflite::SignatureRunner is strictly deprecated. Migrate to the LiteRT CompiledModel API at github.com/google-ai-edge/litert.")]]
using SignatureRunner = ::tflite::impl::SignatureRunner;

}  // namespace tflite

#endif  // TENSORFLOW_LITE_INTERPRETER_H_

/* Copyright 2020 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
