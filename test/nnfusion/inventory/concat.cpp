// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

/**
 * \brief Unit tests for ir::Concat
 * \author generated by script
 */

#include "../test_util/common.hpp"

namespace nnfusion
{
    namespace test
    {
        template <typename T, size_t N>
        using NDArray = nnfusion::test::NDArray<T, N>;
    }

    namespace inventory
    {
        template <>
        shared_ptr<graph::GNode> create_object<op::Concat, float>(int option)
        {
            switch (option)
            {
            case 0:
            {
                auto graph = std::make_shared<graph::Graph>();
                Shape shape_a{2, 2};
                auto A = make_shared<op::Parameter>(element::f32, shape_a);
                auto A_gnode = graph->add_node_and_edge(A, GNodeVector({}));
                Shape shape_b{2, 3};
                auto B = make_shared<op::Parameter>(element::f32, shape_b);
                auto B_gnode = graph->add_node_and_edge(B, GNodeVector({}));
                Shape shape_c{2, 3};
                auto C = make_shared<op::Parameter>(element::f32, shape_c);
                auto C_gnode = graph->add_node_and_edge(C, GNodeVector({}));
                auto r = make_shared<op::Concat>(1);
                auto r_gnode = graph->add_node_and_edge(r, {A_gnode, B_gnode, C_gnode});
                return r_gnode;
            }
            case 1:
            {
                auto graph = std::make_shared<graph::Graph>();
                Shape shape_a{2, 2};
                auto A = make_shared<op::Parameter>(element::f32, shape_a);
                auto A_gnode = graph->add_node_and_edge(A, GNodeVector({}));
                Shape shape_b{3, 2};
                auto B = make_shared<op::Parameter>(element::f32, shape_b);
                auto B_gnode = graph->add_node_and_edge(B, GNodeVector({}));
                Shape shape_c{3, 2};
                auto C = make_shared<op::Parameter>(element::f32, shape_c);
                auto C_gnode = graph->add_node_and_edge(C, GNodeVector({}));
                auto r = make_shared<op::Concat>(0);
                auto r_gnode = graph->add_node_and_edge(r, {A_gnode, B_gnode, C_gnode});
                return r_gnode;
            }
            case 2:
            {
                auto graph = std::make_shared<graph::Graph>();
                Shape shape_a{4};
                auto A = make_shared<op::Parameter>(element::f32, shape_a);
                auto A_gnode = graph->add_node_and_edge(A, GNodeVector({}));
                Shape shape_b{6};
                auto B = make_shared<op::Parameter>(element::f32, shape_b);
                auto B_gnode = graph->add_node_and_edge(B, GNodeVector({}));
                Shape shape_c{2};
                auto C = make_shared<op::Parameter>(element::f32, shape_c);
                auto C_gnode = graph->add_node_and_edge(C, GNodeVector({}));
                auto r = make_shared<op::Concat>(0);
                auto r_gnode = graph->add_node_and_edge(r, {A_gnode, B_gnode, C_gnode});
                return r_gnode;
            }
            case 3:
            {
                auto graph = std::make_shared<graph::Graph>();
                Shape shape{1, 1, 1, 1};
                auto A = make_shared<op::Parameter>(element::f32, shape);
                auto A_gnode = graph->add_node_and_edge(A, GNodeVector({}));
                auto B = make_shared<op::Parameter>(element::f32, shape);
                auto B_gnode = graph->add_node_and_edge(B, GNodeVector({}));
                auto C = make_shared<op::Parameter>(element::f32, shape);
                auto C_gnode = graph->add_node_and_edge(C, GNodeVector({}));
                auto r = make_shared<op::Concat>(0);
                auto r_gnode = graph->add_node_and_edge(r, {A_gnode, B_gnode, C_gnode});
                return r_gnode;
            }
            case 4:
            {
                auto graph = std::make_shared<graph::Graph>();
                Shape shape{1, 1};
                auto A = make_shared<op::Parameter>(element::f32, shape);
                auto A_gnode = graph->add_node_and_edge(A, GNodeVector({}));
                auto B = make_shared<op::Parameter>(element::f32, shape);
                auto B_gnode = graph->add_node_and_edge(B, GNodeVector({}));
                auto C = make_shared<op::Parameter>(element::f32, shape);
                auto C_gnode = graph->add_node_and_edge(C, GNodeVector({}));
                auto r = make_shared<op::Concat>(0);
                auto r_gnode = graph->add_node_and_edge(r, {A_gnode, B_gnode, C_gnode});
                return r_gnode;
            }
            case 5:
            {
                auto graph = std::make_shared<graph::Graph>();
                Shape shape_a{4};
                auto A = make_shared<op::Parameter>(element::f32, shape_a);
                auto A_gnode = graph->add_node_and_edge(A, GNodeVector({}));
                Shape shape_b{0};
                auto B = make_shared<op::Parameter>(element::f32, shape_b);
                auto B_gnode = graph->add_node_and_edge(B, GNodeVector({}));
                auto r = make_shared<op::Concat>(0);
                auto r_gnode = graph->add_node_and_edge(r, {A_gnode, B_gnode});
                return r_gnode;
            }
            case 6:
            {
                auto graph = std::make_shared<graph::Graph>();
                Shape shape_a{4};
                auto A = make_shared<op::Parameter>(element::f32, shape_a);
                auto A_gnode = graph->add_node_and_edge(A, GNodeVector({}));
                Shape shape_b{0};
                auto B = make_shared<op::Parameter>(element::f32, shape_b);
                auto B_gnode = graph->add_node_and_edge(B, GNodeVector({}));
                Shape shape_c{4};
                auto C = make_shared<op::Parameter>(element::f32, shape_c);
                auto C_gnode = graph->add_node_and_edge(C, GNodeVector({}));
                auto r = make_shared<op::Concat>(0);
                auto r_gnode = graph->add_node_and_edge(r, {A_gnode, B_gnode, C_gnode});
                return r_gnode;
            }
            case 7:
            {
                auto graph = std::make_shared<graph::Graph>();
                Shape shape_a{2, 2, 1, 1};
                auto A = make_shared<op::Parameter>(element::f32, shape_a);
                auto A_gnode = graph->add_node_and_edge(A, GNodeVector({}));
                Shape shape_b{2, 2, 0, 1};
                auto B = make_shared<op::Parameter>(element::f32, shape_b);
                auto B_gnode = graph->add_node_and_edge(B, GNodeVector({}));
                Shape shape_c{2, 2, 1, 1};
                auto C = make_shared<op::Parameter>(element::f32, shape_c);
                auto C_gnode = graph->add_node_and_edge(C, GNodeVector({}));
                auto r = make_shared<op::Concat>(2);
                auto r_gnode = graph->add_node_and_edge(r, {A_gnode, B_gnode, C_gnode});
                return r_gnode;
            }
            default: return nullptr;
            }
        }

        template <>
        vector<float> generate_input<op::Concat, float>(int option)
        {
            switch (option)
            {
            case 0:
            {
                vector<float> a = vector<float>{2, 4, 8, 16};
                vector<float> b = vector<float>{1, 2, 4, 8, 16, 32};
                vector<float> c = vector<float>{2, 3, 5, 7, 11, 13};
                auto return_vector = vector<float>();
                return_vector.insert(return_vector.end(), a.begin(), a.end());
                return_vector.insert(return_vector.end(), b.begin(), b.end());
                return_vector.insert(return_vector.end(), c.begin(), c.end());
                return return_vector;
            }
            case 1:
            {
                vector<float> a = vector<float>{2, 4, 8, 16};
                vector<float> b = vector<float>{1, 2, 4, 8, 16, 32};
                vector<float> c = vector<float>{2, 3, 5, 7, 11, 13};
                auto return_vector = vector<float>();
                return_vector.insert(return_vector.end(), a.begin(), a.end());
                return_vector.insert(return_vector.end(), b.begin(), b.end());
                return_vector.insert(return_vector.end(), c.begin(), c.end());
                return return_vector;
            }
            case 2:
            {
                vector<float> a = vector<float>{2, 4, 8, 16};
                vector<float> b = vector<float>{1, 2, 4, 8, 16, 32};
                vector<float> c = vector<float>{18, 19};
                auto return_vector = vector<float>();
                return_vector.insert(return_vector.end(), a.begin(), a.end());
                return_vector.insert(return_vector.end(), b.begin(), b.end());
                return_vector.insert(return_vector.end(), c.begin(), c.end());
                return return_vector;
            }
            case 3:
            {
                vector<float> a = vector<float>{1};
                vector<float> b = vector<float>{2};
                vector<float> c = vector<float>{3};
                auto return_vector = vector<float>();
                return_vector.insert(return_vector.end(), a.begin(), a.end());
                return_vector.insert(return_vector.end(), b.begin(), b.end());
                return_vector.insert(return_vector.end(), c.begin(), c.end());
                return return_vector;
            }
            case 4:
            {
                vector<float> a = vector<float>{1};
                vector<float> b = vector<float>{2};
                vector<float> c = vector<float>{3};
                auto return_vector = vector<float>();
                return_vector.insert(return_vector.end(), a.begin(), a.end());
                return_vector.insert(return_vector.end(), b.begin(), b.end());
                return_vector.insert(return_vector.end(), c.begin(), c.end());
                return return_vector;
            }
            case 5:
            {
                vector<float> a_data{1, 2, 3, 4};
                vector<float> a = a_data;
                vector<float> b_data(0);
                vector<float> b = b_data;
                auto return_vector = vector<float>();
                return_vector.insert(return_vector.end(), a.begin(), a.end());
                return_vector.insert(return_vector.end(), b.begin(), b.end());
                return return_vector;
            }
            case 6:
            {
                vector<float> a_data{1, 2, 3, 4};
                vector<float> a = a_data;
                vector<float> b_data(0);
                vector<float> b = b_data;
                vector<float> c_data{5, 6, 7, 8};
                vector<float> c = c_data;
                auto return_vector = vector<float>();
                return_vector.insert(return_vector.end(), a.begin(), a.end());
                return_vector.insert(return_vector.end(), b.begin(), b.end());
                return_vector.insert(return_vector.end(), c.begin(), c.end());
                return return_vector;
            }
            case 7:
            {
                vector<float> a_data{1, 2, 3, 4};
                vector<float> a = a_data;
                vector<float> b_data(0);
                vector<float> b = b_data;
                vector<float> c_data{5, 6, 7, 8};
                vector<float> c = c_data;
                auto return_vector = vector<float>();
                return_vector.insert(return_vector.end(), a.begin(), a.end());
                return_vector.insert(return_vector.end(), b.begin(), b.end());
                return_vector.insert(return_vector.end(), c.begin(), c.end());
                return return_vector;
            }
            default: return vector<float>();
            }
        }

        template <>
        vector<float> generate_output<op::Concat, float>(int option)
        {
            switch (option)
            {
            case 0:
            {
                vector<float> result =
                    vector<float>{2, 4, 1, 2, 4, 2, 3, 5, 8, 16, 8, 16, 32, 7, 11, 13};
                auto return_vector = vector<float>();
                return_vector.insert(return_vector.end(), result.begin(), result.end());
                return return_vector;
            }
            case 1:
            {
                vector<float> result =
                    vector<float>{2, 4, 8, 16, 1, 2, 4, 8, 16, 32, 2, 3, 5, 7, 11, 13};
                auto return_vector = vector<float>();
                return_vector.insert(return_vector.end(), result.begin(), result.end());
                return return_vector;
            }
            case 2:
            {
                vector<float> result = vector<float>{2, 4, 8, 16, 1, 2, 4, 8, 16, 32, 18, 19};
                auto return_vector = vector<float>();
                return_vector.insert(return_vector.end(), result.begin(), result.end());
                return return_vector;
            }
            case 3:
            {
                vector<float> result = vector<float>{1, 2, 3};
                auto return_vector = vector<float>();
                return_vector.insert(return_vector.end(), result.begin(), result.end());
                return return_vector;
            }
            case 4:
            {
                vector<float> result = vector<float>{1, 2, 3};
                auto return_vector = vector<float>();
                return_vector.insert(return_vector.end(), result.begin(), result.end());
                return return_vector;
            }
            case 5:
            {
                vector<float> result = vector<float>{1, 2, 3, 4};
                auto return_vector = vector<float>();
                return_vector.insert(return_vector.end(), result.begin(), result.end());
                return return_vector;
            }
            case 6:
            {
                vector<float> result = vector<float>{1, 2, 3, 4, 5, 6, 7, 8};
                auto return_vector = vector<float>();
                return_vector.insert(return_vector.end(), result.begin(), result.end());
                return return_vector;
            }
            case 7:
            {
                vector<float> result = vector<float>{1, 5, 2, 6, 3, 7, 4, 8};
                auto return_vector = vector<float>();
                return_vector.insert(return_vector.end(), result.begin(), result.end());
                return return_vector;
            }
            default: return vector<float>();
            }
        }
    }
}