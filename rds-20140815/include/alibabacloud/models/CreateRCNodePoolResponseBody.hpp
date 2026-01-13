// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERCNODEPOOLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERCNODEPOOLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateRCNodePoolResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRCNodePoolResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIdSets, instanceIdSets_);
      DARABONBA_PTR_TO_JSON(NodePoolId, nodePoolId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRCNodePoolResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIdSets, instanceIdSets_);
      DARABONBA_PTR_FROM_JSON(NodePoolId, nodePoolId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateRCNodePoolResponseBody() = default ;
    CreateRCNodePoolResponseBody(const CreateRCNodePoolResponseBody &) = default ;
    CreateRCNodePoolResponseBody(CreateRCNodePoolResponseBody &&) = default ;
    CreateRCNodePoolResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRCNodePoolResponseBody() = default ;
    CreateRCNodePoolResponseBody& operator=(const CreateRCNodePoolResponseBody &) = default ;
    CreateRCNodePoolResponseBody& operator=(CreateRCNodePoolResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIdSets_ == nullptr
        && this->nodePoolId_ == nullptr && this->orderId_ == nullptr && this->requestId_ == nullptr; };
    // instanceIdSets Field Functions 
    bool hasInstanceIdSets() const { return this->instanceIdSets_ != nullptr;};
    void deleteInstanceIdSets() { this->instanceIdSets_ = nullptr;};
    inline const vector<string> & getInstanceIdSets() const { DARABONBA_PTR_GET_CONST(instanceIdSets_, vector<string>) };
    inline vector<string> getInstanceIdSets() { DARABONBA_PTR_GET(instanceIdSets_, vector<string>) };
    inline CreateRCNodePoolResponseBody& setInstanceIdSets(const vector<string> & instanceIdSets) { DARABONBA_PTR_SET_VALUE(instanceIdSets_, instanceIdSets) };
    inline CreateRCNodePoolResponseBody& setInstanceIdSets(vector<string> && instanceIdSets) { DARABONBA_PTR_SET_RVALUE(instanceIdSets_, instanceIdSets) };


    // nodePoolId Field Functions 
    bool hasNodePoolId() const { return this->nodePoolId_ != nullptr;};
    void deleteNodePoolId() { this->nodePoolId_ = nullptr;};
    inline string getNodePoolId() const { DARABONBA_PTR_GET_DEFAULT(nodePoolId_, "") };
    inline CreateRCNodePoolResponseBody& setNodePoolId(string nodePoolId) { DARABONBA_PTR_SET_VALUE(nodePoolId_, nodePoolId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateRCNodePoolResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRCNodePoolResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance IDs.
    shared_ptr<vector<string>> instanceIdSets_ {};
    // The node pool ID.
    shared_ptr<string> nodePoolId_ {};
    // The order ID.
    shared_ptr<string> orderId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
