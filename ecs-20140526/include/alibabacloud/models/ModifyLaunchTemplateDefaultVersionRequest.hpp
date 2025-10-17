// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLAUNCHTEMPLATEDEFAULTVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLAUNCHTEMPLATEDEFAULTVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyLaunchTemplateDefaultVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLaunchTemplateDefaultVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultVersionNumber, defaultVersionNumber_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateName, launchTemplateName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLaunchTemplateDefaultVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultVersionNumber, defaultVersionNumber_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateName, launchTemplateName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyLaunchTemplateDefaultVersionRequest() = default ;
    ModifyLaunchTemplateDefaultVersionRequest(const ModifyLaunchTemplateDefaultVersionRequest &) = default ;
    ModifyLaunchTemplateDefaultVersionRequest(ModifyLaunchTemplateDefaultVersionRequest &&) = default ;
    ModifyLaunchTemplateDefaultVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLaunchTemplateDefaultVersionRequest() = default ;
    ModifyLaunchTemplateDefaultVersionRequest& operator=(const ModifyLaunchTemplateDefaultVersionRequest &) = default ;
    ModifyLaunchTemplateDefaultVersionRequest& operator=(ModifyLaunchTemplateDefaultVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultVersionNumber_ == nullptr
        && return this->launchTemplateId_ == nullptr && return this->launchTemplateName_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // defaultVersionNumber Field Functions 
    bool hasDefaultVersionNumber() const { return this->defaultVersionNumber_ != nullptr;};
    void deleteDefaultVersionNumber() { this->defaultVersionNumber_ = nullptr;};
    inline int64_t defaultVersionNumber() const { DARABONBA_PTR_GET_DEFAULT(defaultVersionNumber_, 0L) };
    inline ModifyLaunchTemplateDefaultVersionRequest& setDefaultVersionNumber(int64_t defaultVersionNumber) { DARABONBA_PTR_SET_VALUE(defaultVersionNumber_, defaultVersionNumber) };


    // launchTemplateId Field Functions 
    bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
    void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
    inline string launchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
    inline ModifyLaunchTemplateDefaultVersionRequest& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


    // launchTemplateName Field Functions 
    bool hasLaunchTemplateName() const { return this->launchTemplateName_ != nullptr;};
    void deleteLaunchTemplateName() { this->launchTemplateName_ = nullptr;};
    inline string launchTemplateName() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateName_, "") };
    inline ModifyLaunchTemplateDefaultVersionRequest& setLaunchTemplateName(string launchTemplateName) { DARABONBA_PTR_SET_VALUE(launchTemplateName_, launchTemplateName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyLaunchTemplateDefaultVersionRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyLaunchTemplateDefaultVersionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyLaunchTemplateDefaultVersionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyLaunchTemplateDefaultVersionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyLaunchTemplateDefaultVersionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The default version number of the instance launch template.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> defaultVersionNumber_ = nullptr;
    // The ID of the launch template. You must specify the LaunchTemplateId or LaunchTemplateName parameter to determine an instance launch template.
    std::shared_ptr<string> launchTemplateId_ = nullptr;
    // The name of the instance launch template. You must specify the LaunchTemplateId or LaunchTemplateName parameter to determine an instance launch template.
    std::shared_ptr<string> launchTemplateName_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the launch template. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
