// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODYACCOUNTSDBINSTANCEACCOUNT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODYACCOUNTSDBINSTANCEACCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeAccountsResponseBodyAccountsDBInstanceAccount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountsResponseBodyAccountsDBInstanceAccount& obj) { 
      DARABONBA_PTR_TO_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountsResponseBodyAccountsDBInstanceAccount& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
    };
    DescribeAccountsResponseBodyAccountsDBInstanceAccount() = default ;
    DescribeAccountsResponseBodyAccountsDBInstanceAccount(const DescribeAccountsResponseBodyAccountsDBInstanceAccount &) = default ;
    DescribeAccountsResponseBodyAccountsDBInstanceAccount(DescribeAccountsResponseBodyAccountsDBInstanceAccount &&) = default ;
    DescribeAccountsResponseBodyAccountsDBInstanceAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountsResponseBodyAccountsDBInstanceAccount() = default ;
    DescribeAccountsResponseBodyAccountsDBInstanceAccount& operator=(const DescribeAccountsResponseBodyAccountsDBInstanceAccount &) = default ;
    DescribeAccountsResponseBodyAccountsDBInstanceAccount& operator=(DescribeAccountsResponseBodyAccountsDBInstanceAccount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountDescription_ == nullptr
        && return this->accountName_ == nullptr && return this->accountStatus_ == nullptr && return this->accountType_ == nullptr && return this->DBInstanceId_ == nullptr; };
    // accountDescription Field Functions 
    bool hasAccountDescription() const { return this->accountDescription_ != nullptr;};
    void deleteAccountDescription() { this->accountDescription_ = nullptr;};
    inline string accountDescription() const { DARABONBA_PTR_GET_DEFAULT(accountDescription_, "") };
    inline DescribeAccountsResponseBodyAccountsDBInstanceAccount& setAccountDescription(string accountDescription) { DARABONBA_PTR_SET_VALUE(accountDescription_, accountDescription) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeAccountsResponseBodyAccountsDBInstanceAccount& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountStatus Field Functions 
    bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
    void deleteAccountStatus() { this->accountStatus_ = nullptr;};
    inline string accountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
    inline DescribeAccountsResponseBodyAccountsDBInstanceAccount& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string accountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline DescribeAccountsResponseBodyAccountsDBInstanceAccount& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeAccountsResponseBodyAccountsDBInstanceAccount& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


  protected:
    // The description of the account.
    std::shared_ptr<string> accountDescription_ = nullptr;
    // The name of the account.
    std::shared_ptr<string> accountName_ = nullptr;
    // The state of the account.
    // 
    // *   **0**: The account is being created.
    // *   **1**: The account is in use.
    // *   **3**: The account is being deleted.
    std::shared_ptr<string> accountStatus_ = nullptr;
    // The type of the database account. Valid values: Super and Normal. Super indicates a privileged account and Normal indicates a standard account.
    std::shared_ptr<string> accountType_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
