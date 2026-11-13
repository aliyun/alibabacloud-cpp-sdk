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
    // The client token that is used to ensure the idempotence of the request and prevent duplicate submissions. You can use the client to generate the token, but you must ensure that it is unique among different requests. The token can contain a maximum of 64 ASCII characters and cannot contain non-ASCII characters.
    shared_ptr<string> clientToken_ {};
    // The name of the configuration item to be modified. This parameter must be used together with the ConfigValue parameter.
    // <details>
    // <summary>Configuration items for ApsaraDB RDS for PostgreSQL</summary>
    // 
    // - **pgbouncer**: modifies the PgBouncer feature.
    // - **encryptionKey**: modifies the cloud disk encryption feature.
    // - **duckdb_create_databases**: configures databases on the primary instance as DuckDB column store databases in batches.
    // - **duckdb_prepare_dependency**: configures the primary instance with one click so that its parameters and minor engine version meet the [prerequisites](https://help.aliyun.com/document_detail/2977241.html) for creating a DuckDB-based analytical instance. If read-only instances have been created for the primary instance, the read-only instances are also modified in synchronization.
    // - **enable_db_visible_by_connect_rls**: enables CONNECT RLS to control database visibility for the instance.
    // - **set_db_visible_by_connect_rls**: enables CONNECT RLS to control database visibility for databases. This parameter can be invoked only after CONNECT RLS is enabled for the instance.
    // 
    // </details>
    // 
    // <details>
    // <summary>Configuration items for ApsaraDB RDS for SQL Server</summary>
    // 
    // <props="intl">
    // 
    // - **clear_errorlog**: clears error logs.
    // - **encryptionKey**: modifies the cloud disk encryption feature. This feature is not supported for serverless instances and instances of the shared instance type.
    // 
    // 
    // 
    // <props="china">
    // 
    // 
    // - **backup_recovery_model**: enables the simple recovery model. Only Basic Edition instances support this feature. **This feature cannot be disabled after it is enabled**.
    // - **clear_errorlog**: clears error logs.
    // - **encryptionKey**: modifies the cloud disk encryption feature. This feature is not supported for serverless instances and instances of the shared instance type.
    // 
    // 
    // </details>
    // 
    // This parameter is required.
    shared_ptr<string> configName_ {};
    // The value of the configuration item to be modified. This parameter must be used together with the ConfigName parameter.
    // 
    // <details>
    // <summary>Values of configuration items for ApsaraDB RDS for PostgreSQL</summary>
    // 
    // - PgBouncer feature: **true** (enable) or **false** (disable).
    // - Cloud disk encryption feature:
    //   - **ServiceKey**: uses an automatically generated key from Alibaba Cloud, which is the RDS-managed service key (Default Service CMK), to enable cloud disk encryption.
    //   - **<Key>**: uses a custom key to enable cloud disk encryption or replace the current key. Example: `494c98ce-f2b5-48ab-96ab-36c986b6****`.
    //   - **disabled**: disables cloud disk encryption.
    // - One-click repair of prerequisites for creating a DuckDB-based analytical instance: **duckdb_prepare_dependency**.
    // - Batch configuration of databases on the primary instance as DuckDB column store databases. The value is a JSON string. Example: `{"dbNames": "db1,db2,db3", "accountName": "yourSuperAccountName"}`, where:
    //   - **dbNames**: the names of the databases to be converted to DuckDB column store databases. Separate multiple database names with commas (,).
    //   - **accountName**: the privileged account. You only need to configure one privileged account.
    // - Enable CONNECT RLS to control database visibility for the instance: **true** (enable).
    // - Enable CONNECT RLS to control database visibility for databases: the **names of the databases** managed by CONNECT RLS. Separate multiple database names with commas (,). Example: **testdb1,testdb2**. When a client connects to a database with CONNECT RLS enabled, the database list is correctly displayed based on whether the client has the CONNECT permission on other databases.
    // </details>
    // <details>
    // <summary>Values of configuration items for ApsaraDB RDS for SQL Server</summary>
    // 
    // <props="intl">
    // 
    // - Error log cleanup feature: **1** (confirm cleanup).
    // - Cloud disk encryption feature (**this feature cannot be disabled after it is enabled**):
    //   - **serviceKey**: uses an automatically generated key from Alibaba Cloud, which is the RDS-managed service key (Default Service CMK), to enable cloud disk encryption.
    //   - **<Key>**: uses a custom key to enable cloud disk encryption or replace the current key. Example: `494c98ce-f2b5-48ab-96ab-36c986b6****`.
    // 
    // 
    // 
    // 
    // <props="china">
    // 
    // - Simple recovery feature: **simple** (enable simple recovery).
    // - Error log cleanup feature: **1** (confirm cleanup).
    // - Cloud disk encryption feature (**this feature cannot be disabled after it is enabled**):
    //   - **serviceKey**: uses an automatically generated key from Alibaba Cloud, which is the RDS-managed service key (Default Service CMK), to enable cloud disk encryption.
    //   - **<Key>**: uses a custom key to enable cloud disk encryption or replace the current key. Example: `494c98ce-f2b5-48ab-96ab-36c986b6****`.
    // 
    // 
    // 
    // </details>
    // 
    // This parameter is required.
    shared_ptr<string> configValue_ {};
    // Instance ID of the instance. You can call the DescribeDBInstances operation to query instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the resource group. You can call the DescribeDBInstanceAttribute operation to query the ID.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The time when the modification is executed. Perform the modification during off-peak hours. Specify the time in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format. The time must be in UTC.
    shared_ptr<string> switchTime_ {};
    // The time when the modification takes effect. Valid values:
    // - **Immediate**: takes effect immediately.
    // - **MaintainTime**: takes effect within the maintenance window. You can call the ModifyDBInstanceMaintainTime operation to modify the maintenance window.
    shared_ptr<string> switchTimeMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
