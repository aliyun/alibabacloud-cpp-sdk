// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIACCOUNTDELIVERYCHANNELRESPONSEBODYRESOURCECHANGEDELIVERY_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIACCOUNTDELIVERYCHANNELRESPONSEBODYRESOURCECHANGEDELIVERY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMultiAccountDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class GetMultiAccountDeliveryChannelResponseBodyResourceChangeDelivery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultiAccountDeliveryChannelResponseBodyResourceChangeDelivery& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(SlsProperties, slsProperties_);
      DARABONBA_PTR_TO_JSON(TargetArn, targetArn_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultiAccountDeliveryChannelResponseBodyResourceChangeDelivery& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(SlsProperties, slsProperties_);
      DARABONBA_PTR_FROM_JSON(TargetArn, targetArn_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    GetMultiAccountDeliveryChannelResponseBodyResourceChangeDelivery() = default ;
    GetMultiAccountDeliveryChannelResponseBodyResourceChangeDelivery(const GetMultiAccountDeliveryChannelResponseBodyResourceChangeDelivery &) = default ;
    GetMultiAccountDeliveryChannelResponseBodyResourceChangeDelivery(GetMultiAccountDeliveryChannelResponseBodyResourceChangeDelivery &&) = default ;
    GetMultiAccountDeliveryChannelResponseBodyResourceChangeDelivery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultiAccountDeliveryChannelResponseBodyResourceChangeDelivery() = default ;
    GetMultiAccountDeliveryChannelResponseBodyResourceChangeDelivery& operator=(const GetMultiAccountDeliveryChannelResponseBodyResourceChangeDelivery &) = default ;
    GetMultiAccountDeliveryChannelResponseBodyResourceChangeDelivery& operator=(GetMultiAccountDeliveryChannelResponseBodyResourceChangeDelivery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr
        && this->slsProperties_ != nullptr && this->targetArn_ != nullptr && this->targetType_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline string enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, "") };
    inline GetMultiAccountDeliveryChannelResponseBodyResourceChangeDelivery& setEnabled(string enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // slsProperties Field Functions 
    bool hasSlsProperties() const { return this->slsProperties_ != nullptr;};
    void deleteSlsProperties() { this->slsProperties_ = nullptr;};
    inline const Models::GetMultiAccountDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties & slsProperties() const { DARABONBA_PTR_GET_CONST(slsProperties_, Models::GetMultiAccountDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties) };
    inline Models::GetMultiAccountDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties slsProperties() { DARABONBA_PTR_GET(slsProperties_, Models::GetMultiAccountDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties) };
    inline GetMultiAccountDeliveryChannelResponseBodyResourceChangeDelivery& setSlsProperties(const Models::GetMultiAccountDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties & slsProperties) { DARABONBA_PTR_SET_VALUE(slsProperties_, slsProperties) };
    inline GetMultiAccountDeliveryChannelResponseBodyResourceChangeDelivery& setSlsProperties(Models::GetMultiAccountDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties && slsProperties) { DARABONBA_PTR_SET_RVALUE(slsProperties_, slsProperties) };


    // targetArn Field Functions 
    bool hasTargetArn() const { return this->targetArn_ != nullptr;};
    void deleteTargetArn() { this->targetArn_ = nullptr;};
    inline string targetArn() const { DARABONBA_PTR_GET_DEFAULT(targetArn_, "") };
    inline GetMultiAccountDeliveryChannelResponseBodyResourceChangeDelivery& setTargetArn(string targetArn) { DARABONBA_PTR_SET_VALUE(targetArn_, targetArn) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline GetMultiAccountDeliveryChannelResponseBodyResourceChangeDelivery& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    std::shared_ptr<string> enabled_ = nullptr;
    // The Simple Log Service configurations.
    std::shared_ptr<Models::GetMultiAccountDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties> slsProperties_ = nullptr;
    // The ARN of the delivery destination.
    std::shared_ptr<string> targetArn_ = nullptr;
    // The type of the destination.
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
