// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class CreateServiceInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MarketInstanceId, marketInstanceId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MarketInstanceId, marketInstanceId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CreateServiceInstanceResponseBody() = default ;
    CreateServiceInstanceResponseBody(const CreateServiceInstanceResponseBody &) = default ;
    CreateServiceInstanceResponseBody(CreateServiceInstanceResponseBody &&) = default ;
    CreateServiceInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceInstanceResponseBody() = default ;
    CreateServiceInstanceResponseBody& operator=(const CreateServiceInstanceResponseBody &) = default ;
    CreateServiceInstanceResponseBody& operator=(CreateServiceInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->marketInstanceId_ != nullptr
        && this->orderId_ != nullptr && this->requestId_ != nullptr && this->serviceInstanceId_ != nullptr && this->status_ != nullptr; };
    // marketInstanceId Field Functions 
    bool hasMarketInstanceId() const { return this->marketInstanceId_ != nullptr;};
    void deleteMarketInstanceId() { this->marketInstanceId_ = nullptr;};
    inline string marketInstanceId() const { DARABONBA_PTR_GET_DEFAULT(marketInstanceId_, "") };
    inline CreateServiceInstanceResponseBody& setMarketInstanceId(string marketInstanceId) { DARABONBA_PTR_SET_VALUE(marketInstanceId_, marketInstanceId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateServiceInstanceResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateServiceInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string serviceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline CreateServiceInstanceResponseBody& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateServiceInstanceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The MartketInstance ID.
    std::shared_ptr<string> marketInstanceId_ = nullptr;
    // The order ID.
    std::shared_ptr<string> orderId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The service instance ID.
    std::shared_ptr<string> serviceInstanceId_ = nullptr;
    // The status of the service instance. Valid values:
    // 
    // *   **Created**
    // *   **Deploying**
    // *   **DeployedFailed**
    // *   **Deployed**
    // *   **Upgrading**
    // *   **Deleting**
    // *   **Deleted**
    // *   **DeletedFailed**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
