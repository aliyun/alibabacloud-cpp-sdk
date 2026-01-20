// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class CreateAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DmlAuthSetting, dmlAuthSetting_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DmlAuthSetting, dmlAuthSetting_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateAccountRequest() = default ;
    CreateAccountRequest(const CreateAccountRequest &) = default ;
    CreateAccountRequest(CreateAccountRequest &&) = default ;
    CreateAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAccountRequest() = default ;
    CreateAccountRequest& operator=(const CreateAccountRequest &) = default ;
    CreateAccountRequest& operator=(CreateAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DmlAuthSetting : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DmlAuthSetting& obj) { 
        DARABONBA_PTR_TO_JSON(AllowDatabases, allowDatabases_);
        DARABONBA_PTR_TO_JSON(AllowDictionaries, allowDictionaries_);
        DARABONBA_PTR_TO_JSON(DdlAuthority, ddlAuthority_);
        DARABONBA_PTR_TO_JSON(DmlAuthority, dmlAuthority_);
      };
      friend void from_json(const Darabonba::Json& j, DmlAuthSetting& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowDatabases, allowDatabases_);
        DARABONBA_PTR_FROM_JSON(AllowDictionaries, allowDictionaries_);
        DARABONBA_PTR_FROM_JSON(DdlAuthority, ddlAuthority_);
        DARABONBA_PTR_FROM_JSON(DmlAuthority, dmlAuthority_);
      };
      DmlAuthSetting() = default ;
      DmlAuthSetting(const DmlAuthSetting &) = default ;
      DmlAuthSetting(DmlAuthSetting &&) = default ;
      DmlAuthSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DmlAuthSetting() = default ;
      DmlAuthSetting& operator=(const DmlAuthSetting &) = default ;
      DmlAuthSetting& operator=(DmlAuthSetting &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allowDatabases_ == nullptr
        && this->allowDictionaries_ == nullptr && this->ddlAuthority_ == nullptr && this->dmlAuthority_ == nullptr; };
      // allowDatabases Field Functions 
      bool hasAllowDatabases() const { return this->allowDatabases_ != nullptr;};
      void deleteAllowDatabases() { this->allowDatabases_ = nullptr;};
      inline const vector<string> & getAllowDatabases() const { DARABONBA_PTR_GET_CONST(allowDatabases_, vector<string>) };
      inline vector<string> getAllowDatabases() { DARABONBA_PTR_GET(allowDatabases_, vector<string>) };
      inline DmlAuthSetting& setAllowDatabases(const vector<string> & allowDatabases) { DARABONBA_PTR_SET_VALUE(allowDatabases_, allowDatabases) };
      inline DmlAuthSetting& setAllowDatabases(vector<string> && allowDatabases) { DARABONBA_PTR_SET_RVALUE(allowDatabases_, allowDatabases) };


      // allowDictionaries Field Functions 
      bool hasAllowDictionaries() const { return this->allowDictionaries_ != nullptr;};
      void deleteAllowDictionaries() { this->allowDictionaries_ = nullptr;};
      inline const vector<string> & getAllowDictionaries() const { DARABONBA_PTR_GET_CONST(allowDictionaries_, vector<string>) };
      inline vector<string> getAllowDictionaries() { DARABONBA_PTR_GET(allowDictionaries_, vector<string>) };
      inline DmlAuthSetting& setAllowDictionaries(const vector<string> & allowDictionaries) { DARABONBA_PTR_SET_VALUE(allowDictionaries_, allowDictionaries) };
      inline DmlAuthSetting& setAllowDictionaries(vector<string> && allowDictionaries) { DARABONBA_PTR_SET_RVALUE(allowDictionaries_, allowDictionaries) };


      // ddlAuthority Field Functions 
      bool hasDdlAuthority() const { return this->ddlAuthority_ != nullptr;};
      void deleteDdlAuthority() { this->ddlAuthority_ = nullptr;};
      inline bool getDdlAuthority() const { DARABONBA_PTR_GET_DEFAULT(ddlAuthority_, false) };
      inline DmlAuthSetting& setDdlAuthority(bool ddlAuthority) { DARABONBA_PTR_SET_VALUE(ddlAuthority_, ddlAuthority) };


      // dmlAuthority Field Functions 
      bool hasDmlAuthority() const { return this->dmlAuthority_ != nullptr;};
      void deleteDmlAuthority() { this->dmlAuthority_ = nullptr;};
      inline int32_t getDmlAuthority() const { DARABONBA_PTR_GET_DEFAULT(dmlAuthority_, 0) };
      inline DmlAuthSetting& setDmlAuthority(int32_t dmlAuthority) { DARABONBA_PTR_SET_VALUE(dmlAuthority_, dmlAuthority) };


    protected:
      // The databases on which you want to grant permissions. Separate multiple databases with commas (,).
      shared_ptr<vector<string>> allowDatabases_ {};
      // The dictionaries on which you want to grant permissions. Separate multiple dictionaries with commas (,).
      shared_ptr<vector<string>> allowDictionaries_ {};
      // Specifies whether to grant the DDL permissions to the database account. Valid values:
      // 
      // *   **true**: The account has the permissions to execute DDL statements.
      // *   **false**: The account does not have the permissions to execute DDL statements.
      shared_ptr<bool> ddlAuthority_ {};
      // Specifies whether to grant the DML permissions to the database account. Valid values:
      // 
      // *   **0**: The account has the permissions to read data from the database, write data to the database, and modify the settings of the database.
      // *   **1**: The account only has the permissions to read data from the database.
      // *   **2**: The account only has the permissions to read data from the database and modify the settings of the database.
      shared_ptr<int32_t> dmlAuthority_ {};
    };

    virtual bool empty() const override { return this->account_ == nullptr
        && this->accountType_ == nullptr && this->DBInstanceId_ == nullptr && this->description_ == nullptr && this->dmlAuthSetting_ == nullptr && this->password_ == nullptr
        && this->product_ == nullptr && this->regionId_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline CreateAccountRequest& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline CreateAccountRequest& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateAccountRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAccountRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dmlAuthSetting Field Functions 
    bool hasDmlAuthSetting() const { return this->dmlAuthSetting_ != nullptr;};
    void deleteDmlAuthSetting() { this->dmlAuthSetting_ = nullptr;};
    inline const CreateAccountRequest::DmlAuthSetting & getDmlAuthSetting() const { DARABONBA_PTR_GET_CONST(dmlAuthSetting_, CreateAccountRequest::DmlAuthSetting) };
    inline CreateAccountRequest::DmlAuthSetting getDmlAuthSetting() { DARABONBA_PTR_GET(dmlAuthSetting_, CreateAccountRequest::DmlAuthSetting) };
    inline CreateAccountRequest& setDmlAuthSetting(const CreateAccountRequest::DmlAuthSetting & dmlAuthSetting) { DARABONBA_PTR_SET_VALUE(dmlAuthSetting_, dmlAuthSetting) };
    inline CreateAccountRequest& setDmlAuthSetting(CreateAccountRequest::DmlAuthSetting && dmlAuthSetting) { DARABONBA_PTR_SET_RVALUE(dmlAuthSetting_, dmlAuthSetting) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateAccountRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline CreateAccountRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAccountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the account.
    // 
    // This parameter is required.
    shared_ptr<string> account_ {};
    // The type of the database account. Valid values:
    // 
    // *   **NormalAccount**: standard account
    // *   **SuperAccount**: privileged account
    // 
    // This parameter is required.
    shared_ptr<string> accountType_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The description of the account.
    shared_ptr<string> description_ {};
    // The information about permissions.
    shared_ptr<CreateAccountRequest::DmlAuthSetting> dmlAuthSetting_ {};
    // The password of the database account. The password must meet the following requirements:
    // 
    // - The password must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters.
    // - The following special characters are supported: ! @ # $ % ^ & * ( ) _ + - =
    // - The password must be 8 to 32 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> password_ {};
    // The code of the cloud service.
    shared_ptr<string> product_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
