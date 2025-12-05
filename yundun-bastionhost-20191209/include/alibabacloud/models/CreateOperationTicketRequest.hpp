// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOPERATIONTICKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEOPERATIONTICKETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class CreateOperationTicketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOperationTicketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApproveComment, approveComment_);
      DARABONBA_PTR_TO_JSON(AssetAccountName, assetAccountName_);
      DARABONBA_PTR_TO_JSON(AssetId, assetId_);
      DARABONBA_PTR_TO_JSON(EffectEndTime, effectEndTime_);
      DARABONBA_PTR_TO_JSON(EffectStartTime, effectStartTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsOneTimeEffect, isOneTimeEffect_);
      DARABONBA_PTR_TO_JSON(ProtocolName, protocolName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOperationTicketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApproveComment, approveComment_);
      DARABONBA_PTR_FROM_JSON(AssetAccountName, assetAccountName_);
      DARABONBA_PTR_FROM_JSON(AssetId, assetId_);
      DARABONBA_PTR_FROM_JSON(EffectEndTime, effectEndTime_);
      DARABONBA_PTR_FROM_JSON(EffectStartTime, effectStartTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsOneTimeEffect, isOneTimeEffect_);
      DARABONBA_PTR_FROM_JSON(ProtocolName, protocolName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateOperationTicketRequest() = default ;
    CreateOperationTicketRequest(const CreateOperationTicketRequest &) = default ;
    CreateOperationTicketRequest(CreateOperationTicketRequest &&) = default ;
    CreateOperationTicketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOperationTicketRequest() = default ;
    CreateOperationTicketRequest& operator=(const CreateOperationTicketRequest &) = default ;
    CreateOperationTicketRequest& operator=(CreateOperationTicketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approveComment_ == nullptr
        && return this->assetAccountName_ == nullptr && return this->assetId_ == nullptr && return this->effectEndTime_ == nullptr && return this->effectStartTime_ == nullptr && return this->instanceId_ == nullptr
        && return this->isOneTimeEffect_ == nullptr && return this->protocolName_ == nullptr && return this->regionId_ == nullptr; };
    // approveComment Field Functions 
    bool hasApproveComment() const { return this->approveComment_ != nullptr;};
    void deleteApproveComment() { this->approveComment_ = nullptr;};
    inline string approveComment() const { DARABONBA_PTR_GET_DEFAULT(approveComment_, "") };
    inline CreateOperationTicketRequest& setApproveComment(string approveComment) { DARABONBA_PTR_SET_VALUE(approveComment_, approveComment) };


    // assetAccountName Field Functions 
    bool hasAssetAccountName() const { return this->assetAccountName_ != nullptr;};
    void deleteAssetAccountName() { this->assetAccountName_ = nullptr;};
    inline string assetAccountName() const { DARABONBA_PTR_GET_DEFAULT(assetAccountName_, "") };
    inline CreateOperationTicketRequest& setAssetAccountName(string assetAccountName) { DARABONBA_PTR_SET_VALUE(assetAccountName_, assetAccountName) };


    // assetId Field Functions 
    bool hasAssetId() const { return this->assetId_ != nullptr;};
    void deleteAssetId() { this->assetId_ = nullptr;};
    inline string assetId() const { DARABONBA_PTR_GET_DEFAULT(assetId_, "") };
    inline CreateOperationTicketRequest& setAssetId(string assetId) { DARABONBA_PTR_SET_VALUE(assetId_, assetId) };


    // effectEndTime Field Functions 
    bool hasEffectEndTime() const { return this->effectEndTime_ != nullptr;};
    void deleteEffectEndTime() { this->effectEndTime_ = nullptr;};
    inline int64_t effectEndTime() const { DARABONBA_PTR_GET_DEFAULT(effectEndTime_, 0L) };
    inline CreateOperationTicketRequest& setEffectEndTime(int64_t effectEndTime) { DARABONBA_PTR_SET_VALUE(effectEndTime_, effectEndTime) };


    // effectStartTime Field Functions 
    bool hasEffectStartTime() const { return this->effectStartTime_ != nullptr;};
    void deleteEffectStartTime() { this->effectStartTime_ = nullptr;};
    inline int64_t effectStartTime() const { DARABONBA_PTR_GET_DEFAULT(effectStartTime_, 0L) };
    inline CreateOperationTicketRequest& setEffectStartTime(int64_t effectStartTime) { DARABONBA_PTR_SET_VALUE(effectStartTime_, effectStartTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateOperationTicketRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isOneTimeEffect Field Functions 
    bool hasIsOneTimeEffect() const { return this->isOneTimeEffect_ != nullptr;};
    void deleteIsOneTimeEffect() { this->isOneTimeEffect_ = nullptr;};
    inline bool isOneTimeEffect() const { DARABONBA_PTR_GET_DEFAULT(isOneTimeEffect_, false) };
    inline CreateOperationTicketRequest& setIsOneTimeEffect(bool isOneTimeEffect) { DARABONBA_PTR_SET_VALUE(isOneTimeEffect_, isOneTimeEffect) };


    // protocolName Field Functions 
    bool hasProtocolName() const { return this->protocolName_ != nullptr;};
    void deleteProtocolName() { this->protocolName_ = nullptr;};
    inline string protocolName() const { DARABONBA_PTR_GET_DEFAULT(protocolName_, "") };
    inline CreateOperationTicketRequest& setProtocolName(string protocolName) { DARABONBA_PTR_SET_VALUE(protocolName_, protocolName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateOperationTicketRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> approveComment_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> assetAccountName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> assetId_ = nullptr;
    std::shared_ptr<int64_t> effectEndTime_ = nullptr;
    std::shared_ptr<int64_t> effectStartTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<bool> isOneTimeEffect_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> protocolName_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
