// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSRESPONSEBODYINVOCATIONSINVOCATIONINVOKENODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSRESPONSEBODYINVOCATIONSINVOCATIONINVOKENODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes& obj) { 
      DARABONBA_PTR_TO_JSON(InvokeNode, invokeNode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(InvokeNode, invokeNode_);
    };
    DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes() = default ;
    DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes(const DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes &) = default ;
    DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes(DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes &&) = default ;
    DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes() = default ;
    DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes& operator=(const DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes &) = default ;
    DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes& operator=(DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->invokeNode_ != nullptr; };
    // invokeNode Field Functions 
    bool hasInvokeNode() const { return this->invokeNode_ != nullptr;};
    void deleteInvokeNode() { this->invokeNode_ = nullptr;};
    inline const vector<Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode> & invokeNode() const { DARABONBA_PTR_GET_CONST(invokeNode_, vector<Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode>) };
    inline vector<Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode> invokeNode() { DARABONBA_PTR_GET(invokeNode_, vector<Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode>) };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes& setInvokeNode(const vector<Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode> & invokeNode) { DARABONBA_PTR_SET_VALUE(invokeNode_, invokeNode) };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes& setInvokeNode(vector<Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode> && invokeNode) { DARABONBA_PTR_SET_RVALUE(invokeNode_, invokeNode) };


  protected:
    // The command execution records of the node.
    std::shared_ptr<vector<Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode>> invokeNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
