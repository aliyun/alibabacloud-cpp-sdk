// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAccountRequestDmlAuthSetting.hpp>
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
    virtual bool empty() const override { return this->account_ == nullptr
        && return this->accountType_ == nullptr && return this->DBInstanceId_ == nullptr && return this->description_ == nullptr && return this->dmlAuthSetting_ == nullptr && return this->password_ == nullptr
        && return this->product_ == nullptr && return this->regionId_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string account() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline CreateAccountRequest& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string accountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline CreateAccountRequest& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateAccountRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAccountRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dmlAuthSetting Field Functions 
    bool hasDmlAuthSetting() const { return this->dmlAuthSetting_ != nullptr;};
    void deleteDmlAuthSetting() { this->dmlAuthSetting_ = nullptr;};
    inline const CreateAccountRequestDmlAuthSetting & dmlAuthSetting() const { DARABONBA_PTR_GET_CONST(dmlAuthSetting_, CreateAccountRequestDmlAuthSetting) };
    inline CreateAccountRequestDmlAuthSetting dmlAuthSetting() { DARABONBA_PTR_GET(dmlAuthSetting_, CreateAccountRequestDmlAuthSetting) };
    inline CreateAccountRequest& setDmlAuthSetting(const CreateAccountRequestDmlAuthSetting & dmlAuthSetting) { DARABONBA_PTR_SET_VALUE(dmlAuthSetting_, dmlAuthSetting) };
    inline CreateAccountRequest& setDmlAuthSetting(CreateAccountRequestDmlAuthSetting && dmlAuthSetting) { DARABONBA_PTR_SET_RVALUE(dmlAuthSetting_, dmlAuthSetting) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateAccountRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline CreateAccountRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAccountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the account.
    // 
    // This parameter is required.
    std::shared_ptr<string> account_ = nullptr;
    // The type of the database account. Valid values:
    // 
    // *   **NormalAccount**: standard account
    // *   **SuperAccount**: privileged account
    // 
    // This parameter is required.
    std::shared_ptr<string> accountType_ = nullptr;
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The description of the account.
    std::shared_ptr<string> description_ = nullptr;
    // The information about permissions.
    std::shared_ptr<CreateAccountRequestDmlAuthSetting> dmlAuthSetting_ = nullptr;
    // The password of the database account. The password must meet the following requirements:
    // 
    // - The password must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters.
    // - The following special characters are supported: ! @ # $ % ^ & * ( ) _ + - =
    // - The password must be 8 to 32 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> password_ = nullptr;
    // The code of the cloud service.
    std::shared_ptr<string> product_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
