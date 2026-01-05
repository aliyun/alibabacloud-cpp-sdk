// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accounts, accounts_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
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
        DARABONBA_PTR_TO_JSON(AccountDescription, accountDescription_);
        DARABONBA_PTR_TO_JSON(AccountLockState, accountLockState_);
        DARABONBA_PTR_TO_JSON(AccountName, accountName_);
        DARABONBA_PTR_TO_JSON(AccountPasswordValidTime, accountPasswordValidTime_);
        DARABONBA_PTR_TO_JSON(AccountStatus, accountStatus_);
        DARABONBA_PTR_TO_JSON(AccountType, accountType_);
        DARABONBA_PTR_TO_JSON(DatabasePrivileges, databasePrivileges_);
      };
      friend void from_json(const Darabonba::Json& j, Accounts& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountDescription, accountDescription_);
        DARABONBA_PTR_FROM_JSON(AccountLockState, accountLockState_);
        DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
        DARABONBA_PTR_FROM_JSON(AccountPasswordValidTime, accountPasswordValidTime_);
        DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
        DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
        DARABONBA_PTR_FROM_JSON(DatabasePrivileges, databasePrivileges_);
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
      class DatabasePrivileges : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DatabasePrivileges& obj) { 
          DARABONBA_PTR_TO_JSON(AccountPrivilege, accountPrivilege_);
          DARABONBA_PTR_TO_JSON(DBName, DBName_);
        };
        friend void from_json(const Darabonba::Json& j, DatabasePrivileges& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountPrivilege, accountPrivilege_);
          DARABONBA_PTR_FROM_JSON(DBName, DBName_);
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
        virtual bool empty() const override { return this->accountPrivilege_ == nullptr
        && this->DBName_ == nullptr; };
        // accountPrivilege Field Functions 
        bool hasAccountPrivilege() const { return this->accountPrivilege_ != nullptr;};
        void deleteAccountPrivilege() { this->accountPrivilege_ = nullptr;};
        inline string getAccountPrivilege() const { DARABONBA_PTR_GET_DEFAULT(accountPrivilege_, "") };
        inline DatabasePrivileges& setAccountPrivilege(string accountPrivilege) { DARABONBA_PTR_SET_VALUE(accountPrivilege_, accountPrivilege) };


        // DBName Field Functions 
        bool hasDBName() const { return this->DBName_ != nullptr;};
        void deleteDBName() { this->DBName_ = nullptr;};
        inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
        inline DatabasePrivileges& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


      protected:
        // The permissions that the account is granted on the database. Valid values:
        shared_ptr<string> accountPrivilege_ {};
        // The name of the database.
        shared_ptr<string> DBName_ {};
      };

      virtual bool empty() const override { return this->accountDescription_ == nullptr
        && this->accountLockState_ == nullptr && this->accountName_ == nullptr && this->accountPasswordValidTime_ == nullptr && this->accountStatus_ == nullptr && this->accountType_ == nullptr
        && this->databasePrivileges_ == nullptr; };
      // accountDescription Field Functions 
      bool hasAccountDescription() const { return this->accountDescription_ != nullptr;};
      void deleteAccountDescription() { this->accountDescription_ = nullptr;};
      inline string getAccountDescription() const { DARABONBA_PTR_GET_DEFAULT(accountDescription_, "") };
      inline Accounts& setAccountDescription(string accountDescription) { DARABONBA_PTR_SET_VALUE(accountDescription_, accountDescription) };


      // accountLockState Field Functions 
      bool hasAccountLockState() const { return this->accountLockState_ != nullptr;};
      void deleteAccountLockState() { this->accountLockState_ = nullptr;};
      inline string getAccountLockState() const { DARABONBA_PTR_GET_DEFAULT(accountLockState_, "") };
      inline Accounts& setAccountLockState(string accountLockState) { DARABONBA_PTR_SET_VALUE(accountLockState_, accountLockState) };


      // accountName Field Functions 
      bool hasAccountName() const { return this->accountName_ != nullptr;};
      void deleteAccountName() { this->accountName_ = nullptr;};
      inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
      inline Accounts& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


      // accountPasswordValidTime Field Functions 
      bool hasAccountPasswordValidTime() const { return this->accountPasswordValidTime_ != nullptr;};
      void deleteAccountPasswordValidTime() { this->accountPasswordValidTime_ = nullptr;};
      inline string getAccountPasswordValidTime() const { DARABONBA_PTR_GET_DEFAULT(accountPasswordValidTime_, "") };
      inline Accounts& setAccountPasswordValidTime(string accountPasswordValidTime) { DARABONBA_PTR_SET_VALUE(accountPasswordValidTime_, accountPasswordValidTime) };


      // accountStatus Field Functions 
      bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
      void deleteAccountStatus() { this->accountStatus_ = nullptr;};
      inline string getAccountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
      inline Accounts& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


      // accountType Field Functions 
      bool hasAccountType() const { return this->accountType_ != nullptr;};
      void deleteAccountType() { this->accountType_ = nullptr;};
      inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
      inline Accounts& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


      // databasePrivileges Field Functions 
      bool hasDatabasePrivileges() const { return this->databasePrivileges_ != nullptr;};
      void deleteDatabasePrivileges() { this->databasePrivileges_ = nullptr;};
      inline const vector<Accounts::DatabasePrivileges> & getDatabasePrivileges() const { DARABONBA_PTR_GET_CONST(databasePrivileges_, vector<Accounts::DatabasePrivileges>) };
      inline vector<Accounts::DatabasePrivileges> getDatabasePrivileges() { DARABONBA_PTR_GET(databasePrivileges_, vector<Accounts::DatabasePrivileges>) };
      inline Accounts& setDatabasePrivileges(const vector<Accounts::DatabasePrivileges> & databasePrivileges) { DARABONBA_PTR_SET_VALUE(databasePrivileges_, databasePrivileges) };
      inline Accounts& setDatabasePrivileges(vector<Accounts::DatabasePrivileges> && databasePrivileges) { DARABONBA_PTR_SET_RVALUE(databasePrivileges_, databasePrivileges) };


    protected:
      // The description of the account.
      shared_ptr<string> accountDescription_ {};
      // The locking state of the account. Valid values:
      // 
      // *   **UnLock**
      // *   **Lock**
      shared_ptr<string> accountLockState_ {};
      // The name of the account.
      shared_ptr<string> accountName_ {};
      // The validity period of the password.
      shared_ptr<string> accountPasswordValidTime_ {};
      // The state of the account. Valid values:
      // 
      // *   **Creating**: The account is being created.
      // *   **Available**: The account is available.
      // *   **Deleting**: The account is being deleted
      shared_ptr<string> accountStatus_ {};
      // The type of the account. Valid values:
      // 
      // *   **Normal**: standard account.
      // *   **Super**: privileged account.
      // *   **ReadOnly**: global read-only account.
      shared_ptr<string> accountType_ {};
      // The list of database permissions that are granted to the account.
      shared_ptr<vector<Accounts::DatabasePrivileges>> databasePrivileges_ {};
    };

    virtual bool empty() const override { return this->accounts_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr; };
    // accounts Field Functions 
    bool hasAccounts() const { return this->accounts_ != nullptr;};
    void deleteAccounts() { this->accounts_ = nullptr;};
    inline const vector<DescribeAccountsResponseBody::Accounts> & getAccounts() const { DARABONBA_PTR_GET_CONST(accounts_, vector<DescribeAccountsResponseBody::Accounts>) };
    inline vector<DescribeAccountsResponseBody::Accounts> getAccounts() { DARABONBA_PTR_GET(accounts_, vector<DescribeAccountsResponseBody::Accounts>) };
    inline DescribeAccountsResponseBody& setAccounts(const vector<DescribeAccountsResponseBody::Accounts> & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
    inline DescribeAccountsResponseBody& setAccounts(vector<DescribeAccountsResponseBody::Accounts> && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAccountsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeAccountsResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the account.
    shared_ptr<vector<DescribeAccountsResponseBody::Accounts>> accounts_ {};
    // The page number of the page returned.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
