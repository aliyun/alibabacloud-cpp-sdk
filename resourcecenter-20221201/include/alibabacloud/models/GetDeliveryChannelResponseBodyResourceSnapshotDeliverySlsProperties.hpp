// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDELIVERYCHANNELRESPONSEBODYRESOURCESNAPSHOTDELIVERYSLSPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_GETDELIVERYCHANNELRESPONSEBODYRESOURCESNAPSHOTDELIVERYSLSPROPERTIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class GetDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties& obj) { 
      DARABONBA_PTR_TO_JSON(OversizedDataOssTargetArn, oversizedDataOssTargetArn_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(OversizedDataOssTargetArn, oversizedDataOssTargetArn_);
    };
    GetDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties() = default ;
    GetDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties(const GetDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties &) = default ;
    GetDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties(GetDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties &&) = default ;
    GetDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties() = default ;
    GetDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties& operator=(const GetDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties &) = default ;
    GetDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties& operator=(GetDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->oversizedDataOssTargetArn_ != nullptr; };
    // oversizedDataOssTargetArn Field Functions 
    bool hasOversizedDataOssTargetArn() const { return this->oversizedDataOssTargetArn_ != nullptr;};
    void deleteOversizedDataOssTargetArn() { this->oversizedDataOssTargetArn_ = nullptr;};
    inline string oversizedDataOssTargetArn() const { DARABONBA_PTR_GET_DEFAULT(oversizedDataOssTargetArn_, "") };
    inline GetDeliveryChannelResponseBodyResourceSnapshotDeliverySlsProperties& setOversizedDataOssTargetArn(string oversizedDataOssTargetArn) { DARABONBA_PTR_SET_VALUE(oversizedDataOssTargetArn_, oversizedDataOssTargetArn) };


  protected:
    // The ARN of the destination to which large files are delivered.
    std::shared_ptr<string> oversizedDataOssTargetArn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
