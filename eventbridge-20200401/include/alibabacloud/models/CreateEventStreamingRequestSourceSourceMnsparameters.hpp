// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSOURCESOURCEMNSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSOURCESOURCEMNSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequestSourceSourceMNSParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequestSourceSourceMNSParameters& obj) { 
      DARABONBA_PTR_TO_JSON(IsBase64Decode, isBase64Decode_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequestSourceSourceMNSParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(IsBase64Decode, isBase64Decode_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateEventStreamingRequestSourceSourceMNSParameters() = default ;
    CreateEventStreamingRequestSourceSourceMNSParameters(const CreateEventStreamingRequestSourceSourceMNSParameters &) = default ;
    CreateEventStreamingRequestSourceSourceMNSParameters(CreateEventStreamingRequestSourceSourceMNSParameters &&) = default ;
    CreateEventStreamingRequestSourceSourceMNSParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequestSourceSourceMNSParameters() = default ;
    CreateEventStreamingRequestSourceSourceMNSParameters& operator=(const CreateEventStreamingRequestSourceSourceMNSParameters &) = default ;
    CreateEventStreamingRequestSourceSourceMNSParameters& operator=(CreateEventStreamingRequestSourceSourceMNSParameters &&) = default ;
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
    inline CreateEventStreamingRequestSourceSourceMNSParameters& setIsBase64Decode(bool isBase64Decode) { DARABONBA_PTR_SET_VALUE(isBase64Decode_, isBase64Decode) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline CreateEventStreamingRequestSourceSourceMNSParameters& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateEventStreamingRequestSourceSourceMNSParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Specifies whether to enable Base64 encoding. Default value: true.
    std::shared_ptr<bool> isBase64Decode_ = nullptr;
    // The queue name.
    std::shared_ptr<string> queueName_ = nullptr;
    // The ID of the region where the MNS queue resides.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
