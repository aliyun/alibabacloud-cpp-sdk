// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYGLOBALSECURITYIPGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYGLOBALSECURITYIPGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyGlobalSecurityIPGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyGlobalSecurityIPGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GIpList, GIpList_);
      DARABONBA_PTR_TO_JSON(GlobalIgName, globalIgName_);
      DARABONBA_PTR_TO_JSON(GlobalSecurityGroupId, globalSecurityGroupId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyGlobalSecurityIPGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GIpList, GIpList_);
      DARABONBA_PTR_FROM_JSON(GlobalIgName, globalIgName_);
      DARABONBA_PTR_FROM_JSON(GlobalSecurityGroupId, globalSecurityGroupId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    ModifyGlobalSecurityIPGroupRequest() = default ;
    ModifyGlobalSecurityIPGroupRequest(const ModifyGlobalSecurityIPGroupRequest &) = default ;
    ModifyGlobalSecurityIPGroupRequest(ModifyGlobalSecurityIPGroupRequest &&) = default ;
    ModifyGlobalSecurityIPGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyGlobalSecurityIPGroupRequest() = default ;
    ModifyGlobalSecurityIPGroupRequest& operator=(const ModifyGlobalSecurityIPGroupRequest &) = default ;
    ModifyGlobalSecurityIPGroupRequest& operator=(ModifyGlobalSecurityIPGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->GIpList_ == nullptr
        && return this->globalIgName_ == nullptr && return this->globalSecurityGroupId_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->securityToken_ == nullptr; };
    // GIpList Field Functions 
    bool hasGIpList() const { return this->GIpList_ != nullptr;};
    void deleteGIpList() { this->GIpList_ = nullptr;};
    inline string GIpList() const { DARABONBA_PTR_GET_DEFAULT(GIpList_, "") };
    inline ModifyGlobalSecurityIPGroupRequest& setGIpList(string GIpList) { DARABONBA_PTR_SET_VALUE(GIpList_, GIpList) };


    // globalIgName Field Functions 
    bool hasGlobalIgName() const { return this->globalIgName_ != nullptr;};
    void deleteGlobalIgName() { this->globalIgName_ = nullptr;};
    inline string globalIgName() const { DARABONBA_PTR_GET_DEFAULT(globalIgName_, "") };
    inline ModifyGlobalSecurityIPGroupRequest& setGlobalIgName(string globalIgName) { DARABONBA_PTR_SET_VALUE(globalIgName_, globalIgName) };


    // globalSecurityGroupId Field Functions 
    bool hasGlobalSecurityGroupId() const { return this->globalSecurityGroupId_ != nullptr;};
    void deleteGlobalSecurityGroupId() { this->globalSecurityGroupId_ = nullptr;};
    inline string globalSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(globalSecurityGroupId_, "") };
    inline ModifyGlobalSecurityIPGroupRequest& setGlobalSecurityGroupId(string globalSecurityGroupId) { DARABONBA_PTR_SET_VALUE(globalSecurityGroupId_, globalSecurityGroupId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyGlobalSecurityIPGroupRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyGlobalSecurityIPGroupRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyGlobalSecurityIPGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyGlobalSecurityIPGroupRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyGlobalSecurityIPGroupRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyGlobalSecurityIPGroupRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyGlobalSecurityIPGroupRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The IP address in the whitelist template.
    // 
    // >  Multiple IP addresses are separated by commas (,). You can create up to 1,000 IP addresses or CIDR blocks for all IP whitelists.
    // 
    // This parameter is required.
    std::shared_ptr<string> GIpList_ = nullptr;
    // The name of the IP whitelist template. The name must meet the following requirements:
    // 
    // *   The name can contain lowercase letters, digits, and underscores (_).
    // *   The name must start with a letter and end with a letter or digit.
    // *   The name must be 2 to 120 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> globalIgName_ = nullptr;
    // The ID of the IP whitelist template.
    // 
    // This parameter is required.
    std::shared_ptr<string> globalSecurityGroupId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
