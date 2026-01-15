// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTINUEDBCLUSTERMIGRATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONTINUEDBCLUSTERMIGRATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ContinueDBClusterMigrationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContinueDBClusterMigrationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(ForceSwitch, forceSwitch_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, ContinueDBClusterMigrationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(ForceSwitch, forceSwitch_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    ContinueDBClusterMigrationRequest() = default ;
    ContinueDBClusterMigrationRequest(const ContinueDBClusterMigrationRequest &) = default ;
    ContinueDBClusterMigrationRequest(ContinueDBClusterMigrationRequest &&) = default ;
    ContinueDBClusterMigrationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContinueDBClusterMigrationRequest() = default ;
    ContinueDBClusterMigrationRequest& operator=(const ContinueDBClusterMigrationRequest &) = default ;
    ContinueDBClusterMigrationRequest& operator=(ContinueDBClusterMigrationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->forceSwitch_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->securityToken_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ContinueDBClusterMigrationRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // forceSwitch Field Functions 
    bool hasForceSwitch() const { return this->forceSwitch_ != nullptr;};
    void deleteForceSwitch() { this->forceSwitch_ = nullptr;};
    inline string getForceSwitch() const { DARABONBA_PTR_GET_DEFAULT(forceSwitch_, "") };
    inline ContinueDBClusterMigrationRequest& setForceSwitch(string forceSwitch) { DARABONBA_PTR_SET_VALUE(forceSwitch_, forceSwitch) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ContinueDBClusterMigrationRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ContinueDBClusterMigrationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ContinueDBClusterMigrationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ContinueDBClusterMigrationRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ContinueDBClusterMigrationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ContinueDBClusterMigrationRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ContinueDBClusterMigrationRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> forceSwitch_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
