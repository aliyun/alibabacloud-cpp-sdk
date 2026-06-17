// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyBackupPolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBackupPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedDataPolicies, advancedDataPoliciesShrink_);
      DARABONBA_PTR_TO_JSON(BackupFrequency, backupFrequency_);
      DARABONBA_PTR_TO_JSON(BackupPolicyLevel, backupPolicyLevel_);
      DARABONBA_PTR_TO_JSON(BackupRetentionPolicyOnClusterDeletion, backupRetentionPolicyOnClusterDeletion_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DataLevel1BackupFrequency, dataLevel1BackupFrequency_);
      DARABONBA_PTR_TO_JSON(DataLevel1BackupPeriod, dataLevel1BackupPeriod_);
      DARABONBA_PTR_TO_JSON(DataLevel1BackupRetentionPeriod, dataLevel1BackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(DataLevel1BackupTime, dataLevel1BackupTime_);
      DARABONBA_PTR_TO_JSON(DataLevel2BackupAnotherRegionRegion, dataLevel2BackupAnotherRegionRegion_);
      DARABONBA_PTR_TO_JSON(DataLevel2BackupAnotherRegionRetentionPeriod, dataLevel2BackupAnotherRegionRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(DataLevel2BackupPeriod, dataLevel2BackupPeriod_);
      DARABONBA_PTR_TO_JSON(DataLevel2BackupRetentionPeriod, dataLevel2BackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBackupPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedDataPolicies, advancedDataPoliciesShrink_);
      DARABONBA_PTR_FROM_JSON(BackupFrequency, backupFrequency_);
      DARABONBA_PTR_FROM_JSON(BackupPolicyLevel, backupPolicyLevel_);
      DARABONBA_PTR_FROM_JSON(BackupRetentionPolicyOnClusterDeletion, backupRetentionPolicyOnClusterDeletion_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DataLevel1BackupFrequency, dataLevel1BackupFrequency_);
      DARABONBA_PTR_FROM_JSON(DataLevel1BackupPeriod, dataLevel1BackupPeriod_);
      DARABONBA_PTR_FROM_JSON(DataLevel1BackupRetentionPeriod, dataLevel1BackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(DataLevel1BackupTime, dataLevel1BackupTime_);
      DARABONBA_PTR_FROM_JSON(DataLevel2BackupAnotherRegionRegion, dataLevel2BackupAnotherRegionRegion_);
      DARABONBA_PTR_FROM_JSON(DataLevel2BackupAnotherRegionRetentionPeriod, dataLevel2BackupAnotherRegionRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(DataLevel2BackupPeriod, dataLevel2BackupPeriod_);
      DARABONBA_PTR_FROM_JSON(DataLevel2BackupRetentionPeriod, dataLevel2BackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyBackupPolicyShrinkRequest() = default ;
    ModifyBackupPolicyShrinkRequest(const ModifyBackupPolicyShrinkRequest &) = default ;
    ModifyBackupPolicyShrinkRequest(ModifyBackupPolicyShrinkRequest &&) = default ;
    ModifyBackupPolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBackupPolicyShrinkRequest() = default ;
    ModifyBackupPolicyShrinkRequest& operator=(const ModifyBackupPolicyShrinkRequest &) = default ;
    ModifyBackupPolicyShrinkRequest& operator=(ModifyBackupPolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advancedDataPoliciesShrink_ == nullptr
        && this->backupFrequency_ == nullptr && this->backupPolicyLevel_ == nullptr && this->backupRetentionPolicyOnClusterDeletion_ == nullptr && this->DBClusterId_ == nullptr && this->dataLevel1BackupFrequency_ == nullptr
        && this->dataLevel1BackupPeriod_ == nullptr && this->dataLevel1BackupRetentionPeriod_ == nullptr && this->dataLevel1BackupTime_ == nullptr && this->dataLevel2BackupAnotherRegionRegion_ == nullptr && this->dataLevel2BackupAnotherRegionRetentionPeriod_ == nullptr
        && this->dataLevel2BackupPeriod_ == nullptr && this->dataLevel2BackupRetentionPeriod_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->preferredBackupPeriod_ == nullptr
        && this->preferredBackupTime_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // advancedDataPoliciesShrink Field Functions 
    bool hasAdvancedDataPoliciesShrink() const { return this->advancedDataPoliciesShrink_ != nullptr;};
    void deleteAdvancedDataPoliciesShrink() { this->advancedDataPoliciesShrink_ = nullptr;};
    inline string getAdvancedDataPoliciesShrink() const { DARABONBA_PTR_GET_DEFAULT(advancedDataPoliciesShrink_, "") };
    inline ModifyBackupPolicyShrinkRequest& setAdvancedDataPoliciesShrink(string advancedDataPoliciesShrink) { DARABONBA_PTR_SET_VALUE(advancedDataPoliciesShrink_, advancedDataPoliciesShrink) };


    // backupFrequency Field Functions 
    bool hasBackupFrequency() const { return this->backupFrequency_ != nullptr;};
    void deleteBackupFrequency() { this->backupFrequency_ = nullptr;};
    inline string getBackupFrequency() const { DARABONBA_PTR_GET_DEFAULT(backupFrequency_, "") };
    inline ModifyBackupPolicyShrinkRequest& setBackupFrequency(string backupFrequency) { DARABONBA_PTR_SET_VALUE(backupFrequency_, backupFrequency) };


    // backupPolicyLevel Field Functions 
    bool hasBackupPolicyLevel() const { return this->backupPolicyLevel_ != nullptr;};
    void deleteBackupPolicyLevel() { this->backupPolicyLevel_ = nullptr;};
    inline string getBackupPolicyLevel() const { DARABONBA_PTR_GET_DEFAULT(backupPolicyLevel_, "") };
    inline ModifyBackupPolicyShrinkRequest& setBackupPolicyLevel(string backupPolicyLevel) { DARABONBA_PTR_SET_VALUE(backupPolicyLevel_, backupPolicyLevel) };


    // backupRetentionPolicyOnClusterDeletion Field Functions 
    bool hasBackupRetentionPolicyOnClusterDeletion() const { return this->backupRetentionPolicyOnClusterDeletion_ != nullptr;};
    void deleteBackupRetentionPolicyOnClusterDeletion() { this->backupRetentionPolicyOnClusterDeletion_ = nullptr;};
    inline string getBackupRetentionPolicyOnClusterDeletion() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPolicyOnClusterDeletion_, "") };
    inline ModifyBackupPolicyShrinkRequest& setBackupRetentionPolicyOnClusterDeletion(string backupRetentionPolicyOnClusterDeletion) { DARABONBA_PTR_SET_VALUE(backupRetentionPolicyOnClusterDeletion_, backupRetentionPolicyOnClusterDeletion) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyBackupPolicyShrinkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // dataLevel1BackupFrequency Field Functions 
    bool hasDataLevel1BackupFrequency() const { return this->dataLevel1BackupFrequency_ != nullptr;};
    void deleteDataLevel1BackupFrequency() { this->dataLevel1BackupFrequency_ = nullptr;};
    inline string getDataLevel1BackupFrequency() const { DARABONBA_PTR_GET_DEFAULT(dataLevel1BackupFrequency_, "") };
    inline ModifyBackupPolicyShrinkRequest& setDataLevel1BackupFrequency(string dataLevel1BackupFrequency) { DARABONBA_PTR_SET_VALUE(dataLevel1BackupFrequency_, dataLevel1BackupFrequency) };


    // dataLevel1BackupPeriod Field Functions 
    bool hasDataLevel1BackupPeriod() const { return this->dataLevel1BackupPeriod_ != nullptr;};
    void deleteDataLevel1BackupPeriod() { this->dataLevel1BackupPeriod_ = nullptr;};
    inline string getDataLevel1BackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(dataLevel1BackupPeriod_, "") };
    inline ModifyBackupPolicyShrinkRequest& setDataLevel1BackupPeriod(string dataLevel1BackupPeriod) { DARABONBA_PTR_SET_VALUE(dataLevel1BackupPeriod_, dataLevel1BackupPeriod) };


    // dataLevel1BackupRetentionPeriod Field Functions 
    bool hasDataLevel1BackupRetentionPeriod() const { return this->dataLevel1BackupRetentionPeriod_ != nullptr;};
    void deleteDataLevel1BackupRetentionPeriod() { this->dataLevel1BackupRetentionPeriod_ = nullptr;};
    inline string getDataLevel1BackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(dataLevel1BackupRetentionPeriod_, "") };
    inline ModifyBackupPolicyShrinkRequest& setDataLevel1BackupRetentionPeriod(string dataLevel1BackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(dataLevel1BackupRetentionPeriod_, dataLevel1BackupRetentionPeriod) };


    // dataLevel1BackupTime Field Functions 
    bool hasDataLevel1BackupTime() const { return this->dataLevel1BackupTime_ != nullptr;};
    void deleteDataLevel1BackupTime() { this->dataLevel1BackupTime_ = nullptr;};
    inline string getDataLevel1BackupTime() const { DARABONBA_PTR_GET_DEFAULT(dataLevel1BackupTime_, "") };
    inline ModifyBackupPolicyShrinkRequest& setDataLevel1BackupTime(string dataLevel1BackupTime) { DARABONBA_PTR_SET_VALUE(dataLevel1BackupTime_, dataLevel1BackupTime) };


    // dataLevel2BackupAnotherRegionRegion Field Functions 
    bool hasDataLevel2BackupAnotherRegionRegion() const { return this->dataLevel2BackupAnotherRegionRegion_ != nullptr;};
    void deleteDataLevel2BackupAnotherRegionRegion() { this->dataLevel2BackupAnotherRegionRegion_ = nullptr;};
    inline string getDataLevel2BackupAnotherRegionRegion() const { DARABONBA_PTR_GET_DEFAULT(dataLevel2BackupAnotherRegionRegion_, "") };
    inline ModifyBackupPolicyShrinkRequest& setDataLevel2BackupAnotherRegionRegion(string dataLevel2BackupAnotherRegionRegion) { DARABONBA_PTR_SET_VALUE(dataLevel2BackupAnotherRegionRegion_, dataLevel2BackupAnotherRegionRegion) };


    // dataLevel2BackupAnotherRegionRetentionPeriod Field Functions 
    bool hasDataLevel2BackupAnotherRegionRetentionPeriod() const { return this->dataLevel2BackupAnotherRegionRetentionPeriod_ != nullptr;};
    void deleteDataLevel2BackupAnotherRegionRetentionPeriod() { this->dataLevel2BackupAnotherRegionRetentionPeriod_ = nullptr;};
    inline string getDataLevel2BackupAnotherRegionRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(dataLevel2BackupAnotherRegionRetentionPeriod_, "") };
    inline ModifyBackupPolicyShrinkRequest& setDataLevel2BackupAnotherRegionRetentionPeriod(string dataLevel2BackupAnotherRegionRetentionPeriod) { DARABONBA_PTR_SET_VALUE(dataLevel2BackupAnotherRegionRetentionPeriod_, dataLevel2BackupAnotherRegionRetentionPeriod) };


    // dataLevel2BackupPeriod Field Functions 
    bool hasDataLevel2BackupPeriod() const { return this->dataLevel2BackupPeriod_ != nullptr;};
    void deleteDataLevel2BackupPeriod() { this->dataLevel2BackupPeriod_ = nullptr;};
    inline string getDataLevel2BackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(dataLevel2BackupPeriod_, "") };
    inline ModifyBackupPolicyShrinkRequest& setDataLevel2BackupPeriod(string dataLevel2BackupPeriod) { DARABONBA_PTR_SET_VALUE(dataLevel2BackupPeriod_, dataLevel2BackupPeriod) };


    // dataLevel2BackupRetentionPeriod Field Functions 
    bool hasDataLevel2BackupRetentionPeriod() const { return this->dataLevel2BackupRetentionPeriod_ != nullptr;};
    void deleteDataLevel2BackupRetentionPeriod() { this->dataLevel2BackupRetentionPeriod_ = nullptr;};
    inline string getDataLevel2BackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(dataLevel2BackupRetentionPeriod_, "") };
    inline ModifyBackupPolicyShrinkRequest& setDataLevel2BackupRetentionPeriod(string dataLevel2BackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(dataLevel2BackupRetentionPeriod_, dataLevel2BackupRetentionPeriod) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyBackupPolicyShrinkRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyBackupPolicyShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // preferredBackupPeriod Field Functions 
    bool hasPreferredBackupPeriod() const { return this->preferredBackupPeriod_ != nullptr;};
    void deletePreferredBackupPeriod() { this->preferredBackupPeriod_ = nullptr;};
    inline string getPreferredBackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupPeriod_, "") };
    inline ModifyBackupPolicyShrinkRequest& setPreferredBackupPeriod(string preferredBackupPeriod) { DARABONBA_PTR_SET_VALUE(preferredBackupPeriod_, preferredBackupPeriod) };


    // preferredBackupTime Field Functions 
    bool hasPreferredBackupTime() const { return this->preferredBackupTime_ != nullptr;};
    void deletePreferredBackupTime() { this->preferredBackupTime_ = nullptr;};
    inline string getPreferredBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupTime_, "") };
    inline ModifyBackupPolicyShrinkRequest& setPreferredBackupTime(string preferredBackupTime) { DARABONBA_PTR_SET_VALUE(preferredBackupTime_, preferredBackupTime) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyBackupPolicyShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyBackupPolicyShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The advanced backup policies.
    // 
    // > - - This parameter is not supported for PolarDB for PostgreSQL (compatible with Oracle) and PolarDB for PostgreSQL.
    // >
    // > - - This parameter is supported only for clusters for which `BackupPolicyLevel` is set to `Advanced`.
    shared_ptr<string> advancedDataPoliciesShrink_ {};
    // The backup frequency. Valid values:
    // 
    // - **Normal** (default): standard backup. The cluster is backed up once a day.
    // 
    // - **2/24H**: high-frequency backup. The cluster is backed up every 2 hours.
    // 
    // - **3/24H**: high-frequency backup. The cluster is backed up every 3 hours.
    // 
    // - **4/24H**: high-frequency backup. The cluster is backed up every 4 hours.
    // 
    // > * * If you enable high-frequency backup, all backups completed within the last 24 hours are retained. For backups older than 24 hours, the system retains only the first backup completed after 00:00 each day and deletes the rest.
    // >
    // > * - If you enable high-frequency backup, the **PreferredBackupPeriod** parameter is automatically set to all days of the week (from Monday to Sunday).
    // >
    // > * - This parameter is not supported if your PolarDB for MySQL cluster is in a region that supports the cross-region backup feature. For more information about the regions that support cross-region backup, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    // >
    // > * - After you enable advanced backup, this parameter is no longer effective. Use the `AdvancedDataPolicies` parameter instead.
    shared_ptr<string> backupFrequency_ {};
    // The level of the backup policy. Valid values:
    // 
    // - **Normal**: standard backup
    // 
    // - **Advanced**: advanced backup
    // 
    // > * * This parameter is not supported for PolarDB for PostgreSQL (compatible with Oracle) and PolarDB for PostgreSQL.
    // >
    // > * - Check the `AdvancedPolicyOption` parameter in the response of the [DescribeBackupPolicy](https://help.aliyun.com/document_detail/2319231.html) operation to determine whether the cluster supports advanced backup. If the cluster supports advanced backup, you can request this feature in [Advanced backup settings](~611727~~).
    // >
    // > * - After you enable advanced backup, you **cannot** switch back to standard backup.
    shared_ptr<string> backupPolicyLevel_ {};
    // Specifies whether to retain backups when you delete the cluster. Valid values:
    // 
    // - **ALL**: Permanently retains all backups.
    // 
    // - **LATEST**: Permanently retains the last backup.
    // 
    // - **NONE**: Does not retain backup sets.
    // 
    // > The default value is `NONE`.
    shared_ptr<string> backupRetentionPolicyOnClusterDeletion_ {};
    // The cluster ID.
    // 
    // > You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/98094.html) operation to query the details of all clusters in a specified region, including the cluster IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The backup frequency. Valid values:
    // 
    // - **Normal** (default): standard backup. The cluster is backed up once a day.
    // 
    // - **2/24H**: high-frequency backup. The cluster is backed up every 2 hours.
    // 
    // - **3/24H**: high-frequency backup. The cluster is backed up every 3 hours.
    // 
    // - **4/24H**: high-frequency backup. The cluster is backed up every 4 hours.
    // 
    // > * * This parameter is not supported for PolarDB for PostgreSQL (compatible with Oracle) and PolarDB for PostgreSQL.
    // >
    // > * - This parameter is not supported if your PolarDB for MySQL cluster is in a region that supports the cross-region backup feature. For more information about the regions that support cross-region backup, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    // >
    // > * - After you enable advanced backup, this parameter is no longer effective. Use the `AdvancedDataPolicies` parameter instead.
    shared_ptr<string> dataLevel1BackupFrequency_ {};
    // The level-1 backup cycle. Valid values:
    // 
    // - **Monday**
    // 
    // - **Tuesday**
    // 
    // - **Wednesday**
    // 
    // - **Thursday**
    // 
    // - **Friday**
    // 
    // - **Saturday**
    // 
    // - **Sunday**
    // 
    // > * * You must select at least two days. Separate multiple values with commas.
    // >
    // > * - This parameter is not supported for PolarDB for PostgreSQL (compatible with Oracle) and PolarDB for PostgreSQL.
    // >
    // > * - This parameter is not supported if your PolarDB for MySQL cluster is in a region that supports the cross-region backup feature. For more information about the regions that support cross-region backup, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    // >
    // > * - After you enable advanced backup, this parameter is no longer effective. Use the `AdvancedDataPolicies` parameter instead.
    shared_ptr<string> dataLevel1BackupPeriod_ {};
    // The retention period for level-1 backups, in days. Valid values: 3 to 14.
    // 
    // > - After you enable advanced backup, this parameter is no longer effective. Use the `AdvancedDataPolicies` parameter instead.
    shared_ptr<string> dataLevel1BackupRetentionPeriod_ {};
    // The time window for automatic backups. Specify the time in UTC and in the `hh:mmZ-hh:mmZ` format. The time window must be a one-hour period that starts on the hour. For example, `14:00Z-15:00Z`.
    // 
    // > - This parameter is not supported for PolarDB for PostgreSQL (compatible with Oracle) and PolarDB for PostgreSQL.
    // >
    // > - This parameter is not supported if your PolarDB for MySQL cluster is in a region that supports the cross-region backup feature. For more information about the regions that support cross-region backup, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    shared_ptr<string> dataLevel1BackupTime_ {};
    // The destination region for the cross-region level-2 backup. For more information about the regions that support cross-region backup, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    // 
    // > - After you enable advanced backup, this parameter is no longer effective. Use the `AdvancedDataPolicies` parameter instead.
    shared_ptr<string> dataLevel2BackupAnotherRegionRegion_ {};
    // The retention period of cross-region level-2 backups. Valid values:
    // 
    // - **0**: Disables the cross-region level-2 backup feature.
    // 
    // - **30 to 7300**: The retention period of cross-region level-2 backups, in days.
    // 
    // - **-1**: Cross-region level-2 backups are permanently retained.
    // 
    // > * * When you create a cluster, the default value is **0**, which disables the cross-region level-2 backup feature.
    // >
    // > * - After you enable advanced backup, this parameter is no longer effective. Use the `AdvancedDataPolicies` parameter instead.
    shared_ptr<string> dataLevel2BackupAnotherRegionRetentionPeriod_ {};
    // The level-2 backup cycle. Valid values:
    // 
    // - **Monday**
    // 
    // - **Tuesday**
    // 
    // - **Wednesday**
    // 
    // - **Thursday**
    // 
    // - **Friday**
    // 
    // - **Saturday**
    // 
    // - **Sunday**
    // 
    // > * * You must select at least two days. Separate multiple values with commas.
    // >
    // > * - This parameter is not supported for PolarDB for PostgreSQL (compatible with Oracle) and PolarDB for PostgreSQL.
    // >
    // > * - This parameter is not supported if your PolarDB for MySQL cluster is in a region that supports the cross-region backup feature. For more information about the regions that support cross-region backup, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    // >
    // > * - After you enable advanced backup, this parameter is no longer effective. Use the `AdvancedDataPolicies` parameter instead.
    shared_ptr<string> dataLevel2BackupPeriod_ {};
    // The retention period of level-2 backups. Valid values:
    // 
    // - **0**: Disables the level-2 backup feature.
    // 
    // - **30 to 7300**: The retention period of level-2 backups, in days.
    // 
    // - **-1**: Level-2 backups are permanently retained.
    // 
    // > * * When you create a cluster, the default value is **0**, which disables the level-2 backup feature.
    // >
    // > * - After you enable advanced backup, this parameter is no longer effective. Use the `AdvancedDataPolicies` parameter instead.
    shared_ptr<string> dataLevel2BackupRetentionPeriod_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The backup cycle. Valid values:
    // 
    // - **Monday**
    // 
    // - **Tuesday**
    // 
    // - **Wednesday**
    // 
    // - **Thursday**
    // 
    // - **Friday**
    // 
    // - **Saturday**
    // 
    // - **Sunday**
    // 
    // > * * You must select at least two days. Separate multiple values with commas.
    // >
    // > * - This parameter is not supported if your PolarDB for MySQL cluster is in a region that supports the cross-region backup feature. For more information about the regions that support cross-region backup, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    // >
    // > * - After you enable advanced backup, this parameter is no longer effective. Use the `AdvancedDataPolicies` parameter instead.
    shared_ptr<string> preferredBackupPeriod_ {};
    // The time window for automatic backups. Specify the time in UTC and in the `hh:mmZ-hh:mmZ` format. The time window must be a one-hour period that starts on the hour. For example, `14:00Z-15:00Z`.
    shared_ptr<string> preferredBackupTime_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
