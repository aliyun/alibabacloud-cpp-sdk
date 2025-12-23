// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDELIVERYCHANNELREQUESTRESOURCESNAPSHOTDELIVERYSLSPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_CREATEDELIVERYCHANNELREQUESTRESOURCESNAPSHOTDELIVERYSLSPROPERTIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties& obj) { 
      DARABONBA_PTR_TO_JSON(OversizedDataOssTargetArn, oversizedDataOssTargetArn_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(OversizedDataOssTargetArn, oversizedDataOssTargetArn_);
    };
    CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties() = default ;
    CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties(const CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties &) = default ;
    CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties(CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties &&) = default ;
    CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties() = default ;
    CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties& operator=(const CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties &) = default ;
    CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties& operator=(CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->oversizedDataOssTargetArn_ == nullptr; };
    // oversizedDataOssTargetArn Field Functions 
    bool hasOversizedDataOssTargetArn() const { return this->oversizedDataOssTargetArn_ != nullptr;};
    void deleteOversizedDataOssTargetArn() { this->oversizedDataOssTargetArn_ = nullptr;};
    inline string oversizedDataOssTargetArn() const { DARABONBA_PTR_GET_DEFAULT(oversizedDataOssTargetArn_, "") };
    inline CreateDeliveryChannelRequestResourceSnapshotDeliverySlsProperties& setOversizedDataOssTargetArn(string oversizedDataOssTargetArn) { DARABONBA_PTR_SET_VALUE(oversizedDataOssTargetArn_, oversizedDataOssTargetArn) };


  protected:
    // The ARN of the destination to which large files are delivered.
    // 
    // *   If the size of a resource configuration change event exceeds 1 MB, the event is delivered as an OSS object.
    // *   You need to set this parameter to the ARN of a bucket whose name is prefixed with resourcecenter-.
    // *   This parameter takes effect only if you use custom delivery for scheduled resource snapshots. You do not need to configure this parameter if you use standard delivery for scheduled resource snapshots.
    std::shared_ptr<string> oversizedDataOssTargetArn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
