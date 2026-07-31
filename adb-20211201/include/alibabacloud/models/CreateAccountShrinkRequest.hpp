// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCOUNTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCOUNTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateAccountShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccountShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(RamUserList, ramUserListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccountShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(RamUserList, ramUserListShrink_);
    };
    CreateAccountShrinkRequest() = default ;
    CreateAccountShrinkRequest(const CreateAccountShrinkRequest &) = default ;
    CreateAccountShrinkRequest(CreateAccountShrinkRequest &&) = default ;
    CreateAccountShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAccountShrinkRequest() = default ;
    CreateAccountShrinkRequest& operator=(const CreateAccountShrinkRequest &) = default ;
    CreateAccountShrinkRequest& operator=(CreateAccountShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountDescription_ == nullptr
        && this->accountName_ == nullptr && this->accountPassword_ == nullptr && this->accountType_ == nullptr && this->DBClusterId_ == nullptr && this->engine_ == nullptr
        && this->ramUserListShrink_ == nullptr; };
    // accountDescription Field Functions 
    bool hasAccountDescription() const { return this->accountDescription_ != nullptr;};
    void deleteAccountDescription() { this->accountDescription_ = nullptr;};
    inline string getAccountDescription() const { DARABONBA_PTR_GET_DEFAULT(accountDescription_, "") };
    inline CreateAccountShrinkRequest& setAccountDescription(string accountDescription) { DARABONBA_PTR_SET_VALUE(accountDescription_, accountDescription) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline CreateAccountShrinkRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountPassword Field Functions 
    bool hasAccountPassword() const { return this->accountPassword_ != nullptr;};
    void deleteAccountPassword() { this->accountPassword_ = nullptr;};
    inline string getAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(accountPassword_, "") };
    inline CreateAccountShrinkRequest& setAccountPassword(string accountPassword) { DARABONBA_PTR_SET_VALUE(accountPassword_, accountPassword) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline CreateAccountShrinkRequest& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateAccountShrinkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline CreateAccountShrinkRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // ramUserListShrink Field Functions 
    bool hasRamUserListShrink() const { return this->ramUserListShrink_ != nullptr;};
    void deleteRamUserListShrink() { this->ramUserListShrink_ = nullptr;};
    inline string getRamUserListShrink() const { DARABONBA_PTR_GET_DEFAULT(ramUserListShrink_, "") };
    inline CreateAccountShrinkRequest& setRamUserListShrink(string ramUserListShrink) { DARABONBA_PTR_SET_VALUE(ramUserListShrink_, ramUserListShrink) };


  protected:
    // The description of the account.
    // - Cannot start with `http://` or `https://`.
    // - Cannot exceed 256 characters in length.
    shared_ptr<string> accountDescription_ {};
    // The name of the database account. The name must meet the following requirements:
    // - Starts with a lowercase letter and ends with a lowercase letter or digit.
    // - Contains only lowercase letters, digits, or underscores (_).
    // 
    // This parameter is required.
    shared_ptr<string> accountName_ {};
    // The password of the database account.
    // - Must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters.
    // - Special characters include: `!@#$%^&*()_+-=`
    // - Must be 8 to 32 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> accountPassword_ {};
    // The type of the account. Valid values:
    // - **Normal**: standard account.
    // - **Super**: privileged account.
    // 
    // This parameter is required.
    shared_ptr<string> accountType_ {};
    // <props="china">The ID of the Enterprise Edition, Basic Edition, or Data Lakehouse Edition cluster.
    // <props="intl">The ID of the Data Lakehouse Edition cluster.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The database engine. Valid values:
    // 
    // - **AnalyticDB** (default): AnalyticDB for MySQL engine.
    // - **Clickhouse**: wide table engine.
    shared_ptr<string> engine_ {};
    // The list of Alibaba Cloud Resource Access Management (RAM) user IDs to attach. Currently, only one RAM user can be attached.
    shared_ptr<string> ramUserListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
