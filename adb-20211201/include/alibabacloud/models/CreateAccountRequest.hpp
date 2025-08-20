// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
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
    virtual bool empty() const override { this->accountDescription_ != nullptr
        && this->accountName_ != nullptr && this->accountPassword_ != nullptr && this->accountType_ != nullptr && this->DBClusterId_ != nullptr && this->engine_ != nullptr; };
    // accountDescription Field Functions 
    bool hasAccountDescription() const { return this->accountDescription_ != nullptr;};
    void deleteAccountDescription() { this->accountDescription_ = nullptr;};
    inline string accountDescription() const { DARABONBA_PTR_GET_DEFAULT(accountDescription_, "") };
    inline CreateAccountRequest& setAccountDescription(string accountDescription) { DARABONBA_PTR_SET_VALUE(accountDescription_, accountDescription) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline CreateAccountRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountPassword Field Functions 
    bool hasAccountPassword() const { return this->accountPassword_ != nullptr;};
    void deleteAccountPassword() { this->accountPassword_ = nullptr;};
    inline string accountPassword() const { DARABONBA_PTR_GET_DEFAULT(accountPassword_, "") };
    inline CreateAccountRequest& setAccountPassword(string accountPassword) { DARABONBA_PTR_SET_VALUE(accountPassword_, accountPassword) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string accountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline CreateAccountRequest& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateAccountRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline CreateAccountRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


  protected:
    // The description of the account.
    // 
    // *   The description cannot start with `http://` or `https://`.
    // *   The description can be up to 256 characters in length.
    std::shared_ptr<string> accountDescription_ = nullptr;
    // The name of the database account.
    // 
    // *   The name must start with a lowercase letter and end with a lowercase letter or a digit.
    // *   The name can contain lowercase letters, digits, and underscores (_).
    // *   The name must be 2 to 16 characters in length.
    // *   Reserved account names such as root, admin, and opsadmin cannot be used.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountName_ = nullptr;
    // The password of the database account.
    // 
    // *   The password must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters.
    // *   Special characters include `! @ # $ % ^ & * ( ) _ + - =`
    // *   The password must be 8 to 32 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountPassword_ = nullptr;
    // The type of the database account. Valid values:
    // 
    // *   **Normal**: standard account.
    // *   **Super**: privileged account.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountType_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The database engine of the cluster. Valid values:
    // 
    // *   **AnalyticDB** (default): the AnalyticDB for MySQL engine.
    // *   **Clickhouse**: the wide table engine.
    std::shared_ptr<string> engine_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
