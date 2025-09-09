// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPLOCALRESPONSEBODYBACKUPPOLICYDO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPLOCALRESPONSEBODYBACKUPPOLICYDO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeBackupLocalResponseBodyBackupPolicyDO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupLocalResponseBodyBackupPolicyDO& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeBackupLocalResponseBodyBackupPolicyDO& obj) { 
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
    DescribeBackupLocalResponseBodyBackupPolicyDO() = default ;
    DescribeBackupLocalResponseBodyBackupPolicyDO(const DescribeBackupLocalResponseBodyBackupPolicyDO &) = default ;
    DescribeBackupLocalResponseBodyBackupPolicyDO(DescribeBackupLocalResponseBodyBackupPolicyDO &&) = default ;
    DescribeBackupLocalResponseBodyBackupPolicyDO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupLocalResponseBodyBackupPolicyDO() = default ;
    DescribeBackupLocalResponseBodyBackupPolicyDO& operator=(const DescribeBackupLocalResponseBodyBackupPolicyDO &) = default ;
    DescribeBackupLocalResponseBodyBackupPolicyDO& operator=(DescribeBackupLocalResponseBodyBackupPolicyDO &&) = default ;
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
    inline DescribeBackupLocalResponseBodyBackupPolicyDO& setBackupAppName(string backupAppName) { DARABONBA_PTR_SET_VALUE(backupAppName_, backupAppName) };


    // backupDbName Field Functions 
    bool hasBackupDbName() const { return this->backupDbName_ != nullptr;};
    void deleteBackupDbName() { this->backupDbName_ = nullptr;};
    inline string backupDbName() const { DARABONBA_PTR_GET_DEFAULT(backupDbName_, "") };
    inline DescribeBackupLocalResponseBodyBackupPolicyDO& setBackupDbName(string backupDbName) { DARABONBA_PTR_SET_VALUE(backupDbName_, backupDbName) };


    // backupLevel Field Functions 
    bool hasBackupLevel() const { return this->backupLevel_ != nullptr;};
    void deleteBackupLevel() { this->backupLevel_ = nullptr;};
    inline string backupLevel() const { DARABONBA_PTR_GET_DEFAULT(backupLevel_, "") };
    inline DescribeBackupLocalResponseBodyBackupPolicyDO& setBackupLevel(string backupLevel) { DARABONBA_PTR_SET_VALUE(backupLevel_, backupLevel) };


    // backupLog Field Functions 
    bool hasBackupLog() const { return this->backupLog_ != nullptr;};
    void deleteBackupLog() { this->backupLog_ = nullptr;};
    inline string backupLog() const { DARABONBA_PTR_GET_DEFAULT(backupLog_, "") };
    inline DescribeBackupLocalResponseBodyBackupPolicyDO& setBackupLog(string backupLog) { DARABONBA_PTR_SET_VALUE(backupLog_, backupLog) };


    // backupMode Field Functions 
    bool hasBackupMode() const { return this->backupMode_ != nullptr;};
    void deleteBackupMode() { this->backupMode_ = nullptr;};
    inline string backupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
    inline DescribeBackupLocalResponseBodyBackupPolicyDO& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


    // backupPolicyMode Field Functions 
    bool hasBackupPolicyMode() const { return this->backupPolicyMode_ != nullptr;};
    void deleteBackupPolicyMode() { this->backupPolicyMode_ = nullptr;};
    inline string backupPolicyMode() const { DARABONBA_PTR_GET_DEFAULT(backupPolicyMode_, "") };
    inline DescribeBackupLocalResponseBodyBackupPolicyDO& setBackupPolicyMode(string backupPolicyMode) { DARABONBA_PTR_SET_VALUE(backupPolicyMode_, backupPolicyMode) };


    // backupRetentionPeriod Field Functions 
    bool hasBackupRetentionPeriod() const { return this->backupRetentionPeriod_ != nullptr;};
    void deleteBackupRetentionPeriod() { this->backupRetentionPeriod_ = nullptr;};
    inline int64_t backupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPeriod_, 0L) };
    inline DescribeBackupLocalResponseBodyBackupPolicyDO& setBackupRetentionPeriod(int64_t backupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(backupRetentionPeriod_, backupRetentionPeriod) };


    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string backupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline DescribeBackupLocalResponseBodyBackupPolicyDO& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // dataBackupRetentionPeriod Field Functions 
    bool hasDataBackupRetentionPeriod() const { return this->dataBackupRetentionPeriod_ != nullptr;};
    void deleteDataBackupRetentionPeriod() { this->dataBackupRetentionPeriod_ = nullptr;};
    inline int64_t dataBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(dataBackupRetentionPeriod_, 0L) };
    inline DescribeBackupLocalResponseBodyBackupPolicyDO& setDataBackupRetentionPeriod(int64_t dataBackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(dataBackupRetentionPeriod_, dataBackupRetentionPeriod) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeBackupLocalResponseBodyBackupPolicyDO& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeBackupLocalResponseBodyBackupPolicyDO& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // highSpaceUsageProtection Field Functions 
    bool hasHighSpaceUsageProtection() const { return this->highSpaceUsageProtection_ != nullptr;};
    void deleteHighSpaceUsageProtection() { this->highSpaceUsageProtection_ = nullptr;};
    inline int64_t highSpaceUsageProtection() const { DARABONBA_PTR_GET_DEFAULT(highSpaceUsageProtection_, 0L) };
    inline DescribeBackupLocalResponseBodyBackupPolicyDO& setHighSpaceUsageProtection(int64_t highSpaceUsageProtection) { DARABONBA_PTR_SET_VALUE(highSpaceUsageProtection_, highSpaceUsageProtection) };


    // localLogRetentionHours Field Functions 
    bool hasLocalLogRetentionHours() const { return this->localLogRetentionHours_ != nullptr;};
    void deleteLocalLogRetentionHours() { this->localLogRetentionHours_ = nullptr;};
    inline int64_t localLogRetentionHours() const { DARABONBA_PTR_GET_DEFAULT(localLogRetentionHours_, 0L) };
    inline DescribeBackupLocalResponseBodyBackupPolicyDO& setLocalLogRetentionHours(int64_t localLogRetentionHours) { DARABONBA_PTR_SET_VALUE(localLogRetentionHours_, localLogRetentionHours) };


    // localLogRetentionSpace Field Functions 
    bool hasLocalLogRetentionSpace() const { return this->localLogRetentionSpace_ != nullptr;};
    void deleteLocalLogRetentionSpace() { this->localLogRetentionSpace_ = nullptr;};
    inline int64_t localLogRetentionSpace() const { DARABONBA_PTR_GET_DEFAULT(localLogRetentionSpace_, 0L) };
    inline DescribeBackupLocalResponseBodyBackupPolicyDO& setLocalLogRetentionSpace(int64_t localLogRetentionSpace) { DARABONBA_PTR_SET_VALUE(localLogRetentionSpace_, localLogRetentionSpace) };


    // logBackupRetentionPeriod Field Functions 
    bool hasLogBackupRetentionPeriod() const { return this->logBackupRetentionPeriod_ != nullptr;};
    void deleteLogBackupRetentionPeriod() { this->logBackupRetentionPeriod_ = nullptr;};
    inline int64_t logBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(logBackupRetentionPeriod_, 0L) };
    inline DescribeBackupLocalResponseBodyBackupPolicyDO& setLogBackupRetentionPeriod(int64_t logBackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(logBackupRetentionPeriod_, logBackupRetentionPeriod) };


    // nextBackupActuallyTime Field Functions 
    bool hasNextBackupActuallyTime() const { return this->nextBackupActuallyTime_ != nullptr;};
    void deleteNextBackupActuallyTime() { this->nextBackupActuallyTime_ = nullptr;};
    inline string nextBackupActuallyTime() const { DARABONBA_PTR_GET_DEFAULT(nextBackupActuallyTime_, "") };
    inline DescribeBackupLocalResponseBodyBackupPolicyDO& setNextBackupActuallyTime(string nextBackupActuallyTime) { DARABONBA_PTR_SET_VALUE(nextBackupActuallyTime_, nextBackupActuallyTime) };


    // preferredBackupPeriod Field Functions 
    bool hasPreferredBackupPeriod() const { return this->preferredBackupPeriod_ != nullptr;};
    void deletePreferredBackupPeriod() { this->preferredBackupPeriod_ = nullptr;};
    inline string preferredBackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupPeriod_, "") };
    inline DescribeBackupLocalResponseBodyBackupPolicyDO& setPreferredBackupPeriod(string preferredBackupPeriod) { DARABONBA_PTR_SET_VALUE(preferredBackupPeriod_, preferredBackupPeriod) };


    // preferredBackupTime Field Functions 
    bool hasPreferredBackupTime() const { return this->preferredBackupTime_ != nullptr;};
    void deletePreferredBackupTime() { this->preferredBackupTime_ = nullptr;};
    inline string preferredBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupTime_, "") };
    inline DescribeBackupLocalResponseBodyBackupPolicyDO& setPreferredBackupTime(string preferredBackupTime) { DARABONBA_PTR_SET_VALUE(preferredBackupTime_, preferredBackupTime) };


  protected:
    // No value is returned.
    std::shared_ptr<string> backupAppName_ = nullptr;
    // No value is returned.
    std::shared_ptr<string> backupDbName_ = nullptr;
    // No value is returned.
    std::shared_ptr<string> backupLevel_ = nullptr;
    // No value is returned.
    std::shared_ptr<string> backupLog_ = nullptr;
    // No value is returned.
    std::shared_ptr<string> backupMode_ = nullptr;
    // No value is returned.
    std::shared_ptr<string> backupPolicyMode_ = nullptr;
    // No value is returned.
    std::shared_ptr<int64_t> backupRetentionPeriod_ = nullptr;
    // No value is returned.
    std::shared_ptr<string> backupType_ = nullptr;
    // No value is returned.
    std::shared_ptr<int64_t> dataBackupRetentionPeriod_ = nullptr;
    // No value is returned.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // No value is returned.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // Indicates whether the feature is enabled to forcibly delete binary log files if the used storage space of the instance exceeds 90% of the total storage space or the remaining storage space is less than 5 GB. Valid values:
    // 
    // *   1: The feature is enabled.
    // *   0: The feature is disabled.
    std::shared_ptr<int64_t> highSpaceUsageProtection_ = nullptr;
    // The number of hours for which log backup files are retained on the instance. Valid values: 0 to 168. Default value: **18**. The value **0** indicates that log backup files are not retained.
    std::shared_ptr<int64_t> localLogRetentionHours_ = nullptr;
    // The maximum storage usage that is allowed for local log files. Valid values: 0 to 50. Default value: 30.
    std::shared_ptr<int64_t> localLogRetentionSpace_ = nullptr;
    // No value is returned.
    std::shared_ptr<int64_t> logBackupRetentionPeriod_ = nullptr;
    // No value is returned.
    std::shared_ptr<string> nextBackupActuallyTime_ = nullptr;
    // No value is returned.
    std::shared_ptr<string> preferredBackupPeriod_ = nullptr;
    // No value is returned.
    std::shared_ptr<string> preferredBackupTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
