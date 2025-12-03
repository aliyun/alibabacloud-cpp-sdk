// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODYBACKUPSBACKUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODYBACKUPSBACKUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeBackupsResponseBodyBackupsBackup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupsResponseBodyBackupsBackup& obj) { 
      DARABONBA_PTR_TO_JSON(BackupDBNames, backupDBNames_);
      DARABONBA_PTR_TO_JSON(BackupDownloadURL, backupDownloadURL_);
      DARABONBA_PTR_TO_JSON(BackupEndTime, backupEndTime_);
      DARABONBA_PTR_TO_JSON(BackupEndTimeUTC, backupEndTimeUTC_);
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_TO_JSON(BackupSize, backupSize_);
      DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_TO_JSON(BackupStartTimeUTC, backupStartTimeUTC_);
      DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupsResponseBodyBackupsBackup& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupDBNames, backupDBNames_);
      DARABONBA_PTR_FROM_JSON(BackupDownloadURL, backupDownloadURL_);
      DARABONBA_PTR_FROM_JSON(BackupEndTime, backupEndTime_);
      DARABONBA_PTR_FROM_JSON(BackupEndTimeUTC, backupEndTimeUTC_);
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_FROM_JSON(BackupSize, backupSize_);
      DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_FROM_JSON(BackupStartTimeUTC, backupStartTimeUTC_);
      DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
    };
    DescribeBackupsResponseBodyBackupsBackup() = default ;
    DescribeBackupsResponseBodyBackupsBackup(const DescribeBackupsResponseBodyBackupsBackup &) = default ;
    DescribeBackupsResponseBodyBackupsBackup(DescribeBackupsResponseBodyBackupsBackup &&) = default ;
    DescribeBackupsResponseBodyBackupsBackup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupsResponseBodyBackupsBackup() = default ;
    DescribeBackupsResponseBodyBackupsBackup& operator=(const DescribeBackupsResponseBodyBackupsBackup &) = default ;
    DescribeBackupsResponseBodyBackupsBackup& operator=(DescribeBackupsResponseBodyBackupsBackup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupDBNames_ == nullptr
        && return this->backupDownloadURL_ == nullptr && return this->backupEndTime_ == nullptr && return this->backupEndTimeUTC_ == nullptr && return this->backupId_ == nullptr && return this->backupMethod_ == nullptr
        && return this->backupMode_ == nullptr && return this->backupSize_ == nullptr && return this->backupStartTime_ == nullptr && return this->backupStartTimeUTC_ == nullptr && return this->backupStatus_ == nullptr
        && return this->backupType_ == nullptr; };
    // backupDBNames Field Functions 
    bool hasBackupDBNames() const { return this->backupDBNames_ != nullptr;};
    void deleteBackupDBNames() { this->backupDBNames_ = nullptr;};
    inline string backupDBNames() const { DARABONBA_PTR_GET_DEFAULT(backupDBNames_, "") };
    inline DescribeBackupsResponseBodyBackupsBackup& setBackupDBNames(string backupDBNames) { DARABONBA_PTR_SET_VALUE(backupDBNames_, backupDBNames) };


    // backupDownloadURL Field Functions 
    bool hasBackupDownloadURL() const { return this->backupDownloadURL_ != nullptr;};
    void deleteBackupDownloadURL() { this->backupDownloadURL_ = nullptr;};
    inline string backupDownloadURL() const { DARABONBA_PTR_GET_DEFAULT(backupDownloadURL_, "") };
    inline DescribeBackupsResponseBodyBackupsBackup& setBackupDownloadURL(string backupDownloadURL) { DARABONBA_PTR_SET_VALUE(backupDownloadURL_, backupDownloadURL) };


    // backupEndTime Field Functions 
    bool hasBackupEndTime() const { return this->backupEndTime_ != nullptr;};
    void deleteBackupEndTime() { this->backupEndTime_ = nullptr;};
    inline string backupEndTime() const { DARABONBA_PTR_GET_DEFAULT(backupEndTime_, "") };
    inline DescribeBackupsResponseBodyBackupsBackup& setBackupEndTime(string backupEndTime) { DARABONBA_PTR_SET_VALUE(backupEndTime_, backupEndTime) };


    // backupEndTimeUTC Field Functions 
    bool hasBackupEndTimeUTC() const { return this->backupEndTimeUTC_ != nullptr;};
    void deleteBackupEndTimeUTC() { this->backupEndTimeUTC_ = nullptr;};
    inline string backupEndTimeUTC() const { DARABONBA_PTR_GET_DEFAULT(backupEndTimeUTC_, "") };
    inline DescribeBackupsResponseBodyBackupsBackup& setBackupEndTimeUTC(string backupEndTimeUTC) { DARABONBA_PTR_SET_VALUE(backupEndTimeUTC_, backupEndTimeUTC) };


    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline int32_t backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, 0) };
    inline DescribeBackupsResponseBodyBackupsBackup& setBackupId(int32_t backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // backupMethod Field Functions 
    bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
    void deleteBackupMethod() { this->backupMethod_ = nullptr;};
    inline string backupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
    inline DescribeBackupsResponseBodyBackupsBackup& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


    // backupMode Field Functions 
    bool hasBackupMode() const { return this->backupMode_ != nullptr;};
    void deleteBackupMode() { this->backupMode_ = nullptr;};
    inline string backupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
    inline DescribeBackupsResponseBodyBackupsBackup& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


    // backupSize Field Functions 
    bool hasBackupSize() const { return this->backupSize_ != nullptr;};
    void deleteBackupSize() { this->backupSize_ = nullptr;};
    inline string backupSize() const { DARABONBA_PTR_GET_DEFAULT(backupSize_, "") };
    inline DescribeBackupsResponseBodyBackupsBackup& setBackupSize(string backupSize) { DARABONBA_PTR_SET_VALUE(backupSize_, backupSize) };


    // backupStartTime Field Functions 
    bool hasBackupStartTime() const { return this->backupStartTime_ != nullptr;};
    void deleteBackupStartTime() { this->backupStartTime_ = nullptr;};
    inline string backupStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupStartTime_, "") };
    inline DescribeBackupsResponseBodyBackupsBackup& setBackupStartTime(string backupStartTime) { DARABONBA_PTR_SET_VALUE(backupStartTime_, backupStartTime) };


    // backupStartTimeUTC Field Functions 
    bool hasBackupStartTimeUTC() const { return this->backupStartTimeUTC_ != nullptr;};
    void deleteBackupStartTimeUTC() { this->backupStartTimeUTC_ = nullptr;};
    inline string backupStartTimeUTC() const { DARABONBA_PTR_GET_DEFAULT(backupStartTimeUTC_, "") };
    inline DescribeBackupsResponseBodyBackupsBackup& setBackupStartTimeUTC(string backupStartTimeUTC) { DARABONBA_PTR_SET_VALUE(backupStartTimeUTC_, backupStartTimeUTC) };


    // backupStatus Field Functions 
    bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
    void deleteBackupStatus() { this->backupStatus_ = nullptr;};
    inline string backupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
    inline DescribeBackupsResponseBodyBackupsBackup& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string backupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline DescribeBackupsResponseBodyBackupsBackup& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


  protected:
    std::shared_ptr<string> backupDBNames_ = nullptr;
    std::shared_ptr<string> backupDownloadURL_ = nullptr;
    std::shared_ptr<string> backupEndTime_ = nullptr;
    std::shared_ptr<string> backupEndTimeUTC_ = nullptr;
    std::shared_ptr<int32_t> backupId_ = nullptr;
    std::shared_ptr<string> backupMethod_ = nullptr;
    std::shared_ptr<string> backupMode_ = nullptr;
    std::shared_ptr<string> backupSize_ = nullptr;
    std::shared_ptr<string> backupStartTime_ = nullptr;
    std::shared_ptr<string> backupStartTimeUTC_ = nullptr;
    std::shared_ptr<string> backupStatus_ = nullptr;
    std::shared_ptr<string> backupType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
