// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTSTARTBACKUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTSTARTBACKUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class PutStartBackupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutStartBackupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupDbNames, backupDbNames_);
      DARABONBA_PTR_TO_JSON(BackupLevel, backupLevel_);
      DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, PutStartBackupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupDbNames, backupDbNames_);
      DARABONBA_PTR_FROM_JSON(BackupLevel, backupLevel_);
      DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
    };
    PutStartBackupRequest() = default ;
    PutStartBackupRequest(const PutStartBackupRequest &) = default ;
    PutStartBackupRequest(PutStartBackupRequest &&) = default ;
    PutStartBackupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutStartBackupRequest() = default ;
    PutStartBackupRequest& operator=(const PutStartBackupRequest &) = default ;
    PutStartBackupRequest& operator=(PutStartBackupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupDbNames_ != nullptr
        && this->backupLevel_ != nullptr && this->backupMode_ != nullptr && this->drdsInstanceId_ != nullptr; };
    // backupDbNames Field Functions 
    bool hasBackupDbNames() const { return this->backupDbNames_ != nullptr;};
    void deleteBackupDbNames() { this->backupDbNames_ = nullptr;};
    inline string backupDbNames() const { DARABONBA_PTR_GET_DEFAULT(backupDbNames_, "") };
    inline PutStartBackupRequest& setBackupDbNames(string backupDbNames) { DARABONBA_PTR_SET_VALUE(backupDbNames_, backupDbNames) };


    // backupLevel Field Functions 
    bool hasBackupLevel() const { return this->backupLevel_ != nullptr;};
    void deleteBackupLevel() { this->backupLevel_ = nullptr;};
    inline string backupLevel() const { DARABONBA_PTR_GET_DEFAULT(backupLevel_, "") };
    inline PutStartBackupRequest& setBackupLevel(string backupLevel) { DARABONBA_PTR_SET_VALUE(backupLevel_, backupLevel) };


    // backupMode Field Functions 
    bool hasBackupMode() const { return this->backupMode_ != nullptr;};
    void deleteBackupMode() { this->backupMode_ = nullptr;};
    inline string backupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
    inline PutStartBackupRequest& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline PutStartBackupRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


  protected:
    // If you need to back up data at the database level, you must specify the list of databases to be backed up, and separate multiple databases with commas (,).
    std::shared_ptr<string> backupDbNames_ = nullptr;
    // The backup level. Valid values:
    // 
    // *   instance: instance
    // *   db: The database type.
    std::shared_ptr<string> backupLevel_ = nullptr;
    // The backup mode. For more information, see [backup mode](https://help.aliyun.com/document_detail/108631.html) and the valid values are as follows:
    // 
    // *   phy: fast backup
    // *   logic: Consistent backup
    std::shared_ptr<string> backupMode_ = nullptr;
    // The ID of the DRDS instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
