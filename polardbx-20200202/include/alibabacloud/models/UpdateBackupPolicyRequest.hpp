// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBACKUPPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBACKUPPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class UpdateBackupPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBackupPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupPeriod, backupPeriod_);
      DARABONBA_PTR_TO_JSON(BackupPlanBegin, backupPlanBegin_);
      DARABONBA_PTR_TO_JSON(BackupSetRetention, backupSetRetention_);
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(BackupWay, backupWay_);
      DARABONBA_PTR_TO_JSON(ColdDataBackupInterval, coldDataBackupInterval_);
      DARABONBA_PTR_TO_JSON(ColdDataBackupRetention, coldDataBackupRetention_);
      DARABONBA_PTR_TO_JSON(CrossRegionDataBackupRetention, crossRegionDataBackupRetention_);
      DARABONBA_PTR_TO_JSON(CrossRegionFilterValue, crossRegionFilterValue_);
      DARABONBA_PTR_TO_JSON(CrossRegionLogBackupRetention, crossRegionLogBackupRetention_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DestCrossRegion, destCrossRegion_);
      DARABONBA_PTR_TO_JSON(ForceCleanOnHighSpaceUsage, forceCleanOnHighSpaceUsage_);
      DARABONBA_PTR_TO_JSON(IsCrossRegionDataBackupEnabled, isCrossRegionDataBackupEnabled_);
      DARABONBA_PTR_TO_JSON(IsCrossRegionLogBackupEnabled, isCrossRegionLogBackupEnabled_);
      DARABONBA_PTR_TO_JSON(IsEnabled, isEnabled_);
      DARABONBA_PTR_TO_JSON(LocalLogRetention, localLogRetention_);
      DARABONBA_PTR_TO_JSON(LocalLogRetentionNumber, localLogRetentionNumber_);
      DARABONBA_PTR_TO_JSON(LogLocalRetentionSpace, logLocalRetentionSpace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemoveLogRetention, removeLogRetention_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBackupPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPeriod, backupPeriod_);
      DARABONBA_PTR_FROM_JSON(BackupPlanBegin, backupPlanBegin_);
      DARABONBA_PTR_FROM_JSON(BackupSetRetention, backupSetRetention_);
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(BackupWay, backupWay_);
      DARABONBA_PTR_FROM_JSON(ColdDataBackupInterval, coldDataBackupInterval_);
      DARABONBA_PTR_FROM_JSON(ColdDataBackupRetention, coldDataBackupRetention_);
      DARABONBA_PTR_FROM_JSON(CrossRegionDataBackupRetention, crossRegionDataBackupRetention_);
      DARABONBA_PTR_FROM_JSON(CrossRegionFilterValue, crossRegionFilterValue_);
      DARABONBA_PTR_FROM_JSON(CrossRegionLogBackupRetention, crossRegionLogBackupRetention_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DestCrossRegion, destCrossRegion_);
      DARABONBA_PTR_FROM_JSON(ForceCleanOnHighSpaceUsage, forceCleanOnHighSpaceUsage_);
      DARABONBA_PTR_FROM_JSON(IsCrossRegionDataBackupEnabled, isCrossRegionDataBackupEnabled_);
      DARABONBA_PTR_FROM_JSON(IsCrossRegionLogBackupEnabled, isCrossRegionLogBackupEnabled_);
      DARABONBA_PTR_FROM_JSON(IsEnabled, isEnabled_);
      DARABONBA_PTR_FROM_JSON(LocalLogRetention, localLogRetention_);
      DARABONBA_PTR_FROM_JSON(LocalLogRetentionNumber, localLogRetentionNumber_);
      DARABONBA_PTR_FROM_JSON(LogLocalRetentionSpace, logLocalRetentionSpace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemoveLogRetention, removeLogRetention_);
    };
    UpdateBackupPolicyRequest() = default ;
    UpdateBackupPolicyRequest(const UpdateBackupPolicyRequest &) = default ;
    UpdateBackupPolicyRequest(UpdateBackupPolicyRequest &&) = default ;
    UpdateBackupPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBackupPolicyRequest() = default ;
    UpdateBackupPolicyRequest& operator=(const UpdateBackupPolicyRequest &) = default ;
    UpdateBackupPolicyRequest& operator=(UpdateBackupPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupPeriod_ == nullptr
        && this->backupPlanBegin_ == nullptr && this->backupSetRetention_ == nullptr && this->backupType_ == nullptr && this->backupWay_ == nullptr && this->coldDataBackupInterval_ == nullptr
        && this->coldDataBackupRetention_ == nullptr && this->crossRegionDataBackupRetention_ == nullptr && this->crossRegionFilterValue_ == nullptr && this->crossRegionLogBackupRetention_ == nullptr && this->DBInstanceName_ == nullptr
        && this->destCrossRegion_ == nullptr && this->forceCleanOnHighSpaceUsage_ == nullptr && this->isCrossRegionDataBackupEnabled_ == nullptr && this->isCrossRegionLogBackupEnabled_ == nullptr && this->isEnabled_ == nullptr
        && this->localLogRetention_ == nullptr && this->localLogRetentionNumber_ == nullptr && this->logLocalRetentionSpace_ == nullptr && this->regionId_ == nullptr && this->removeLogRetention_ == nullptr; };
    // backupPeriod Field Functions 
    bool hasBackupPeriod() const { return this->backupPeriod_ != nullptr;};
    void deleteBackupPeriod() { this->backupPeriod_ = nullptr;};
    inline string getBackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupPeriod_, "") };
    inline UpdateBackupPolicyRequest& setBackupPeriod(string backupPeriod) { DARABONBA_PTR_SET_VALUE(backupPeriod_, backupPeriod) };


    // backupPlanBegin Field Functions 
    bool hasBackupPlanBegin() const { return this->backupPlanBegin_ != nullptr;};
    void deleteBackupPlanBegin() { this->backupPlanBegin_ = nullptr;};
    inline string getBackupPlanBegin() const { DARABONBA_PTR_GET_DEFAULT(backupPlanBegin_, "") };
    inline UpdateBackupPolicyRequest& setBackupPlanBegin(string backupPlanBegin) { DARABONBA_PTR_SET_VALUE(backupPlanBegin_, backupPlanBegin) };


    // backupSetRetention Field Functions 
    bool hasBackupSetRetention() const { return this->backupSetRetention_ != nullptr;};
    void deleteBackupSetRetention() { this->backupSetRetention_ = nullptr;};
    inline int32_t getBackupSetRetention() const { DARABONBA_PTR_GET_DEFAULT(backupSetRetention_, 0) };
    inline UpdateBackupPolicyRequest& setBackupSetRetention(int32_t backupSetRetention) { DARABONBA_PTR_SET_VALUE(backupSetRetention_, backupSetRetention) };


    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline UpdateBackupPolicyRequest& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // backupWay Field Functions 
    bool hasBackupWay() const { return this->backupWay_ != nullptr;};
    void deleteBackupWay() { this->backupWay_ = nullptr;};
    inline string getBackupWay() const { DARABONBA_PTR_GET_DEFAULT(backupWay_, "") };
    inline UpdateBackupPolicyRequest& setBackupWay(string backupWay) { DARABONBA_PTR_SET_VALUE(backupWay_, backupWay) };


    // coldDataBackupInterval Field Functions 
    bool hasColdDataBackupInterval() const { return this->coldDataBackupInterval_ != nullptr;};
    void deleteColdDataBackupInterval() { this->coldDataBackupInterval_ = nullptr;};
    inline int32_t getColdDataBackupInterval() const { DARABONBA_PTR_GET_DEFAULT(coldDataBackupInterval_, 0) };
    inline UpdateBackupPolicyRequest& setColdDataBackupInterval(int32_t coldDataBackupInterval) { DARABONBA_PTR_SET_VALUE(coldDataBackupInterval_, coldDataBackupInterval) };


    // coldDataBackupRetention Field Functions 
    bool hasColdDataBackupRetention() const { return this->coldDataBackupRetention_ != nullptr;};
    void deleteColdDataBackupRetention() { this->coldDataBackupRetention_ = nullptr;};
    inline int32_t getColdDataBackupRetention() const { DARABONBA_PTR_GET_DEFAULT(coldDataBackupRetention_, 0) };
    inline UpdateBackupPolicyRequest& setColdDataBackupRetention(int32_t coldDataBackupRetention) { DARABONBA_PTR_SET_VALUE(coldDataBackupRetention_, coldDataBackupRetention) };


    // crossRegionDataBackupRetention Field Functions 
    bool hasCrossRegionDataBackupRetention() const { return this->crossRegionDataBackupRetention_ != nullptr;};
    void deleteCrossRegionDataBackupRetention() { this->crossRegionDataBackupRetention_ = nullptr;};
    inline int32_t getCrossRegionDataBackupRetention() const { DARABONBA_PTR_GET_DEFAULT(crossRegionDataBackupRetention_, 0) };
    inline UpdateBackupPolicyRequest& setCrossRegionDataBackupRetention(int32_t crossRegionDataBackupRetention) { DARABONBA_PTR_SET_VALUE(crossRegionDataBackupRetention_, crossRegionDataBackupRetention) };


    // crossRegionFilterValue Field Functions 
    bool hasCrossRegionFilterValue() const { return this->crossRegionFilterValue_ != nullptr;};
    void deleteCrossRegionFilterValue() { this->crossRegionFilterValue_ = nullptr;};
    inline string getCrossRegionFilterValue() const { DARABONBA_PTR_GET_DEFAULT(crossRegionFilterValue_, "") };
    inline UpdateBackupPolicyRequest& setCrossRegionFilterValue(string crossRegionFilterValue) { DARABONBA_PTR_SET_VALUE(crossRegionFilterValue_, crossRegionFilterValue) };


    // crossRegionLogBackupRetention Field Functions 
    bool hasCrossRegionLogBackupRetention() const { return this->crossRegionLogBackupRetention_ != nullptr;};
    void deleteCrossRegionLogBackupRetention() { this->crossRegionLogBackupRetention_ = nullptr;};
    inline int32_t getCrossRegionLogBackupRetention() const { DARABONBA_PTR_GET_DEFAULT(crossRegionLogBackupRetention_, 0) };
    inline UpdateBackupPolicyRequest& setCrossRegionLogBackupRetention(int32_t crossRegionLogBackupRetention) { DARABONBA_PTR_SET_VALUE(crossRegionLogBackupRetention_, crossRegionLogBackupRetention) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline UpdateBackupPolicyRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // destCrossRegion Field Functions 
    bool hasDestCrossRegion() const { return this->destCrossRegion_ != nullptr;};
    void deleteDestCrossRegion() { this->destCrossRegion_ = nullptr;};
    inline string getDestCrossRegion() const { DARABONBA_PTR_GET_DEFAULT(destCrossRegion_, "") };
    inline UpdateBackupPolicyRequest& setDestCrossRegion(string destCrossRegion) { DARABONBA_PTR_SET_VALUE(destCrossRegion_, destCrossRegion) };


    // forceCleanOnHighSpaceUsage Field Functions 
    bool hasForceCleanOnHighSpaceUsage() const { return this->forceCleanOnHighSpaceUsage_ != nullptr;};
    void deleteForceCleanOnHighSpaceUsage() { this->forceCleanOnHighSpaceUsage_ = nullptr;};
    inline int32_t getForceCleanOnHighSpaceUsage() const { DARABONBA_PTR_GET_DEFAULT(forceCleanOnHighSpaceUsage_, 0) };
    inline UpdateBackupPolicyRequest& setForceCleanOnHighSpaceUsage(int32_t forceCleanOnHighSpaceUsage) { DARABONBA_PTR_SET_VALUE(forceCleanOnHighSpaceUsage_, forceCleanOnHighSpaceUsage) };


    // isCrossRegionDataBackupEnabled Field Functions 
    bool hasIsCrossRegionDataBackupEnabled() const { return this->isCrossRegionDataBackupEnabled_ != nullptr;};
    void deleteIsCrossRegionDataBackupEnabled() { this->isCrossRegionDataBackupEnabled_ = nullptr;};
    inline bool getIsCrossRegionDataBackupEnabled() const { DARABONBA_PTR_GET_DEFAULT(isCrossRegionDataBackupEnabled_, false) };
    inline UpdateBackupPolicyRequest& setIsCrossRegionDataBackupEnabled(bool isCrossRegionDataBackupEnabled) { DARABONBA_PTR_SET_VALUE(isCrossRegionDataBackupEnabled_, isCrossRegionDataBackupEnabled) };


    // isCrossRegionLogBackupEnabled Field Functions 
    bool hasIsCrossRegionLogBackupEnabled() const { return this->isCrossRegionLogBackupEnabled_ != nullptr;};
    void deleteIsCrossRegionLogBackupEnabled() { this->isCrossRegionLogBackupEnabled_ = nullptr;};
    inline bool getIsCrossRegionLogBackupEnabled() const { DARABONBA_PTR_GET_DEFAULT(isCrossRegionLogBackupEnabled_, false) };
    inline UpdateBackupPolicyRequest& setIsCrossRegionLogBackupEnabled(bool isCrossRegionLogBackupEnabled) { DARABONBA_PTR_SET_VALUE(isCrossRegionLogBackupEnabled_, isCrossRegionLogBackupEnabled) };


    // isEnabled Field Functions 
    bool hasIsEnabled() const { return this->isEnabled_ != nullptr;};
    void deleteIsEnabled() { this->isEnabled_ = nullptr;};
    inline int32_t getIsEnabled() const { DARABONBA_PTR_GET_DEFAULT(isEnabled_, 0) };
    inline UpdateBackupPolicyRequest& setIsEnabled(int32_t isEnabled) { DARABONBA_PTR_SET_VALUE(isEnabled_, isEnabled) };


    // localLogRetention Field Functions 
    bool hasLocalLogRetention() const { return this->localLogRetention_ != nullptr;};
    void deleteLocalLogRetention() { this->localLogRetention_ = nullptr;};
    inline int32_t getLocalLogRetention() const { DARABONBA_PTR_GET_DEFAULT(localLogRetention_, 0) };
    inline UpdateBackupPolicyRequest& setLocalLogRetention(int32_t localLogRetention) { DARABONBA_PTR_SET_VALUE(localLogRetention_, localLogRetention) };


    // localLogRetentionNumber Field Functions 
    bool hasLocalLogRetentionNumber() const { return this->localLogRetentionNumber_ != nullptr;};
    void deleteLocalLogRetentionNumber() { this->localLogRetentionNumber_ = nullptr;};
    inline int32_t getLocalLogRetentionNumber() const { DARABONBA_PTR_GET_DEFAULT(localLogRetentionNumber_, 0) };
    inline UpdateBackupPolicyRequest& setLocalLogRetentionNumber(int32_t localLogRetentionNumber) { DARABONBA_PTR_SET_VALUE(localLogRetentionNumber_, localLogRetentionNumber) };


    // logLocalRetentionSpace Field Functions 
    bool hasLogLocalRetentionSpace() const { return this->logLocalRetentionSpace_ != nullptr;};
    void deleteLogLocalRetentionSpace() { this->logLocalRetentionSpace_ = nullptr;};
    inline int32_t getLogLocalRetentionSpace() const { DARABONBA_PTR_GET_DEFAULT(logLocalRetentionSpace_, 0) };
    inline UpdateBackupPolicyRequest& setLogLocalRetentionSpace(int32_t logLocalRetentionSpace) { DARABONBA_PTR_SET_VALUE(logLocalRetentionSpace_, logLocalRetentionSpace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateBackupPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // removeLogRetention Field Functions 
    bool hasRemoveLogRetention() const { return this->removeLogRetention_ != nullptr;};
    void deleteRemoveLogRetention() { this->removeLogRetention_ = nullptr;};
    inline int32_t getRemoveLogRetention() const { DARABONBA_PTR_GET_DEFAULT(removeLogRetention_, 0) };
    inline UpdateBackupPolicyRequest& setRemoveLogRetention(int32_t removeLogRetention) { DARABONBA_PTR_SET_VALUE(removeLogRetention_, removeLogRetention) };


  protected:
    // The backup cycle. You must specify at least 2 days. The value is a 7-digit number. From left to right, each digit indicates whether backup is enabled from Monday to Sunday. A value of 0 indicates that backup is disabled, and a value of 1 indicates that backup is enabled:
    // 
    // - First digit: Monday
    // - Second digit: Tuesday
    // - Third digit: Wednesday
    // - Fourth digit: Thursday
    // - Fifth digit: Friday
    // - Sixth digit: Saturday
    // - Seventh digit: Sunday.
    shared_ptr<string> backupPeriod_ {};
    // The start time of the daily backup, in UTC.
    shared_ptr<string> backupPlanBegin_ {};
    // The retention period of backup sets. Unit: days.
    shared_ptr<int32_t> backupSetRetention_ {};
    // The backup type. Currently, only "0" is supported, which indicates fast backup.
    shared_ptr<string> backupType_ {};
    // The backup method. Valid values:
    // 
    // - **P**: physical backup
    // - **L**: logical backup.
    shared_ptr<string> backupWay_ {};
    // The interval for cold data backups. Unit: days. Valid values: 1 to 59.
    shared_ptr<int32_t> coldDataBackupInterval_ {};
    // The retention period for cold data backups. Unit: days. Valid values: 30 to 730.
    shared_ptr<int32_t> coldDataBackupRetention_ {};
    // The retention period for cross-region data backups. Unit: days.
    shared_ptr<int32_t> crossRegionDataBackupRetention_ {};
    shared_ptr<string> crossRegionFilterValue_ {};
    // The retention period for cross-region log backups. Unit: days.
    shared_ptr<int32_t> crossRegionLogBackupRetention_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The destination region for cross-region backup.
    shared_ptr<string> destCrossRegion_ {};
    // Specifies whether to forcibly clean up binary logs when the total space usage of the instance exceeds 80% or the remaining space is less than 50 GB. The cleanup starts from the earliest logs until the total space usage drops below 80% and the remaining space exceeds 50 GB. Valid values:
    // 
    // - **1**: yes
    // - **0**: no.
    shared_ptr<int32_t> forceCleanOnHighSpaceUsage_ {};
    // Specifies whether to enable cross-region data backup. Default value: false.
    shared_ptr<bool> isCrossRegionDataBackupEnabled_ {};
    // Specifies whether to enable cross-region log backup. Default value: false.
    shared_ptr<bool> isCrossRegionLogBackupEnabled_ {};
    // Specifies whether to enable backup. The value is fixed to 1, which indicates that backup is enabled.
    shared_ptr<int32_t> isEnabled_ {};
    // The number of hours that log backups are retained locally. Valid values: 0 to 168 (7 × 24 hours). A value of 0 indicates that log backups are not retained locally. Default value: 7.
    shared_ptr<int32_t> localLogRetention_ {};
    // The number of binary logs retained locally. Default value: 60. Valid values: 6 to 100.
    shared_ptr<int32_t> localLogRetentionNumber_ {};
    // The maximum space usage for binary logs, expressed as a percentage. Valid values: 0 to 50. This parameter specifies a loop space. Default value: 30.
    shared_ptr<int32_t> logLocalRetentionSpace_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The number of days that log backups are retained remotely. Valid values: 7 to 730. Unit: days. Default value: 7.
    shared_ptr<int32_t> removeLogRetention_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
