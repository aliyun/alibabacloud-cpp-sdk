// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROAMCLIENTUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ROAMCLIENTUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class RoamClientUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RoamClientUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OriginRegionId, originRegionId_);
      DARABONBA_PTR_TO_JSON(OriginSmartAGId, originSmartAGId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TargetSmartAGId, targetSmartAGId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, RoamClientUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OriginRegionId, originRegionId_);
      DARABONBA_PTR_FROM_JSON(OriginSmartAGId, originSmartAGId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TargetSmartAGId, targetSmartAGId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    RoamClientUserRequest() = default ;
    RoamClientUserRequest(const RoamClientUserRequest &) = default ;
    RoamClientUserRequest(RoamClientUserRequest &&) = default ;
    RoamClientUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RoamClientUserRequest() = default ;
    RoamClientUserRequest& operator=(const RoamClientUserRequest &) = default ;
    RoamClientUserRequest& operator=(RoamClientUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->originRegionId_ == nullptr
        && this->originSmartAGId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->targetSmartAGId_ == nullptr && this->userName_ == nullptr; };
    // originRegionId Field Functions 
    bool hasOriginRegionId() const { return this->originRegionId_ != nullptr;};
    void deleteOriginRegionId() { this->originRegionId_ = nullptr;};
    inline string getOriginRegionId() const { DARABONBA_PTR_GET_DEFAULT(originRegionId_, "") };
    inline RoamClientUserRequest& setOriginRegionId(string originRegionId) { DARABONBA_PTR_SET_VALUE(originRegionId_, originRegionId) };


    // originSmartAGId Field Functions 
    bool hasOriginSmartAGId() const { return this->originSmartAGId_ != nullptr;};
    void deleteOriginSmartAGId() { this->originSmartAGId_ = nullptr;};
    inline string getOriginSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(originSmartAGId_, "") };
    inline RoamClientUserRequest& setOriginSmartAGId(string originSmartAGId) { DARABONBA_PTR_SET_VALUE(originSmartAGId_, originSmartAGId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline RoamClientUserRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RoamClientUserRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RoamClientUserRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RoamClientUserRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RoamClientUserRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // targetSmartAGId Field Functions 
    bool hasTargetSmartAGId() const { return this->targetSmartAGId_ != nullptr;};
    void deleteTargetSmartAGId() { this->targetSmartAGId_ = nullptr;};
    inline string getTargetSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(targetSmartAGId_, "") };
    inline RoamClientUserRequest& setTargetSmartAGId(string targetSmartAGId) { DARABONBA_PTR_SET_VALUE(targetSmartAGId_, targetSmartAGId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline RoamClientUserRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The region ID of the SAG app instance.
    // 
    // This parameter is required.
    shared_ptr<string> originRegionId_ {};
    // The ID of the source SAG app instance.
    // 
    // This parameter is required.
    shared_ptr<string> originSmartAGId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the SAG app instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the destination SAG app instance.
    // 
    // This parameter is required.
    shared_ptr<string> targetSmartAGId_ {};
    // The usernames of the client for which you want to enable roaming.
    // 
    // This parameter is required.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
