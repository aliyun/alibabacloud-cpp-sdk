// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNATGATEWAYATTRIBUTEREQUESTLOGDELIVERY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNATGATEWAYATTRIBUTEREQUESTLOGDELIVERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyNatGatewayAttributeRequestLogDelivery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNatGatewayAttributeRequestLogDelivery& obj) { 
      DARABONBA_PTR_TO_JSON(LogDeliveryType, logDeliveryType_);
      DARABONBA_PTR_TO_JSON(LogDestination, logDestination_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNatGatewayAttributeRequestLogDelivery& obj) { 
      DARABONBA_PTR_FROM_JSON(LogDeliveryType, logDeliveryType_);
      DARABONBA_PTR_FROM_JSON(LogDestination, logDestination_);
    };
    ModifyNatGatewayAttributeRequestLogDelivery() = default ;
    ModifyNatGatewayAttributeRequestLogDelivery(const ModifyNatGatewayAttributeRequestLogDelivery &) = default ;
    ModifyNatGatewayAttributeRequestLogDelivery(ModifyNatGatewayAttributeRequestLogDelivery &&) = default ;
    ModifyNatGatewayAttributeRequestLogDelivery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNatGatewayAttributeRequestLogDelivery() = default ;
    ModifyNatGatewayAttributeRequestLogDelivery& operator=(const ModifyNatGatewayAttributeRequestLogDelivery &) = default ;
    ModifyNatGatewayAttributeRequestLogDelivery& operator=(ModifyNatGatewayAttributeRequestLogDelivery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logDeliveryType_ != nullptr
        && this->logDestination_ != nullptr; };
    // logDeliveryType Field Functions 
    bool hasLogDeliveryType() const { return this->logDeliveryType_ != nullptr;};
    void deleteLogDeliveryType() { this->logDeliveryType_ = nullptr;};
    inline string logDeliveryType() const { DARABONBA_PTR_GET_DEFAULT(logDeliveryType_, "") };
    inline ModifyNatGatewayAttributeRequestLogDelivery& setLogDeliveryType(string logDeliveryType) { DARABONBA_PTR_SET_VALUE(logDeliveryType_, logDeliveryType) };


    // logDestination Field Functions 
    bool hasLogDestination() const { return this->logDestination_ != nullptr;};
    void deleteLogDestination() { this->logDestination_ = nullptr;};
    inline string logDestination() const { DARABONBA_PTR_GET_DEFAULT(logDestination_, "") };
    inline ModifyNatGatewayAttributeRequestLogDelivery& setLogDestination(string logDestination) { DARABONBA_PTR_SET_VALUE(logDestination_, logDestination) };


  protected:
    std::shared_ptr<string> logDeliveryType_ = nullptr;
    std::shared_ptr<string> logDestination_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
