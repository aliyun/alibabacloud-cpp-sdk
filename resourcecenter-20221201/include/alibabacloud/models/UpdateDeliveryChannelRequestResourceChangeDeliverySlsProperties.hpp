// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDELIVERYCHANNELREQUESTRESOURCECHANGEDELIVERYSLSPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDELIVERYCHANNELREQUESTRESOURCECHANGEDELIVERYSLSPROPERTIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties& obj) { 
      DARABONBA_PTR_TO_JSON(OversizedDataOssTargetArn, oversizedDataOssTargetArn_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(OversizedDataOssTargetArn, oversizedDataOssTargetArn_);
    };
    UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties() = default ;
    UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties(const UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties &) = default ;
    UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties(UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties &&) = default ;
    UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties() = default ;
    UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties& operator=(const UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties &) = default ;
    UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties& operator=(UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->oversizedDataOssTargetArn_ != nullptr; };
    // oversizedDataOssTargetArn Field Functions 
    bool hasOversizedDataOssTargetArn() const { return this->oversizedDataOssTargetArn_ != nullptr;};
    void deleteOversizedDataOssTargetArn() { this->oversizedDataOssTargetArn_ = nullptr;};
    inline string oversizedDataOssTargetArn() const { DARABONBA_PTR_GET_DEFAULT(oversizedDataOssTargetArn_, "") };
    inline UpdateDeliveryChannelRequestResourceChangeDeliverySlsProperties& setOversizedDataOssTargetArn(string oversizedDataOssTargetArn) { DARABONBA_PTR_SET_VALUE(oversizedDataOssTargetArn_, oversizedDataOssTargetArn) };


  protected:
    // The ARN of the destination to which large files are delivered.
    // 
    // If the size of a resource configuration change event exceeds 1 MB, the event is delivered as an OSS object. You need to set this parameter to the ARN of a bucket whose name is prefixed with `resourcecenter-`.
    std::shared_ptr<string> oversizedDataOssTargetArn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
