// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRACEINFONODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRACEINFONODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeTraceInfoNodeResponseBodyNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeTraceInfoNodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTraceInfoNodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Node, node_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTraceInfoNodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Node, node_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeTraceInfoNodeResponseBody() = default ;
    DescribeTraceInfoNodeResponseBody(const DescribeTraceInfoNodeResponseBody &) = default ;
    DescribeTraceInfoNodeResponseBody(DescribeTraceInfoNodeResponseBody &&) = default ;
    DescribeTraceInfoNodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTraceInfoNodeResponseBody() = default ;
    DescribeTraceInfoNodeResponseBody& operator=(const DescribeTraceInfoNodeResponseBody &) = default ;
    DescribeTraceInfoNodeResponseBody& operator=(DescribeTraceInfoNodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->node_ != nullptr
        && this->requestId_ != nullptr; };
    // node Field Functions 
    bool hasNode() const { return this->node_ != nullptr;};
    void deleteNode() { this->node_ = nullptr;};
    inline const DescribeTraceInfoNodeResponseBodyNode & node() const { DARABONBA_PTR_GET_CONST(node_, DescribeTraceInfoNodeResponseBodyNode) };
    inline DescribeTraceInfoNodeResponseBodyNode node() { DARABONBA_PTR_GET(node_, DescribeTraceInfoNodeResponseBodyNode) };
    inline DescribeTraceInfoNodeResponseBody& setNode(const DescribeTraceInfoNodeResponseBodyNode & node) { DARABONBA_PTR_SET_VALUE(node_, node) };
    inline DescribeTraceInfoNodeResponseBody& setNode(DescribeTraceInfoNodeResponseBodyNode && node) { DARABONBA_PTR_SET_RVALUE(node_, node) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTraceInfoNodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the node.
    std::shared_ptr<DescribeTraceInfoNodeResponseBodyNode> node_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
