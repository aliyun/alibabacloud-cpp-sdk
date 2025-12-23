// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDELIVERYCHANNELREQUESTRESOURCECHANGEDELIVERY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDELIVERYCHANNELREQUESTRESOURCECHANGEDELIVERY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class UpdateDeliveryChannelRequestResourceChangeDelivery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDeliveryChannelRequestResourceChangeDelivery& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(SlsProperties, slsProperties_);
      DARABONBA_PTR_TO_JSON(TargetArn, targetArn_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDeliveryChannelRequestResourceChangeDelivery& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(SlsProperties, slsProperties_);
      DARABONBA_PTR_FROM_JSON(TargetArn, targetArn_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    UpdateDeliveryChannelRequestResourceChangeDelivery() = default ;
    UpdateDeliveryChannelRequestResourceChangeDelivery(const UpdateDeliveryChannelRequestResourceChangeDelivery &) = default ;
    UpdateDeliveryChannelRequestResourceChangeDelivery(UpdateDeliveryChannelRequestResourceChangeDelivery &&) = default ;
    UpdateDeliveryChannelRequestResourceChangeDelivery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDeliveryChannelRequestResourceChangeDelivery() = default ;
    UpdateDeliveryChannelRequestResourceChangeDelivery& operator=(const UpdateDeliveryChannelRequestResourceChangeDelivery &) = default ;
    UpdateDeliveryChannelRequestResourceChangeDelivery& operator=(UpdateDeliveryChannelRequestResourceChangeDelivery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && return this->slsProperties_ == nullptr && return this->targetArn_ == nullptr && return this->targetType_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline string enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, "") };
    inline UpdateDeliveryChannelRequestResourceChangeDelivery& setEnabled(string enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // slsProperties Field Functions 
    bool hasSlsProperties() const { return this->slsProperties_ != nullptr;};
    void deleteSlsProperties() { this->slsProperties_ = nullptr;};
    inline const Models::UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties & slsProperties() const { DARABONBA_PTR_GET_CONST(slsProperties_, Models::UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties) };
    inline Models::UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties slsProperties() { DARABONBA_PTR_GET(slsProperties_, Models::UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties) };
    inline UpdateDeliveryChannelRequestResourceChangeDelivery& setSlsProperties(const Models::UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties & slsProperties) { DARABONBA_PTR_SET_VALUE(slsProperties_, slsProperties) };
    inline UpdateDeliveryChannelRequestResourceChangeDelivery& setSlsProperties(Models::UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties && slsProperties) { DARABONBA_PTR_SET_RVALUE(slsProperties_, slsProperties) };


    // targetArn Field Functions 
    bool hasTargetArn() const { return this->targetArn_ != nullptr;};
    void deleteTargetArn() { this->targetArn_ = nullptr;};
    inline string targetArn() const { DARABONBA_PTR_GET_DEFAULT(targetArn_, "") };
    inline UpdateDeliveryChannelRequestResourceChangeDelivery& setTargetArn(string targetArn) { DARABONBA_PTR_SET_VALUE(targetArn_, targetArn) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline UpdateDeliveryChannelRequestResourceChangeDelivery& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // Specifies whether to enable delivery of resource configuration change events. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<string> enabled_ = nullptr;
    // The Simple Log Service configurations.
    std::shared_ptr<Models::UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties> slsProperties_ = nullptr;
    // The ARN of the delivery destination. Valid values:
    // 
    // *   If you set `TargetType` to `OSS`, you must set `TargetArn` to the ARN of a bucket whose name is prefixed with `resourcecenter-`.
    // *   If you set `TargetType` to `SLS`, you must set `TargetArn` to the ARN of a Logstore whose name is prefixed with `resourcecenter-`.
    std::shared_ptr<string> targetArn_ = nullptr;
    // The type of the delivery destination.
    // 
    // Set the value to `SLS`.
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
