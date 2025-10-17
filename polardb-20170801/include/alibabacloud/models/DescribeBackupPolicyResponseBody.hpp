// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBackupPolicyResponseBodyAdvancedDataPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeBackupPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedDataPolicies, advancedDataPolicies_);
      DARABONBA_PTR_TO_JSON(AdvancedPolicyOption, advancedPolicyOption_);
      DARABONBA_PTR_TO_JSON(BackupFrequency, backupFrequency_);
      DARABONBA_PTR_TO_JSON(BackupPolicyLevel, backupPolicyLevel_);
      DARABONBA_PTR_TO_JSON(BackupRetentionPolicyOnClusterDeletion, backupRetentionPolicyOnClusterDeletion_);
      DARABONBA_PTR_TO_JSON(DataLevel1BackupFrequency, dataLevel1BackupFrequency_);
      DARABONBA_PTR_TO_JSON(DataLevel1BackupPeriod, dataLevel1BackupPeriod_);
      DARABONBA_PTR_TO_JSON(DataLevel1BackupRetentionPeriod, dataLevel1BackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(DataLevel1BackupTime, dataLevel1BackupTime_);
      DARABONBA_PTR_TO_JSON(DataLevel2BackupAnotherRegionRegion, dataLevel2BackupAnotherRegionRegion_);
      DARABONBA_PTR_TO_JSON(DataLevel2BackupAnotherRegionRetentionPeriod, dataLevel2BackupAnotherRegionRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(DataLevel2BackupPeriod, dataLevel2BackupPeriod_);
      DARABONBA_PTR_TO_JSON(DataLevel2BackupRetentionPeriod, dataLevel2BackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_TO_JSON(PreferredNextBackupTime, preferredNextBackupTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedDataPolicies, advancedDataPolicies_);
      DARABONBA_PTR_FROM_JSON(AdvancedPolicyOption, advancedPolicyOption_);
      DARABONBA_PTR_FROM_JSON(BackupFrequency, backupFrequency_);
      DARABONBA_PTR_FROM_JSON(BackupPolicyLevel, backupPolicyLevel_);
      DARABONBA_PTR_FROM_JSON(BackupRetentionPolicyOnClusterDeletion, backupRetentionPolicyOnClusterDeletion_);
      DARABONBA_PTR_FROM_JSON(DataLevel1BackupFrequency, dataLevel1BackupFrequency_);
      DARABONBA_PTR_FROM_JSON(DataLevel1BackupPeriod, dataLevel1BackupPeriod_);
      DARABONBA_PTR_FROM_JSON(DataLevel1BackupRetentionPeriod, dataLevel1BackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(DataLevel1BackupTime, dataLevel1BackupTime_);
      DARABONBA_PTR_FROM_JSON(DataLevel2BackupAnotherRegionRegion, dataLevel2BackupAnotherRegionRegion_);
      DARABONBA_PTR_FROM_JSON(DataLevel2BackupAnotherRegionRetentionPeriod, dataLevel2BackupAnotherRegionRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(DataLevel2BackupPeriod, dataLevel2BackupPeriod_);
      DARABONBA_PTR_FROM_JSON(DataLevel2BackupRetentionPeriod, dataLevel2BackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_FROM_JSON(PreferredNextBackupTime, preferredNextBackupTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBackupPolicyResponseBody() = default ;
    DescribeBackupPolicyResponseBody(const DescribeBackupPolicyResponseBody &) = default ;
    DescribeBackupPolicyResponseBody(DescribeBackupPolicyResponseBody &&) = default ;
    DescribeBackupPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPolicyResponseBody() = default ;
    DescribeBackupPolicyResponseBody& operator=(const DescribeBackupPolicyResponseBody &) = default ;
    DescribeBackupPolicyResponseBody& operator=(DescribeBackupPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advancedDataPolicies_ == nullptr
        && return this->advancedPolicyOption_ == nullptr && return this->backupFrequency_ == nullptr && return this->backupPolicyLevel_ == nullptr && return this->backupRetentionPolicyOnClusterDeletion_ == nullptr && return this->dataLevel1BackupFrequency_ == nullptr
        && return this->dataLevel1BackupPeriod_ == nullptr && return this->dataLevel1BackupRetentionPeriod_ == nullptr && return this->dataLevel1BackupTime_ == nullptr && return this->dataLevel2BackupAnotherRegionRegion_ == nullptr && return this->dataLevel2BackupAnotherRegionRetentionPeriod_ == nullptr
        && return this->dataLevel2BackupPeriod_ == nullptr && return this->dataLevel2BackupRetentionPeriod_ == nullptr && return this->preferredBackupPeriod_ == nullptr && return this->preferredBackupTime_ == nullptr && return this->preferredNextBackupTime_ == nullptr
        && return this->requestId_ == nullptr; };
    // advancedDataPolicies Field Functions 
    bool hasAdvancedDataPolicies() const { return this->advancedDataPolicies_ != nullptr;};
    void deleteAdvancedDataPolicies() { this->advancedDataPolicies_ = nullptr;};
    inline const DescribeBackupPolicyResponseBodyAdvancedDataPolicies & advancedDataPolicies() const { DARABONBA_PTR_GET_CONST(advancedDataPolicies_, DescribeBackupPolicyResponseBodyAdvancedDataPolicies) };
    inline DescribeBackupPolicyResponseBodyAdvancedDataPolicies advancedDataPolicies() { DARABONBA_PTR_GET(advancedDataPolicies_, DescribeBackupPolicyResponseBodyAdvancedDataPolicies) };
    inline DescribeBackupPolicyResponseBody& setAdvancedDataPolicies(const DescribeBackupPolicyResponseBodyAdvancedDataPolicies & advancedDataPolicies) { DARABONBA_PTR_SET_VALUE(advancedDataPolicies_, advancedDataPolicies) };
    inline DescribeBackupPolicyResponseBody& setAdvancedDataPolicies(DescribeBackupPolicyResponseBodyAdvancedDataPolicies && advancedDataPolicies) { DARABONBA_PTR_SET_RVALUE(advancedDataPolicies_, advancedDataPolicies) };


    // advancedPolicyOption Field Functions 
    bool hasAdvancedPolicyOption() const { return this->advancedPolicyOption_ != nullptr;};
    void deleteAdvancedPolicyOption() { this->advancedPolicyOption_ = nullptr;};
    inline string advancedPolicyOption() const { DARABONBA_PTR_GET_DEFAULT(advancedPolicyOption_, "") };
    inline DescribeBackupPolicyResponseBody& setAdvancedPolicyOption(string advancedPolicyOption) { DARABONBA_PTR_SET_VALUE(advancedPolicyOption_, advancedPolicyOption) };


    // backupFrequency Field Functions 
    bool hasBackupFrequency() const { return this->backupFrequency_ != nullptr;};
    void deleteBackupFrequency() { this->backupFrequency_ = nullptr;};
    inline string backupFrequency() const { DARABONBA_PTR_GET_DEFAULT(backupFrequency_, "") };
    inline DescribeBackupPolicyResponseBody& setBackupFrequency(string backupFrequency) { DARABONBA_PTR_SET_VALUE(backupFrequency_, backupFrequency) };


    // backupPolicyLevel Field Functions 
    bool hasBackupPolicyLevel() const { return this->backupPolicyLevel_ != nullptr;};
    void deleteBackupPolicyLevel() { this->backupPolicyLevel_ = nullptr;};
    inline string backupPolicyLevel() const { DARABONBA_PTR_GET_DEFAULT(backupPolicyLevel_, "") };
    inline DescribeBackupPolicyResponseBody& setBackupPolicyLevel(string backupPolicyLevel) { DARABONBA_PTR_SET_VALUE(backupPolicyLevel_, backupPolicyLevel) };


    // backupRetentionPolicyOnClusterDeletion Field Functions 
    bool hasBackupRetentionPolicyOnClusterDeletion() const { return this->backupRetentionPolicyOnClusterDeletion_ != nullptr;};
    void deleteBackupRetentionPolicyOnClusterDeletion() { this->backupRetentionPolicyOnClusterDeletion_ = nullptr;};
    inline string backupRetentionPolicyOnClusterDeletion() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPolicyOnClusterDeletion_, "") };
    inline DescribeBackupPolicyResponseBody& setBackupRetentionPolicyOnClusterDeletion(string backupRetentionPolicyOnClusterDeletion) { DARABONBA_PTR_SET_VALUE(backupRetentionPolicyOnClusterDeletion_, backupRetentionPolicyOnClusterDeletion) };


    // dataLevel1BackupFrequency Field Functions 
    bool hasDataLevel1BackupFrequency() const { return this->dataLevel1BackupFrequency_ != nullptr;};
    void deleteDataLevel1BackupFrequency() { this->dataLevel1BackupFrequency_ = nullptr;};
    inline string dataLevel1BackupFrequency() const { DARABONBA_PTR_GET_DEFAULT(dataLevel1BackupFrequency_, "") };
    inline DescribeBackupPolicyResponseBody& setDataLevel1BackupFrequency(string dataLevel1BackupFrequency) { DARABONBA_PTR_SET_VALUE(dataLevel1BackupFrequency_, dataLevel1BackupFrequency) };


    // dataLevel1BackupPeriod Field Functions 
    bool hasDataLevel1BackupPeriod() const { return this->dataLevel1BackupPeriod_ != nullptr;};
    void deleteDataLevel1BackupPeriod() { this->dataLevel1BackupPeriod_ = nullptr;};
    inline string dataLevel1BackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(dataLevel1BackupPeriod_, "") };
    inline DescribeBackupPolicyResponseBody& setDataLevel1BackupPeriod(string dataLevel1BackupPeriod) { DARABONBA_PTR_SET_VALUE(dataLevel1BackupPeriod_, dataLevel1BackupPeriod) };


    // dataLevel1BackupRetentionPeriod Field Functions 
    bool hasDataLevel1BackupRetentionPeriod() const { return this->dataLevel1BackupRetentionPeriod_ != nullptr;};
    void deleteDataLevel1BackupRetentionPeriod() { this->dataLevel1BackupRetentionPeriod_ = nullptr;};
    inline string dataLevel1BackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(dataLevel1BackupRetentionPeriod_, "") };
    inline DescribeBackupPolicyResponseBody& setDataLevel1BackupRetentionPeriod(string dataLevel1BackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(dataLevel1BackupRetentionPeriod_, dataLevel1BackupRetentionPeriod) };


    // dataLevel1BackupTime Field Functions 
    bool hasDataLevel1BackupTime() const { return this->dataLevel1BackupTime_ != nullptr;};
    void deleteDataLevel1BackupTime() { this->dataLevel1BackupTime_ = nullptr;};
    inline string dataLevel1BackupTime() const { DARABONBA_PTR_GET_DEFAULT(dataLevel1BackupTime_, "") };
    inline DescribeBackupPolicyResponseBody& setDataLevel1BackupTime(string dataLevel1BackupTime) { DARABONBA_PTR_SET_VALUE(dataLevel1BackupTime_, dataLevel1BackupTime) };


    // dataLevel2BackupAnotherRegionRegion Field Functions 
    bool hasDataLevel2BackupAnotherRegionRegion() const { return this->dataLevel2BackupAnotherRegionRegion_ != nullptr;};
    void deleteDataLevel2BackupAnotherRegionRegion() { this->dataLevel2BackupAnotherRegionRegion_ = nullptr;};
    inline string dataLevel2BackupAnotherRegionRegion() const { DARABONBA_PTR_GET_DEFAULT(dataLevel2BackupAnotherRegionRegion_, "") };
    inline DescribeBackupPolicyResponseBody& setDataLevel2BackupAnotherRegionRegion(string dataLevel2BackupAnotherRegionRegion) { DARABONBA_PTR_SET_VALUE(dataLevel2BackupAnotherRegionRegion_, dataLevel2BackupAnotherRegionRegion) };


    // dataLevel2BackupAnotherRegionRetentionPeriod Field Functions 
    bool hasDataLevel2BackupAnotherRegionRetentionPeriod() const { return this->dataLevel2BackupAnotherRegionRetentionPeriod_ != nullptr;};
    void deleteDataLevel2BackupAnotherRegionRetentionPeriod() { this->dataLevel2BackupAnotherRegionRetentionPeriod_ = nullptr;};
    inline string dataLevel2BackupAnotherRegionRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(dataLevel2BackupAnotherRegionRetentionPeriod_, "") };
    inline DescribeBackupPolicyResponseBody& setDataLevel2BackupAnotherRegionRetentionPeriod(string dataLevel2BackupAnotherRegionRetentionPeriod) { DARABONBA_PTR_SET_VALUE(dataLevel2BackupAnotherRegionRetentionPeriod_, dataLevel2BackupAnotherRegionRetentionPeriod) };


    // dataLevel2BackupPeriod Field Functions 
    bool hasDataLevel2BackupPeriod() const { return this->dataLevel2BackupPeriod_ != nullptr;};
    void deleteDataLevel2BackupPeriod() { this->dataLevel2BackupPeriod_ = nullptr;};
    inline string dataLevel2BackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(dataLevel2BackupPeriod_, "") };
    inline DescribeBackupPolicyResponseBody& setDataLevel2BackupPeriod(string dataLevel2BackupPeriod) { DARABONBA_PTR_SET_VALUE(dataLevel2BackupPeriod_, dataLevel2BackupPeriod) };


    // dataLevel2BackupRetentionPeriod Field Functions 
    bool hasDataLevel2BackupRetentionPeriod() const { return this->dataLevel2BackupRetentionPeriod_ != nullptr;};
    void deleteDataLevel2BackupRetentionPeriod() { this->dataLevel2BackupRetentionPeriod_ = nullptr;};
    inline string dataLevel2BackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(dataLevel2BackupRetentionPeriod_, "") };
    inline DescribeBackupPolicyResponseBody& setDataLevel2BackupRetentionPeriod(string dataLevel2BackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(dataLevel2BackupRetentionPeriod_, dataLevel2BackupRetentionPeriod) };


    // preferredBackupPeriod Field Functions 
    bool hasPreferredBackupPeriod() const { return this->preferredBackupPeriod_ != nullptr;};
    void deletePreferredBackupPeriod() { this->preferredBackupPeriod_ = nullptr;};
    inline string preferredBackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupPeriod_, "") };
    inline DescribeBackupPolicyResponseBody& setPreferredBackupPeriod(string preferredBackupPeriod) { DARABONBA_PTR_SET_VALUE(preferredBackupPeriod_, preferredBackupPeriod) };


    // preferredBackupTime Field Functions 
    bool hasPreferredBackupTime() const { return this->preferredBackupTime_ != nullptr;};
    void deletePreferredBackupTime() { this->preferredBackupTime_ = nullptr;};
    inline string preferredBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupTime_, "") };
    inline DescribeBackupPolicyResponseBody& setPreferredBackupTime(string preferredBackupTime) { DARABONBA_PTR_SET_VALUE(preferredBackupTime_, preferredBackupTime) };


    // preferredNextBackupTime Field Functions 
    bool hasPreferredNextBackupTime() const { return this->preferredNextBackupTime_ != nullptr;};
    void deletePreferredNextBackupTime() { this->preferredNextBackupTime_ = nullptr;};
    inline string preferredNextBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredNextBackupTime_, "") };
    inline DescribeBackupPolicyResponseBody& setPreferredNextBackupTime(string preferredNextBackupTime) { DARABONBA_PTR_SET_VALUE(preferredNextBackupTime_, preferredNextBackupTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeBackupPolicyResponseBodyAdvancedDataPolicies> advancedDataPolicies_ = nullptr;
    std::shared_ptr<string> advancedPolicyOption_ = nullptr;
    // The backup frequency. Default value: Normal. Valid values:
    // 
    // *   **Normal**: standard backup. The system backs up data once a day.
    // *   **2/24H**: enhanced backup. The system backs up data every 2 hours.
    // *   **3/24H**: enhanced backup. The system backs up data every 3 hours.
    // *   **4/24H**: enhanced backup. The system backs up data every 4 hours.
    // 
    // > - If enhanced backup is enabled, all backups are retained for 24 hours. Backups are automatically deleted when the retention period ends. However, the system permanently retains the first backup that is created after 00:00 every day.
    // >-  If enhanced backup is enabled, **PreferredBackupPeriod** is automatically set to all days in a week (from Monday to Sunday).
    std::shared_ptr<string> backupFrequency_ = nullptr;
    std::shared_ptr<string> backupPolicyLevel_ = nullptr;
    // Indicates whether backups are retained when you delete a cluster. Valid values:
    // 
    // *   **ALL**: permanently retains all backups.
    // *   **LATEST**: permanently retains the most recent backup.
    // *   **NONE**: does not retain backups.
    std::shared_ptr<string> backupRetentionPolicyOnClusterDeletion_ = nullptr;
    // The backup frequency of level-1 backups. Default value: Normal. Valid values:
    // 
    // *   **Normal**: standard backup. The system backs up data once a day.
    // *   **2/24H**: frequent backup. The system backs up data every 2 hours.
    // *   **3/24H**: frequent backup. The system backs up data every 3 hours.
    // *   **4/24H**: frequent backup. The system backs up data every 4 hours.
    // 
    // >- This parameter is not supported for PolarDB for PostgreSQL (Compatible with Oracle) clusters or PolarDB for PostgreSQL clusters.
    // >- This parameter is unavailable if the region where your PolarDB for MySQL cluster is deployed does not support the cross-region backup feature. For information about regions that support the cross-region backup feature, see [Overview](https://help.aliyun.com/document_detail/72672.html).
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
    // >- This parameter is not supported for PolarDB for PostgreSQL (Compatible with Oracle) clusters or PolarDB for PostgreSQL clusters.
    // >- This parameter is unavailable if the region where your PolarDB for MySQL cluster is deployed does not support the cross-region backup feature. For information about regions that support the cross-region backup feature, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    std::shared_ptr<string> dataLevel1BackupPeriod_ = nullptr;
    // The retention period of level-1 backups. Valid values: 3 to 14. Unit: day.
    std::shared_ptr<string> dataLevel1BackupRetentionPeriod_ = nullptr;
    // The period of time during which automatic backup is performed. The value must be in the `hh:mmZ-hh:mmZ` format. The time must be in UTC. The start time and the end time must be on the hour and must have an interval of 1 hour. Example: `14:00Z-15:00Z`.
    // 
    // >- This parameter is not supported for PolarDB for PostgreSQL (Compatible with Oracle) clusters or PolarDB for PostgreSQL clusters.
    // >- This parameter is unavailable if the region where your PolarDB for MySQL cluster is deployed does not support the cross-region backup feature. For information about regions that support the cross-region backup feature, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    std::shared_ptr<string> dataLevel1BackupTime_ = nullptr;
    // The region where the cross-region level-2 backup is stored. For information about regions that support the cross-region backup feature, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    std::shared_ptr<string> dataLevel2BackupAnotherRegionRegion_ = nullptr;
    // The retention period of cross-region level-2 backups. Valid values:
    // 
    // *   **0**: The cross-region level-2 backup feature is disabled.
    // *   **30 to 7300**: Cross-region level-2 backups are retained for 30 to 7,300 days.
    // *   **1**: Cross-region level-2 backups are retained for a long period of time.
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
    // >- This parameter is not supported for PolarDB for PostgreSQL (Compatible with Oracle) clusters or PolarDB for PostgreSQL clusters.
    // >- This parameter is unavailable if the region where your PolarDB for MySQL cluster is deployed does not support the cross-region backup feature. For information about regions that support the cross-region backup feature, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    std::shared_ptr<string> dataLevel2BackupPeriod_ = nullptr;
    // The retention period of level-2 backups. Valid values:
    // 
    // *   0: The level-2 backup feature is disabled.
    // *   30 to 7300: Level-2 backups are retained for 30 to 7,300 days.
    // *   \\-1: Level-2 backups are retained for a long period of time.
    // 
    // >  The default value of this parameter is **0**.
    std::shared_ptr<string> dataLevel2BackupRetentionPeriod_ = nullptr;
    // The backup cycle. Valid values:
    // 
    // *   Monday
    // *   Tuesday
    // *   Wednesday
    // *   Thursday
    // *   Friday
    // *   Saturday
    // *   Sunday
    std::shared_ptr<string> preferredBackupPeriod_ = nullptr;
    // The time period when automatic backups are performed. The format is `HH:mmZ-HH:mmZ`. The time is displayed in UTC.
    std::shared_ptr<string> preferredBackupTime_ = nullptr;
    // The time when the next automatic backup will be performed. The format is `YYYY-MM-DDThh:mmZ`. The time is displayed in UTC.
    std::shared_ptr<string> preferredNextBackupTime_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
