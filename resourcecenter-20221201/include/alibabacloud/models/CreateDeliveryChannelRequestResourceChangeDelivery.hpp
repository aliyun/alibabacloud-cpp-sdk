// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDELIVERYCHANNELREQUESTRESOURCECHANGEDELIVERY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDELIVERYCHANNELREQUESTRESOURCECHANGEDELIVERY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDeliveryChannelRequestResourceChangeDeliverySlsProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class CreateDeliveryChannelRequestResourceChangeDelivery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDeliveryChannelRequestResourceChangeDelivery& obj) { 
      DARABONBA_PTR_TO_JSON(SlsProperties, slsProperties_);
      DARABONBA_PTR_TO_JSON(TargetArn, targetArn_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDeliveryChannelRequestResourceChangeDelivery& obj) { 
      DARABONBA_PTR_FROM_JSON(SlsProperties, slsProperties_);
      DARABONBA_PTR_FROM_JSON(TargetArn, targetArn_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    CreateDeliveryChannelRequestResourceChangeDelivery() = default ;
    CreateDeliveryChannelRequestResourceChangeDelivery(const CreateDeliveryChannelRequestResourceChangeDelivery &) = default ;
    CreateDeliveryChannelRequestResourceChangeDelivery(CreateDeliveryChannelRequestResourceChangeDelivery &&) = default ;
    CreateDeliveryChannelRequestResourceChangeDelivery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDeliveryChannelRequestResourceChangeDelivery() = default ;
    CreateDeliveryChannelRequestResourceChangeDelivery& operator=(const CreateDeliveryChannelRequestResourceChangeDelivery &) = default ;
    CreateDeliveryChannelRequestResourceChangeDelivery& operator=(CreateDeliveryChannelRequestResourceChangeDelivery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->slsProperties_ == nullptr
        && return this->targetArn_ == nullptr && return this->targetType_ == nullptr; };
    // slsProperties Field Functions 
    bool hasSlsProperties() const { return this->slsProperties_ != nullptr;};
    void deleteSlsProperties() { this->slsProperties_ = nullptr;};
    inline const Models::CreateDeliveryChannelRequestResourceChangeDeliverySlsProperties & slsProperties() const { DARABONBA_PTR_GET_CONST(slsProperties_, Models::CreateDeliveryChannelRequestResourceChangeDeliverySlsProperties) };
    inline Models::CreateDeliveryChannelRequestResourceChangeDeliverySlsProperties slsProperties() { DARABONBA_PTR_GET(slsProperties_, Models::CreateDeliveryChannelRequestResourceChangeDeliverySlsProperties) };
    inline CreateDeliveryChannelRequestResourceChangeDelivery& setSlsProperties(const Models::CreateDeliveryChannelRequestResourceChangeDeliverySlsProperties & slsProperties) { DARABONBA_PTR_SET_VALUE(slsProperties_, slsProperties) };
    inline CreateDeliveryChannelRequestResourceChangeDelivery& setSlsProperties(Models::CreateDeliveryChannelRequestResourceChangeDeliverySlsProperties && slsProperties) { DARABONBA_PTR_SET_RVALUE(slsProperties_, slsProperties) };


    // targetArn Field Functions 
    bool hasTargetArn() const { return this->targetArn_ != nullptr;};
    void deleteTargetArn() { this->targetArn_ = nullptr;};
    inline string targetArn() const { DARABONBA_PTR_GET_DEFAULT(targetArn_, "") };
    inline CreateDeliveryChannelRequestResourceChangeDelivery& setTargetArn(string targetArn) { DARABONBA_PTR_SET_VALUE(targetArn_, targetArn) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CreateDeliveryChannelRequestResourceChangeDelivery& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The Simple Log Service configurations.
    std::shared_ptr<Models::CreateDeliveryChannelRequestResourceChangeDeliverySlsProperties> slsProperties_ = nullptr;
    // The ARN of the delivery destination.
    // 
    // *   If you set `TargetType` to `OSS`, you must set `TargetArn` to the ARN of a bucket whose name is prefixed with resourcecenter-.
    // *   If you set `TargetType` to `SLS`, you must set `TargetArn` to the ARN of a Logstore whose name is prefixed with resourcecenter-.
    std::shared_ptr<string> targetArn_ = nullptr;
    // The type of the delivery destination.
    // 
    // Valid values:
    // 
    // *   `SLS`
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
