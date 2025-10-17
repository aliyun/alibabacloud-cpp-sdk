// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENDFILERESULTSRESPONSEBODYINVOCATIONSINVOCATIONINVOKENODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENDFILERESULTSRESPONSEBODYINVOCATIONSINVOCATIONINVOKENODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes& obj) { 
      DARABONBA_PTR_TO_JSON(InvokeNode, invokeNode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(InvokeNode, invokeNode_);
    };
    DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes() = default ;
    DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes(const DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes &) = default ;
    DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes(DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes &&) = default ;
    DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes() = default ;
    DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes& operator=(const DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes &) = default ;
    DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes& operator=(DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->invokeNode_ == nullptr; };
    // invokeNode Field Functions 
    bool hasInvokeNode() const { return this->invokeNode_ != nullptr;};
    void deleteInvokeNode() { this->invokeNode_ = nullptr;};
    inline const vector<Models::DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode> & invokeNode() const { DARABONBA_PTR_GET_CONST(invokeNode_, vector<Models::DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode>) };
    inline vector<Models::DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode> invokeNode() { DARABONBA_PTR_GET(invokeNode_, vector<Models::DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode>) };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes& setInvokeNode(const vector<Models::DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode> & invokeNode) { DARABONBA_PTR_SET_VALUE(invokeNode_, invokeNode) };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes& setInvokeNode(vector<Models::DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode> && invokeNode) { DARABONBA_PTR_SET_RVALUE(invokeNode_, invokeNode) };


  protected:
    // The file sending records on a node.
    std::shared_ptr<vector<Models::DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode>> invokeNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
