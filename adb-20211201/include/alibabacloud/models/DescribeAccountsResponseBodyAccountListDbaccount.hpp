// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODYACCOUNTLISTDBACCOUNT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODYACCOUNTLISTDBACCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAccountsResponseBodyAccountListDBAccount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountsResponseBodyAccountListDBAccount& obj) { 
      DARABONBA_PTR_TO_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(RamUsers, ramUsers_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountsResponseBodyAccountListDBAccount& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(RamUsers, ramUsers_);
    };
    DescribeAccountsResponseBodyAccountListDBAccount() = default ;
    DescribeAccountsResponseBodyAccountListDBAccount(const DescribeAccountsResponseBodyAccountListDBAccount &) = default ;
    DescribeAccountsResponseBodyAccountListDBAccount(DescribeAccountsResponseBodyAccountListDBAccount &&) = default ;
    DescribeAccountsResponseBodyAccountListDBAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountsResponseBodyAccountListDBAccount() = default ;
    DescribeAccountsResponseBodyAccountListDBAccount& operator=(const DescribeAccountsResponseBodyAccountListDBAccount &) = default ;
    DescribeAccountsResponseBodyAccountListDBAccount& operator=(DescribeAccountsResponseBodyAccountListDBAccount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountDescription_ != nullptr
        && this->accountName_ != nullptr && this->accountStatus_ != nullptr && this->accountType_ != nullptr && this->engine_ != nullptr && this->ramUsers_ != nullptr; };
    // accountDescription Field Functions 
    bool hasAccountDescription() const { return this->accountDescription_ != nullptr;};
    void deleteAccountDescription() { this->accountDescription_ = nullptr;};
    inline string accountDescription() const { DARABONBA_PTR_GET_DEFAULT(accountDescription_, "") };
    inline DescribeAccountsResponseBodyAccountListDBAccount& setAccountDescription(string accountDescription) { DARABONBA_PTR_SET_VALUE(accountDescription_, accountDescription) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeAccountsResponseBodyAccountListDBAccount& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountStatus Field Functions 
    bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
    void deleteAccountStatus() { this->accountStatus_ = nullptr;};
    inline string accountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
    inline DescribeAccountsResponseBodyAccountListDBAccount& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string accountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline DescribeAccountsResponseBodyAccountListDBAccount& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeAccountsResponseBodyAccountListDBAccount& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // ramUsers Field Functions 
    bool hasRamUsers() const { return this->ramUsers_ != nullptr;};
    void deleteRamUsers() { this->ramUsers_ = nullptr;};
    inline string ramUsers() const { DARABONBA_PTR_GET_DEFAULT(ramUsers_, "") };
    inline DescribeAccountsResponseBodyAccountListDBAccount& setRamUsers(string ramUsers) { DARABONBA_PTR_SET_VALUE(ramUsers_, ramUsers) };


  protected:
    // The description of the database account.
    std::shared_ptr<string> accountDescription_ = nullptr;
    // The name of the database account.
    std::shared_ptr<string> accountName_ = nullptr;
    // The status of the database account. Valid values:
    // 
    // *   **Creating**
    // *   **Available**
    // *   **Deleting**
    std::shared_ptr<string> accountStatus_ = nullptr;
    // The type of the database account. Valid values:
    // 
    // *   **Normal**: standard account.
    // *   **Super**: privileged account.
    std::shared_ptr<string> accountType_ = nullptr;
    // The database engine of the cluster. Valid values:
    // 
    // *   **AnalyticDB**: the AnalyticDB for MySQL engine.
    // *   **Clickhouse**: the wide table engine.
    std::shared_ptr<string> engine_ = nullptr;
    // The ID of the Resource Access Management (RAM) user.
    std::shared_ptr<string> ramUsers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
