// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateResourceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupOrder, resourceGroupOrder_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupOrder, resourceGroupOrder_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateResourceGroupResponseBody() = default ;
    CreateResourceGroupResponseBody(const CreateResourceGroupResponseBody &) = default ;
    CreateResourceGroupResponseBody(CreateResourceGroupResponseBody &&) = default ;
    CreateResourceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceGroupResponseBody() = default ;
    CreateResourceGroupResponseBody& operator=(const CreateResourceGroupResponseBody &) = default ;
    CreateResourceGroupResponseBody& operator=(CreateResourceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceGroupOrder : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceGroupOrder& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(OrderId, orderId_);
        DARABONBA_PTR_TO_JSON(OrderInstanceId, orderInstanceId_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceGroupOrder& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
        DARABONBA_PTR_FROM_JSON(OrderInstanceId, orderInstanceId_);
      };
      ResourceGroupOrder() = default ;
      ResourceGroupOrder(const ResourceGroupOrder &) = default ;
      ResourceGroupOrder(ResourceGroupOrder &&) = default ;
      ResourceGroupOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceGroupOrder() = default ;
      ResourceGroupOrder& operator=(const ResourceGroupOrder &) = default ;
      ResourceGroupOrder& operator=(ResourceGroupOrder &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->orderId_ == nullptr && this->orderInstanceId_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline ResourceGroupOrder& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
      inline ResourceGroupOrder& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // orderInstanceId Field Functions 
      bool hasOrderInstanceId() const { return this->orderInstanceId_ != nullptr;};
      void deleteOrderInstanceId() { this->orderInstanceId_ = nullptr;};
      inline string getOrderInstanceId() const { DARABONBA_PTR_GET_DEFAULT(orderInstanceId_, "") };
      inline ResourceGroupOrder& setOrderInstanceId(string orderInstanceId) { DARABONBA_PTR_SET_VALUE(orderInstanceId_, orderInstanceId) };


    protected:
      // The ID of the serverless resource group.
      shared_ptr<string> id_ {};
      // The ID of the order that is used to create the serverless resource group.
      shared_ptr<int64_t> orderId_ {};
      // The instance ID of the order that is used to create the serverless resource group.
      shared_ptr<string> orderInstanceId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceGroupOrder_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateResourceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupOrder Field Functions 
    bool hasResourceGroupOrder() const { return this->resourceGroupOrder_ != nullptr;};
    void deleteResourceGroupOrder() { this->resourceGroupOrder_ = nullptr;};
    inline const CreateResourceGroupResponseBody::ResourceGroupOrder & getResourceGroupOrder() const { DARABONBA_PTR_GET_CONST(resourceGroupOrder_, CreateResourceGroupResponseBody::ResourceGroupOrder) };
    inline CreateResourceGroupResponseBody::ResourceGroupOrder getResourceGroupOrder() { DARABONBA_PTR_GET(resourceGroupOrder_, CreateResourceGroupResponseBody::ResourceGroupOrder) };
    inline CreateResourceGroupResponseBody& setResourceGroupOrder(const CreateResourceGroupResponseBody::ResourceGroupOrder & resourceGroupOrder) { DARABONBA_PTR_SET_VALUE(resourceGroupOrder_, resourceGroupOrder) };
    inline CreateResourceGroupResponseBody& setResourceGroupOrder(CreateResourceGroupResponseBody::ResourceGroupOrder && resourceGroupOrder) { DARABONBA_PTR_SET_RVALUE(resourceGroupOrder_, resourceGroupOrder) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateResourceGroupResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the order that is used to create the serverless resource group.
    shared_ptr<CreateResourceGroupResponseBody::ResourceGroupOrder> resourceGroupOrder_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
