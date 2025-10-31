// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGBACKUPTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGBACKUPTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class ConfigBackupTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigBackupTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupHourInDay, backupHourInDay_);
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(BackupPeriod, backupPeriod_);
      DARABONBA_PTR_TO_JSON(Manual2PeriodicList, manual2PeriodicList_);
      DARABONBA_PTR_TO_JSON(Periodic2ManualList, periodic2ManualList_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigBackupTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupHourInDay, backupHourInDay_);
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(BackupPeriod, backupPeriod_);
      DARABONBA_PTR_FROM_JSON(Manual2PeriodicList, manual2PeriodicList_);
      DARABONBA_PTR_FROM_JSON(Periodic2ManualList, periodic2ManualList_);
    };
    ConfigBackupTaskRequest() = default ;
    ConfigBackupTaskRequest(const ConfigBackupTaskRequest &) = default ;
    ConfigBackupTaskRequest(ConfigBackupTaskRequest &&) = default ;
    ConfigBackupTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigBackupTaskRequest() = default ;
    ConfigBackupTaskRequest& operator=(const ConfigBackupTaskRequest &) = default ;
    ConfigBackupTaskRequest& operator=(ConfigBackupTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupHourInDay_ == nullptr
        && return this->backupId_ == nullptr && return this->backupPeriod_ == nullptr && return this->manual2PeriodicList_ == nullptr && return this->periodic2ManualList_ == nullptr; };
    // backupHourInDay Field Functions 
    bool hasBackupHourInDay() const { return this->backupHourInDay_ != nullptr;};
    void deleteBackupHourInDay() { this->backupHourInDay_ = nullptr;};
    inline int64_t backupHourInDay() const { DARABONBA_PTR_GET_DEFAULT(backupHourInDay_, 0L) };
    inline ConfigBackupTaskRequest& setBackupHourInDay(int64_t backupHourInDay) { DARABONBA_PTR_SET_VALUE(backupHourInDay_, backupHourInDay) };


    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline ConfigBackupTaskRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // backupPeriod Field Functions 
    bool hasBackupPeriod() const { return this->backupPeriod_ != nullptr;};
    void deleteBackupPeriod() { this->backupPeriod_ = nullptr;};
    inline int64_t backupPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupPeriod_, 0L) };
    inline ConfigBackupTaskRequest& setBackupPeriod(int64_t backupPeriod) { DARABONBA_PTR_SET_VALUE(backupPeriod_, backupPeriod) };


    // manual2PeriodicList Field Functions 
    bool hasManual2PeriodicList() const { return this->manual2PeriodicList_ != nullptr;};
    void deleteManual2PeriodicList() { this->manual2PeriodicList_ = nullptr;};
    inline const vector<string> & manual2PeriodicList() const { DARABONBA_PTR_GET_CONST(manual2PeriodicList_, vector<string>) };
    inline vector<string> manual2PeriodicList() { DARABONBA_PTR_GET(manual2PeriodicList_, vector<string>) };
    inline ConfigBackupTaskRequest& setManual2PeriodicList(const vector<string> & manual2PeriodicList) { DARABONBA_PTR_SET_VALUE(manual2PeriodicList_, manual2PeriodicList) };
    inline ConfigBackupTaskRequest& setManual2PeriodicList(vector<string> && manual2PeriodicList) { DARABONBA_PTR_SET_RVALUE(manual2PeriodicList_, manual2PeriodicList) };


    // periodic2ManualList Field Functions 
    bool hasPeriodic2ManualList() const { return this->periodic2ManualList_ != nullptr;};
    void deletePeriodic2ManualList() { this->periodic2ManualList_ = nullptr;};
    inline const vector<string> & periodic2ManualList() const { DARABONBA_PTR_GET_CONST(periodic2ManualList_, vector<string>) };
    inline vector<string> periodic2ManualList() { DARABONBA_PTR_GET(periodic2ManualList_, vector<string>) };
    inline ConfigBackupTaskRequest& setPeriodic2ManualList(const vector<string> & periodic2ManualList) { DARABONBA_PTR_SET_VALUE(periodic2ManualList_, periodic2ManualList) };
    inline ConfigBackupTaskRequest& setPeriodic2ManualList(vector<string> && periodic2ManualList) { DARABONBA_PTR_SET_RVALUE(periodic2ManualList_, periodic2ManualList) };


  protected:
    // The backup time in the 24-hour format. Valid values: 1 to 24.
    // 
    // Enumeration values:
    // 
    // *   0
    // *   1
    // *   2
    // *   3
    // *   4
    // *   5
    // *   6
    // *   7
    // *   8
    // *   9
    // *   10
    // *   11
    // *   12
    // *   13
    // *   14
    // *   15
    // *   16
    // *   17
    // *   18
    // *   19
    // *   20
    // *   21
    // *   22
    // *   23
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> backupHourInDay_ = nullptr;
    // The ID of the backup.
    // 
    // This parameter is required.
    std::shared_ptr<string> backupId_ = nullptr;
    // The automatic backup cycle. Unit: days. Valid values: 1, 3, 7, and 30.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> backupPeriod_ = nullptr;
    // The IDs of images for which the manual backup mode is updated to the automatic backup mode.
    std::shared_ptr<vector<string>> manual2PeriodicList_ = nullptr;
    // The IDs of images for which the automatic backup mode is updated to the manual backup mode.
    std::shared_ptr<vector<string>> periodic2ManualList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
