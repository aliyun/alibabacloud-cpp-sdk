// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCELERATORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCELERATORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class CreateAcceleratorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAcceleratorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAcceleratorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAcceleratorResponseBody() = default ;
    CreateAcceleratorResponseBody(const CreateAcceleratorResponseBody &) = default ;
    CreateAcceleratorResponseBody(CreateAcceleratorResponseBody &&) = default ;
    CreateAcceleratorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAcceleratorResponseBody() = default ;
    CreateAcceleratorResponseBody& operator=(const CreateAcceleratorResponseBody &) = default ;
    CreateAcceleratorResponseBody& operator=(CreateAcceleratorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->orderId_ == nullptr && this->requestId_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline CreateAcceleratorResponseBody& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateAcceleratorResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAcceleratorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the GA instance.
    shared_ptr<string> acceleratorId_ {};
    // Order ID.
    // 
    // <props="china">
    // 
    // The order ID. This parameter is returned when \\`InstanceChargeType\\` is set to \\`PREPAY\\` (subscription). If \\`AutoPay\\` is set to \\`false\\`, go to the [Order Hub](https://usercenter2.aliyun.com/order/list) on the Alibaba Cloud China site to complete the payment.
    // 
    // 
    // 
    // <props="intl">
    // 
    // If you are using the Alibaba Cloud International site and \\`AutoPay\\` is set to \\`false\\`, go to the [Order Hub](https://usercenter2-intl.aliyun.com/order/list) to complete the payment.
    shared_ptr<string> orderId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
