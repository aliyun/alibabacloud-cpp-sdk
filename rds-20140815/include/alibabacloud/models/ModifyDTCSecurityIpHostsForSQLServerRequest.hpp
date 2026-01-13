// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDTCSECURITYIPHOSTSFORSQLSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDTCSECURITYIPHOSTSFORSQLSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDTCSecurityIpHostsForSQLServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDTCSecurityIpHostsForSQLServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityIpHosts, securityIpHosts_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(WhiteListGroupName, whiteListGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDTCSecurityIpHostsForSQLServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityIpHosts, securityIpHosts_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(WhiteListGroupName, whiteListGroupName_);
    };
    ModifyDTCSecurityIpHostsForSQLServerRequest() = default ;
    ModifyDTCSecurityIpHostsForSQLServerRequest(const ModifyDTCSecurityIpHostsForSQLServerRequest &) = default ;
    ModifyDTCSecurityIpHostsForSQLServerRequest(ModifyDTCSecurityIpHostsForSQLServerRequest &&) = default ;
    ModifyDTCSecurityIpHostsForSQLServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDTCSecurityIpHostsForSQLServerRequest() = default ;
    ModifyDTCSecurityIpHostsForSQLServerRequest& operator=(const ModifyDTCSecurityIpHostsForSQLServerRequest &) = default ;
    ModifyDTCSecurityIpHostsForSQLServerRequest& operator=(ModifyDTCSecurityIpHostsForSQLServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->securityIpHosts_ == nullptr && this->securityToken_ == nullptr && this->whiteListGroupName_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDTCSecurityIpHostsForSQLServerRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDTCSecurityIpHostsForSQLServerRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDTCSecurityIpHostsForSQLServerRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDTCSecurityIpHostsForSQLServerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDTCSecurityIpHostsForSQLServerRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDTCSecurityIpHostsForSQLServerRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityIpHosts Field Functions 
    bool hasSecurityIpHosts() const { return this->securityIpHosts_ != nullptr;};
    void deleteSecurityIpHosts() { this->securityIpHosts_ = nullptr;};
    inline string getSecurityIpHosts() const { DARABONBA_PTR_GET_DEFAULT(securityIpHosts_, "") };
    inline ModifyDTCSecurityIpHostsForSQLServerRequest& setSecurityIpHosts(string securityIpHosts) { DARABONBA_PTR_SET_VALUE(securityIpHosts_, securityIpHosts) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyDTCSecurityIpHostsForSQLServerRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // whiteListGroupName Field Functions 
    bool hasWhiteListGroupName() const { return this->whiteListGroupName_ != nullptr;};
    void deleteWhiteListGroupName() { this->whiteListGroupName_ = nullptr;};
    inline string getWhiteListGroupName() const { DARABONBA_PTR_GET_DEFAULT(whiteListGroupName_, "") };
    inline ModifyDTCSecurityIpHostsForSQLServerRequest& setWhiteListGroupName(string whiteListGroupName) { DARABONBA_PTR_SET_VALUE(whiteListGroupName_, whiteListGroupName) };


  protected:
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID. You can call the DescribeRegions operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The IP address of the ECS instance and the hostname of the Windows computer. Format: `IP address,Hostname`. Separate multiple entries with semicolon (;).
    // 
    // >  For more information about how to query the computer hostname, see [Configure a distributed transaction whitelist](https://help.aliyun.com/document_detail/124321.html).
    // 
    // This parameter is required.
    shared_ptr<string> securityIpHosts_ {};
    shared_ptr<string> securityToken_ {};
    // The name of the IP address whitelist.
    // 
    // This parameter is required.
    shared_ptr<string> whiteListGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
