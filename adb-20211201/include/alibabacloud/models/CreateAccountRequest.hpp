// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(PromqlInsertPrivileges, promqlInsertPrivileges_);
      DARABONBA_PTR_TO_JSON(PromqlSelectNodePercentage, promqlSelectNodePercentage_);
      DARABONBA_PTR_TO_JSON(PromqlSelectPrivileges, promqlSelectPrivileges_);
      DARABONBA_PTR_TO_JSON(RamUserList, ramUserList_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(PromqlInsertPrivileges, promqlInsertPrivileges_);
      DARABONBA_PTR_FROM_JSON(PromqlSelectNodePercentage, promqlSelectNodePercentage_);
      DARABONBA_PTR_FROM_JSON(PromqlSelectPrivileges, promqlSelectPrivileges_);
      DARABONBA_PTR_FROM_JSON(RamUserList, ramUserList_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
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
    virtual bool empty() const override { return this->accountDescription_ == nullptr
        && this->accountName_ == nullptr && this->accountPassword_ == nullptr && this->accountType_ == nullptr && this->DBClusterId_ == nullptr && this->engine_ == nullptr
        && this->promqlInsertPrivileges_ == nullptr && this->promqlSelectNodePercentage_ == nullptr && this->promqlSelectPrivileges_ == nullptr && this->ramUserList_ == nullptr && this->resourceGroupName_ == nullptr; };
    // accountDescription Field Functions 
    bool hasAccountDescription() const { return this->accountDescription_ != nullptr;};
    void deleteAccountDescription() { this->accountDescription_ = nullptr;};
    inline string getAccountDescription() const { DARABONBA_PTR_GET_DEFAULT(accountDescription_, "") };
    inline CreateAccountRequest& setAccountDescription(string accountDescription) { DARABONBA_PTR_SET_VALUE(accountDescription_, accountDescription) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline CreateAccountRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountPassword Field Functions 
    bool hasAccountPassword() const { return this->accountPassword_ != nullptr;};
    void deleteAccountPassword() { this->accountPassword_ = nullptr;};
    inline string getAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(accountPassword_, "") };
    inline CreateAccountRequest& setAccountPassword(string accountPassword) { DARABONBA_PTR_SET_VALUE(accountPassword_, accountPassword) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline CreateAccountRequest& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateAccountRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline CreateAccountRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // promqlInsertPrivileges Field Functions 
    bool hasPromqlInsertPrivileges() const { return this->promqlInsertPrivileges_ != nullptr;};
    void deletePromqlInsertPrivileges() { this->promqlInsertPrivileges_ = nullptr;};
    inline const vector<string> & getPromqlInsertPrivileges() const { DARABONBA_PTR_GET_CONST(promqlInsertPrivileges_, vector<string>) };
    inline vector<string> getPromqlInsertPrivileges() { DARABONBA_PTR_GET(promqlInsertPrivileges_, vector<string>) };
    inline CreateAccountRequest& setPromqlInsertPrivileges(const vector<string> & promqlInsertPrivileges) { DARABONBA_PTR_SET_VALUE(promqlInsertPrivileges_, promqlInsertPrivileges) };
    inline CreateAccountRequest& setPromqlInsertPrivileges(vector<string> && promqlInsertPrivileges) { DARABONBA_PTR_SET_RVALUE(promqlInsertPrivileges_, promqlInsertPrivileges) };


    // promqlSelectNodePercentage Field Functions 
    bool hasPromqlSelectNodePercentage() const { return this->promqlSelectNodePercentage_ != nullptr;};
    void deletePromqlSelectNodePercentage() { this->promqlSelectNodePercentage_ = nullptr;};
    inline double getPromqlSelectNodePercentage() const { DARABONBA_PTR_GET_DEFAULT(promqlSelectNodePercentage_, 0.0) };
    inline CreateAccountRequest& setPromqlSelectNodePercentage(double promqlSelectNodePercentage) { DARABONBA_PTR_SET_VALUE(promqlSelectNodePercentage_, promqlSelectNodePercentage) };


    // promqlSelectPrivileges Field Functions 
    bool hasPromqlSelectPrivileges() const { return this->promqlSelectPrivileges_ != nullptr;};
    void deletePromqlSelectPrivileges() { this->promqlSelectPrivileges_ = nullptr;};
    inline const vector<string> & getPromqlSelectPrivileges() const { DARABONBA_PTR_GET_CONST(promqlSelectPrivileges_, vector<string>) };
    inline vector<string> getPromqlSelectPrivileges() { DARABONBA_PTR_GET(promqlSelectPrivileges_, vector<string>) };
    inline CreateAccountRequest& setPromqlSelectPrivileges(const vector<string> & promqlSelectPrivileges) { DARABONBA_PTR_SET_VALUE(promqlSelectPrivileges_, promqlSelectPrivileges) };
    inline CreateAccountRequest& setPromqlSelectPrivileges(vector<string> && promqlSelectPrivileges) { DARABONBA_PTR_SET_RVALUE(promqlSelectPrivileges_, promqlSelectPrivileges) };


    // ramUserList Field Functions 
    bool hasRamUserList() const { return this->ramUserList_ != nullptr;};
    void deleteRamUserList() { this->ramUserList_ = nullptr;};
    inline const vector<string> & getRamUserList() const { DARABONBA_PTR_GET_CONST(ramUserList_, vector<string>) };
    inline vector<string> getRamUserList() { DARABONBA_PTR_GET(ramUserList_, vector<string>) };
    inline CreateAccountRequest& setRamUserList(const vector<string> & ramUserList) { DARABONBA_PTR_SET_VALUE(ramUserList_, ramUserList) };
    inline CreateAccountRequest& setRamUserList(vector<string> && ramUserList) { DARABONBA_PTR_SET_RVALUE(ramUserList_, ramUserList) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline CreateAccountRequest& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


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
    // - **AnalyticDB** (default): the AnalyticDB for MySQL engine.
    // - **Clickhouse**: the wide table engine.
    shared_ptr<string> engine_ {};
    shared_ptr<vector<string>> promqlInsertPrivileges_ {};
    shared_ptr<double> promqlSelectNodePercentage_ {};
    shared_ptr<vector<string>> promqlSelectPrivileges_ {};
    // The list of Alibaba Cloud RAM user IDs to bind. Currently, only one RAM user can be bound.
    shared_ptr<vector<string>> ramUserList_ {};
    shared_ptr<string> resourceGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
