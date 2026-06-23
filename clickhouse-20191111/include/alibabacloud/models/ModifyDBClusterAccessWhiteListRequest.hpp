// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERACCESSWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERACCESSWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class ModifyDBClusterAccessWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterAccessWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterIPArrayAttribute, DBClusterIPArrayAttribute_);
      DARABONBA_PTR_TO_JSON(DBClusterIPArrayName, DBClusterIPArrayName_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(ModifyMode, modifyMode_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityIps, securityIps_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterAccessWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterIPArrayAttribute, DBClusterIPArrayAttribute_);
      DARABONBA_PTR_FROM_JSON(DBClusterIPArrayName, DBClusterIPArrayName_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(ModifyMode, modifyMode_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityIps, securityIps_);
    };
    ModifyDBClusterAccessWhiteListRequest() = default ;
    ModifyDBClusterAccessWhiteListRequest(const ModifyDBClusterAccessWhiteListRequest &) = default ;
    ModifyDBClusterAccessWhiteListRequest(ModifyDBClusterAccessWhiteListRequest &&) = default ;
    ModifyDBClusterAccessWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterAccessWhiteListRequest() = default ;
    ModifyDBClusterAccessWhiteListRequest& operator=(const ModifyDBClusterAccessWhiteListRequest &) = default ;
    ModifyDBClusterAccessWhiteListRequest& operator=(ModifyDBClusterAccessWhiteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterIPArrayAttribute_ == nullptr
        && this->DBClusterIPArrayName_ == nullptr && this->DBClusterId_ == nullptr && this->modifyMode_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->securityIps_ == nullptr; };
    // DBClusterIPArrayAttribute Field Functions 
    bool hasDBClusterIPArrayAttribute() const { return this->DBClusterIPArrayAttribute_ != nullptr;};
    void deleteDBClusterIPArrayAttribute() { this->DBClusterIPArrayAttribute_ = nullptr;};
    inline string getDBClusterIPArrayAttribute() const { DARABONBA_PTR_GET_DEFAULT(DBClusterIPArrayAttribute_, "") };
    inline ModifyDBClusterAccessWhiteListRequest& setDBClusterIPArrayAttribute(string DBClusterIPArrayAttribute) { DARABONBA_PTR_SET_VALUE(DBClusterIPArrayAttribute_, DBClusterIPArrayAttribute) };


    // DBClusterIPArrayName Field Functions 
    bool hasDBClusterIPArrayName() const { return this->DBClusterIPArrayName_ != nullptr;};
    void deleteDBClusterIPArrayName() { this->DBClusterIPArrayName_ = nullptr;};
    inline string getDBClusterIPArrayName() const { DARABONBA_PTR_GET_DEFAULT(DBClusterIPArrayName_, "") };
    inline ModifyDBClusterAccessWhiteListRequest& setDBClusterIPArrayName(string DBClusterIPArrayName) { DARABONBA_PTR_SET_VALUE(DBClusterIPArrayName_, DBClusterIPArrayName) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBClusterAccessWhiteListRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // modifyMode Field Functions 
    bool hasModifyMode() const { return this->modifyMode_ != nullptr;};
    void deleteModifyMode() { this->modifyMode_ = nullptr;};
    inline string getModifyMode() const { DARABONBA_PTR_GET_DEFAULT(modifyMode_, "") };
    inline ModifyDBClusterAccessWhiteListRequest& setModifyMode(string modifyMode) { DARABONBA_PTR_SET_VALUE(modifyMode_, modifyMode) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBClusterAccessWhiteListRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBClusterAccessWhiteListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBClusterAccessWhiteListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBClusterAccessWhiteListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityIps Field Functions 
    bool hasSecurityIps() const { return this->securityIps_ != nullptr;};
    void deleteSecurityIps() { this->securityIps_ = nullptr;};
    inline string getSecurityIps() const { DARABONBA_PTR_GET_DEFAULT(securityIps_, "") };
    inline ModifyDBClusterAccessWhiteListRequest& setSecurityIps(string securityIps) { DARABONBA_PTR_SET_VALUE(securityIps_, securityIps) };


  protected:
    // The attribute of the whitelist group. The default value is **empty**.
    shared_ptr<string> DBClusterIPArrayAttribute_ {};
    // The name of the whitelist group to modify.
    // 
    // > If you do not specify this parameter, the whitelist of the default group is modified.
    shared_ptr<string> DBClusterIPArrayName_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The modification method. Valid values:
    // 
    // - **Cover**: Overwrites the whitelist.
    // 
    // - **Append**: Adds IP addresses to the whitelist.
    // 
    // - **Delete**: Removes IP addresses from the whitelist.
    // 
    // > If you do not specify this parameter, the Cover method is used by default.
    shared_ptr<string> modifyMode_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The IP address whitelist. The following formats are supported:
    // 
    // - IP address: For example, 192.168.0.1. This allows the specified IP address to access the ApsaraDB for ClickHouse cluster.
    // 
    // - CIDR block: For example, 192.168.0.0/24. This allows IP addresses from 192.168.0.1 to 192.168.0.255 to access the ApsaraDB for ClickHouse cluster.
    // 
    // > * Do not enter 0.0.0.0.
    // 
    // - Set this parameter to 127.0.0.1 to block access from all IP addresses.
    // 
    // This parameter is required.
    shared_ptr<string> securityIps_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
