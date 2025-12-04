// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODYACCOUNTSACCOUNT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODYACCOUNTSACCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeAccountsResponseBodyAccountsAccount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountsResponseBodyAccountsAccount& obj) { 
      DARABONBA_PTR_TO_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountsResponseBodyAccountsAccount& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
    };
    DescribeAccountsResponseBodyAccountsAccount() = default ;
    DescribeAccountsResponseBodyAccountsAccount(const DescribeAccountsResponseBodyAccountsAccount &) = default ;
    DescribeAccountsResponseBodyAccountsAccount(DescribeAccountsResponseBodyAccountsAccount &&) = default ;
    DescribeAccountsResponseBodyAccountsAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountsResponseBodyAccountsAccount() = default ;
    DescribeAccountsResponseBodyAccountsAccount& operator=(const DescribeAccountsResponseBodyAccountsAccount &) = default ;
    DescribeAccountsResponseBodyAccountsAccount& operator=(DescribeAccountsResponseBodyAccountsAccount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountDescription_ == nullptr
        && return this->accountName_ == nullptr && return this->accountStatus_ == nullptr && return this->accountType_ == nullptr && return this->configType_ == nullptr; };
    // accountDescription Field Functions 
    bool hasAccountDescription() const { return this->accountDescription_ != nullptr;};
    void deleteAccountDescription() { this->accountDescription_ = nullptr;};
    inline string accountDescription() const { DARABONBA_PTR_GET_DEFAULT(accountDescription_, "") };
    inline DescribeAccountsResponseBodyAccountsAccount& setAccountDescription(string accountDescription) { DARABONBA_PTR_SET_VALUE(accountDescription_, accountDescription) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeAccountsResponseBodyAccountsAccount& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountStatus Field Functions 
    bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
    void deleteAccountStatus() { this->accountStatus_ = nullptr;};
    inline string accountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
    inline DescribeAccountsResponseBodyAccountsAccount& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string accountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline DescribeAccountsResponseBodyAccountsAccount& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline DescribeAccountsResponseBodyAccountsAccount& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


  protected:
    // The description of the database account.
    std::shared_ptr<string> accountDescription_ = nullptr;
    // The name of the database account.
    std::shared_ptr<string> accountName_ = nullptr;
    // The state of the database account. Valid values:
    // 
    // *   **Creating**
    // *   **Available**
    // *   **AuthorityModifying**
    // *   **Deleting**
    // 
    // >  Only XML-configured database accounts can be in the **AuthorityModifying** state.
    std::shared_ptr<string> accountStatus_ = nullptr;
    // The type of the database account. Valid values:
    // 
    // *   **Super**: privileged account
    // *   **Normal**: standard account
    std::shared_ptr<string> accountType_ = nullptr;
    // The configuration mode of the database account.
    std::shared_ptr<string> configType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
