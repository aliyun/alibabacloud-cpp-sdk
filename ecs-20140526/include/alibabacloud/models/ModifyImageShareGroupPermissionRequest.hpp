// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYIMAGESHAREGROUPPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYIMAGESHAREGROUPPERMISSIONREQUEST_HPP_
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
  class ModifyImageShareGroupPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyImageShareGroupPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddGroup, addGroup_);
      DARABONBA_PTR_TO_JSON(RemoveGroup, removeGroup_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyImageShareGroupPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddGroup, addGroup_);
      DARABONBA_PTR_FROM_JSON(RemoveGroup, removeGroup_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyImageShareGroupPermissionRequest() = default ;
    ModifyImageShareGroupPermissionRequest(const ModifyImageShareGroupPermissionRequest &) = default ;
    ModifyImageShareGroupPermissionRequest(ModifyImageShareGroupPermissionRequest &&) = default ;
    ModifyImageShareGroupPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyImageShareGroupPermissionRequest() = default ;
    ModifyImageShareGroupPermissionRequest& operator=(const ModifyImageShareGroupPermissionRequest &) = default ;
    ModifyImageShareGroupPermissionRequest& operator=(ModifyImageShareGroupPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addGroup_ == nullptr
        && this->removeGroup_ == nullptr && this->imageId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // addGroup Field Functions 
    bool hasAddGroup() const { return this->addGroup_ != nullptr;};
    void deleteAddGroup() { this->addGroup_ = nullptr;};
    inline const vector<string> & getAddGroup() const { DARABONBA_PTR_GET_CONST(addGroup_, vector<string>) };
    inline vector<string> getAddGroup() { DARABONBA_PTR_GET(addGroup_, vector<string>) };
    inline ModifyImageShareGroupPermissionRequest& setAddGroup(const vector<string> & addGroup) { DARABONBA_PTR_SET_VALUE(addGroup_, addGroup) };
    inline ModifyImageShareGroupPermissionRequest& setAddGroup(vector<string> && addGroup) { DARABONBA_PTR_SET_RVALUE(addGroup_, addGroup) };


    // removeGroup Field Functions 
    bool hasRemoveGroup() const { return this->removeGroup_ != nullptr;};
    void deleteRemoveGroup() { this->removeGroup_ = nullptr;};
    inline const vector<string> & getRemoveGroup() const { DARABONBA_PTR_GET_CONST(removeGroup_, vector<string>) };
    inline vector<string> getRemoveGroup() { DARABONBA_PTR_GET(removeGroup_, vector<string>) };
    inline ModifyImageShareGroupPermissionRequest& setRemoveGroup(const vector<string> & removeGroup) { DARABONBA_PTR_SET_VALUE(removeGroup_, removeGroup) };
    inline ModifyImageShareGroupPermissionRequest& setRemoveGroup(vector<string> && removeGroup) { DARABONBA_PTR_SET_RVALUE(removeGroup_, removeGroup) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ModifyImageShareGroupPermissionRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyImageShareGroupPermissionRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyImageShareGroupPermissionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyImageShareGroupPermissionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyImageShareGroupPermissionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyImageShareGroupPermissionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    shared_ptr<vector<string>> addGroup_ {};
    shared_ptr<vector<string>> removeGroup_ {};
    // This parameter is required.
    shared_ptr<string> imageId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
