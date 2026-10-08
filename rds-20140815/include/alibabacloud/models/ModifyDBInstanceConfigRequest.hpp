// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDBInstanceConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConfigName, configName_);
      DARABONBA_PTR_TO_JSON(ConfigValue, configValue_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_TO_JSON(SwitchTimeMode, switchTimeMode_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConfigName, configName_);
      DARABONBA_PTR_FROM_JSON(ConfigValue, configValue_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_FROM_JSON(SwitchTimeMode, switchTimeMode_);
    };
    ModifyDBInstanceConfigRequest() = default ;
    ModifyDBInstanceConfigRequest(const ModifyDBInstanceConfigRequest &) = default ;
    ModifyDBInstanceConfigRequest(ModifyDBInstanceConfigRequest &&) = default ;
    ModifyDBInstanceConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceConfigRequest() = default ;
    ModifyDBInstanceConfigRequest& operator=(const ModifyDBInstanceConfigRequest &) = default ;
    ModifyDBInstanceConfigRequest& operator=(ModifyDBInstanceConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->configName_ == nullptr && this->configValue_ == nullptr && this->DBInstanceId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->switchTime_ == nullptr && this->switchTimeMode_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyDBInstanceConfigRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // configName Field Functions 
    bool hasConfigName() const { return this->configName_ != nullptr;};
    void deleteConfigName() { this->configName_ = nullptr;};
    inline string getConfigName() const { DARABONBA_PTR_GET_DEFAULT(configName_, "") };
    inline ModifyDBInstanceConfigRequest& setConfigName(string configName) { DARABONBA_PTR_SET_VALUE(configName_, configName) };


    // configValue Field Functions 
    bool hasConfigValue() const { return this->configValue_ != nullptr;};
    void deleteConfigValue() { this->configValue_ = nullptr;};
    inline string getConfigValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
    inline ModifyDBInstanceConfigRequest& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBInstanceConfigRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBInstanceConfigRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBInstanceConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyDBInstanceConfigRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBInstanceConfigRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBInstanceConfigRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // switchTime Field Functions 
    bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
    void deleteSwitchTime() { this->switchTime_ = nullptr;};
    inline string getSwitchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
    inline ModifyDBInstanceConfigRequest& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


    // switchTimeMode Field Functions 
    bool hasSwitchTimeMode() const { return this->switchTimeMode_ != nullptr;};
    void deleteSwitchTimeMode() { this->switchTimeMode_ = nullptr;};
    inline string getSwitchTimeMode() const { DARABONBA_PTR_GET_DEFAULT(switchTimeMode_, "") };
    inline ModifyDBInstanceConfigRequest& setSwitchTimeMode(string switchTimeMode) { DARABONBA_PTR_SET_VALUE(switchTimeMode_, switchTimeMode) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The name of the configuration item to modify. This parameter is used together with ConfigValue.
    // <details>
    // <summary>ApsaraDB RDS for PostgreSQL configuration items</summary>
    // 
    // - **pgbouncer**: Modifies the PgBouncer feature.
    // - **encryptionKey**: Modifies the cloud disk encryption feature.
    // - **duckdb_create_databases**: Configures databases of the primary instance as DuckDB column store databases in batches.
    // - **duckdb_prepare_dependency**: Configures the primary instance with one click so that its parameters and minor engine version meet the [prerequisites](https://help.aliyun.com/document_detail/2977241.html) for creating a DuckDB-based analytical instance. If the primary instance already has read-only instances, the read-only instances are also updated.
    // - **enable_db_visible_by_connect_rls**: Enables CONNECT RLS on the instance to control database visibility.
    // - **set_db_visible_by_connect_rls**: Enables CONNECT RLS on a database to control database visibility. This can be called only after CONNECT RLS is enabled on the instance.
    // 
    // </details>
    // 
    // <details>
    // <summary>ApsaraDB RDS for SQL Server configuration items</summary>
    // 
    // <props="intl">
    // 
    // - **clear_errorlog**: Clears error logs.
    // - **encryptionKey**: Modifies the cloud disk encryption feature. Serverless instances and shared instance types do not support this feature.
    // 
    // 
    // 
    // <props="china">
    // 
    // 
    // - **backup_recovery_model**: Enables the simple recovery model feature. Only Basic Edition instances support this feature. **This feature cannot be disabled after it is enabled**.
    // - **clear_errorlog**: Clears error logs.
    // - **encryptionKey**: Modifies the cloud disk encryption feature. Serverless instances and shared instance types do not support this feature.
    // 
    // 
    // </details>
    // 
    // This parameter is required.
    shared_ptr<string> configName_ {};
    // The value of the configuration item to modify. This parameter is used together with ConfigName.
    // 
    // <details>
    // <summary>ApsaraDB RDS for PostgreSQL configuration item values</summary>
    // 
    // - PgBouncer feature: **true** (enable) or **false** (disable).
    // - Cloud disk encryption feature:
    //   - **ServiceKey**: Uses an automatically generated key from Alibaba Cloud, which is the RDS-managed service key (Default Service CMK), to enable cloud disk encryption.
    //   - **<Key>**: Uses a custom key to enable cloud disk encryption or replaces the current key. Example: `494c98ce-f2b5-48ab-96ab-36c986b6****`.
    //   - **disabled**: Disables cloud disk encryption.
    // - One-click fix for prerequisites to create a DuckDB-based analytical instance: **duckdb_prepare_dependency**
    // - Configure databases of the primary instance as DuckDB column store databases in batches. The value is a JSON string. Example: `{"dbNames": "db1,db2,db3", "accountName": "yourSuperAccountName"}`, where:
    //   - **dbNames**: The names of databases to convert to DuckDB column store databases. Separate multiple database names with commas (,).
    //   - **accountName**: The privileged user. Specify only one privileged user.
    // - Enable CONNECT RLS on the instance to control database visibility: **true** to enable.
    // - Enable CONNECT RLS on a database to control database visibility: The **database names** managed by CONNECT RLS. Separate multiple database names with commas (,). Example: **testdb1,testdb2**. When a client connects to a database with CONNECT RLS enabled, the database list is displayed based on whether the client has CONNECT permissions on other databases.
    // </details>
    // <details>
    // <summary>ApsaraDB RDS for SQL Server configuration item values</summary>
    // 
    // <props="intl">
    // 
    // - Error log cleanup feature: **1** (confirm cleanup).
    // - Cloud disk encryption feature (**this feature cannot be disabled after it is enabled**):
    //   - **serviceKey**: Uses an automatically generated key from Alibaba Cloud, which is the RDS-managed service key (Default Service CMK), to enable cloud disk encryption.
    //   - **<Key>**: Uses a custom key to enable cloud disk encryption or replaces the current key. Example: `494c98ce-f2b5-48ab-96ab-36c986b6****`.
    // 
    // 
    // 
    // 
    // <props="china">
    // 
    // - Simple recovery feature: **simple** (enable simple recovery).
    // - Error log cleanup feature: **1** (confirm cleanup).
    // - Cloud disk encryption feature (**this feature cannot be disabled after it is enabled**):
    //   - **serviceKey**: Uses an automatically generated key from Alibaba Cloud, which is the RDS-managed service key (Default Service CMK), to enable cloud disk encryption.
    //   - **<Key>**: Uses a custom key to enable cloud disk encryption or replaces the current key. Example: `494c98ce-f2b5-48ab-96ab-36c986b6****`.
    // 
    // 
    // 
    // </details>
    // 
    // This parameter is required.
    shared_ptr<string> configValue_ {};
    // The instance ID. You can call DescribeDBInstances to obtain the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The resource group ID. You can call DescribeDBInstanceAttribute to obtain the resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The time at which the modification takes effect. We recommend that you perform specification changes during off-peak hours. Format: <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC).
    shared_ptr<string> switchTime_ {};
    // The switchover time. Valid values:
    // - **Immediate**: The modification takes effect immediately.
    // - **MaintainTime**: The modification takes effect during the maintenance window. You can call ModifyDBInstanceMaintainTime to modify the maintenance window.
    shared_ptr<string> switchTimeMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
