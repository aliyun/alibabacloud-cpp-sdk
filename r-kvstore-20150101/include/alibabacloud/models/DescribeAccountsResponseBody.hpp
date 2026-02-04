// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
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
        DARABONBA_PTR_TO_JSON(Account, account_);
      };
      friend void from_json(const Darabonba::Json& j, Accounts& obj) { 
        DARABONBA_PTR_FROM_JSON(Account, account_);
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
      class Account : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Account& obj) { 
          DARABONBA_PTR_TO_JSON(AccountDescription, accountDescription_);
          DARABONBA_PTR_TO_JSON(AccountName, accountName_);
          DARABONBA_PTR_TO_JSON(AccountStatus, accountStatus_);
          DARABONBA_PTR_TO_JSON(AccountType, accountType_);
          DARABONBA_PTR_TO_JSON(DatabasePrivileges, databasePrivileges_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        };
        friend void from_json(const Darabonba::Json& j, Account& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountDescription, accountDescription_);
          DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
          DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
          DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
          DARABONBA_PTR_FROM_JSON(DatabasePrivileges, databasePrivileges_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        };
        Account() = default ;
        Account(const Account &) = default ;
        Account(Account &&) = default ;
        Account(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Account() = default ;
        Account& operator=(const Account &) = default ;
        Account& operator=(Account &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DatabasePrivileges : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DatabasePrivileges& obj) { 
            DARABONBA_PTR_TO_JSON(DatabasePrivilege, databasePrivilege_);
          };
          friend void from_json(const Darabonba::Json& j, DatabasePrivileges& obj) { 
            DARABONBA_PTR_FROM_JSON(DatabasePrivilege, databasePrivilege_);
          };
          DatabasePrivileges() = default ;
          DatabasePrivileges(const DatabasePrivileges &) = default ;
          DatabasePrivileges(DatabasePrivileges &&) = default ;
          DatabasePrivileges(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DatabasePrivileges() = default ;
          DatabasePrivileges& operator=(const DatabasePrivileges &) = default ;
          DatabasePrivileges& operator=(DatabasePrivileges &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class DatabasePrivilege : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DatabasePrivilege& obj) { 
              DARABONBA_PTR_TO_JSON(AccountPrivilege, accountPrivilege_);
            };
            friend void from_json(const Darabonba::Json& j, DatabasePrivilege& obj) { 
              DARABONBA_PTR_FROM_JSON(AccountPrivilege, accountPrivilege_);
            };
            DatabasePrivilege() = default ;
            DatabasePrivilege(const DatabasePrivilege &) = default ;
            DatabasePrivilege(DatabasePrivilege &&) = default ;
            DatabasePrivilege(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DatabasePrivilege() = default ;
            DatabasePrivilege& operator=(const DatabasePrivilege &) = default ;
            DatabasePrivilege& operator=(DatabasePrivilege &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->accountPrivilege_ == nullptr; };
            // accountPrivilege Field Functions 
            bool hasAccountPrivilege() const { return this->accountPrivilege_ != nullptr;};
            void deleteAccountPrivilege() { this->accountPrivilege_ = nullptr;};
            inline string getAccountPrivilege() const { DARABONBA_PTR_GET_DEFAULT(accountPrivilege_, "") };
            inline DatabasePrivilege& setAccountPrivilege(string accountPrivilege) { DARABONBA_PTR_SET_VALUE(accountPrivilege_, accountPrivilege) };


          protected:
            // The permission of the account. Default value: RoleReadWrite. Valid values:
            // 
            // *   **RoleReadOnly**: The account has the read-only permissions.
            // *   **RoleReadWrite**: The account has the read and write permissions.
            shared_ptr<string> accountPrivilege_ {};
          };

          virtual bool empty() const override { return this->databasePrivilege_ == nullptr; };
          // databasePrivilege Field Functions 
          bool hasDatabasePrivilege() const { return this->databasePrivilege_ != nullptr;};
          void deleteDatabasePrivilege() { this->databasePrivilege_ = nullptr;};
          inline const vector<DatabasePrivileges::DatabasePrivilege> & getDatabasePrivilege() const { DARABONBA_PTR_GET_CONST(databasePrivilege_, vector<DatabasePrivileges::DatabasePrivilege>) };
          inline vector<DatabasePrivileges::DatabasePrivilege> getDatabasePrivilege() { DARABONBA_PTR_GET(databasePrivilege_, vector<DatabasePrivileges::DatabasePrivilege>) };
          inline DatabasePrivileges& setDatabasePrivilege(const vector<DatabasePrivileges::DatabasePrivilege> & databasePrivilege) { DARABONBA_PTR_SET_VALUE(databasePrivilege_, databasePrivilege) };
          inline DatabasePrivileges& setDatabasePrivilege(vector<DatabasePrivileges::DatabasePrivilege> && databasePrivilege) { DARABONBA_PTR_SET_RVALUE(databasePrivilege_, databasePrivilege) };


        protected:
          shared_ptr<vector<DatabasePrivileges::DatabasePrivilege>> databasePrivilege_ {};
        };

        virtual bool empty() const override { return this->accountDescription_ == nullptr
        && this->accountName_ == nullptr && this->accountStatus_ == nullptr && this->accountType_ == nullptr && this->databasePrivileges_ == nullptr && this->instanceId_ == nullptr; };
        // accountDescription Field Functions 
        bool hasAccountDescription() const { return this->accountDescription_ != nullptr;};
        void deleteAccountDescription() { this->accountDescription_ = nullptr;};
        inline string getAccountDescription() const { DARABONBA_PTR_GET_DEFAULT(accountDescription_, "") };
        inline Account& setAccountDescription(string accountDescription) { DARABONBA_PTR_SET_VALUE(accountDescription_, accountDescription) };


        // accountName Field Functions 
        bool hasAccountName() const { return this->accountName_ != nullptr;};
        void deleteAccountName() { this->accountName_ = nullptr;};
        inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
        inline Account& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


        // accountStatus Field Functions 
        bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
        void deleteAccountStatus() { this->accountStatus_ = nullptr;};
        inline string getAccountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
        inline Account& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


        // accountType Field Functions 
        bool hasAccountType() const { return this->accountType_ != nullptr;};
        void deleteAccountType() { this->accountType_ = nullptr;};
        inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
        inline Account& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


        // databasePrivileges Field Functions 
        bool hasDatabasePrivileges() const { return this->databasePrivileges_ != nullptr;};
        void deleteDatabasePrivileges() { this->databasePrivileges_ = nullptr;};
        inline const Account::DatabasePrivileges & getDatabasePrivileges() const { DARABONBA_PTR_GET_CONST(databasePrivileges_, Account::DatabasePrivileges) };
        inline Account::DatabasePrivileges getDatabasePrivileges() { DARABONBA_PTR_GET(databasePrivileges_, Account::DatabasePrivileges) };
        inline Account& setDatabasePrivileges(const Account::DatabasePrivileges & databasePrivileges) { DARABONBA_PTR_SET_VALUE(databasePrivileges_, databasePrivileges) };
        inline Account& setDatabasePrivileges(Account::DatabasePrivileges && databasePrivileges) { DARABONBA_PTR_SET_RVALUE(databasePrivileges_, databasePrivileges) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Account& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      protected:
        // The description of the account.
        shared_ptr<string> accountDescription_ {};
        // The name of the account.
        shared_ptr<string> accountName_ {};
        // The state of the account. Valid values:
        // 
        // *   **Unavailable**: The account is unavailable.
        // *   **Available**: The account is available.
        shared_ptr<string> accountStatus_ {};
        // The type of the account. Valid values:
        // 
        // *   **Normal**: standard account
        // *   **Super**: super account
        shared_ptr<string> accountType_ {};
        // Details about account permissions.
        shared_ptr<Account::DatabasePrivileges> databasePrivileges_ {};
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
      };

      virtual bool empty() const override { return this->account_ == nullptr; };
      // account Field Functions 
      bool hasAccount() const { return this->account_ != nullptr;};
      void deleteAccount() { this->account_ = nullptr;};
      inline const vector<Accounts::Account> & getAccount() const { DARABONBA_PTR_GET_CONST(account_, vector<Accounts::Account>) };
      inline vector<Accounts::Account> getAccount() { DARABONBA_PTR_GET(account_, vector<Accounts::Account>) };
      inline Accounts& setAccount(const vector<Accounts::Account> & account) { DARABONBA_PTR_SET_VALUE(account_, account) };
      inline Accounts& setAccount(vector<Accounts::Account> && account) { DARABONBA_PTR_SET_RVALUE(account_, account) };


    protected:
      shared_ptr<vector<Accounts::Account>> account_ {};
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
    // Details about returned accounts of the instance.
    shared_ptr<DescribeAccountsResponseBody::Accounts> accounts_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
