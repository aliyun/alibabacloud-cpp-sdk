// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accounts, accounts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAccountsResponseBody() = default ;
    DescribeAccountsResponseBody(const DescribeAccountsResponseBody &) = default ;
    DescribeAccountsResponseBody(DescribeAccountsResponseBody &&) = default ;
    DescribeAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountsResponseBody() = default ;
    DescribeAccountsResponseBody& operator=(const DescribeAccountsResponseBody &) = default ;
    DescribeAccountsResponseBody& operator=(DescribeAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Accounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Accounts& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceAccount, DBInstanceAccount_);
      };
      friend void from_json(const Darabonba::Json& j, Accounts& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceAccount, DBInstanceAccount_);
      };
      Accounts() = default ;
      Accounts(const Accounts &) = default ;
      Accounts(Accounts &&) = default ;
      Accounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Accounts() = default ;
      Accounts& operator=(const Accounts &) = default ;
      Accounts& operator=(Accounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBInstanceAccount : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBInstanceAccount& obj) { 
          DARABONBA_PTR_TO_JSON(AccountDescription, accountDescription_);
          DARABONBA_PTR_TO_JSON(AccountName, accountName_);
          DARABONBA_PTR_TO_JSON(AccountStatus, accountStatus_);
          DARABONBA_PTR_TO_JSON(AccountType, accountType_);
          DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
        };
        friend void from_json(const Darabonba::Json& j, DBInstanceAccount& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountDescription, accountDescription_);
          DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
          DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
          DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
          DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
        };
        DBInstanceAccount() = default ;
        DBInstanceAccount(const DBInstanceAccount &) = default ;
        DBInstanceAccount(DBInstanceAccount &&) = default ;
        DBInstanceAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBInstanceAccount() = default ;
        DBInstanceAccount& operator=(const DBInstanceAccount &) = default ;
        DBInstanceAccount& operator=(DBInstanceAccount &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountDescription_ == nullptr
        && this->accountName_ == nullptr && this->accountStatus_ == nullptr && this->accountType_ == nullptr && this->DBInstanceId_ == nullptr; };
        // accountDescription Field Functions 
        bool hasAccountDescription() const { return this->accountDescription_ != nullptr;};
        void deleteAccountDescription() { this->accountDescription_ = nullptr;};
        inline string getAccountDescription() const { DARABONBA_PTR_GET_DEFAULT(accountDescription_, "") };
        inline DBInstanceAccount& setAccountDescription(string accountDescription) { DARABONBA_PTR_SET_VALUE(accountDescription_, accountDescription) };


        // accountName Field Functions 
        bool hasAccountName() const { return this->accountName_ != nullptr;};
        void deleteAccountName() { this->accountName_ = nullptr;};
        inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
        inline DBInstanceAccount& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


        // accountStatus Field Functions 
        bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
        void deleteAccountStatus() { this->accountStatus_ = nullptr;};
        inline string getAccountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
        inline DBInstanceAccount& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


        // accountType Field Functions 
        bool hasAccountType() const { return this->accountType_ != nullptr;};
        void deleteAccountType() { this->accountType_ = nullptr;};
        inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
        inline DBInstanceAccount& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


        // DBInstanceId Field Functions 
        bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
        void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
        inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
        inline DBInstanceAccount& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


      protected:
        // The description of the account.
        shared_ptr<string> accountDescription_ {};
        // The name of the account.
        shared_ptr<string> accountName_ {};
        // The state of the account.
        // 
        // *   **0**: The account is being created.
        // *   **1**: The account is in use.
        // *   **3**: The account is being deleted.
        shared_ptr<string> accountStatus_ {};
        // The type of the database account. Valid values: Super and Normal. Super indicates a privileged account and Normal indicates a standard account.
        shared_ptr<string> accountType_ {};
        // The ID of the instance.
        shared_ptr<string> DBInstanceId_ {};
      };

      virtual bool empty() const override { return this->DBInstanceAccount_ == nullptr; };
      // DBInstanceAccount Field Functions 
      bool hasDBInstanceAccount() const { return this->DBInstanceAccount_ != nullptr;};
      void deleteDBInstanceAccount() { this->DBInstanceAccount_ = nullptr;};
      inline const vector<Accounts::DBInstanceAccount> & getDBInstanceAccount() const { DARABONBA_PTR_GET_CONST(DBInstanceAccount_, vector<Accounts::DBInstanceAccount>) };
      inline vector<Accounts::DBInstanceAccount> getDBInstanceAccount() { DARABONBA_PTR_GET(DBInstanceAccount_, vector<Accounts::DBInstanceAccount>) };
      inline Accounts& setDBInstanceAccount(const vector<Accounts::DBInstanceAccount> & dBInstanceAccount) { DARABONBA_PTR_SET_VALUE(DBInstanceAccount_, dBInstanceAccount) };
      inline Accounts& setDBInstanceAccount(vector<Accounts::DBInstanceAccount> && dBInstanceAccount) { DARABONBA_PTR_SET_RVALUE(DBInstanceAccount_, dBInstanceAccount) };


    protected:
      shared_ptr<vector<Accounts::DBInstanceAccount>> DBInstanceAccount_ {};
    };

    virtual bool empty() const override { return this->accounts_ == nullptr
        && this->requestId_ == nullptr; };
    // accounts Field Functions 
    bool hasAccounts() const { return this->accounts_ != nullptr;};
    void deleteAccounts() { this->accounts_ = nullptr;};
    inline const DescribeAccountsResponseBody::Accounts & getAccounts() const { DARABONBA_PTR_GET_CONST(accounts_, DescribeAccountsResponseBody::Accounts) };
    inline DescribeAccountsResponseBody::Accounts getAccounts() { DARABONBA_PTR_GET(accounts_, DescribeAccountsResponseBody::Accounts) };
    inline DescribeAccountsResponseBody& setAccounts(const DescribeAccountsResponseBody::Accounts & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
    inline DescribeAccountsResponseBody& setAccounts(DescribeAccountsResponseBody::Accounts && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried database accounts.
    shared_ptr<DescribeAccountsResponseBody::Accounts> accounts_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
