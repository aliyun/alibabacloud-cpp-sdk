// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHANABACKUPSETTINGRESPONSEBODYHANABACKUPSETTING_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHANABACKUPSETTINGRESPONSEBODYHANABACKUPSETTING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeHanaBackupSettingResponseBodyHanaBackupSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHanaBackupSettingResponseBodyHanaBackupSetting& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogBackupParameterFile, catalogBackupParameterFile_);
      DARABONBA_PTR_TO_JSON(CatalogBackupUsingBackint, catalogBackupUsingBackint_);
      DARABONBA_PTR_TO_JSON(DataBackupParameterFile, dataBackupParameterFile_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(EnableAutoLogBackup, enableAutoLogBackup_);
      DARABONBA_PTR_TO_JSON(LogBackupParameterFile, logBackupParameterFile_);
      DARABONBA_PTR_TO_JSON(LogBackupTimeout, logBackupTimeout_);
      DARABONBA_PTR_TO_JSON(LogBackupUsingBackint, logBackupUsingBackint_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHanaBackupSettingResponseBodyHanaBackupSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogBackupParameterFile, catalogBackupParameterFile_);
      DARABONBA_PTR_FROM_JSON(CatalogBackupUsingBackint, catalogBackupUsingBackint_);
      DARABONBA_PTR_FROM_JSON(DataBackupParameterFile, dataBackupParameterFile_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(EnableAutoLogBackup, enableAutoLogBackup_);
      DARABONBA_PTR_FROM_JSON(LogBackupParameterFile, logBackupParameterFile_);
      DARABONBA_PTR_FROM_JSON(LogBackupTimeout, logBackupTimeout_);
      DARABONBA_PTR_FROM_JSON(LogBackupUsingBackint, logBackupUsingBackint_);
    };
    DescribeHanaBackupSettingResponseBodyHanaBackupSetting() = default ;
    DescribeHanaBackupSettingResponseBodyHanaBackupSetting(const DescribeHanaBackupSettingResponseBodyHanaBackupSetting &) = default ;
    DescribeHanaBackupSettingResponseBodyHanaBackupSetting(DescribeHanaBackupSettingResponseBodyHanaBackupSetting &&) = default ;
    DescribeHanaBackupSettingResponseBodyHanaBackupSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHanaBackupSettingResponseBodyHanaBackupSetting() = default ;
    DescribeHanaBackupSettingResponseBodyHanaBackupSetting& operator=(const DescribeHanaBackupSettingResponseBodyHanaBackupSetting &) = default ;
    DescribeHanaBackupSettingResponseBodyHanaBackupSetting& operator=(DescribeHanaBackupSettingResponseBodyHanaBackupSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogBackupParameterFile_ == nullptr
        && return this->catalogBackupUsingBackint_ == nullptr && return this->dataBackupParameterFile_ == nullptr && return this->databaseName_ == nullptr && return this->enableAutoLogBackup_ == nullptr && return this->logBackupParameterFile_ == nullptr
        && return this->logBackupTimeout_ == nullptr && return this->logBackupUsingBackint_ == nullptr; };
    // catalogBackupParameterFile Field Functions 
    bool hasCatalogBackupParameterFile() const { return this->catalogBackupParameterFile_ != nullptr;};
    void deleteCatalogBackupParameterFile() { this->catalogBackupParameterFile_ = nullptr;};
    inline string catalogBackupParameterFile() const { DARABONBA_PTR_GET_DEFAULT(catalogBackupParameterFile_, "") };
    inline DescribeHanaBackupSettingResponseBodyHanaBackupSetting& setCatalogBackupParameterFile(string catalogBackupParameterFile) { DARABONBA_PTR_SET_VALUE(catalogBackupParameterFile_, catalogBackupParameterFile) };


    // catalogBackupUsingBackint Field Functions 
    bool hasCatalogBackupUsingBackint() const { return this->catalogBackupUsingBackint_ != nullptr;};
    void deleteCatalogBackupUsingBackint() { this->catalogBackupUsingBackint_ = nullptr;};
    inline bool catalogBackupUsingBackint() const { DARABONBA_PTR_GET_DEFAULT(catalogBackupUsingBackint_, false) };
    inline DescribeHanaBackupSettingResponseBodyHanaBackupSetting& setCatalogBackupUsingBackint(bool catalogBackupUsingBackint) { DARABONBA_PTR_SET_VALUE(catalogBackupUsingBackint_, catalogBackupUsingBackint) };


    // dataBackupParameterFile Field Functions 
    bool hasDataBackupParameterFile() const { return this->dataBackupParameterFile_ != nullptr;};
    void deleteDataBackupParameterFile() { this->dataBackupParameterFile_ = nullptr;};
    inline string dataBackupParameterFile() const { DARABONBA_PTR_GET_DEFAULT(dataBackupParameterFile_, "") };
    inline DescribeHanaBackupSettingResponseBodyHanaBackupSetting& setDataBackupParameterFile(string dataBackupParameterFile) { DARABONBA_PTR_SET_VALUE(dataBackupParameterFile_, dataBackupParameterFile) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline DescribeHanaBackupSettingResponseBodyHanaBackupSetting& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // enableAutoLogBackup Field Functions 
    bool hasEnableAutoLogBackup() const { return this->enableAutoLogBackup_ != nullptr;};
    void deleteEnableAutoLogBackup() { this->enableAutoLogBackup_ = nullptr;};
    inline bool enableAutoLogBackup() const { DARABONBA_PTR_GET_DEFAULT(enableAutoLogBackup_, false) };
    inline DescribeHanaBackupSettingResponseBodyHanaBackupSetting& setEnableAutoLogBackup(bool enableAutoLogBackup) { DARABONBA_PTR_SET_VALUE(enableAutoLogBackup_, enableAutoLogBackup) };


    // logBackupParameterFile Field Functions 
    bool hasLogBackupParameterFile() const { return this->logBackupParameterFile_ != nullptr;};
    void deleteLogBackupParameterFile() { this->logBackupParameterFile_ = nullptr;};
    inline string logBackupParameterFile() const { DARABONBA_PTR_GET_DEFAULT(logBackupParameterFile_, "") };
    inline DescribeHanaBackupSettingResponseBodyHanaBackupSetting& setLogBackupParameterFile(string logBackupParameterFile) { DARABONBA_PTR_SET_VALUE(logBackupParameterFile_, logBackupParameterFile) };


    // logBackupTimeout Field Functions 
    bool hasLogBackupTimeout() const { return this->logBackupTimeout_ != nullptr;};
    void deleteLogBackupTimeout() { this->logBackupTimeout_ = nullptr;};
    inline int64_t logBackupTimeout() const { DARABONBA_PTR_GET_DEFAULT(logBackupTimeout_, 0L) };
    inline DescribeHanaBackupSettingResponseBodyHanaBackupSetting& setLogBackupTimeout(int64_t logBackupTimeout) { DARABONBA_PTR_SET_VALUE(logBackupTimeout_, logBackupTimeout) };


    // logBackupUsingBackint Field Functions 
    bool hasLogBackupUsingBackint() const { return this->logBackupUsingBackint_ != nullptr;};
    void deleteLogBackupUsingBackint() { this->logBackupUsingBackint_ = nullptr;};
    inline bool logBackupUsingBackint() const { DARABONBA_PTR_GET_DEFAULT(logBackupUsingBackint_, false) };
    inline DescribeHanaBackupSettingResponseBodyHanaBackupSetting& setLogBackupUsingBackint(bool logBackupUsingBackint) { DARABONBA_PTR_SET_VALUE(logBackupUsingBackint_, logBackupUsingBackint) };


  protected:
    // The configuration file for catalog backup.
    std::shared_ptr<string> catalogBackupParameterFile_ = nullptr;
    // Indicates whether Backint is used to back up catalogs. Valid values:
    // 
    // *   true: Backint is used to back up catalogs.
    // *   false: Backint is not used to back up catalogs.
    std::shared_ptr<bool> catalogBackupUsingBackint_ = nullptr;
    // The configuration file for data backup.
    std::shared_ptr<string> dataBackupParameterFile_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> databaseName_ = nullptr;
    // Indicates whether automatic log backup is enabled. Valid values:
    // 
    // *   **true**: Automatic log backup is enabled.
    // *   **false**: Automatic log backup is disabled.
    std::shared_ptr<bool> enableAutoLogBackup_ = nullptr;
    // The configuration file for log backup.
    std::shared_ptr<string> logBackupParameterFile_ = nullptr;
    // The interval at which logs are backed up. Unit: seconds.
    std::shared_ptr<int64_t> logBackupTimeout_ = nullptr;
    // Indicates whether Backint is used to back up logs. Valid values:
    // 
    // *   true: Backint is used to back up logs.
    // *   false: Backint is not used to back up logs.
    std::shared_ptr<bool> logBackupUsingBackint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
