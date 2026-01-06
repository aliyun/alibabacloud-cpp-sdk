// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHANABACKUPSETTINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHANABACKUPSETTINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeHanaBackupSettingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHanaBackupSettingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HanaBackupSetting, hanaBackupSetting_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHanaBackupSettingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HanaBackupSetting, hanaBackupSetting_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeHanaBackupSettingResponseBody() = default ;
    DescribeHanaBackupSettingResponseBody(const DescribeHanaBackupSettingResponseBody &) = default ;
    DescribeHanaBackupSettingResponseBody(DescribeHanaBackupSettingResponseBody &&) = default ;
    DescribeHanaBackupSettingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHanaBackupSettingResponseBody() = default ;
    DescribeHanaBackupSettingResponseBody& operator=(const DescribeHanaBackupSettingResponseBody &) = default ;
    DescribeHanaBackupSettingResponseBody& operator=(DescribeHanaBackupSettingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HanaBackupSetting : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HanaBackupSetting& obj) { 
        DARABONBA_PTR_TO_JSON(CatalogBackupParameterFile, catalogBackupParameterFile_);
        DARABONBA_PTR_TO_JSON(CatalogBackupUsingBackint, catalogBackupUsingBackint_);
        DARABONBA_PTR_TO_JSON(DataBackupParameterFile, dataBackupParameterFile_);
        DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_TO_JSON(EnableAutoLogBackup, enableAutoLogBackup_);
        DARABONBA_PTR_TO_JSON(LogBackupParameterFile, logBackupParameterFile_);
        DARABONBA_PTR_TO_JSON(LogBackupTimeout, logBackupTimeout_);
        DARABONBA_PTR_TO_JSON(LogBackupUsingBackint, logBackupUsingBackint_);
      };
      friend void from_json(const Darabonba::Json& j, HanaBackupSetting& obj) { 
        DARABONBA_PTR_FROM_JSON(CatalogBackupParameterFile, catalogBackupParameterFile_);
        DARABONBA_PTR_FROM_JSON(CatalogBackupUsingBackint, catalogBackupUsingBackint_);
        DARABONBA_PTR_FROM_JSON(DataBackupParameterFile, dataBackupParameterFile_);
        DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_FROM_JSON(EnableAutoLogBackup, enableAutoLogBackup_);
        DARABONBA_PTR_FROM_JSON(LogBackupParameterFile, logBackupParameterFile_);
        DARABONBA_PTR_FROM_JSON(LogBackupTimeout, logBackupTimeout_);
        DARABONBA_PTR_FROM_JSON(LogBackupUsingBackint, logBackupUsingBackint_);
      };
      HanaBackupSetting() = default ;
      HanaBackupSetting(const HanaBackupSetting &) = default ;
      HanaBackupSetting(HanaBackupSetting &&) = default ;
      HanaBackupSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HanaBackupSetting() = default ;
      HanaBackupSetting& operator=(const HanaBackupSetting &) = default ;
      HanaBackupSetting& operator=(HanaBackupSetting &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->catalogBackupParameterFile_ == nullptr
        && this->catalogBackupUsingBackint_ == nullptr && this->dataBackupParameterFile_ == nullptr && this->databaseName_ == nullptr && this->enableAutoLogBackup_ == nullptr && this->logBackupParameterFile_ == nullptr
        && this->logBackupTimeout_ == nullptr && this->logBackupUsingBackint_ == nullptr; };
      // catalogBackupParameterFile Field Functions 
      bool hasCatalogBackupParameterFile() const { return this->catalogBackupParameterFile_ != nullptr;};
      void deleteCatalogBackupParameterFile() { this->catalogBackupParameterFile_ = nullptr;};
      inline string getCatalogBackupParameterFile() const { DARABONBA_PTR_GET_DEFAULT(catalogBackupParameterFile_, "") };
      inline HanaBackupSetting& setCatalogBackupParameterFile(string catalogBackupParameterFile) { DARABONBA_PTR_SET_VALUE(catalogBackupParameterFile_, catalogBackupParameterFile) };


      // catalogBackupUsingBackint Field Functions 
      bool hasCatalogBackupUsingBackint() const { return this->catalogBackupUsingBackint_ != nullptr;};
      void deleteCatalogBackupUsingBackint() { this->catalogBackupUsingBackint_ = nullptr;};
      inline bool getCatalogBackupUsingBackint() const { DARABONBA_PTR_GET_DEFAULT(catalogBackupUsingBackint_, false) };
      inline HanaBackupSetting& setCatalogBackupUsingBackint(bool catalogBackupUsingBackint) { DARABONBA_PTR_SET_VALUE(catalogBackupUsingBackint_, catalogBackupUsingBackint) };


      // dataBackupParameterFile Field Functions 
      bool hasDataBackupParameterFile() const { return this->dataBackupParameterFile_ != nullptr;};
      void deleteDataBackupParameterFile() { this->dataBackupParameterFile_ = nullptr;};
      inline string getDataBackupParameterFile() const { DARABONBA_PTR_GET_DEFAULT(dataBackupParameterFile_, "") };
      inline HanaBackupSetting& setDataBackupParameterFile(string dataBackupParameterFile) { DARABONBA_PTR_SET_VALUE(dataBackupParameterFile_, dataBackupParameterFile) };


      // databaseName Field Functions 
      bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
      void deleteDatabaseName() { this->databaseName_ = nullptr;};
      inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
      inline HanaBackupSetting& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


      // enableAutoLogBackup Field Functions 
      bool hasEnableAutoLogBackup() const { return this->enableAutoLogBackup_ != nullptr;};
      void deleteEnableAutoLogBackup() { this->enableAutoLogBackup_ = nullptr;};
      inline bool getEnableAutoLogBackup() const { DARABONBA_PTR_GET_DEFAULT(enableAutoLogBackup_, false) };
      inline HanaBackupSetting& setEnableAutoLogBackup(bool enableAutoLogBackup) { DARABONBA_PTR_SET_VALUE(enableAutoLogBackup_, enableAutoLogBackup) };


      // logBackupParameterFile Field Functions 
      bool hasLogBackupParameterFile() const { return this->logBackupParameterFile_ != nullptr;};
      void deleteLogBackupParameterFile() { this->logBackupParameterFile_ = nullptr;};
      inline string getLogBackupParameterFile() const { DARABONBA_PTR_GET_DEFAULT(logBackupParameterFile_, "") };
      inline HanaBackupSetting& setLogBackupParameterFile(string logBackupParameterFile) { DARABONBA_PTR_SET_VALUE(logBackupParameterFile_, logBackupParameterFile) };


      // logBackupTimeout Field Functions 
      bool hasLogBackupTimeout() const { return this->logBackupTimeout_ != nullptr;};
      void deleteLogBackupTimeout() { this->logBackupTimeout_ = nullptr;};
      inline int64_t getLogBackupTimeout() const { DARABONBA_PTR_GET_DEFAULT(logBackupTimeout_, 0L) };
      inline HanaBackupSetting& setLogBackupTimeout(int64_t logBackupTimeout) { DARABONBA_PTR_SET_VALUE(logBackupTimeout_, logBackupTimeout) };


      // logBackupUsingBackint Field Functions 
      bool hasLogBackupUsingBackint() const { return this->logBackupUsingBackint_ != nullptr;};
      void deleteLogBackupUsingBackint() { this->logBackupUsingBackint_ = nullptr;};
      inline bool getLogBackupUsingBackint() const { DARABONBA_PTR_GET_DEFAULT(logBackupUsingBackint_, false) };
      inline HanaBackupSetting& setLogBackupUsingBackint(bool logBackupUsingBackint) { DARABONBA_PTR_SET_VALUE(logBackupUsingBackint_, logBackupUsingBackint) };


    protected:
      // The configuration file for catalog backup.
      shared_ptr<string> catalogBackupParameterFile_ {};
      // Indicates whether Backint is used to back up catalogs. Valid values:
      // 
      // *   true: Backint is used to back up catalogs.
      // *   false: Backint is not used to back up catalogs.
      shared_ptr<bool> catalogBackupUsingBackint_ {};
      // The configuration file for data backup.
      shared_ptr<string> dataBackupParameterFile_ {};
      // The name of the database.
      shared_ptr<string> databaseName_ {};
      // Indicates whether automatic log backup is enabled. Valid values:
      // 
      // *   **true**: Automatic log backup is enabled.
      // *   **false**: Automatic log backup is disabled.
      shared_ptr<bool> enableAutoLogBackup_ {};
      // The configuration file for log backup.
      shared_ptr<string> logBackupParameterFile_ {};
      // The interval at which logs are backed up. Unit: seconds.
      shared_ptr<int64_t> logBackupTimeout_ {};
      // Indicates whether Backint is used to back up logs. Valid values:
      // 
      // *   true: Backint is used to back up logs.
      // *   false: Backint is not used to back up logs.
      shared_ptr<bool> logBackupUsingBackint_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->hanaBackupSetting_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeHanaBackupSettingResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hanaBackupSetting Field Functions 
    bool hasHanaBackupSetting() const { return this->hanaBackupSetting_ != nullptr;};
    void deleteHanaBackupSetting() { this->hanaBackupSetting_ = nullptr;};
    inline const DescribeHanaBackupSettingResponseBody::HanaBackupSetting & getHanaBackupSetting() const { DARABONBA_PTR_GET_CONST(hanaBackupSetting_, DescribeHanaBackupSettingResponseBody::HanaBackupSetting) };
    inline DescribeHanaBackupSettingResponseBody::HanaBackupSetting getHanaBackupSetting() { DARABONBA_PTR_GET(hanaBackupSetting_, DescribeHanaBackupSettingResponseBody::HanaBackupSetting) };
    inline DescribeHanaBackupSettingResponseBody& setHanaBackupSetting(const DescribeHanaBackupSettingResponseBody::HanaBackupSetting & hanaBackupSetting) { DARABONBA_PTR_SET_VALUE(hanaBackupSetting_, hanaBackupSetting) };
    inline DescribeHanaBackupSettingResponseBody& setHanaBackupSetting(DescribeHanaBackupSettingResponseBody::HanaBackupSetting && hanaBackupSetting) { DARABONBA_PTR_SET_RVALUE(hanaBackupSetting_, hanaBackupSetting) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeHanaBackupSettingResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHanaBackupSettingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeHanaBackupSettingResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code. The status code 200 indicates that the call is successful.
    shared_ptr<string> code_ {};
    // The backup settings.
    shared_ptr<DescribeHanaBackupSettingResponseBody::HanaBackupSetting> hanaBackupSetting_ {};
    // The message that is returned. If the call is successful, "successful" is returned. If the call fails, an error message is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. Valid values:
    // 
    // *   true: The call is successful.
    // *   false: The call fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
