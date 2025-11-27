// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeBackupPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ArchiveBackupKeepCount, archiveBackupKeepCount_);
      DARABONBA_PTR_TO_JSON(ArchiveBackupKeepPolicy, archiveBackupKeepPolicy_);
      DARABONBA_PTR_TO_JSON(ArchiveBackupRetentionPeriod, archiveBackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(BackupInterval, backupInterval_);
      DARABONBA_PTR_TO_JSON(BackupLog, backupLog_);
      DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_TO_JSON(BackupPriority, backupPriority_);
      DARABONBA_PTR_TO_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CompressType, compressType_);
      DARABONBA_PTR_TO_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_TO_JSON(EnableIncrementDataBackup, enableIncrementDataBackup_);
      DARABONBA_PTR_TO_JSON(EnablePitrProtection, enablePitrProtection_);
      DARABONBA_PTR_TO_JSON(HighSpaceUsageProtection, highSpaceUsageProtection_);
      DARABONBA_PTR_TO_JSON(LocalLogRetentionHours, localLogRetentionHours_);
      DARABONBA_PTR_TO_JSON(LocalLogRetentionSpace, localLogRetentionSpace_);
      DARABONBA_PTR_TO_JSON(LogBackupFrequency, logBackupFrequency_);
      DARABONBA_PTR_TO_JSON(LogBackupLocalRetentionNumber, logBackupLocalRetentionNumber_);
      DARABONBA_PTR_TO_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(PitrRetentionPeriod, pitrRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_TO_JSON(PreferredNextBackupTime, preferredNextBackupTime_);
      DARABONBA_PTR_TO_JSON(ReleasedKeepPolicy, releasedKeepPolicy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportModifyBackupPriority, supportModifyBackupPriority_);
      DARABONBA_PTR_TO_JSON(SupportReleasedKeep, supportReleasedKeep_);
      DARABONBA_PTR_TO_JSON(SupportVolumeShadowCopy, supportVolumeShadowCopy_);
      DARABONBA_PTR_TO_JSON(SupportsHighFrequencyBackup, supportsHighFrequencyBackup_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ArchiveBackupKeepCount, archiveBackupKeepCount_);
      DARABONBA_PTR_FROM_JSON(ArchiveBackupKeepPolicy, archiveBackupKeepPolicy_);
      DARABONBA_PTR_FROM_JSON(ArchiveBackupRetentionPeriod, archiveBackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(BackupInterval, backupInterval_);
      DARABONBA_PTR_FROM_JSON(BackupLog, backupLog_);
      DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_FROM_JSON(BackupPriority, backupPriority_);
      DARABONBA_PTR_FROM_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CompressType, compressType_);
      DARABONBA_PTR_FROM_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_FROM_JSON(EnableIncrementDataBackup, enableIncrementDataBackup_);
      DARABONBA_PTR_FROM_JSON(EnablePitrProtection, enablePitrProtection_);
      DARABONBA_PTR_FROM_JSON(HighSpaceUsageProtection, highSpaceUsageProtection_);
      DARABONBA_PTR_FROM_JSON(LocalLogRetentionHours, localLogRetentionHours_);
      DARABONBA_PTR_FROM_JSON(LocalLogRetentionSpace, localLogRetentionSpace_);
      DARABONBA_PTR_FROM_JSON(LogBackupFrequency, logBackupFrequency_);
      DARABONBA_PTR_FROM_JSON(LogBackupLocalRetentionNumber, logBackupLocalRetentionNumber_);
      DARABONBA_PTR_FROM_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(PitrRetentionPeriod, pitrRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_FROM_JSON(PreferredNextBackupTime, preferredNextBackupTime_);
      DARABONBA_PTR_FROM_JSON(ReleasedKeepPolicy, releasedKeepPolicy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportModifyBackupPriority, supportModifyBackupPriority_);
      DARABONBA_PTR_FROM_JSON(SupportReleasedKeep, supportReleasedKeep_);
      DARABONBA_PTR_FROM_JSON(SupportVolumeShadowCopy, supportVolumeShadowCopy_);
      DARABONBA_PTR_FROM_JSON(SupportsHighFrequencyBackup, supportsHighFrequencyBackup_);
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
    virtual bool empty() const override { return this->archiveBackupKeepCount_ == nullptr
        && return this->archiveBackupKeepPolicy_ == nullptr && return this->archiveBackupRetentionPeriod_ == nullptr && return this->backupInterval_ == nullptr && return this->backupLog_ == nullptr && return this->backupMethod_ == nullptr
        && return this->backupPriority_ == nullptr && return this->backupRetentionPeriod_ == nullptr && return this->category_ == nullptr && return this->compressType_ == nullptr && return this->enableBackupLog_ == nullptr
        && return this->enableIncrementDataBackup_ == nullptr && return this->enablePitrProtection_ == nullptr && return this->highSpaceUsageProtection_ == nullptr && return this->localLogRetentionHours_ == nullptr && return this->localLogRetentionSpace_ == nullptr
        && return this->logBackupFrequency_ == nullptr && return this->logBackupLocalRetentionNumber_ == nullptr && return this->logBackupRetentionPeriod_ == nullptr && return this->pitrRetentionPeriod_ == nullptr && return this->preferredBackupPeriod_ == nullptr
        && return this->preferredBackupTime_ == nullptr && return this->preferredNextBackupTime_ == nullptr && return this->releasedKeepPolicy_ == nullptr && return this->requestId_ == nullptr && return this->supportModifyBackupPriority_ == nullptr
        && return this->supportReleasedKeep_ == nullptr && return this->supportVolumeShadowCopy_ == nullptr && return this->supportsHighFrequencyBackup_ == nullptr; };
    // archiveBackupKeepCount Field Functions 
    bool hasArchiveBackupKeepCount() const { return this->archiveBackupKeepCount_ != nullptr;};
    void deleteArchiveBackupKeepCount() { this->archiveBackupKeepCount_ = nullptr;};
    inline string archiveBackupKeepCount() const { DARABONBA_PTR_GET_DEFAULT(archiveBackupKeepCount_, "") };
    inline DescribeBackupPolicyResponseBody& setArchiveBackupKeepCount(string archiveBackupKeepCount) { DARABONBA_PTR_SET_VALUE(archiveBackupKeepCount_, archiveBackupKeepCount) };


    // archiveBackupKeepPolicy Field Functions 
    bool hasArchiveBackupKeepPolicy() const { return this->archiveBackupKeepPolicy_ != nullptr;};
    void deleteArchiveBackupKeepPolicy() { this->archiveBackupKeepPolicy_ = nullptr;};
    inline string archiveBackupKeepPolicy() const { DARABONBA_PTR_GET_DEFAULT(archiveBackupKeepPolicy_, "") };
    inline DescribeBackupPolicyResponseBody& setArchiveBackupKeepPolicy(string archiveBackupKeepPolicy) { DARABONBA_PTR_SET_VALUE(archiveBackupKeepPolicy_, archiveBackupKeepPolicy) };


    // archiveBackupRetentionPeriod Field Functions 
    bool hasArchiveBackupRetentionPeriod() const { return this->archiveBackupRetentionPeriod_ != nullptr;};
    void deleteArchiveBackupRetentionPeriod() { this->archiveBackupRetentionPeriod_ = nullptr;};
    inline string archiveBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(archiveBackupRetentionPeriod_, "") };
    inline DescribeBackupPolicyResponseBody& setArchiveBackupRetentionPeriod(string archiveBackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(archiveBackupRetentionPeriod_, archiveBackupRetentionPeriod) };


    // backupInterval Field Functions 
    bool hasBackupInterval() const { return this->backupInterval_ != nullptr;};
    void deleteBackupInterval() { this->backupInterval_ = nullptr;};
    inline string backupInterval() const { DARABONBA_PTR_GET_DEFAULT(backupInterval_, "") };
    inline DescribeBackupPolicyResponseBody& setBackupInterval(string backupInterval) { DARABONBA_PTR_SET_VALUE(backupInterval_, backupInterval) };


    // backupLog Field Functions 
    bool hasBackupLog() const { return this->backupLog_ != nullptr;};
    void deleteBackupLog() { this->backupLog_ = nullptr;};
    inline string backupLog() const { DARABONBA_PTR_GET_DEFAULT(backupLog_, "") };
    inline DescribeBackupPolicyResponseBody& setBackupLog(string backupLog) { DARABONBA_PTR_SET_VALUE(backupLog_, backupLog) };


    // backupMethod Field Functions 
    bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
    void deleteBackupMethod() { this->backupMethod_ = nullptr;};
    inline string backupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
    inline DescribeBackupPolicyResponseBody& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


    // backupPriority Field Functions 
    bool hasBackupPriority() const { return this->backupPriority_ != nullptr;};
    void deleteBackupPriority() { this->backupPriority_ = nullptr;};
    inline int32_t backupPriority() const { DARABONBA_PTR_GET_DEFAULT(backupPriority_, 0) };
    inline DescribeBackupPolicyResponseBody& setBackupPriority(int32_t backupPriority) { DARABONBA_PTR_SET_VALUE(backupPriority_, backupPriority) };


    // backupRetentionPeriod Field Functions 
    bool hasBackupRetentionPeriod() const { return this->backupRetentionPeriod_ != nullptr;};
    void deleteBackupRetentionPeriod() { this->backupRetentionPeriod_ = nullptr;};
    inline int32_t backupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPeriod_, 0) };
    inline DescribeBackupPolicyResponseBody& setBackupRetentionPeriod(int32_t backupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(backupRetentionPeriod_, backupRetentionPeriod) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeBackupPolicyResponseBody& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // compressType Field Functions 
    bool hasCompressType() const { return this->compressType_ != nullptr;};
    void deleteCompressType() { this->compressType_ = nullptr;};
    inline string compressType() const { DARABONBA_PTR_GET_DEFAULT(compressType_, "") };
    inline DescribeBackupPolicyResponseBody& setCompressType(string compressType) { DARABONBA_PTR_SET_VALUE(compressType_, compressType) };


    // enableBackupLog Field Functions 
    bool hasEnableBackupLog() const { return this->enableBackupLog_ != nullptr;};
    void deleteEnableBackupLog() { this->enableBackupLog_ = nullptr;};
    inline string enableBackupLog() const { DARABONBA_PTR_GET_DEFAULT(enableBackupLog_, "") };
    inline DescribeBackupPolicyResponseBody& setEnableBackupLog(string enableBackupLog) { DARABONBA_PTR_SET_VALUE(enableBackupLog_, enableBackupLog) };


    // enableIncrementDataBackup Field Functions 
    bool hasEnableIncrementDataBackup() const { return this->enableIncrementDataBackup_ != nullptr;};
    void deleteEnableIncrementDataBackup() { this->enableIncrementDataBackup_ = nullptr;};
    inline bool enableIncrementDataBackup() const { DARABONBA_PTR_GET_DEFAULT(enableIncrementDataBackup_, false) };
    inline DescribeBackupPolicyResponseBody& setEnableIncrementDataBackup(bool enableIncrementDataBackup) { DARABONBA_PTR_SET_VALUE(enableIncrementDataBackup_, enableIncrementDataBackup) };


    // enablePitrProtection Field Functions 
    bool hasEnablePitrProtection() const { return this->enablePitrProtection_ != nullptr;};
    void deleteEnablePitrProtection() { this->enablePitrProtection_ = nullptr;};
    inline bool enablePitrProtection() const { DARABONBA_PTR_GET_DEFAULT(enablePitrProtection_, false) };
    inline DescribeBackupPolicyResponseBody& setEnablePitrProtection(bool enablePitrProtection) { DARABONBA_PTR_SET_VALUE(enablePitrProtection_, enablePitrProtection) };


    // highSpaceUsageProtection Field Functions 
    bool hasHighSpaceUsageProtection() const { return this->highSpaceUsageProtection_ != nullptr;};
    void deleteHighSpaceUsageProtection() { this->highSpaceUsageProtection_ = nullptr;};
    inline string highSpaceUsageProtection() const { DARABONBA_PTR_GET_DEFAULT(highSpaceUsageProtection_, "") };
    inline DescribeBackupPolicyResponseBody& setHighSpaceUsageProtection(string highSpaceUsageProtection) { DARABONBA_PTR_SET_VALUE(highSpaceUsageProtection_, highSpaceUsageProtection) };


    // localLogRetentionHours Field Functions 
    bool hasLocalLogRetentionHours() const { return this->localLogRetentionHours_ != nullptr;};
    void deleteLocalLogRetentionHours() { this->localLogRetentionHours_ = nullptr;};
    inline int32_t localLogRetentionHours() const { DARABONBA_PTR_GET_DEFAULT(localLogRetentionHours_, 0) };
    inline DescribeBackupPolicyResponseBody& setLocalLogRetentionHours(int32_t localLogRetentionHours) { DARABONBA_PTR_SET_VALUE(localLogRetentionHours_, localLogRetentionHours) };


    // localLogRetentionSpace Field Functions 
    bool hasLocalLogRetentionSpace() const { return this->localLogRetentionSpace_ != nullptr;};
    void deleteLocalLogRetentionSpace() { this->localLogRetentionSpace_ = nullptr;};
    inline string localLogRetentionSpace() const { DARABONBA_PTR_GET_DEFAULT(localLogRetentionSpace_, "") };
    inline DescribeBackupPolicyResponseBody& setLocalLogRetentionSpace(string localLogRetentionSpace) { DARABONBA_PTR_SET_VALUE(localLogRetentionSpace_, localLogRetentionSpace) };


    // logBackupFrequency Field Functions 
    bool hasLogBackupFrequency() const { return this->logBackupFrequency_ != nullptr;};
    void deleteLogBackupFrequency() { this->logBackupFrequency_ = nullptr;};
    inline string logBackupFrequency() const { DARABONBA_PTR_GET_DEFAULT(logBackupFrequency_, "") };
    inline DescribeBackupPolicyResponseBody& setLogBackupFrequency(string logBackupFrequency) { DARABONBA_PTR_SET_VALUE(logBackupFrequency_, logBackupFrequency) };


    // logBackupLocalRetentionNumber Field Functions 
    bool hasLogBackupLocalRetentionNumber() const { return this->logBackupLocalRetentionNumber_ != nullptr;};
    void deleteLogBackupLocalRetentionNumber() { this->logBackupLocalRetentionNumber_ = nullptr;};
    inline int32_t logBackupLocalRetentionNumber() const { DARABONBA_PTR_GET_DEFAULT(logBackupLocalRetentionNumber_, 0) };
    inline DescribeBackupPolicyResponseBody& setLogBackupLocalRetentionNumber(int32_t logBackupLocalRetentionNumber) { DARABONBA_PTR_SET_VALUE(logBackupLocalRetentionNumber_, logBackupLocalRetentionNumber) };


    // logBackupRetentionPeriod Field Functions 
    bool hasLogBackupRetentionPeriod() const { return this->logBackupRetentionPeriod_ != nullptr;};
    void deleteLogBackupRetentionPeriod() { this->logBackupRetentionPeriod_ = nullptr;};
    inline int32_t logBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(logBackupRetentionPeriod_, 0) };
    inline DescribeBackupPolicyResponseBody& setLogBackupRetentionPeriod(int32_t logBackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(logBackupRetentionPeriod_, logBackupRetentionPeriod) };


    // pitrRetentionPeriod Field Functions 
    bool hasPitrRetentionPeriod() const { return this->pitrRetentionPeriod_ != nullptr;};
    void deletePitrRetentionPeriod() { this->pitrRetentionPeriod_ = nullptr;};
    inline int32_t pitrRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(pitrRetentionPeriod_, 0) };
    inline DescribeBackupPolicyResponseBody& setPitrRetentionPeriod(int32_t pitrRetentionPeriod) { DARABONBA_PTR_SET_VALUE(pitrRetentionPeriod_, pitrRetentionPeriod) };


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


    // releasedKeepPolicy Field Functions 
    bool hasReleasedKeepPolicy() const { return this->releasedKeepPolicy_ != nullptr;};
    void deleteReleasedKeepPolicy() { this->releasedKeepPolicy_ = nullptr;};
    inline string releasedKeepPolicy() const { DARABONBA_PTR_GET_DEFAULT(releasedKeepPolicy_, "") };
    inline DescribeBackupPolicyResponseBody& setReleasedKeepPolicy(string releasedKeepPolicy) { DARABONBA_PTR_SET_VALUE(releasedKeepPolicy_, releasedKeepPolicy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportModifyBackupPriority Field Functions 
    bool hasSupportModifyBackupPriority() const { return this->supportModifyBackupPriority_ != nullptr;};
    void deleteSupportModifyBackupPriority() { this->supportModifyBackupPriority_ = nullptr;};
    inline bool supportModifyBackupPriority() const { DARABONBA_PTR_GET_DEFAULT(supportModifyBackupPriority_, false) };
    inline DescribeBackupPolicyResponseBody& setSupportModifyBackupPriority(bool supportModifyBackupPriority) { DARABONBA_PTR_SET_VALUE(supportModifyBackupPriority_, supportModifyBackupPriority) };


    // supportReleasedKeep Field Functions 
    bool hasSupportReleasedKeep() const { return this->supportReleasedKeep_ != nullptr;};
    void deleteSupportReleasedKeep() { this->supportReleasedKeep_ = nullptr;};
    inline int32_t supportReleasedKeep() const { DARABONBA_PTR_GET_DEFAULT(supportReleasedKeep_, 0) };
    inline DescribeBackupPolicyResponseBody& setSupportReleasedKeep(int32_t supportReleasedKeep) { DARABONBA_PTR_SET_VALUE(supportReleasedKeep_, supportReleasedKeep) };


    // supportVolumeShadowCopy Field Functions 
    bool hasSupportVolumeShadowCopy() const { return this->supportVolumeShadowCopy_ != nullptr;};
    void deleteSupportVolumeShadowCopy() { this->supportVolumeShadowCopy_ = nullptr;};
    inline int32_t supportVolumeShadowCopy() const { DARABONBA_PTR_GET_DEFAULT(supportVolumeShadowCopy_, 0) };
    inline DescribeBackupPolicyResponseBody& setSupportVolumeShadowCopy(int32_t supportVolumeShadowCopy) { DARABONBA_PTR_SET_VALUE(supportVolumeShadowCopy_, supportVolumeShadowCopy) };


    // supportsHighFrequencyBackup Field Functions 
    bool hasSupportsHighFrequencyBackup() const { return this->supportsHighFrequencyBackup_ != nullptr;};
    void deleteSupportsHighFrequencyBackup() { this->supportsHighFrequencyBackup_ = nullptr;};
    inline int64_t supportsHighFrequencyBackup() const { DARABONBA_PTR_GET_DEFAULT(supportsHighFrequencyBackup_, 0L) };
    inline DescribeBackupPolicyResponseBody& setSupportsHighFrequencyBackup(int64_t supportsHighFrequencyBackup) { DARABONBA_PTR_SET_VALUE(supportsHighFrequencyBackup_, supportsHighFrequencyBackup) };


  protected:
    // The number of archived backup files that are retained.
    std::shared_ptr<string> archiveBackupKeepCount_ = nullptr;
    // The cycle based on which archived backup files are retained.
    std::shared_ptr<string> archiveBackupKeepPolicy_ = nullptr;
    // The number of days for which archived backup files are retained.
    std::shared_ptr<string> archiveBackupRetentionPeriod_ = nullptr;
    // The backup interval. Unit: minutes.
    // 
    // *   If the instance runs MySQL, the interval is the same as the value of the Snapshot Backup Start Time parameter rather than the Snapshot Backup Period parameter in the ApsaraDB RDS console. For more information, see [Back up an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/98818.html).
    // *   If the instance runs SQL Server, the interval is the same as the log backup frequency.
    std::shared_ptr<string> backupInterval_ = nullptr;
    // Indicates whether the log backup feature is enabled. Valid values:
    // 
    // *   **Enable**
    // *   **Disabled**
    std::shared_ptr<string> backupLog_ = nullptr;
    // The backup method of the instance. Valid values:
    // 
    // *   **Physical**: physical backup
    // *   **Snapshot**: snapshot backup
    // 
    // > This parameter is returned only when the instance runs SQL Server and uses cloud disks.
    std::shared_ptr<string> backupMethod_ = nullptr;
    // The backup settings of the secondary instance. Valid values:
    // 
    // *   **1**: Secondary instance preferred
    // *   **2**: Primary instance preferred
    // 
    // >  This parameter is available only for instances that run SQL Server on RDS Cluster Edition. This parameter is returned only when SupportModifyBackupPriority is set to True.
    std::shared_ptr<int32_t> backupPriority_ = nullptr;
    // The number of days for which data backup files are retained.
    std::shared_ptr<int32_t> backupRetentionPeriod_ = nullptr;
    // Indicates whether to enable the single-digit second backup feature. This feature allows ApsaraDB RDS to complete a backup within single-digit seconds. Valid values:
    // 
    // *   **Flash**: The single-digit second backup feature is enabled.
    // *   **Standard**: The single-digit second backup feature is disabled.
    // 
    // > This parameter takes effect only when you set the **BackupPolicyMode** parameter to **DataBackupPolicy**.
    std::shared_ptr<string> category_ = nullptr;
    // The method that is used to compress backup data. Valid values:
    // 
    // *   **0**: Backup data is not compressed.
    // *   **1**: Backup data is compressed by using zlib.
    // *   **2**: Backup data is compressed by using zlib that invokes more than one thread in parallel for each backup.
    // *   **4**: Backup data is compressed by using QuickLZ and can be used to restore individual databases or tables.
    // *   **8**: Backup data is compressed by using QuickLZ but cannot be used to restore individual databases or tables.
    std::shared_ptr<string> compressType_ = nullptr;
    // Indicates whether the log backup feature is enabled. Valid values:
    // 
    // *   **1**: enabled
    // *   **0**: disabled
    std::shared_ptr<string> enableBackupLog_ = nullptr;
    // Indicates whether incremental backup is enabled. Valid values:
    // 
    // *   **True**: Incremental backup is enabled.
    // *   **False**: Incremental backup is disabled.
    std::shared_ptr<bool> enableIncrementDataBackup_ = nullptr;
    // Indicates whether the point-in-time restoration (PITR) feature is enabled. The PITR feature is an enhancement of the log backup feature. Valid values:
    // 
    // *   **True**
    // *   **False**
    // 
    // >  This parameter is returned only when the instance runs MySQL. For more information, see [Configure the PITR feature](https://help.aliyun.com/document_detail/2666046.html).
    std::shared_ptr<bool> enablePitrProtection_ = nullptr;
    // Indicates whether the log backup deletion feature is enabled. If the disk usage exceeds 80% or the remaining disk space is less than 5 GB on the instance, this feature deletes binary log files. Valid values:
    // 
    // *   **Disable**
    // *   **Enable**
    std::shared_ptr<string> highSpaceUsageProtection_ = nullptr;
    // The number of hours for which log backup files are retained on the instance.
    std::shared_ptr<int32_t> localLogRetentionHours_ = nullptr;
    // The maximum storage usage that is allowed for log files on the instance.
    std::shared_ptr<string> localLogRetentionSpace_ = nullptr;
    // The backup frequency of logs. Valid values:
    // 
    // *   **LogInterval**: Log backups are performed every 30 minutes.
    // *   Default value: same as the value of the **PreferredBackupPeriod** parameter.
    // 
    // >  This parameter is returned only when the instance runs SQL Server.
    std::shared_ptr<string> logBackupFrequency_ = nullptr;
    // The number of binary log files that you want to retain on the instance.
    std::shared_ptr<int32_t> logBackupLocalRetentionNumber_ = nullptr;
    // The number of days for which log backup files are retained.
    std::shared_ptr<int32_t> logBackupRetentionPeriod_ = nullptr;
    // The number of days during which you can restore data of the instance to any point in time.
    std::shared_ptr<int32_t> pitrRetentionPeriod_ = nullptr;
    // The cycle based on which you want to perform a backup. Separate multiple values with commas (,). Valid values:
    // 
    // *   **Monday**
    // *   **Tuesday**
    // *   **Wednesday**
    // *   **Thursday**
    // *   **Friday**
    // *   **Saturday**
    // *   **Sunday**
    std::shared_ptr<string> preferredBackupPeriod_ = nullptr;
    // The time when a data backup is performed. The time follows the ISO 8601 standard in the *HH:mm*Z-*HH:mm*Z format. The time is displayed in UTC.
    std::shared_ptr<string> preferredBackupTime_ = nullptr;
    // The time when the next backup is performed. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time is displayed in UTC.
    std::shared_ptr<string> preferredNextBackupTime_ = nullptr;
    // The policy that is used to retain archived backup files if the instance is released. Valid values:
    // 
    // *   **None**: No archived backup files are retained.
    // *   **Lastest**: Only the last archived backup file is retained.
    // *   **All**: All archived backup files are retained.
    std::shared_ptr<string> releasedKeepPolicy_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the backup settings of a secondary instance can be modified. Valid values:
    // 
    // *   **True**
    // *   **False**
    std::shared_ptr<bool> supportModifyBackupPriority_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<int32_t> supportReleasedKeep_ = nullptr;
    // Indicates whether the instance supports snapshot backups. Valid values:
    // 
    // *   **1**: The instance supports snapshot backups.
    // *   **0**: The instance does not support snapshot backups.
    // 
    // >  This parameter is returned only when the instance runs SQL Server.
    std::shared_ptr<int32_t> supportVolumeShadowCopy_ = nullptr;
    // Indicates whether log backups for SQL Server are performed verery five minutes.
    // 
    // *   0: No
    // *   1: Yes
    std::shared_ptr<int64_t> supportsHighFrequencyBackup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
