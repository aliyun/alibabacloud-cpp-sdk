// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERACCESSWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERACCESSWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyDBClusterAccessWhitelistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterAccessWhitelistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterIPArrayAttribute, DBClusterIPArrayAttribute_);
      DARABONBA_PTR_TO_JSON(DBClusterIPArrayName, DBClusterIPArrayName_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(ModifyMode, modifyMode_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(SecurityIps, securityIps_);
      DARABONBA_PTR_TO_JSON(WhiteListType, whiteListType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterAccessWhitelistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterIPArrayAttribute, DBClusterIPArrayAttribute_);
      DARABONBA_PTR_FROM_JSON(DBClusterIPArrayName, DBClusterIPArrayName_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(ModifyMode, modifyMode_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(SecurityIps, securityIps_);
      DARABONBA_PTR_FROM_JSON(WhiteListType, whiteListType_);
    };
    ModifyDBClusterAccessWhitelistRequest() = default ;
    ModifyDBClusterAccessWhitelistRequest(const ModifyDBClusterAccessWhitelistRequest &) = default ;
    ModifyDBClusterAccessWhitelistRequest(ModifyDBClusterAccessWhitelistRequest &&) = default ;
    ModifyDBClusterAccessWhitelistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterAccessWhitelistRequest() = default ;
    ModifyDBClusterAccessWhitelistRequest& operator=(const ModifyDBClusterAccessWhitelistRequest &) = default ;
    ModifyDBClusterAccessWhitelistRequest& operator=(ModifyDBClusterAccessWhitelistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterIPArrayAttribute_ != nullptr
        && this->DBClusterIPArrayName_ != nullptr && this->DBClusterId_ != nullptr && this->modifyMode_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->securityGroupIds_ != nullptr && this->securityIps_ != nullptr && this->whiteListType_ != nullptr; };
    // DBClusterIPArrayAttribute Field Functions 
    bool hasDBClusterIPArrayAttribute() const { return this->DBClusterIPArrayAttribute_ != nullptr;};
    void deleteDBClusterIPArrayAttribute() { this->DBClusterIPArrayAttribute_ = nullptr;};
    inline string DBClusterIPArrayAttribute() const { DARABONBA_PTR_GET_DEFAULT(DBClusterIPArrayAttribute_, "") };
    inline ModifyDBClusterAccessWhitelistRequest& setDBClusterIPArrayAttribute(string DBClusterIPArrayAttribute) { DARABONBA_PTR_SET_VALUE(DBClusterIPArrayAttribute_, DBClusterIPArrayAttribute) };


    // DBClusterIPArrayName Field Functions 
    bool hasDBClusterIPArrayName() const { return this->DBClusterIPArrayName_ != nullptr;};
    void deleteDBClusterIPArrayName() { this->DBClusterIPArrayName_ = nullptr;};
    inline string DBClusterIPArrayName() const { DARABONBA_PTR_GET_DEFAULT(DBClusterIPArrayName_, "") };
    inline ModifyDBClusterAccessWhitelistRequest& setDBClusterIPArrayName(string DBClusterIPArrayName) { DARABONBA_PTR_SET_VALUE(DBClusterIPArrayName_, DBClusterIPArrayName) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBClusterAccessWhitelistRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // modifyMode Field Functions 
    bool hasModifyMode() const { return this->modifyMode_ != nullptr;};
    void deleteModifyMode() { this->modifyMode_ = nullptr;};
    inline string modifyMode() const { DARABONBA_PTR_GET_DEFAULT(modifyMode_, "") };
    inline ModifyDBClusterAccessWhitelistRequest& setModifyMode(string modifyMode) { DARABONBA_PTR_SET_VALUE(modifyMode_, modifyMode) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBClusterAccessWhitelistRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBClusterAccessWhitelistRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBClusterAccessWhitelistRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBClusterAccessWhitelistRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline string securityGroupIds() const { DARABONBA_PTR_GET_DEFAULT(securityGroupIds_, "") };
    inline ModifyDBClusterAccessWhitelistRequest& setSecurityGroupIds(string securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };


    // securityIps Field Functions 
    bool hasSecurityIps() const { return this->securityIps_ != nullptr;};
    void deleteSecurityIps() { this->securityIps_ = nullptr;};
    inline string securityIps() const { DARABONBA_PTR_GET_DEFAULT(securityIps_, "") };
    inline ModifyDBClusterAccessWhitelistRequest& setSecurityIps(string securityIps) { DARABONBA_PTR_SET_VALUE(securityIps_, securityIps) };


    // whiteListType Field Functions 
    bool hasWhiteListType() const { return this->whiteListType_ != nullptr;};
    void deleteWhiteListType() { this->whiteListType_ = nullptr;};
    inline string whiteListType() const { DARABONBA_PTR_GET_DEFAULT(whiteListType_, "") };
    inline ModifyDBClusterAccessWhitelistRequest& setWhiteListType(string whiteListType) { DARABONBA_PTR_SET_VALUE(whiteListType_, whiteListType) };


  protected:
    // The attributes of the IP whitelist group. Set this parameter to **hidden** to hide the IP whitelist group in the console.
    // 
    // > *   The IP whitelist group that has appeared in the console cannot be hidden.
    // > *   This parameter can be specified only when the **WhiteListType** parameter is set to **IP**.
    std::shared_ptr<string> DBClusterIPArrayAttribute_ = nullptr;
    // The name of the IP whitelist group. The group name must be 2 to 120 characters in length and consists of lowercase letters and digits. It must start with a letter, and end with a letter or a digit.
    // 
    // *   If the specified whitelist group name does not exist, the whitelist group is created.
    // *   If the specified whitelist group name exists, the whitelist group is modified.
    // *   If you do not specify this parameter, the default group is modified.
    // 
    // > 
    // 
    // *   You can create a maximum of 50 IP whitelist groups for a cluster.
    // 
    // *   This parameter can be specified only when the **WhiteListType** parameter is set to **IP**.
    std::shared_ptr<string> DBClusterIPArrayName_ = nullptr;
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The method used to modify the IP whitelist. Valid values:
    // 
    // *   **Cover** (default): overwrites the original IP whitelist.
    // *   **Append**: appends IP addresses to the original whitelist.
    // *   **Delete**: deletes IP addresses.
    // 
    // >  This parameter can be specified only when the **WhiteListType** parameter is set to **IP**.
    std::shared_ptr<string> modifyMode_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the security group. Separate multiple security groups with commas (,).
    // 
    // > *   You can add a maximum of three security groups to a cluster.
    // > *   This parameter can be specified only when the **WhiteListType** parameter is set to **SecurityGroup**.
    std::shared_ptr<string> securityGroupIds_ = nullptr;
    // The IP addresses or Classless Inter-Domain Routing (CIDR) blocks in the IP whitelist group. You can add 1,000 IP addresses or CIDR blocks to all the IP whitelist groups. Separate multiple IP addresses with commas (,). The following two formats are supported:
    // 
    // *   IP addresses. Example: 10.23.12.24.
    // *   CIDR blocks. Example: 10.23.12.24/24. 24 indicates the length of the prefix of the CIDR block. The length is the range of 1 to 32.
    // 
    // >  This parameter can be specified only when the **WhiteListType** parameter is set to **IP**.
    std::shared_ptr<string> securityIps_ = nullptr;
    // The type of the whitelist. Valid values:
    // 
    // *   **IP**: IP whitelist group.
    // *   **SecurityGroup**: security group.
    // 
    // Default value: **IP**.
    std::shared_ptr<string> whiteListType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
