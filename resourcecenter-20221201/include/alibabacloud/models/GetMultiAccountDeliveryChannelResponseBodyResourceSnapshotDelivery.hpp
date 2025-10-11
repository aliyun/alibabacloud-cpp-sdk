// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIACCOUNTDELIVERYCHANNELRESPONSEBODYRESOURCESNAPSHOTDELIVERY_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIACCOUNTDELIVERYCHANNELRESPONSEBODYRESOURCESNAPSHOTDELIVERY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDelivery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDelivery& obj) { 
      DARABONBA_PTR_TO_JSON(CustomExpression, customExpression_);
      DARABONBA_PTR_TO_JSON(DeliveryTime, deliveryTime_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(SlsProperties, slsProperties_);
      DARABONBA_PTR_TO_JSON(TargetArn, targetArn_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDelivery& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomExpression, customExpression_);
      DARABONBA_PTR_FROM_JSON(DeliveryTime, deliveryTime_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(SlsProperties, slsProperties_);
      DARABONBA_PTR_FROM_JSON(TargetArn, targetArn_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDelivery() = default ;
    GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDelivery(const GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDelivery &) = default ;
    GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDelivery(GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDelivery &&) = default ;
    GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDelivery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDelivery() = default ;
    GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDelivery& operator=(const GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDelivery &) = default ;
    GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDelivery& operator=(GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDelivery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customExpression_ != nullptr
        && this->deliveryTime_ != nullptr && this->enabled_ != nullptr && this->slsProperties_ != nullptr && this->targetArn_ != nullptr && this->targetType_ != nullptr; };
    // customExpression Field Functions 
    bool hasCustomExpression() const { return this->customExpression_ != nullptr;};
    void deleteCustomExpression() { this->customExpression_ = nullptr;};
    inline string customExpression() const { DARABONBA_PTR_GET_DEFAULT(customExpression_, "") };
    inline GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDelivery& setCustomExpression(string customExpression) { DARABONBA_PTR_SET_VALUE(customExpression_, customExpression) };


    // deliveryTime Field Functions 
    bool hasDeliveryTime() const { return this->deliveryTime_ != nullptr;};
    void deleteDeliveryTime() { this->deliveryTime_ = nullptr;};
    inline string deliveryTime() const { DARABONBA_PTR_GET_DEFAULT(deliveryTime_, "") };
    inline GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDelivery& setDeliveryTime(string deliveryTime) { DARABONBA_PTR_SET_VALUE(deliveryTime_, deliveryTime) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline string enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, "") };
    inline GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDelivery& setEnabled(string enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // slsProperties Field Functions 
    bool hasSlsProperties() const { return this->slsProperties_ != nullptr;};
    void deleteSlsProperties() { this->slsProperties_ = nullptr;};
    inline const Models::GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties & slsProperties() const { DARABONBA_PTR_GET_CONST(slsProperties_, Models::GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties) };
    inline Models::GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties slsProperties() { DARABONBA_PTR_GET(slsProperties_, Models::GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties) };
    inline GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDelivery& setSlsProperties(const Models::GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties & slsProperties) { DARABONBA_PTR_SET_VALUE(slsProperties_, slsProperties) };
    inline GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDelivery& setSlsProperties(Models::GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties && slsProperties) { DARABONBA_PTR_SET_RVALUE(slsProperties_, slsProperties) };


    // targetArn Field Functions 
    bool hasTargetArn() const { return this->targetArn_ != nullptr;};
    void deleteTargetArn() { this->targetArn_ = nullptr;};
    inline string targetArn() const { DARABONBA_PTR_GET_DEFAULT(targetArn_, "") };
    inline GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDelivery& setTargetArn(string targetArn) { DARABONBA_PTR_SET_VALUE(targetArn_, targetArn) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDelivery& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The custom expression.
    std::shared_ptr<string> customExpression_ = nullptr;
    // The delivery time.
    std::shared_ptr<string> deliveryTime_ = nullptr;
    std::shared_ptr<string> enabled_ = nullptr;
    // The Simple Log Service configurations.
    std::shared_ptr<Models::GetMultiAccountDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties> slsProperties_ = nullptr;
    // The ARN of the delivery destination.
    std::shared_ptr<string> targetArn_ = nullptr;
    // The type of the destination.
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
