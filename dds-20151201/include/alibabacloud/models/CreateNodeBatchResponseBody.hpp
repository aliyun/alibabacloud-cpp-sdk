// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENODEBATCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATENODEBATCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class CreateNodeBatchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNodeBatchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNodeBatchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateNodeBatchResponseBody() = default ;
    CreateNodeBatchResponseBody(const CreateNodeBatchResponseBody &) = default ;
    CreateNodeBatchResponseBody(CreateNodeBatchResponseBody &&) = default ;
    CreateNodeBatchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNodeBatchResponseBody() = default ;
    CreateNodeBatchResponseBody& operator=(const CreateNodeBatchResponseBody &) = default ;
    CreateNodeBatchResponseBody& operator=(CreateNodeBatchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeId_ == nullptr
        && this->orderId_ == nullptr && this->requestId_ == nullptr; };
    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline CreateNodeBatchResponseBody& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateNodeBatchResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateNodeBatchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the added mongos or shard node.
    shared_ptr<string> nodeId_ {};
    // The ID of the order.
    shared_ptr<string> orderId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
