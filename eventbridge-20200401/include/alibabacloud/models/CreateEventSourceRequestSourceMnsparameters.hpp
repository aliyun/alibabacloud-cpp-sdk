// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSOURCEREQUESTSOURCEMNSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSOURCEREQUESTSOURCEMNSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventSourceRequestSourceMNSParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventSourceRequestSourceMNSParameters& obj) { 
      DARABONBA_PTR_TO_JSON(IsBase64Decode, isBase64Decode_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventSourceRequestSourceMNSParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(IsBase64Decode, isBase64Decode_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateEventSourceRequestSourceMNSParameters() = default ;
    CreateEventSourceRequestSourceMNSParameters(const CreateEventSourceRequestSourceMNSParameters &) = default ;
    CreateEventSourceRequestSourceMNSParameters(CreateEventSourceRequestSourceMNSParameters &&) = default ;
    CreateEventSourceRequestSourceMNSParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventSourceRequestSourceMNSParameters() = default ;
    CreateEventSourceRequestSourceMNSParameters& operator=(const CreateEventSourceRequestSourceMNSParameters &) = default ;
    CreateEventSourceRequestSourceMNSParameters& operator=(CreateEventSourceRequestSourceMNSParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isBase64Decode_ != nullptr
        && this->queueName_ != nullptr && this->regionId_ != nullptr; };
    // isBase64Decode Field Functions 
    bool hasIsBase64Decode() const { return this->isBase64Decode_ != nullptr;};
    void deleteIsBase64Decode() { this->isBase64Decode_ = nullptr;};
    inline bool isBase64Decode() const { DARABONBA_PTR_GET_DEFAULT(isBase64Decode_, false) };
    inline CreateEventSourceRequestSourceMNSParameters& setIsBase64Decode(bool isBase64Decode) { DARABONBA_PTR_SET_VALUE(isBase64Decode_, isBase64Decode) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline CreateEventSourceRequestSourceMNSParameters& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateEventSourceRequestSourceMNSParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Specify whether to enable Base64 decoding. Valid values: true and false. If you set this parameter to true, Base64 decoding is enabled.
    std::shared_ptr<bool> isBase64Decode_ = nullptr;
    // The name of the SMQ queue.
    std::shared_ptr<string> queueName_ = nullptr;
    // The ID of the region where the SMQ queue resides. Valid values: cn-qingdao, cn-beijing, cn-zhangjiakou, cn-huhehaote, cn-wulanchabu, cn-hangzhou, cn-shanghai, cn-shenzhen, cn-guangzhou, cn-chengdu, cn-hongkong, ap-southeast-1, ap-southeast-2, ap-southeast-3, ap-southeast-5, ap-northeast-1, eu-central-1, us-west-1, us-east-1, ap-south-1, me-east-1, and cn-north-2-gov-1.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
