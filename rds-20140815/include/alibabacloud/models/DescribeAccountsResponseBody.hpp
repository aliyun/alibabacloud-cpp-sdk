// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accounts, accounts_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SystemAdminAccountFirstActivationTime, systemAdminAccountFirstActivationTime_);
      DARABONBA_PTR_TO_JSON(SystemAdminAccountStatus, systemAdminAccountStatus_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SystemAdminAccountFirstActivationTime, systemAdminAccountFirstActivationTime_);
      DARABONBA_PTR_FROM_JSON(SystemAdminAccountStatus, systemAdminAccountStatus_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
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
          DARABONBA_PTR_TO_JSON(BypassRLS, bypassRLS_);
          DARABONBA_PTR_TO_JSON(CheckPolicy, checkPolicy_);
          DARABONBA_PTR_TO_JSON(CreateDB, createDB_);
          DARABONBA_PTR_TO_JSON(CreateRole, createRole_);
          DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_TO_JSON(DatabasePrivileges, databasePrivileges_);
          DARABONBA_PTR_TO_JSON(PasswordExpireTime, passwordExpireTime_);
          DARABONBA_PTR_TO_JSON(PrivExceeded, privExceeded_);
          DARABONBA_PTR_TO_JSON(Replication, replication_);
          DARABONBA_PTR_TO_JSON(ValidUntil, validUntil_);
        };
        friend void from_json(const Darabonba::Json& j, DBInstanceAccount& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountDescription, accountDescription_);
          DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
          DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
          DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
          DARABONBA_PTR_FROM_JSON(BypassRLS, bypassRLS_);
          DARABONBA_PTR_FROM_JSON(CheckPolicy, checkPolicy_);
          DARABONBA_PTR_FROM_JSON(CreateDB, createDB_);
          DARABONBA_PTR_FROM_JSON(CreateRole, createRole_);
          DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_FROM_JSON(DatabasePrivileges, databasePrivileges_);
          DARABONBA_PTR_FROM_JSON(PasswordExpireTime, passwordExpireTime_);
          DARABONBA_PTR_FROM_JSON(PrivExceeded, privExceeded_);
          DARABONBA_PTR_FROM_JSON(Replication, replication_);
          DARABONBA_PTR_FROM_JSON(ValidUntil, validUntil_);
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
              DARABONBA_PTR_TO_JSON(AccountPrivilegeDetail, accountPrivilegeDetail_);
              DARABONBA_PTR_TO_JSON(DBName, DBName_);
            };
            friend void from_json(const Darabonba::Json& j, DatabasePrivilege& obj) { 
              DARABONBA_PTR_FROM_JSON(AccountPrivilege, accountPrivilege_);
              DARABONBA_PTR_FROM_JSON(AccountPrivilegeDetail, accountPrivilegeDetail_);
              DARABONBA_PTR_FROM_JSON(DBName, DBName_);
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
            virtual bool empty() const override { return this->accountPrivilege_ == nullptr
        && this->accountPrivilegeDetail_ == nullptr && this->DBName_ == nullptr; };
            // accountPrivilege Field Functions 
            bool hasAccountPrivilege() const { return this->accountPrivilege_ != nullptr;};
            void deleteAccountPrivilege() { this->accountPrivilege_ = nullptr;};
            inline string getAccountPrivilege() const { DARABONBA_PTR_GET_DEFAULT(accountPrivilege_, "") };
            inline DatabasePrivilege& setAccountPrivilege(string accountPrivilege) { DARABONBA_PTR_SET_VALUE(accountPrivilege_, accountPrivilege) };


            // accountPrivilegeDetail Field Functions 
            bool hasAccountPrivilegeDetail() const { return this->accountPrivilegeDetail_ != nullptr;};
            void deleteAccountPrivilegeDetail() { this->accountPrivilegeDetail_ = nullptr;};
            inline string getAccountPrivilegeDetail() const { DARABONBA_PTR_GET_DEFAULT(accountPrivilegeDetail_, "") };
            inline DatabasePrivilege& setAccountPrivilegeDetail(string accountPrivilegeDetail) { DARABONBA_PTR_SET_VALUE(accountPrivilegeDetail_, accountPrivilegeDetail) };


            // DBName Field Functions 
            bool hasDBName() const { return this->DBName_ != nullptr;};
            void deleteDBName() { this->DBName_ = nullptr;};
            inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
            inline DatabasePrivilege& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


          protected:
            // The type of the permissions. Valid values:
            // 
            // *   **ReadWrite**: read and write permissions.
            // *   **ReadOnly**: read-only permissions.
            // *   **DDLOnly**: DDL-only permissions.
            // *   **DMLOnly**: DML-only permissions.
            // *   **Custom**: custom permissions. You can modify the permissions of the account by using SQL commands.
            shared_ptr<string> accountPrivilege_ {};
            // The permissions that are granted to the account. For more information, see [Account permissions](https://help.aliyun.com/document_detail/146395.html).
            shared_ptr<string> accountPrivilegeDetail_ {};
            // The name of the database.
            shared_ptr<string> DBName_ {};
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
        && this->accountName_ == nullptr && this->accountStatus_ == nullptr && this->accountType_ == nullptr && this->bypassRLS_ == nullptr && this->checkPolicy_ == nullptr
        && this->createDB_ == nullptr && this->createRole_ == nullptr && this->DBInstanceId_ == nullptr && this->databasePrivileges_ == nullptr && this->passwordExpireTime_ == nullptr
        && this->privExceeded_ == nullptr && this->replication_ == nullptr && this->validUntil_ == nullptr; };
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


        // bypassRLS Field Functions 
        bool hasBypassRLS() const { return this->bypassRLS_ != nullptr;};
        void deleteBypassRLS() { this->bypassRLS_ = nullptr;};
        inline string getBypassRLS() const { DARABONBA_PTR_GET_DEFAULT(bypassRLS_, "") };
        inline DBInstanceAccount& setBypassRLS(string bypassRLS) { DARABONBA_PTR_SET_VALUE(bypassRLS_, bypassRLS) };


        // checkPolicy Field Functions 
        bool hasCheckPolicy() const { return this->checkPolicy_ != nullptr;};
        void deleteCheckPolicy() { this->checkPolicy_ = nullptr;};
        inline bool getCheckPolicy() const { DARABONBA_PTR_GET_DEFAULT(checkPolicy_, false) };
        inline DBInstanceAccount& setCheckPolicy(bool checkPolicy) { DARABONBA_PTR_SET_VALUE(checkPolicy_, checkPolicy) };


        // createDB Field Functions 
        bool hasCreateDB() const { return this->createDB_ != nullptr;};
        void deleteCreateDB() { this->createDB_ = nullptr;};
        inline string getCreateDB() const { DARABONBA_PTR_GET_DEFAULT(createDB_, "") };
        inline DBInstanceAccount& setCreateDB(string createDB) { DARABONBA_PTR_SET_VALUE(createDB_, createDB) };


        // createRole Field Functions 
        bool hasCreateRole() const { return this->createRole_ != nullptr;};
        void deleteCreateRole() { this->createRole_ = nullptr;};
        inline string getCreateRole() const { DARABONBA_PTR_GET_DEFAULT(createRole_, "") };
        inline DBInstanceAccount& setCreateRole(string createRole) { DARABONBA_PTR_SET_VALUE(createRole_, createRole) };


        // DBInstanceId Field Functions 
        bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
        void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
        inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
        inline DBInstanceAccount& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


        // databasePrivileges Field Functions 
        bool hasDatabasePrivileges() const { return this->databasePrivileges_ != nullptr;};
        void deleteDatabasePrivileges() { this->databasePrivileges_ = nullptr;};
        inline const DBInstanceAccount::DatabasePrivileges & getDatabasePrivileges() const { DARABONBA_PTR_GET_CONST(databasePrivileges_, DBInstanceAccount::DatabasePrivileges) };
        inline DBInstanceAccount::DatabasePrivileges getDatabasePrivileges() { DARABONBA_PTR_GET(databasePrivileges_, DBInstanceAccount::DatabasePrivileges) };
        inline DBInstanceAccount& setDatabasePrivileges(const DBInstanceAccount::DatabasePrivileges & databasePrivileges) { DARABONBA_PTR_SET_VALUE(databasePrivileges_, databasePrivileges) };
        inline DBInstanceAccount& setDatabasePrivileges(DBInstanceAccount::DatabasePrivileges && databasePrivileges) { DARABONBA_PTR_SET_RVALUE(databasePrivileges_, databasePrivileges) };


        // passwordExpireTime Field Functions 
        bool hasPasswordExpireTime() const { return this->passwordExpireTime_ != nullptr;};
        void deletePasswordExpireTime() { this->passwordExpireTime_ = nullptr;};
        inline string getPasswordExpireTime() const { DARABONBA_PTR_GET_DEFAULT(passwordExpireTime_, "") };
        inline DBInstanceAccount& setPasswordExpireTime(string passwordExpireTime) { DARABONBA_PTR_SET_VALUE(passwordExpireTime_, passwordExpireTime) };


        // privExceeded Field Functions 
        bool hasPrivExceeded() const { return this->privExceeded_ != nullptr;};
        void deletePrivExceeded() { this->privExceeded_ = nullptr;};
        inline string getPrivExceeded() const { DARABONBA_PTR_GET_DEFAULT(privExceeded_, "") };
        inline DBInstanceAccount& setPrivExceeded(string privExceeded) { DARABONBA_PTR_SET_VALUE(privExceeded_, privExceeded) };


        // replication Field Functions 
        bool hasReplication() const { return this->replication_ != nullptr;};
        void deleteReplication() { this->replication_ = nullptr;};
        inline string getReplication() const { DARABONBA_PTR_GET_DEFAULT(replication_, "") };
        inline DBInstanceAccount& setReplication(string replication) { DARABONBA_PTR_SET_VALUE(replication_, replication) };


        // validUntil Field Functions 
        bool hasValidUntil() const { return this->validUntil_ != nullptr;};
        void deleteValidUntil() { this->validUntil_ = nullptr;};
        inline string getValidUntil() const { DARABONBA_PTR_GET_DEFAULT(validUntil_, "") };
        inline DBInstanceAccount& setValidUntil(string validUntil) { DARABONBA_PTR_SET_VALUE(validUntil_, validUntil) };


      protected:
        // The description of the account.
        shared_ptr<string> accountDescription_ {};
        // The name of the database account.
        shared_ptr<string> accountName_ {};
        // The status of the account. Valid values:
        // 
        // *   **Unavailable**
        // *   **Available**
        shared_ptr<string> accountStatus_ {};
        // The type of the account. Valid values:
        // 
        // *   **Normal**: standard account
        // *   **Super**: privileged account
        // *   **Sysadmin**: system admin account, which is supported only for instances running SQL Server
        shared_ptr<string> accountType_ {};
        // Indicates whether the account has the row-level security (RLS) permissions. Valid values:
        // 
        // *   **t**: The account has the RLS permissions.
        // *   **f**: The account does not have the RLS permissions.
        // 
        // >  This parameter is returned only for instances that run PostgreSQL.
        shared_ptr<string> bypassRLS_ {};
        // Indicates whether the password policy is applied.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<bool> checkPolicy_ {};
        // Indicates whether the account has the permissions to create databases. Valid values:
        // 
        // *   **t**: The account has the permissions to create databases.
        // *   **f**: The account does not have the permissions to create databases.
        // 
        // >  This parameter is returned only for instances that run PostgreSQL.
        shared_ptr<string> createDB_ {};
        // Indicates whether the account has the permissions to create roles. Valid values:
        // 
        // *   **t**: The account has the permissions to create roles.
        // *   **f**: The account does not have the permissions to create roles.
        // 
        // >  This parameter is returned only for instances that run PostgreSQL.
        shared_ptr<string> createRole_ {};
        // The ID of the instance to which the account belongs.
        shared_ptr<string> DBInstanceId_ {};
        // The details about the permissions that are granted to the account.
        shared_ptr<DBInstanceAccount::DatabasePrivileges> databasePrivileges_ {};
        // The expiration time of the password.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<string> passwordExpireTime_ {};
        // Indicates whether the number of databases that are managed by the account exceeds the upper limit. Valid values:
        // 
        // *   **1**: The number of databases that are managed by the account exceeds the upper limit.
        // *   **0**: The number of databases that are managed by the account does not exceed the upper limit.
        shared_ptr<string> privExceeded_ {};
        // Indicates whether the account has the replication permissions. Valid values:
        // 
        // *   **t**: The account has the replication permissions.
        // *   **f**: The account does not have the replication permissions.
        // 
        // >  This parameter is returned only for instances that run PostgreSQL.
        shared_ptr<string> replication_ {};
        // The expiration time of the password. Valid values:
        // 
        // *   **infinity**: The password never expires.
        // *   **Empty**: The expiration time is not specified.
        // *   **Actual expiration time**: in the format of *yyyy-MM-dd*T*HH:mm:ss*Z in UTC. Example: 2022-10-01T00:00:00Z.
        // 
        // >  This parameter is returned only for instances that run PostgreSQL.
        shared_ptr<string> validUntil_ {};
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
        && this->pageNumber_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->systemAdminAccountFirstActivationTime_ == nullptr && this->systemAdminAccountStatus_ == nullptr
        && this->totalRecordCount_ == nullptr; };
    // accounts Field Functions 
    bool hasAccounts() const { return this->accounts_ != nullptr;};
    void deleteAccounts() { this->accounts_ = nullptr;};
    inline const DescribeAccountsResponseBody::Accounts & getAccounts() const { DARABONBA_PTR_GET_CONST(accounts_, DescribeAccountsResponseBody::Accounts) };
    inline DescribeAccountsResponseBody::Accounts getAccounts() { DARABONBA_PTR_GET(accounts_, DescribeAccountsResponseBody::Accounts) };
    inline DescribeAccountsResponseBody& setAccounts(const DescribeAccountsResponseBody::Accounts & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
    inline DescribeAccountsResponseBody& setAccounts(DescribeAccountsResponseBody::Accounts && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAccountsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeAccountsResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // systemAdminAccountFirstActivationTime Field Functions 
    bool hasSystemAdminAccountFirstActivationTime() const { return this->systemAdminAccountFirstActivationTime_ != nullptr;};
    void deleteSystemAdminAccountFirstActivationTime() { this->systemAdminAccountFirstActivationTime_ = nullptr;};
    inline string getSystemAdminAccountFirstActivationTime() const { DARABONBA_PTR_GET_DEFAULT(systemAdminAccountFirstActivationTime_, "") };
    inline DescribeAccountsResponseBody& setSystemAdminAccountFirstActivationTime(string systemAdminAccountFirstActivationTime) { DARABONBA_PTR_SET_VALUE(systemAdminAccountFirstActivationTime_, systemAdminAccountFirstActivationTime) };


    // systemAdminAccountStatus Field Functions 
    bool hasSystemAdminAccountStatus() const { return this->systemAdminAccountStatus_ != nullptr;};
    void deleteSystemAdminAccountStatus() { this->systemAdminAccountStatus_ = nullptr;};
    inline string getSystemAdminAccountStatus() const { DARABONBA_PTR_GET_DEFAULT(systemAdminAccountStatus_, "") };
    inline DescribeAccountsResponseBody& setSystemAdminAccountStatus(string systemAdminAccountStatus) { DARABONBA_PTR_SET_VALUE(systemAdminAccountStatus_, systemAdminAccountStatus) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeAccountsResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The information about the account.
    shared_ptr<DescribeAccountsResponseBody::Accounts> accounts_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The first time when the system admin account was enabled. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    // 
    // >  This parameter is returned only for instances that run SQL Server.
    shared_ptr<string> systemAdminAccountFirstActivationTime_ {};
    // Indicates whether the system admin account was enabled. Valid values:
    // 
    // *   **true**: The system admin account was enabled.
    // *   **false**: The system admin account was disabled.
    // 
    // >  The [system admin account](https://help.aliyun.com/document_detail/170736.html) is supported only for the instances that run SQL Server. If the instance runs SQL Server, a value is returned for this parameter. If the instance runs a different database engine, no value is returned for this parameter.
    shared_ptr<string> systemAdminAccountStatus_ {};
    // The total number of entries that are returned.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
