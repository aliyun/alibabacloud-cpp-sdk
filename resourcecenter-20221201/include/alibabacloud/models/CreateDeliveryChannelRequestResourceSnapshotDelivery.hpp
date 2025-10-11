// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDELIVERYCHANNELREQUESTRESOURCESNAPSHOTDELIVERY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDELIVERYCHANNELREQUESTRESOURCESNAPSHOTDELIVERY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class CreateDeliveryChannelRequestResourceSnapshotDelivery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDeliveryChannelRequestResourceSnapshotDelivery& obj) { 
      DARABONBA_PTR_TO_JSON(CustomExpression, customExpression_);
      DARABONBA_PTR_TO_JSON(DeliveryTime, deliveryTime_);
      DARABONBA_PTR_TO_JSON(SlsProperties, slsProperties_);
      DARABONBA_PTR_TO_JSON(TargetArn, targetArn_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDeliveryChannelRequestResourceSnapshotDelivery& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomExpression, customExpression_);
      DARABONBA_PTR_FROM_JSON(DeliveryTime, deliveryTime_);
      DARABONBA_PTR_FROM_JSON(SlsProperties, slsProperties_);
      DARABONBA_PTR_FROM_JSON(TargetArn, targetArn_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    CreateDeliveryChannelRequestResourceSnapshotDelivery() = default ;
    CreateDeliveryChannelRequestResourceSnapshotDelivery(const CreateDeliveryChannelRequestResourceSnapshotDelivery &) = default ;
    CreateDeliveryChannelRequestResourceSnapshotDelivery(CreateDeliveryChannelRequestResourceSnapshotDelivery &&) = default ;
    CreateDeliveryChannelRequestResourceSnapshotDelivery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDeliveryChannelRequestResourceSnapshotDelivery() = default ;
    CreateDeliveryChannelRequestResourceSnapshotDelivery& operator=(const CreateDeliveryChannelRequestResourceSnapshotDelivery &) = default ;
    CreateDeliveryChannelRequestResourceSnapshotDelivery& operator=(CreateDeliveryChannelRequestResourceSnapshotDelivery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customExpression_ != nullptr
        && this->deliveryTime_ != nullptr && this->slsProperties_ != nullptr && this->targetArn_ != nullptr && this->targetType_ != nullptr; };
    // customExpression Field Functions 
    bool hasCustomExpression() const { return this->customExpression_ != nullptr;};
    void deleteCustomExpression() { this->customExpression_ = nullptr;};
    inline string customExpression() const { DARABONBA_PTR_GET_DEFAULT(customExpression_, "") };
    inline CreateDeliveryChannelRequestResourceSnapshotDelivery& setCustomExpression(string customExpression) { DARABONBA_PTR_SET_VALUE(customExpression_, customExpression) };


    // deliveryTime Field Functions 
    bool hasDeliveryTime() const { return this->deliveryTime_ != nullptr;};
    void deleteDeliveryTime() { this->deliveryTime_ = nullptr;};
    inline string deliveryTime() const { DARABONBA_PTR_GET_DEFAULT(deliveryTime_, "") };
    inline CreateDeliveryChannelRequestResourceSnapshotDelivery& setDeliveryTime(string deliveryTime) { DARABONBA_PTR_SET_VALUE(deliveryTime_, deliveryTime) };


    // slsProperties Field Functions 
    bool hasSlsProperties() const { return this->slsProperties_ != nullptr;};
    void deleteSlsProperties() { this->slsProperties_ = nullptr;};
    inline const Models::CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties & slsProperties() const { DARABONBA_PTR_GET_CONST(slsProperties_, Models::CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties) };
    inline Models::CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties slsProperties() { DARABONBA_PTR_GET(slsProperties_, Models::CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties) };
    inline CreateDeliveryChannelRequestResourceSnapshotDelivery& setSlsProperties(const Models::CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties & slsProperties) { DARABONBA_PTR_SET_VALUE(slsProperties_, slsProperties) };
    inline CreateDeliveryChannelRequestResourceSnapshotDelivery& setSlsProperties(Models::CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties && slsProperties) { DARABONBA_PTR_SET_RVALUE(slsProperties_, slsProperties) };


    // targetArn Field Functions 
    bool hasTargetArn() const { return this->targetArn_ != nullptr;};
    void deleteTargetArn() { this->targetArn_ = nullptr;};
    inline string targetArn() const { DARABONBA_PTR_GET_DEFAULT(targetArn_, "") };
    inline CreateDeliveryChannelRequestResourceSnapshotDelivery& setTargetArn(string targetArn) { DARABONBA_PTR_SET_VALUE(targetArn_, targetArn) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CreateDeliveryChannelRequestResourceSnapshotDelivery& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The custom expression.
    std::shared_ptr<string> customExpression_ = nullptr;
    // The delivery time.
    std::shared_ptr<string> deliveryTime_ = nullptr;
    // The Simple Log Service configurations.
    std::shared_ptr<Models::CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties> slsProperties_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the delivery destination.
    // 
    // *   If you set `TargetType` to `OSS`, you must set `TargetArn` to the ARN of a bucket whose name is prefixed with resourcecenter-.
    // *   If you set `TargetType` to `SLS`, you must set `TargetArn` to the ARN of a Logstore whose name is prefixed with resourcecenter-.
    std::shared_ptr<string> targetArn_ = nullptr;
    // The type of the delivery destination.
    // 
    // Valid values:
    // 
    // *   `OSS` for standard delivery
    // *   `OSS` or `SLS` for custom delivery
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
