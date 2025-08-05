// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHANABACKUPSETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHANABACKUPSETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class UpdateHanaBackupSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHanaBackupSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogBackupParameterFile, catalogBackupParameterFile_);
      DARABONBA_PTR_TO_JSON(CatalogBackupUsingBackint, catalogBackupUsingBackint_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DataBackupParameterFile, dataBackupParameterFile_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(EnableAutoLogBackup, enableAutoLogBackup_);
      DARABONBA_PTR_TO_JSON(LogBackupParameterFile, logBackupParameterFile_);
      DARABONBA_PTR_TO_JSON(LogBackupTimeout, logBackupTimeout_);
      DARABONBA_PTR_TO_JSON(LogBackupUsingBackint, logBackupUsingBackint_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHanaBackupSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogBackupParameterFile, catalogBackupParameterFile_);
      DARABONBA_PTR_FROM_JSON(CatalogBackupUsingBackint, catalogBackupUsingBackint_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DataBackupParameterFile, dataBackupParameterFile_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(EnableAutoLogBackup, enableAutoLogBackup_);
      DARABONBA_PTR_FROM_JSON(LogBackupParameterFile, logBackupParameterFile_);
      DARABONBA_PTR_FROM_JSON(LogBackupTimeout, logBackupTimeout_);
      DARABONBA_PTR_FROM_JSON(LogBackupUsingBackint, logBackupUsingBackint_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    UpdateHanaBackupSettingRequest() = default ;
    UpdateHanaBackupSettingRequest(const UpdateHanaBackupSettingRequest &) = default ;
    UpdateHanaBackupSettingRequest(UpdateHanaBackupSettingRequest &&) = default ;
    UpdateHanaBackupSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHanaBackupSettingRequest() = default ;
    UpdateHanaBackupSettingRequest& operator=(const UpdateHanaBackupSettingRequest &) = default ;
    UpdateHanaBackupSettingRequest& operator=(UpdateHanaBackupSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->catalogBackupParameterFile_ != nullptr
        && this->catalogBackupUsingBackint_ != nullptr && this->clusterId_ != nullptr && this->dataBackupParameterFile_ != nullptr && this->databaseName_ != nullptr && this->enableAutoLogBackup_ != nullptr
        && this->logBackupParameterFile_ != nullptr && this->logBackupTimeout_ != nullptr && this->logBackupUsingBackint_ != nullptr && this->vaultId_ != nullptr; };
    // catalogBackupParameterFile Field Functions 
    bool hasCatalogBackupParameterFile() const { return this->catalogBackupParameterFile_ != nullptr;};
    void deleteCatalogBackupParameterFile() { this->catalogBackupParameterFile_ = nullptr;};
    inline string catalogBackupParameterFile() const { DARABONBA_PTR_GET_DEFAULT(catalogBackupParameterFile_, "") };
    inline UpdateHanaBackupSettingRequest& setCatalogBackupParameterFile(string catalogBackupParameterFile) { DARABONBA_PTR_SET_VALUE(catalogBackupParameterFile_, catalogBackupParameterFile) };


    // catalogBackupUsingBackint Field Functions 
    bool hasCatalogBackupUsingBackint() const { return this->catalogBackupUsingBackint_ != nullptr;};
    void deleteCatalogBackupUsingBackint() { this->catalogBackupUsingBackint_ = nullptr;};
    inline bool catalogBackupUsingBackint() const { DARABONBA_PTR_GET_DEFAULT(catalogBackupUsingBackint_, false) };
    inline UpdateHanaBackupSettingRequest& setCatalogBackupUsingBackint(bool catalogBackupUsingBackint) { DARABONBA_PTR_SET_VALUE(catalogBackupUsingBackint_, catalogBackupUsingBackint) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateHanaBackupSettingRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dataBackupParameterFile Field Functions 
    bool hasDataBackupParameterFile() const { return this->dataBackupParameterFile_ != nullptr;};
    void deleteDataBackupParameterFile() { this->dataBackupParameterFile_ = nullptr;};
    inline string dataBackupParameterFile() const { DARABONBA_PTR_GET_DEFAULT(dataBackupParameterFile_, "") };
    inline UpdateHanaBackupSettingRequest& setDataBackupParameterFile(string dataBackupParameterFile) { DARABONBA_PTR_SET_VALUE(dataBackupParameterFile_, dataBackupParameterFile) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline UpdateHanaBackupSettingRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // enableAutoLogBackup Field Functions 
    bool hasEnableAutoLogBackup() const { return this->enableAutoLogBackup_ != nullptr;};
    void deleteEnableAutoLogBackup() { this->enableAutoLogBackup_ = nullptr;};
    inline bool enableAutoLogBackup() const { DARABONBA_PTR_GET_DEFAULT(enableAutoLogBackup_, false) };
    inline UpdateHanaBackupSettingRequest& setEnableAutoLogBackup(bool enableAutoLogBackup) { DARABONBA_PTR_SET_VALUE(enableAutoLogBackup_, enableAutoLogBackup) };


    // logBackupParameterFile Field Functions 
    bool hasLogBackupParameterFile() const { return this->logBackupParameterFile_ != nullptr;};
    void deleteLogBackupParameterFile() { this->logBackupParameterFile_ = nullptr;};
    inline string logBackupParameterFile() const { DARABONBA_PTR_GET_DEFAULT(logBackupParameterFile_, "") };
    inline UpdateHanaBackupSettingRequest& setLogBackupParameterFile(string logBackupParameterFile) { DARABONBA_PTR_SET_VALUE(logBackupParameterFile_, logBackupParameterFile) };


    // logBackupTimeout Field Functions 
    bool hasLogBackupTimeout() const { return this->logBackupTimeout_ != nullptr;};
    void deleteLogBackupTimeout() { this->logBackupTimeout_ = nullptr;};
    inline int64_t logBackupTimeout() const { DARABONBA_PTR_GET_DEFAULT(logBackupTimeout_, 0L) };
    inline UpdateHanaBackupSettingRequest& setLogBackupTimeout(int64_t logBackupTimeout) { DARABONBA_PTR_SET_VALUE(logBackupTimeout_, logBackupTimeout) };


    // logBackupUsingBackint Field Functions 
    bool hasLogBackupUsingBackint() const { return this->logBackupUsingBackint_ != nullptr;};
    void deleteLogBackupUsingBackint() { this->logBackupUsingBackint_ = nullptr;};
    inline bool logBackupUsingBackint() const { DARABONBA_PTR_GET_DEFAULT(logBackupUsingBackint_, false) };
    inline UpdateHanaBackupSettingRequest& setLogBackupUsingBackint(bool logBackupUsingBackint) { DARABONBA_PTR_SET_VALUE(logBackupUsingBackint_, logBackupUsingBackint) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline UpdateHanaBackupSettingRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The configuration file for catalog backup.
    std::shared_ptr<string> catalogBackupParameterFile_ = nullptr;
    // Specifies whether to use Backint to back up catalogs. Valid values:
    // 
    // *   true: Backint is used to back up catalogs.
    // *   false: Backint is not used to back up catalogs.
    // 
    // This parameter is required.
    std::shared_ptr<bool> catalogBackupUsingBackint_ = nullptr;
    // The ID of the SAP HANA instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The configuration file for data backup.
    std::shared_ptr<string> dataBackupParameterFile_ = nullptr;
    // The name of the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> databaseName_ = nullptr;
    // Specifies whether to enable automatic log backup. Valid values:
    // 
    // *   **true**: enables automatic log backup.
    // *   **false**: disables automatic log backup.
    // 
    // This parameter is required.
    std::shared_ptr<bool> enableAutoLogBackup_ = nullptr;
    // The configuration file for log backup.
    std::shared_ptr<string> logBackupParameterFile_ = nullptr;
    // The interval at which logs are backed up. Unit: seconds.
    std::shared_ptr<int64_t> logBackupTimeout_ = nullptr;
    // Specifies whether to use Backint to back up logs. Valid values:
    // 
    // *   true: Backint is used to back up logs.
    // *   false: Backint is not used to back up logs.
    // 
    // This parameter is required.
    std::shared_ptr<bool> logBackupUsingBackint_ = nullptr;
    // The ID of the backup vault.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
