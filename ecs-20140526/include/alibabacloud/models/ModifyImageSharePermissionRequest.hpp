// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYIMAGESHAREPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYIMAGESHAREPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyImageSharePermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyImageSharePermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddAccount, addAccount_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(IsPublic, isPublic_);
      DARABONBA_PTR_TO_JSON(LaunchPermission, launchPermission_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemoveAccount, removeAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyImageSharePermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddAccount, addAccount_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(IsPublic, isPublic_);
      DARABONBA_PTR_FROM_JSON(LaunchPermission, launchPermission_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemoveAccount, removeAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyImageSharePermissionRequest() = default ;
    ModifyImageSharePermissionRequest(const ModifyImageSharePermissionRequest &) = default ;
    ModifyImageSharePermissionRequest(ModifyImageSharePermissionRequest &&) = default ;
    ModifyImageSharePermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyImageSharePermissionRequest() = default ;
    ModifyImageSharePermissionRequest& operator=(const ModifyImageSharePermissionRequest &) = default ;
    ModifyImageSharePermissionRequest& operator=(ModifyImageSharePermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addAccount_ == nullptr
        && this->dryRun_ == nullptr && this->imageId_ == nullptr && this->isPublic_ == nullptr && this->launchPermission_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->removeAccount_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // addAccount Field Functions 
    bool hasAddAccount() const { return this->addAccount_ != nullptr;};
    void deleteAddAccount() { this->addAccount_ = nullptr;};
    inline const vector<string> & getAddAccount() const { DARABONBA_PTR_GET_CONST(addAccount_, vector<string>) };
    inline vector<string> getAddAccount() { DARABONBA_PTR_GET(addAccount_, vector<string>) };
    inline ModifyImageSharePermissionRequest& setAddAccount(const vector<string> & addAccount) { DARABONBA_PTR_SET_VALUE(addAccount_, addAccount) };
    inline ModifyImageSharePermissionRequest& setAddAccount(vector<string> && addAccount) { DARABONBA_PTR_SET_RVALUE(addAccount_, addAccount) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyImageSharePermissionRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ModifyImageSharePermissionRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // isPublic Field Functions 
    bool hasIsPublic() const { return this->isPublic_ != nullptr;};
    void deleteIsPublic() { this->isPublic_ = nullptr;};
    inline bool getIsPublic() const { DARABONBA_PTR_GET_DEFAULT(isPublic_, false) };
    inline ModifyImageSharePermissionRequest& setIsPublic(bool isPublic) { DARABONBA_PTR_SET_VALUE(isPublic_, isPublic) };


    // launchPermission Field Functions 
    bool hasLaunchPermission() const { return this->launchPermission_ != nullptr;};
    void deleteLaunchPermission() { this->launchPermission_ = nullptr;};
    inline string getLaunchPermission() const { DARABONBA_PTR_GET_DEFAULT(launchPermission_, "") };
    inline ModifyImageSharePermissionRequest& setLaunchPermission(string launchPermission) { DARABONBA_PTR_SET_VALUE(launchPermission_, launchPermission) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyImageSharePermissionRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyImageSharePermissionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyImageSharePermissionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // removeAccount Field Functions 
    bool hasRemoveAccount() const { return this->removeAccount_ != nullptr;};
    void deleteRemoveAccount() { this->removeAccount_ = nullptr;};
    inline const vector<string> & getRemoveAccount() const { DARABONBA_PTR_GET_CONST(removeAccount_, vector<string>) };
    inline vector<string> getRemoveAccount() { DARABONBA_PTR_GET(removeAccount_, vector<string>) };
    inline ModifyImageSharePermissionRequest& setRemoveAccount(const vector<string> & removeAccount) { DARABONBA_PTR_SET_VALUE(removeAccount_, removeAccount) };
    inline ModifyImageSharePermissionRequest& setRemoveAccount(vector<string> && removeAccount) { DARABONBA_PTR_SET_RVALUE(removeAccount_, removeAccount) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyImageSharePermissionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyImageSharePermissionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The IDs of Alibaba Cloud accounts to which you want to share the custom image. Valid values of N: 1 to 10. If you specify more than 10 Alibaba Cloud account IDs, the system processes only the first 10 account IDs. The excess account IDs are ignored.
    shared_ptr<vector<string>> addAccount_ {};
    shared_ptr<bool> dryRun_ {};
    // The ID of the shared custom image.
    // 
    // >  You can share images encrypted by using CMKs but cannot share images encrypted by using service keys. When you share an image encrypted by using a service key, an error is reported.
    // 
    // This parameter is required.
    shared_ptr<string> imageId_ {};
    // Specifies whether to publish or unpublish a community image. Valid values:
    // 
    // *   true: publishes the custom image as a community image.
    // *   false: unpublishes a community image. The unpublish operation takes effect only on community images.
    // 
    // Default value: false.
    shared_ptr<bool> isPublic_ {};
    // > This parameter is in invitational preview and is not publicly available.
    shared_ptr<string> launchPermission_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the custom image. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The IDs of Alibaba Cloud accounts from which you want to unshare the custom image. Valid values of N: 1 to 10. If you specify more than 10 Alibaba Cloud account IDs, the system processes only the first 10 account IDs. The excess account IDs are ignored.
    shared_ptr<vector<string>> removeAccount_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
