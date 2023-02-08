// Licensed to the LF AI & Data foundation under one
// or more contributor license agreements. See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership. The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License. You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <iostream>
#include <random>
#include <string>

#include "milvus/MilvusClient.h"
#include "milvus/types/CollectionSchema.h"

void
CheckStatus(std::string&& prefix, const milvus::Status& status) {
    if (!status.IsOk()) {
        std::cout << prefix << " " << status.Message() << std::endl;
        exit(1);
    }
}

int
main(int argc, char* argv[]) {
    printf("Example start...\n");

    auto client = milvus::MilvusClient::Create();

    // TODO

    return 0;
}
