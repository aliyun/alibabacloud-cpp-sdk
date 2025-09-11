// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODYDATAACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODYDATAACCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeAccountsResponseBodyDataAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountsResponseBodyDataAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountsResponseBodyDataAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeAccountsResponseBodyDataAccounts() = default ;
    DescribeAccountsResponseBodyDataAccounts(const DescribeAccountsResponseBodyDataAccounts &) = default ;
    DescribeAccountsResponseBodyDataAccounts(DescribeAccountsResponseBodyDataAccounts &&) = default ;
    DescribeAccountsResponseBodyDataAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountsResponseBodyDataAccounts() = default ;
    DescribeAccountsResponseBodyDataAccounts& operator=(const DescribeAccountsResponseBodyDataAccounts &) = default ;
    DescribeAccountsResponseBodyDataAccounts& operator=(DescribeAccountsResponseBodyDataAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->account_ != nullptr
        && this->accountType_ != nullptr && this->description_ != nullptr && this->status_ != nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string account() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline DescribeAccountsResponseBodyDataAccounts& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string accountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline DescribeAccountsResponseBodyDataAccounts& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAccountsResponseBodyDataAccounts& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAccountsResponseBodyDataAccounts& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The username of the database account.
    std::shared_ptr<string> account_ = nullptr;
    // The type of the database account. Valid values:
    // 
    // *   **1**: standard account
    // *   **6**: privileged account
    std::shared_ptr<string> accountType_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The state of the database account. Valid values:
    // 
    // *   **0**: The database account is being created.
    // *   **1**: The database account is in use.
    // *   **3**: The database account is being deleted.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
