// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNATGATEWAYATTRIBUTERESPONSEBODYLOGDELIVERY_HPP_
#define ALIBABACLOUD_MODELS_GETNATGATEWAYATTRIBUTERESPONSEBODYLOGDELIVERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetNatGatewayAttributeResponseBodyLogDelivery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNatGatewayAttributeResponseBodyLogDelivery& obj) { 
      DARABONBA_PTR_TO_JSON(DeliverLogsErrorMessage, deliverLogsErrorMessage_);
      DARABONBA_PTR_TO_JSON(DeliveryStatus, deliveryStatus_);
      DARABONBA_PTR_TO_JSON(LogDeliveryType, logDeliveryType_);
      DARABONBA_PTR_TO_JSON(LogDestination, logDestination_);
    };
    friend void from_json(const Darabonba::Json& j, GetNatGatewayAttributeResponseBodyLogDelivery& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliverLogsErrorMessage, deliverLogsErrorMessage_);
      DARABONBA_PTR_FROM_JSON(DeliveryStatus, deliveryStatus_);
      DARABONBA_PTR_FROM_JSON(LogDeliveryType, logDeliveryType_);
      DARABONBA_PTR_FROM_JSON(LogDestination, logDestination_);
    };
    GetNatGatewayAttributeResponseBodyLogDelivery() = default ;
    GetNatGatewayAttributeResponseBodyLogDelivery(const GetNatGatewayAttributeResponseBodyLogDelivery &) = default ;
    GetNatGatewayAttributeResponseBodyLogDelivery(GetNatGatewayAttributeResponseBodyLogDelivery &&) = default ;
    GetNatGatewayAttributeResponseBodyLogDelivery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNatGatewayAttributeResponseBodyLogDelivery() = default ;
    GetNatGatewayAttributeResponseBodyLogDelivery& operator=(const GetNatGatewayAttributeResponseBodyLogDelivery &) = default ;
    GetNatGatewayAttributeResponseBodyLogDelivery& operator=(GetNatGatewayAttributeResponseBodyLogDelivery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deliverLogsErrorMessage_ != nullptr
        && this->deliveryStatus_ != nullptr && this->logDeliveryType_ != nullptr && this->logDestination_ != nullptr; };
    // deliverLogsErrorMessage Field Functions 
    bool hasDeliverLogsErrorMessage() const { return this->deliverLogsErrorMessage_ != nullptr;};
    void deleteDeliverLogsErrorMessage() { this->deliverLogsErrorMessage_ = nullptr;};
    inline string deliverLogsErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(deliverLogsErrorMessage_, "") };
    inline GetNatGatewayAttributeResponseBodyLogDelivery& setDeliverLogsErrorMessage(string deliverLogsErrorMessage) { DARABONBA_PTR_SET_VALUE(deliverLogsErrorMessage_, deliverLogsErrorMessage) };


    // deliveryStatus Field Functions 
    bool hasDeliveryStatus() const { return this->deliveryStatus_ != nullptr;};
    void deleteDeliveryStatus() { this->deliveryStatus_ = nullptr;};
    inline string deliveryStatus() const { DARABONBA_PTR_GET_DEFAULT(deliveryStatus_, "") };
    inline GetNatGatewayAttributeResponseBodyLogDelivery& setDeliveryStatus(string deliveryStatus) { DARABONBA_PTR_SET_VALUE(deliveryStatus_, deliveryStatus) };


    // logDeliveryType Field Functions 
    bool hasLogDeliveryType() const { return this->logDeliveryType_ != nullptr;};
    void deleteLogDeliveryType() { this->logDeliveryType_ = nullptr;};
    inline string logDeliveryType() const { DARABONBA_PTR_GET_DEFAULT(logDeliveryType_, "") };
    inline GetNatGatewayAttributeResponseBodyLogDelivery& setLogDeliveryType(string logDeliveryType) { DARABONBA_PTR_SET_VALUE(logDeliveryType_, logDeliveryType) };


    // logDestination Field Functions 
    bool hasLogDestination() const { return this->logDestination_ != nullptr;};
    void deleteLogDestination() { this->logDestination_ = nullptr;};
    inline string logDestination() const { DARABONBA_PTR_GET_DEFAULT(logDestination_, "") };
    inline GetNatGatewayAttributeResponseBodyLogDelivery& setLogDestination(string logDestination) { DARABONBA_PTR_SET_VALUE(logDestination_, logDestination) };


  protected:
    std::shared_ptr<string> deliverLogsErrorMessage_ = nullptr;
    std::shared_ptr<string> deliveryStatus_ = nullptr;
    std::shared_ptr<string> logDeliveryType_ = nullptr;
    std::shared_ptr<string> logDestination_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
