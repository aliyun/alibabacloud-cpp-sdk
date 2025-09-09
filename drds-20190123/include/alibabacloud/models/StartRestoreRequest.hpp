// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRESTOREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTRESTOREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class StartRestoreRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRestoreRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupDbNames, backupDbNames_);
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(BackupLevel, backupLevel_);
      DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(PreferredBackupTime, preferredBackupTime_);
    };
    friend void from_json(const Darabonba::Json& j, StartRestoreRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupDbNames, backupDbNames_);
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(BackupLevel, backupLevel_);
      DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupTime, preferredBackupTime_);
    };
    StartRestoreRequest() = default ;
    StartRestoreRequest(const StartRestoreRequest &) = default ;
    StartRestoreRequest(StartRestoreRequest &&) = default ;
    StartRestoreRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRestoreRequest() = default ;
    StartRestoreRequest& operator=(const StartRestoreRequest &) = default ;
    StartRestoreRequest& operator=(StartRestoreRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupDbNames_ != nullptr
        && this->backupId_ != nullptr && this->backupLevel_ != nullptr && this->backupMode_ != nullptr && this->drdsInstanceId_ != nullptr && this->preferredBackupTime_ != nullptr; };
    // backupDbNames Field Functions 
    bool hasBackupDbNames() const { return this->backupDbNames_ != nullptr;};
    void deleteBackupDbNames() { this->backupDbNames_ = nullptr;};
    inline string backupDbNames() const { DARABONBA_PTR_GET_DEFAULT(backupDbNames_, "") };
    inline StartRestoreRequest& setBackupDbNames(string backupDbNames) { DARABONBA_PTR_SET_VALUE(backupDbNames_, backupDbNames) };


    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline StartRestoreRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // backupLevel Field Functions 
    bool hasBackupLevel() const { return this->backupLevel_ != nullptr;};
    void deleteBackupLevel() { this->backupLevel_ = nullptr;};
    inline string backupLevel() const { DARABONBA_PTR_GET_DEFAULT(backupLevel_, "") };
    inline StartRestoreRequest& setBackupLevel(string backupLevel) { DARABONBA_PTR_SET_VALUE(backupLevel_, backupLevel) };


    // backupMode Field Functions 
    bool hasBackupMode() const { return this->backupMode_ != nullptr;};
    void deleteBackupMode() { this->backupMode_ = nullptr;};
    inline string backupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
    inline StartRestoreRequest& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline StartRestoreRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // preferredBackupTime Field Functions 
    bool hasPreferredBackupTime() const { return this->preferredBackupTime_ != nullptr;};
    void deletePreferredBackupTime() { this->preferredBackupTime_ = nullptr;};
    inline string preferredBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupTime_, "") };
    inline StartRestoreRequest& setPreferredBackupTime(string preferredBackupTime) { DARABONBA_PTR_SET_VALUE(preferredBackupTime_, preferredBackupTime) };


  protected:
    // The name of the database to be restored. Separate multiple databases with commas (,).
    // 
    // >  If you do not specify any database name, all databases in the instance are restored by default.
    std::shared_ptr<string> backupDbNames_ = nullptr;
    // The ID of the DRDS backup set.
    // 
    // >  If you do not specify this parameter, the system restores data by time (PreferredBackupTime).
    std::shared_ptr<string> backupId_ = nullptr;
    // The level of the backup. Valid values:
    // 
    // *   db: The database level.
    // *   instance: the instance level.
    std::shared_ptr<string> backupLevel_ = nullptr;
    // The backup method. Valid values:
    // 
    // *   logic: the logical backup.
    // *   phy: fast backup
    std::shared_ptr<string> backupMode_ = nullptr;
    // The ID of the DRDS instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The restoration time of the instance, in the format of`  yyyy-MM-dd HH:mm:ss `.
    std::shared_ptr<string> preferredBackupTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
