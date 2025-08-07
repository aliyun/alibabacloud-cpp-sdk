// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERMIGRATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERMIGRATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyDBClusterMigrationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterMigrationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionStrings, connectionStrings_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(NewMasterInstanceId, newMasterInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(SourceRDSDBInstanceId, sourceRDSDBInstanceId_);
      DARABONBA_PTR_TO_JSON(SwapConnectionString, swapConnectionString_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterMigrationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionStrings, connectionStrings_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(NewMasterInstanceId, newMasterInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(SourceRDSDBInstanceId, sourceRDSDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(SwapConnectionString, swapConnectionString_);
    };
    ModifyDBClusterMigrationRequest() = default ;
    ModifyDBClusterMigrationRequest(const ModifyDBClusterMigrationRequest &) = default ;
    ModifyDBClusterMigrationRequest(ModifyDBClusterMigrationRequest &&) = default ;
    ModifyDBClusterMigrationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterMigrationRequest() = default ;
    ModifyDBClusterMigrationRequest& operator=(const ModifyDBClusterMigrationRequest &) = default ;
    ModifyDBClusterMigrationRequest& operator=(ModifyDBClusterMigrationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectionStrings_ != nullptr
        && this->DBClusterId_ != nullptr && this->newMasterInstanceId_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->securityToken_ != nullptr && this->sourceRDSDBInstanceId_ != nullptr && this->swapConnectionString_ != nullptr; };
    // connectionStrings Field Functions 
    bool hasConnectionStrings() const { return this->connectionStrings_ != nullptr;};
    void deleteConnectionStrings() { this->connectionStrings_ = nullptr;};
    inline string connectionStrings() const { DARABONBA_PTR_GET_DEFAULT(connectionStrings_, "") };
    inline ModifyDBClusterMigrationRequest& setConnectionStrings(string connectionStrings) { DARABONBA_PTR_SET_VALUE(connectionStrings_, connectionStrings) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBClusterMigrationRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // newMasterInstanceId Field Functions 
    bool hasNewMasterInstanceId() const { return this->newMasterInstanceId_ != nullptr;};
    void deleteNewMasterInstanceId() { this->newMasterInstanceId_ = nullptr;};
    inline string newMasterInstanceId() const { DARABONBA_PTR_GET_DEFAULT(newMasterInstanceId_, "") };
    inline ModifyDBClusterMigrationRequest& setNewMasterInstanceId(string newMasterInstanceId) { DARABONBA_PTR_SET_VALUE(newMasterInstanceId_, newMasterInstanceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBClusterMigrationRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBClusterMigrationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBClusterMigrationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBClusterMigrationRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyDBClusterMigrationRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // sourceRDSDBInstanceId Field Functions 
    bool hasSourceRDSDBInstanceId() const { return this->sourceRDSDBInstanceId_ != nullptr;};
    void deleteSourceRDSDBInstanceId() { this->sourceRDSDBInstanceId_ = nullptr;};
    inline string sourceRDSDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceRDSDBInstanceId_, "") };
    inline ModifyDBClusterMigrationRequest& setSourceRDSDBInstanceId(string sourceRDSDBInstanceId) { DARABONBA_PTR_SET_VALUE(sourceRDSDBInstanceId_, sourceRDSDBInstanceId) };


    // swapConnectionString Field Functions 
    bool hasSwapConnectionString() const { return this->swapConnectionString_ != nullptr;};
    void deleteSwapConnectionString() { this->swapConnectionString_ = nullptr;};
    inline string swapConnectionString() const { DARABONBA_PTR_GET_DEFAULT(swapConnectionString_, "") };
    inline ModifyDBClusterMigrationRequest& setSwapConnectionString(string swapConnectionString) { DARABONBA_PTR_SET_VALUE(swapConnectionString_, swapConnectionString) };


  protected:
    // The endpoints to be switched. The endpoints are in the JSON format.
    // 
    // > This parameter is valid when the SwapConnectionString parameter is set to true.
    std::shared_ptr<string> connectionStrings_ = nullptr;
    // The ID of cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The ID of the new instance or new cluster. Valid values:
    // 
    // *   To perform a data migration, enter the ID of the PolarDB cluster.
    // *   To perform a migration rollback, enter the ID of the ApsaraDB for RDS instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> newMasterInstanceId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The ID of the source ApsaraDB RDS instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceRDSDBInstanceId_ = nullptr;
    // Specifies whether to switch the endpoints. Valid values:
    // 
    // *   **true**: switches the endpoints. If you select this option, you do not need the change the endpoint in your applications.
    // *   **false**: does not switch the endpoints. If you select this option, you must specify the endpoint of the PolarDB cluster in your applications.
    // 
    // Default value: **false**.
    std::shared_ptr<string> swapConnectionString_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
