// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class CreateInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrderInfo, orderInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderInfo, orderInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateInstanceResponseBody() = default ;
    CreateInstanceResponseBody(const CreateInstanceResponseBody &) = default ;
    CreateInstanceResponseBody(CreateInstanceResponseBody &&) = default ;
    CreateInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceResponseBody() = default ;
    CreateInstanceResponseBody& operator=(const CreateInstanceResponseBody &) = default ;
    CreateInstanceResponseBody& operator=(CreateInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OrderInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OrderInfo& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(OrderId, orderId_);
        DARABONBA_PTR_TO_JSON(StorageInstanceId, storageInstanceId_);
        DARABONBA_PTR_TO_JSON(StorageOrderId, storageOrderId_);
      };
      friend void from_json(const Darabonba::Json& j, OrderInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
        DARABONBA_PTR_FROM_JSON(StorageInstanceId, storageInstanceId_);
        DARABONBA_PTR_FROM_JSON(StorageOrderId, storageOrderId_);
      };
      OrderInfo() = default ;
      OrderInfo(const OrderInfo &) = default ;
      OrderInfo(OrderInfo &&) = default ;
      OrderInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OrderInfo() = default ;
      OrderInfo& operator=(const OrderInfo &) = default ;
      OrderInfo& operator=(OrderInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->orderId_ == nullptr && this->storageInstanceId_ == nullptr && this->storageOrderId_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline OrderInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
      inline OrderInfo& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // storageInstanceId Field Functions 
      bool hasStorageInstanceId() const { return this->storageInstanceId_ != nullptr;};
      void deleteStorageInstanceId() { this->storageInstanceId_ = nullptr;};
      inline string getStorageInstanceId() const { DARABONBA_PTR_GET_DEFAULT(storageInstanceId_, "") };
      inline OrderInfo& setStorageInstanceId(string storageInstanceId) { DARABONBA_PTR_SET_VALUE(storageInstanceId_, storageInstanceId) };


      // storageOrderId Field Functions 
      bool hasStorageOrderId() const { return this->storageOrderId_ != nullptr;};
      void deleteStorageOrderId() { this->storageOrderId_ = nullptr;};
      inline int64_t getStorageOrderId() const { DARABONBA_PTR_GET_DEFAULT(storageOrderId_, 0L) };
      inline OrderInfo& setStorageOrderId(int64_t storageOrderId) { DARABONBA_PTR_SET_VALUE(storageOrderId_, storageOrderId) };


    protected:
      shared_ptr<string> instanceId_ {};
      shared_ptr<int64_t> orderId_ {};
      shared_ptr<string> storageInstanceId_ {};
      shared_ptr<int64_t> storageOrderId_ {};
    };

    virtual bool empty() const override { return this->orderInfo_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // orderInfo Field Functions 
    bool hasOrderInfo() const { return this->orderInfo_ != nullptr;};
    void deleteOrderInfo() { this->orderInfo_ = nullptr;};
    inline const CreateInstanceResponseBody::OrderInfo & getOrderInfo() const { DARABONBA_PTR_GET_CONST(orderInfo_, CreateInstanceResponseBody::OrderInfo) };
    inline CreateInstanceResponseBody::OrderInfo getOrderInfo() { DARABONBA_PTR_GET(orderInfo_, CreateInstanceResponseBody::OrderInfo) };
    inline CreateInstanceResponseBody& setOrderInfo(const CreateInstanceResponseBody::OrderInfo & orderInfo) { DARABONBA_PTR_SET_VALUE(orderInfo_, orderInfo) };
    inline CreateInstanceResponseBody& setOrderInfo(CreateInstanceResponseBody::OrderInfo && orderInfo) { DARABONBA_PTR_SET_RVALUE(orderInfo_, orderInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateInstanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<CreateInstanceResponseBody::OrderInfo> orderInfo_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
