// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyBackupPolicyRequestAdvancedDataPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyBackupPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBackupPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedDataPolicies, advancedDataPolicies_);
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
    friend void from_json(const Darabonba::Json& j, ModifyBackupPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedDataPolicies, advancedDataPolicies_);
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
    ModifyBackupPolicyRequest() = default ;
    ModifyBackupPolicyRequest(const ModifyBackupPolicyRequest &) = default ;
    ModifyBackupPolicyRequest(ModifyBackupPolicyRequest &&) = default ;
    ModifyBackupPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBackupPolicyRequest() = default ;
    ModifyBackupPolicyRequest& operator=(const ModifyBackupPolicyRequest &) = default ;
    ModifyBackupPolicyRequest& operator=(ModifyBackupPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advancedDataPolicies_ == nullptr
        && return this->backupFrequency_ == nullptr && return this->backupPolicyLevel_ == nullptr && return this->backupRetentionPolicyOnClusterDeletion_ == nullptr && return this->DBClusterId_ == nullptr && return this->dataLevel1BackupFrequency_ == nullptr
        && return this->dataLevel1BackupPeriod_ == nullptr && return this->dataLevel1BackupRetentionPeriod_ == nullptr && return this->dataLevel1BackupTime_ == nullptr && return this->dataLevel2BackupAnotherRegionRegion_ == nullptr && return this->dataLevel2BackupAnotherRegionRetentionPeriod_ == nullptr
        && return this->dataLevel2BackupPeriod_ == nullptr && return this->dataLevel2BackupRetentionPeriod_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->preferredBackupPeriod_ == nullptr
        && return this->preferredBackupTime_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // advancedDataPolicies Field Functions 
    bool hasAdvancedDataPolicies() const { return this->advancedDataPolicies_ != nullptr;};
    void deleteAdvancedDataPolicies() { this->advancedDataPolicies_ = nullptr;};
    inline const vector<ModifyBackupPolicyRequestAdvancedDataPolicies> & advancedDataPolicies() const { DARABONBA_PTR_GET_CONST(advancedDataPolicies_, vector<ModifyBackupPolicyRequestAdvancedDataPolicies>) };
    inline vector<ModifyBackupPolicyRequestAdvancedDataPolicies> advancedDataPolicies() { DARABONBA_PTR_GET(advancedDataPolicies_, vector<ModifyBackupPolicyRequestAdvancedDataPolicies>) };
    inline ModifyBackupPolicyRequest& setAdvancedDataPolicies(const vector<ModifyBackupPolicyRequestAdvancedDataPolicies> & advancedDataPolicies) { DARABONBA_PTR_SET_VALUE(advancedDataPolicies_, advancedDataPolicies) };
    inline ModifyBackupPolicyRequest& setAdvancedDataPolicies(vector<ModifyBackupPolicyRequestAdvancedDataPolicies> && advancedDataPolicies) { DARABONBA_PTR_SET_RVALUE(advancedDataPolicies_, advancedDataPolicies) };


    // backupFrequency Field Functions 
    bool hasBackupFrequency() const { return this->backupFrequency_ != nullptr;};
    void deleteBackupFrequency() { this->backupFrequency_ = nullptr;};
    inline string backupFrequency() const { DARABONBA_PTR_GET_DEFAULT(backupFrequency_, "") };
    inline ModifyBackupPolicyRequest& setBackupFrequency(string backupFrequency) { DARABONBA_PTR_SET_VALUE(backupFrequency_, backupFrequency) };


    // backupPolicyLevel Field Functions 
    bool hasBackupPolicyLevel() const { return this->backupPolicyLevel_ != nullptr;};
    void deleteBackupPolicyLevel() { this->backupPolicyLevel_ = nullptr;};
    inline string backupPolicyLevel() const { DARABONBA_PTR_GET_DEFAULT(backupPolicyLevel_, "") };
    inline ModifyBackupPolicyRequest& setBackupPolicyLevel(string backupPolicyLevel) { DARABONBA_PTR_SET_VALUE(backupPolicyLevel_, backupPolicyLevel) };


    // backupRetentionPolicyOnClusterDeletion Field Functions 
    bool hasBackupRetentionPolicyOnClusterDeletion() const { return this->backupRetentionPolicyOnClusterDeletion_ != nullptr;};
    void deleteBackupRetentionPolicyOnClusterDeletion() { this->backupRetentionPolicyOnClusterDeletion_ = nullptr;};
    inline string backupRetentionPolicyOnClusterDeletion() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPolicyOnClusterDeletion_, "") };
    inline ModifyBackupPolicyRequest& setBackupRetentionPolicyOnClusterDeletion(string backupRetentionPolicyOnClusterDeletion) { DARABONBA_PTR_SET_VALUE(backupRetentionPolicyOnClusterDeletion_, backupRetentionPolicyOnClusterDeletion) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyBackupPolicyRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // dataLevel1BackupFrequency Field Functions 
    bool hasDataLevel1BackupFrequency() const { return this->dataLevel1BackupFrequency_ != nullptr;};
    void deleteDataLevel1BackupFrequency() { this->dataLevel1BackupFrequency_ = nullptr;};
    inline string dataLevel1BackupFrequency() const { DARABONBA_PTR_GET_DEFAULT(dataLevel1BackupFrequency_, "") };
    inline ModifyBackupPolicyRequest& setDataLevel1BackupFrequency(string dataLevel1BackupFrequency) { DARABONBA_PTR_SET_VALUE(dataLevel1BackupFrequency_, dataLevel1BackupFrequency) };


    // dataLevel1BackupPeriod Field Functions 
    bool hasDataLevel1BackupPeriod() const { return this->dataLevel1BackupPeriod_ != nullptr;};
    void deleteDataLevel1BackupPeriod() { this->dataLevel1BackupPeriod_ = nullptr;};
    inline string dataLevel1BackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(dataLevel1BackupPeriod_, "") };
    inline ModifyBackupPolicyRequest& setDataLevel1BackupPeriod(string dataLevel1BackupPeriod) { DARABONBA_PTR_SET_VALUE(dataLevel1BackupPeriod_, dataLevel1BackupPeriod) };


    // dataLevel1BackupRetentionPeriod Field Functions 
    bool hasDataLevel1BackupRetentionPeriod() const { return this->dataLevel1BackupRetentionPeriod_ != nullptr;};
    void deleteDataLevel1BackupRetentionPeriod() { this->dataLevel1BackupRetentionPeriod_ = nullptr;};
    inline string dataLevel1BackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(dataLevel1BackupRetentionPeriod_, "") };
    inline ModifyBackupPolicyRequest& setDataLevel1BackupRetentionPeriod(string dataLevel1BackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(dataLevel1BackupRetentionPeriod_, dataLevel1BackupRetentionPeriod) };


    // dataLevel1BackupTime Field Functions 
    bool hasDataLevel1BackupTime() const { return this->dataLevel1BackupTime_ != nullptr;};
    void deleteDataLevel1BackupTime() { this->dataLevel1BackupTime_ = nullptr;};
    inline string dataLevel1BackupTime() const { DARABONBA_PTR_GET_DEFAULT(dataLevel1BackupTime_, "") };
    inline ModifyBackupPolicyRequest& setDataLevel1BackupTime(string dataLevel1BackupTime) { DARABONBA_PTR_SET_VALUE(dataLevel1BackupTime_, dataLevel1BackupTime) };


    // dataLevel2BackupAnotherRegionRegion Field Functions 
    bool hasDataLevel2BackupAnotherRegionRegion() const { return this->dataLevel2BackupAnotherRegionRegion_ != nullptr;};
    void deleteDataLevel2BackupAnotherRegionRegion() { this->dataLevel2BackupAnotherRegionRegion_ = nullptr;};
    inline string dataLevel2BackupAnotherRegionRegion() const { DARABONBA_PTR_GET_DEFAULT(dataLevel2BackupAnotherRegionRegion_, "") };
    inline ModifyBackupPolicyRequest& setDataLevel2BackupAnotherRegionRegion(string dataLevel2BackupAnotherRegionRegion) { DARABONBA_PTR_SET_VALUE(dataLevel2BackupAnotherRegionRegion_, dataLevel2BackupAnotherRegionRegion) };


    // dataLevel2BackupAnotherRegionRetentionPeriod Field Functions 
    bool hasDataLevel2BackupAnotherRegionRetentionPeriod() const { return this->dataLevel2BackupAnotherRegionRetentionPeriod_ != nullptr;};
    void deleteDataLevel2BackupAnotherRegionRetentionPeriod() { this->dataLevel2BackupAnotherRegionRetentionPeriod_ = nullptr;};
    inline string dataLevel2BackupAnotherRegionRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(dataLevel2BackupAnotherRegionRetentionPeriod_, "") };
    inline ModifyBackupPolicyRequest& setDataLevel2BackupAnotherRegionRetentionPeriod(string dataLevel2BackupAnotherRegionRetentionPeriod) { DARABONBA_PTR_SET_VALUE(dataLevel2BackupAnotherRegionRetentionPeriod_, dataLevel2BackupAnotherRegionRetentionPeriod) };


    // dataLevel2BackupPeriod Field Functions 
    bool hasDataLevel2BackupPeriod() const { return this->dataLevel2BackupPeriod_ != nullptr;};
    void deleteDataLevel2BackupPeriod() { this->dataLevel2BackupPeriod_ = nullptr;};
    inline string dataLevel2BackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(dataLevel2BackupPeriod_, "") };
    inline ModifyBackupPolicyRequest& setDataLevel2BackupPeriod(string dataLevel2BackupPeriod) { DARABONBA_PTR_SET_VALUE(dataLevel2BackupPeriod_, dataLevel2BackupPeriod) };


    // dataLevel2BackupRetentionPeriod Field Functions 
    bool hasDataLevel2BackupRetentionPeriod() const { return this->dataLevel2BackupRetentionPeriod_ != nullptr;};
    void deleteDataLevel2BackupRetentionPeriod() { this->dataLevel2BackupRetentionPeriod_ = nullptr;};
    inline string dataLevel2BackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(dataLevel2BackupRetentionPeriod_, "") };
    inline ModifyBackupPolicyRequest& setDataLevel2BackupRetentionPeriod(string dataLevel2BackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(dataLevel2BackupRetentionPeriod_, dataLevel2BackupRetentionPeriod) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyBackupPolicyRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyBackupPolicyRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // preferredBackupPeriod Field Functions 
    bool hasPreferredBackupPeriod() const { return this->preferredBackupPeriod_ != nullptr;};
    void deletePreferredBackupPeriod() { this->preferredBackupPeriod_ = nullptr;};
    inline string preferredBackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupPeriod_, "") };
    inline ModifyBackupPolicyRequest& setPreferredBackupPeriod(string preferredBackupPeriod) { DARABONBA_PTR_SET_VALUE(preferredBackupPeriod_, preferredBackupPeriod) };


    // preferredBackupTime Field Functions 
    bool hasPreferredBackupTime() const { return this->preferredBackupTime_ != nullptr;};
    void deletePreferredBackupTime() { this->preferredBackupTime_ = nullptr;};
    inline string preferredBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupTime_, "") };
    inline ModifyBackupPolicyRequest& setPreferredBackupTime(string preferredBackupTime) { DARABONBA_PTR_SET_VALUE(preferredBackupTime_, preferredBackupTime) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyBackupPolicyRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyBackupPolicyRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    std::shared_ptr<vector<ModifyBackupPolicyRequestAdvancedDataPolicies>> advancedDataPolicies_ = nullptr;
    // The backup frequency. Default value: Normal. Valid values:
    // 
    // *   **Normal**: standard backup. The system backs up data once a day.
    // *   **2/24H**: enhanced backup. The system backs up data every 2 hours.
    // *   **3/24H**: enhanced backup. The system backs up data every 3 hours.
    // *   **4/24H**: enhanced backup. The system backs up data every 4 hours.
    // 
    // >- If you enable enhanced backup, all backups are retained for 24 hours. For backup files that are created earlier than the previous 24 hours, the system permanently retains only the first backup that is created after 00:00 every day and deletes the rest.
    // >- If you enable enhanced backup, **PreferredBackupPeriod** is automatically set to all days in a week (from Monday to Sunday).
    // >- This parameter is invalid if the region where your PolarDB for MySQL cluster is deployed supports the cross-region backup feature. For information about the regions that support the cross-region backup feature, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    std::shared_ptr<string> backupFrequency_ = nullptr;
    std::shared_ptr<string> backupPolicyLevel_ = nullptr;
    // Specifies whether to retain backups when a cluster is deleted. Valid values:
    // 
    // *   **ALL**: permanently retains all backups.
    // *   **LATEST**: permanently retains the most recent backup.
    // *   **NONE**: does not retain backups.
    // 
    // >  The default value of the parameter is NONE.
    std::shared_ptr<string> backupRetentionPolicyOnClusterDeletion_ = nullptr;
    // The ID of the cluster.
    // 
    // > You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/98094.html) operation to query information about all clusters that are deployed in a specified region, such as the cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The frequency of level-1 backups. Default value: Normal. Valid values:
    // 
    // *   **Normal**: standard backup. The system backs up data once a day.
    // *   **2/24H**: enhanced backup. The system backs up data every 2 hours.
    // *   **3/24H**: enhanced backup. The system backs up data every 3 hours.
    // *   **4/24H**: enhanced backup. The system backs up data every 4 hours.
    // 
    // >- This parameter is invalid for PolarDB for Oracle clusters or PolarDB for PostgreSQL clusters.
    // >- This parameter is invalid if the region where your PolarDB for MySQL cluster is deployed does not support the cross-region backup feature. For information about the regions that support the cross-region backup feature, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    std::shared_ptr<string> dataLevel1BackupFrequency_ = nullptr;
    // The backup cycle of level-1 backups. Valid values:
    // 
    // *   **Monday**
    // *   **Tuesday**
    // *   **Wednesday**
    // *   **Thursday**
    // *   **Friday**
    // *   **Saturday**
    // *   **Sunday**
    // 
    // >- You need to specify at least two values. Separate multiple values with commas (,).
    // >- This parameter is invalid for PolarDB for Oracle clusters or PolarDB for PostgreSQL clusters.
    // >- This parameter is invalid if the region where your PolarDB for MySQL cluster is deployed does not support the cross-region backup feature. For information about the regions that support the cross-region backup feature, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    std::shared_ptr<string> dataLevel1BackupPeriod_ = nullptr;
    // The retention period of level-1 backups. Valid values: 3 to 14. Unit: days.
    std::shared_ptr<string> dataLevel1BackupRetentionPeriod_ = nullptr;
    // The time period during which automatic backup for level-1 backup is performed. The time period is in the `hh:mmZ-hh:mmZ` format and is displayed in UTC. The start time and end time are on the hour and have an interval of 1 hour. Example: `14:00Z-15:00Z`.
    // >- This parameter is invalid for PolarDB for Oracle clusters or PolarDB for PostgreSQL clusters.
    // >- This parameter is invalid if the region where your PolarDB for MySQL cluster is deployed does not support the cross-region backup feature. For information about the regions that support the cross-region backup feature, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    std::shared_ptr<string> dataLevel1BackupTime_ = nullptr;
    // The region where the cross-region level-2 backup is stored. For information about regions that support the cross-region backup feature, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    std::shared_ptr<string> dataLevel2BackupAnotherRegionRegion_ = nullptr;
    // The retention period of cross-region level-2 backups. Valid values:
    // 
    // *   **0**: The cross-region level-2 backup feature is disabled.
    // *   **30 to 7300**: Cross-region level-2 backups are retained for 30 to 7,300 days.
    // *   **1**: Cross-region level-2 backups are permanently retained.
    // 
    // >  The default value of the parameter is **0**.
    std::shared_ptr<string> dataLevel2BackupAnotherRegionRetentionPeriod_ = nullptr;
    // The backup cycle of level-2 backups. Valid values:
    // 
    // *   **Monday**
    // *   **Tuesday**
    // *   **Wednesday**
    // *   **Thursday**
    // *   **Friday**
    // *   **Saturday**
    // *   **Sunday**
    // 
    // >- You need to specify at least two values. Separate multiple values with commas (,).
    // >- This parameter is invalid for PolarDB for Oracle clusters or PolarDB for PostgreSQL clusters.
    // >- This parameter is invalid if the region where your PolarDB for MySQL cluster is deployed does not support the cross-region backup feature. For information about the regions that support the cross-region backup feature, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    std::shared_ptr<string> dataLevel2BackupPeriod_ = nullptr;
    // The retention period of level-2 backups. Valid values:
    // 
    // *   **0**: The level-2 backup feature is disabled.
    // *   **30 to 7300**: Level-2 backups are retained for 30 to 7,300 days.
    // *   **1**: Level-2 backups are permanently retained.
    // 
    // >  The default value of this parameter is **0**.
    std::shared_ptr<string> dataLevel2BackupRetentionPeriod_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The backup cycle. Valid values:
    // 
    // *   **Monday**
    // *   **Tuesday**
    // *   **Wednesday**
    // *   **Thursday**
    // *   **Friday**
    // *   **Saturday**
    // *   **Sunday**
    // 
    // >- You need to specify at least two values. Separate multiple values with commas (,).
    // >- This parameter is invalid if the region where your PolarDB for MySQL cluster is deployed supports the cross-region backup feature. For information about the regions that support the cross-region backup feature, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    std::shared_ptr<string> preferredBackupPeriod_ = nullptr;
    // The time period during which automatic backup for level-1 backup is performed. The format is `hh:mmZ-hh:mmZ` format. The time is displayed in UTC. The start time and end time are on the hour and with an interval of one hour. Example: `14:00Z-15:00Z`.
    std::shared_ptr<string> preferredBackupTime_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
