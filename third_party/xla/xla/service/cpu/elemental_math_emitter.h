/* Copyright 2024 The OpenXLA Authors.

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

#ifndef XLA_SERVICE_CPU_ELEMENTAL_MATH_EMITTER_H_
#define XLA_SERVICE_CPU_ELEMENTAL_MATH_EMITTER_H_

#include "absl/status/statusor.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Value.h"
#include "xla/xla_data.pb.h"

namespace xla::cpu {

absl::StatusOr<llvm::Value*> EmitAtan2(llvm::Module* module,
                                       llvm::IRBuilder<>& b,
                                       PrimitiveType prim_type,
                                       llvm::Value* lhs, llvm::Value* rhs);

absl::StatusOr<llvm::Value*> EmitTanh(llvm::Module* module,
                                      llvm::IRBuilder<>& b,
                                      PrimitiveType prim_type,
                                      llvm::Value* value);

absl::StatusOr<llvm::Value*> EmitErf(llvm::Module* module, llvm::IRBuilder<>& b,
                                     PrimitiveType prim_type,
                                     llvm::Value* value);

}  // namespace xla::cpu

#endif  // XLA_SERVICE_CPU_ELEMENTAL_MATH_EMITTER_H_
