// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODYBACKUPPOLICYDO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODYBACKUPPOLICYDO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeBackupPolicyResponseBodyBackupPolicyDO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPolicyResponseBodyBackupPolicyDO& obj) { 
      DARABONBA_PTR_TO_JSON(BackupAppName, backupAppName_);
      DARABONBA_PTR_TO_JSON(BackupDbName, backupDbName_);
      DARABONBA_PTR_TO_JSON(BackupLevel, backupLevel_);
      DARABONBA_PTR_TO_JSON(BackupLog, backupLog_);
      DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_TO_JSON(BackupPolicyMode, backupPolicyMode_);
      DARABONBA_PTR_TO_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(DataBackupRetentionPeriod, dataBackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(HighSpaceUsageProtection, highSpaceUsageProtection_);
      DARABONBA_PTR_TO_JSON(LocalLogRetentionHours, localLogRetentionHours_);
      DARABONBA_PTR_TO_JSON(LocalLogRetentionSpace, localLogRetentionSpace_);
      DARABONBA_PTR_TO_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(NextBackupActuallyTime, nextBackupActuallyTime_);
      DARABONBA_PTR_TO_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupTime, preferredBackupTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPolicyResponseBodyBackupPolicyDO& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupAppName, backupAppName_);
      DARABONBA_PTR_FROM_JSON(BackupDbName, backupDbName_);
      DARABONBA_PTR_FROM_JSON(BackupLevel, backupLevel_);
      DARABONBA_PTR_FROM_JSON(BackupLog, backupLog_);
      DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_FROM_JSON(BackupPolicyMode, backupPolicyMode_);
      DARABONBA_PTR_FROM_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(DataBackupRetentionPeriod, dataBackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(HighSpaceUsageProtection, highSpaceUsageProtection_);
      DARABONBA_PTR_FROM_JSON(LocalLogRetentionHours, localLogRetentionHours_);
      DARABONBA_PTR_FROM_JSON(LocalLogRetentionSpace, localLogRetentionSpace_);
      DARABONBA_PTR_FROM_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(NextBackupActuallyTime, nextBackupActuallyTime_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupTime, preferredBackupTime_);
    };
    DescribeBackupPolicyResponseBodyBackupPolicyDO() = default ;
    DescribeBackupPolicyResponseBodyBackupPolicyDO(const DescribeBackupPolicyResponseBodyBackupPolicyDO &) = default ;
    DescribeBackupPolicyResponseBodyBackupPolicyDO(DescribeBackupPolicyResponseBodyBackupPolicyDO &&) = default ;
    DescribeBackupPolicyResponseBodyBackupPolicyDO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPolicyResponseBodyBackupPolicyDO() = default ;
    DescribeBackupPolicyResponseBodyBackupPolicyDO& operator=(const DescribeBackupPolicyResponseBodyBackupPolicyDO &) = default ;
    DescribeBackupPolicyResponseBodyBackupPolicyDO& operator=(DescribeBackupPolicyResponseBodyBackupPolicyDO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupAppName_ != nullptr
        && this->backupDbName_ != nullptr && this->backupLevel_ != nullptr && this->backupLog_ != nullptr && this->backupMode_ != nullptr && this->backupPolicyMode_ != nullptr
        && this->backupRetentionPeriod_ != nullptr && this->backupType_ != nullptr && this->dataBackupRetentionPeriod_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr
        && this->highSpaceUsageProtection_ != nullptr && this->localLogRetentionHours_ != nullptr && this->localLogRetentionSpace_ != nullptr && this->logBackupRetentionPeriod_ != nullptr && this->nextBackupActuallyTime_ != nullptr
        && this->preferredBackupPeriod_ != nullptr && this->preferredBackupTime_ != nullptr; };
    // backupAppName Field Functions 
    bool hasBackupAppName() const { return this->backupAppName_ != nullptr;};
    void deleteBackupAppName() { this->backupAppName_ = nullptr;};
    inline string backupAppName() const { DARABONBA_PTR_GET_DEFAULT(backupAppName_, "") };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDO& setBackupAppName(string backupAppName) { DARABONBA_PTR_SET_VALUE(backupAppName_, backupAppName) };


    // backupDbName Field Functions 
    bool hasBackupDbName() const { return this->backupDbName_ != nullptr;};
    void deleteBackupDbName() { this->backupDbName_ = nullptr;};
    inline string backupDbName() const { DARABONBA_PTR_GET_DEFAULT(backupDbName_, "") };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDO& setBackupDbName(string backupDbName) { DARABONBA_PTR_SET_VALUE(backupDbName_, backupDbName) };


    // backupLevel Field Functions 
    bool hasBackupLevel() const { return this->backupLevel_ != nullptr;};
    void deleteBackupLevel() { this->backupLevel_ = nullptr;};
    inline string backupLevel() const { DARABONBA_PTR_GET_DEFAULT(backupLevel_, "") };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDO& setBackupLevel(string backupLevel) { DARABONBA_PTR_SET_VALUE(backupLevel_, backupLevel) };


    // backupLog Field Functions 
    bool hasBackupLog() const { return this->backupLog_ != nullptr;};
    void deleteBackupLog() { this->backupLog_ = nullptr;};
    inline string backupLog() const { DARABONBA_PTR_GET_DEFAULT(backupLog_, "") };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDO& setBackupLog(string backupLog) { DARABONBA_PTR_SET_VALUE(backupLog_, backupLog) };


    // backupMode Field Functions 
    bool hasBackupMode() const { return this->backupMode_ != nullptr;};
    void deleteBackupMode() { this->backupMode_ = nullptr;};
    inline string backupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDO& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


    // backupPolicyMode Field Functions 
    bool hasBackupPolicyMode() const { return this->backupPolicyMode_ != nullptr;};
    void deleteBackupPolicyMode() { this->backupPolicyMode_ = nullptr;};
    inline string backupPolicyMode() const { DARABONBA_PTR_GET_DEFAULT(backupPolicyMode_, "") };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDO& setBackupPolicyMode(string backupPolicyMode) { DARABONBA_PTR_SET_VALUE(backupPolicyMode_, backupPolicyMode) };


    // backupRetentionPeriod Field Functions 
    bool hasBackupRetentionPeriod() const { return this->backupRetentionPeriod_ != nullptr;};
    void deleteBackupRetentionPeriod() { this->backupRetentionPeriod_ = nullptr;};
    inline int64_t backupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPeriod_, 0L) };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDO& setBackupRetentionPeriod(int64_t backupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(backupRetentionPeriod_, backupRetentionPeriod) };


    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string backupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDO& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // dataBackupRetentionPeriod Field Functions 
    bool hasDataBackupRetentionPeriod() const { return this->dataBackupRetentionPeriod_ != nullptr;};
    void deleteDataBackupRetentionPeriod() { this->dataBackupRetentionPeriod_ = nullptr;};
    inline int64_t dataBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(dataBackupRetentionPeriod_, 0L) };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDO& setDataBackupRetentionPeriod(int64_t dataBackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(dataBackupRetentionPeriod_, dataBackupRetentionPeriod) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDO& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDO& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // highSpaceUsageProtection Field Functions 
    bool hasHighSpaceUsageProtection() const { return this->highSpaceUsageProtection_ != nullptr;};
    void deleteHighSpaceUsageProtection() { this->highSpaceUsageProtection_ = nullptr;};
    inline int64_t highSpaceUsageProtection() const { DARABONBA_PTR_GET_DEFAULT(highSpaceUsageProtection_, 0L) };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDO& setHighSpaceUsageProtection(int64_t highSpaceUsageProtection) { DARABONBA_PTR_SET_VALUE(highSpaceUsageProtection_, highSpaceUsageProtection) };


    // localLogRetentionHours Field Functions 
    bool hasLocalLogRetentionHours() const { return this->localLogRetentionHours_ != nullptr;};
    void deleteLocalLogRetentionHours() { this->localLogRetentionHours_ = nullptr;};
    inline int64_t localLogRetentionHours() const { DARABONBA_PTR_GET_DEFAULT(localLogRetentionHours_, 0L) };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDO& setLocalLogRetentionHours(int64_t localLogRetentionHours) { DARABONBA_PTR_SET_VALUE(localLogRetentionHours_, localLogRetentionHours) };


    // localLogRetentionSpace Field Functions 
    bool hasLocalLogRetentionSpace() const { return this->localLogRetentionSpace_ != nullptr;};
    void deleteLocalLogRetentionSpace() { this->localLogRetentionSpace_ = nullptr;};
    inline int64_t localLogRetentionSpace() const { DARABONBA_PTR_GET_DEFAULT(localLogRetentionSpace_, 0L) };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDO& setLocalLogRetentionSpace(int64_t localLogRetentionSpace) { DARABONBA_PTR_SET_VALUE(localLogRetentionSpace_, localLogRetentionSpace) };


    // logBackupRetentionPeriod Field Functions 
    bool hasLogBackupRetentionPeriod() const { return this->logBackupRetentionPeriod_ != nullptr;};
    void deleteLogBackupRetentionPeriod() { this->logBackupRetentionPeriod_ = nullptr;};
    inline int64_t logBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(logBackupRetentionPeriod_, 0L) };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDO& setLogBackupRetentionPeriod(int64_t logBackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(logBackupRetentionPeriod_, logBackupRetentionPeriod) };


    // nextBackupActuallyTime Field Functions 
    bool hasNextBackupActuallyTime() const { return this->nextBackupActuallyTime_ != nullptr;};
    void deleteNextBackupActuallyTime() { this->nextBackupActuallyTime_ = nullptr;};
    inline string nextBackupActuallyTime() const { DARABONBA_PTR_GET_DEFAULT(nextBackupActuallyTime_, "") };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDO& setNextBackupActuallyTime(string nextBackupActuallyTime) { DARABONBA_PTR_SET_VALUE(nextBackupActuallyTime_, nextBackupActuallyTime) };


    // preferredBackupPeriod Field Functions 
    bool hasPreferredBackupPeriod() const { return this->preferredBackupPeriod_ != nullptr;};
    void deletePreferredBackupPeriod() { this->preferredBackupPeriod_ = nullptr;};
    inline string preferredBackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupPeriod_, "") };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDO& setPreferredBackupPeriod(string preferredBackupPeriod) { DARABONBA_PTR_SET_VALUE(preferredBackupPeriod_, preferredBackupPeriod) };


    // preferredBackupTime Field Functions 
    bool hasPreferredBackupTime() const { return this->preferredBackupTime_ != nullptr;};
    void deletePreferredBackupTime() { this->preferredBackupTime_ = nullptr;};
    inline string preferredBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupTime_, "") };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDO& setPreferredBackupTime(string preferredBackupTime) { DARABONBA_PTR_SET_VALUE(preferredBackupTime_, preferredBackupTime) };


  protected:
    // No value is returned.
    std::shared_ptr<string> backupAppName_ = nullptr;
    // No value is returned.
    std::shared_ptr<string> backupDbName_ = nullptr;
    // The backup level. Valid values:
    // 
    // *   **db**: database backup
    // *   **instance**: instance backup
    std::shared_ptr<string> backupLevel_ = nullptr;
    // Indicates whether the log backup feature is enabled. Valid values:
    // 
    // *   **1**: The log backup feature is enabled.
    // *   **0**: The log backup feature is disabled.
    std::shared_ptr<string> backupLog_ = nullptr;
    // The backup mode. Valid values:
    // 
    // *   **logic**: logical backup
    // *   **phy**: fast backup
    std::shared_ptr<string> backupMode_ = nullptr;
    // The type of the backup policy. Valid values:
    // 
    // *   **DataBackupPolicy**: a data backup policy
    // *   **LogBackupPolicy**: a log backup policy
    std::shared_ptr<string> backupPolicyMode_ = nullptr;
    // The retention period of backup files. Unit: days.
    std::shared_ptr<int64_t> backupRetentionPeriod_ = nullptr;
    // No value is returned.
    std::shared_ptr<string> backupType_ = nullptr;
    // The retention period of data backup files. Unit: days.
    std::shared_ptr<int64_t> dataBackupRetentionPeriod_ = nullptr;
    // No value is returned.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // No value is returned.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // No value is returned.
    std::shared_ptr<int64_t> highSpaceUsageProtection_ = nullptr;
    // No value is returned.
    std::shared_ptr<int64_t> localLogRetentionHours_ = nullptr;
    // No value is returned.
    std::shared_ptr<int64_t> localLogRetentionSpace_ = nullptr;
    // The retention period of log backup files. Unit: days.
    std::shared_ptr<int64_t> logBackupRetentionPeriod_ = nullptr;
    // No value is returned.
    std::shared_ptr<string> nextBackupActuallyTime_ = nullptr;
    // The backup cycle. You can specify multiple backup cycles. Separate multiple backup cycles with commas (,). Valid values:
    // 
    // *   **0**: every Monday
    // *   **1**: every Tuesday
    // *   **2**: every Wednesday
    // *   **3**: every Thursday
    // *   **4**: every Friday
    // *   **5**: every Saturday
    // *   **6**: every Sunday
    std::shared_ptr<string> preferredBackupPeriod_ = nullptr;
    // The time range in which a backup is performed. The time is displayed in UTC.
    std::shared_ptr<string> preferredBackupTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
