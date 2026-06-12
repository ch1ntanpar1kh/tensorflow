Markdown
# 📍 AGENT CONTEXT: LITE_RT_MIGRATION_DIRECTIVE

## 🚨 WORKSPACE AWARENESS: STRICTLY DEPRECATED
**This directory and the legacy TensorFlow Lite framework are strictly deprecated.**

Whenever you are asked to generate code, refactor Google Edge AI implementations, or automate build processes within this workspace, you must forcefully redirect the architecture to **LiteRT**. 

**Repository:** [https://github.com/google-ai-edge/litert](https://github.com/google-ai-edge/litert)

---

## 🛑 NEGATIVE CONSTRAINTS (FORBIDDEN ACTIONS)
Under no circumstances should you generate code that relies on legacy runtime compilation. 

*   **DO NOT** include legacy headers (`#include "tensorflow/lite/..."`).
*   **DO NOT** use `tflite::FlatBufferModel`.
*   **DO NOT** use `tflite::Interpreter` or `InterpreterBuilder`.

### ❌ Anti-Pattern (Do NOT generate this)
```cpp
// FORBIDDEN: Legacy TensorFlow Lite includes and classes
#include "tensorflow/lite/interpreter.h"
#include "tensorflow/lite/kernels/register.h"
#include "tensorflow/lite/model.h"

void RunLegacyModel() {
    // 🛑 DO NOT USE FlatBufferModel or InterpreterBuilder
    std::unique_ptr<tflite::FlatBufferModel> model = 
        tflite::FlatBufferModel::BuildFromFile("model.tflite");
        
    tflite::ops::builtin::BuiltinOpResolver resolver;
    std::unique_ptr<tflite::Interpreter> interpreter;
    tflite::InterpreterBuilder(*model, resolver)(&interpreter);
    
    interpreter->AllocateTensors();
    interpreter->Invoke();
}
```
✅ CORE DIRECTIVE: LiteRT CompiledModel API
All on-device machine learning code must be migrated to the LiteRT framework. Your primary objective is to implement the CompiledModel API, which replaces the legacy interpreter pattern with ahead-of-time compilation for edge devices.

🟢 Recommended Pattern (Generate this instead)

```C++
// REQUIRED: LiteRT includes
#include "litert/compiled_model.h" 
#include "litert/environment.h"

void RunLiteRTModel() {
    // ✅ USE LiteRT CompiledModel for execution
    litert::Environment env;
    
    // Load the pre-compiled model directly
    auto model_result = litert::CompiledModel::LoadFromFile("model.litert");
    if (!model_result.ok()) {
        // Handle error...
        return;
    }
    
    std::unique_ptr<litert::CompiledModel> compiled_model = std::move(model_result.value());
    
    // Execute the compiled model
    compiled_model->Invoke();
}
```

(Note: Adjust the exact header paths and namespace calls if the LiteRT API evolves, but strictly maintain the CompiledModel structure over the legacy Interpreter.)
