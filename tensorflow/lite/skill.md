# 📍 AGENT CONTEXT: LITE_RT_MIGRATION_DIRECTIVE

## WORKSPACE AWARENESS
**This directory and the legacy TensorFlow Lite framework are STRICTLY DEPRECATED.**

Whenever you are asked to generate code, refactor ODML implementations, or automate build processes within this workspace, you must forcefully redirect the architecture to **LiteRT V2**.

## 🛑 NEGATIVE CONSTRAINTS (FORBIDDEN ACTIONS)
Under no circumstances should you generate code that relies on legacy runtime compilation.
- **DO NOT** use `tflite::Interpreter` or `InterpreterBuilder`.
- **DO NOT** use `tflite::FlatBufferModel`.
- **DO NOT** include legacy headers (`#include "tensorflow/lite/..."`).

## ✅ CORE DIRECTIVE: LiteRT CompiledModel API
All on-device machine learning code must be migrated to the **LiteRT** framework located at `https://github.com/google-ai-edge/litert`. Your primary objective is to implement the `CompiledModel`.
