//*****************************************************************************
// Copyright 2017-2020 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//*****************************************************************************


// Microsoft (c) 2019, NNFusion Team

#pragma once

#include "nnfusion/core/graph/gnode.hpp"
#include "nnfusion/core/graph/graph.hpp"
#include "nnfusion/common/axis_vector.hpp"

namespace nnfusion
{
    namespace graph
    {
        /// \brief Implement's Numpy's multidimensional transpose op. Doubles as DimShuffle.
        ///
        /// If `order` is empty, the vector is transposed by reversing it's axes, i.e.
        ///
        /// shape [1,2,4] becomes shape [4,2,1]
        ///
        /// If `order` is provided, it should be a vector of unique axis positions ranging
        /// from 0 to N-1, when N is the length of the input shape.  In this case, numpy_transpose acts
        /// like dimshuffle, so
        ///
        /// shape [1,2,4] with order [1,2,0] becomes shape [2,4,1]
        ///
        /// |                  | Type                                  | Description                                             |
        /// | ---------------- | ------------------------------------- | ------------------------------------------------------- |
        /// | `node`           | \f$E[d_0,\dots,d_{n-1}]~(n \geq 0)\f$ | An input tensor of any shape                            |
        /// | `order`          | AxisVector (empty default)            | The axes to eliminate through reduction (0 indexed).    |
        ///
        /// ## Output
        ///
        /// | Type                                                                         | Description                                                                                                      |
        /// | ---------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------- |
        /// | \f$E[d_{n-1},\dots,d_0)]\textit{ or }E[d_{order[0]},\dots,d_{order[n-1]}]\f$ | The tensor \f$T\f$, where \f$T\f$ is the input tensor with the axes reordered via Numpy Transpose rules          |
        std::shared_ptr<GNode> numpy_transpose(const std::shared_ptr<GNode>& node,
                                               nnfusion::AxisVector order = {},
                                               size_t output_index = 0);
    } // namespace builder
} // namespace ngraph
