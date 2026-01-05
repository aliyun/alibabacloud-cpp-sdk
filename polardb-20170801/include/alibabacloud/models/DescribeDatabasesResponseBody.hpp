// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATABASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATABASESRESPONSEBODY_HPP_
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
  class DescribeDatabasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatabasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Databases, databases_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatabasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Databases, databases_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDatabasesResponseBody() = default ;
    DescribeDatabasesResponseBody(const DescribeDatabasesResponseBody &) = default ;
    DescribeDatabasesResponseBody(DescribeDatabasesResponseBody &&) = default ;
    DescribeDatabasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatabasesResponseBody() = default ;
    DescribeDatabasesResponseBody& operator=(const DescribeDatabasesResponseBody &) = default ;
    DescribeDatabasesResponseBody& operator=(DescribeDatabasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Databases : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Databases& obj) { 
        DARABONBA_PTR_TO_JSON(Database, database_);
      };
      friend void from_json(const Darabonba::Json& j, Databases& obj) { 
        DARABONBA_PTR_FROM_JSON(Database, database_);
      };
      Databases() = default ;
      Databases(const Databases &) = default ;
      Databases(Databases &&) = default ;
      Databases(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Databases() = default ;
      Databases& operator=(const Databases &) = default ;
      Databases& operator=(Databases &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Database : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Database& obj) { 
          DARABONBA_PTR_TO_JSON(Accounts, accounts_);
          DARABONBA_PTR_TO_JSON(CharacterSetName, characterSetName_);
          DARABONBA_PTR_TO_JSON(DBDescription, DBDescription_);
          DARABONBA_PTR_TO_JSON(DBName, DBName_);
          DARABONBA_PTR_TO_JSON(DBStatus, DBStatus_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(MasterID, masterID_);
        };
        friend void from_json(const Darabonba::Json& j, Database& obj) { 
          DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
          DARABONBA_PTR_FROM_JSON(CharacterSetName, characterSetName_);
          DARABONBA_PTR_FROM_JSON(DBDescription, DBDescription_);
          DARABONBA_PTR_FROM_JSON(DBName, DBName_);
          DARABONBA_PTR_FROM_JSON(DBStatus, DBStatus_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(MasterID, masterID_);
        };
        Database() = default ;
        Database(const Database &) = default ;
        Database(Database &&) = default ;
        Database(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Database() = default ;
        Database& operator=(const Database &) = default ;
        Database& operator=(Database &&) = default ;
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
              DARABONBA_PTR_TO_JSON(AccountName, accountName_);
              DARABONBA_PTR_TO_JSON(AccountPrivilege, accountPrivilege_);
              DARABONBA_PTR_TO_JSON(AccountStatus, accountStatus_);
              DARABONBA_PTR_TO_JSON(PrivilegeStatus, privilegeStatus_);
            };
            friend void from_json(const Darabonba::Json& j, Account& obj) { 
              DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
              DARABONBA_PTR_FROM_JSON(AccountPrivilege, accountPrivilege_);
              DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
              DARABONBA_PTR_FROM_JSON(PrivilegeStatus, privilegeStatus_);
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
            virtual bool empty() const override { return this->accountName_ == nullptr
        && this->accountPrivilege_ == nullptr && this->accountStatus_ == nullptr && this->privilegeStatus_ == nullptr; };
            // accountName Field Functions 
            bool hasAccountName() const { return this->accountName_ != nullptr;};
            void deleteAccountName() { this->accountName_ = nullptr;};
            inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
            inline Account& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


            // accountPrivilege Field Functions 
            bool hasAccountPrivilege() const { return this->accountPrivilege_ != nullptr;};
            void deleteAccountPrivilege() { this->accountPrivilege_ = nullptr;};
            inline string getAccountPrivilege() const { DARABONBA_PTR_GET_DEFAULT(accountPrivilege_, "") };
            inline Account& setAccountPrivilege(string accountPrivilege) { DARABONBA_PTR_SET_VALUE(accountPrivilege_, accountPrivilege) };


            // accountStatus Field Functions 
            bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
            void deleteAccountStatus() { this->accountStatus_ = nullptr;};
            inline string getAccountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
            inline Account& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


            // privilegeStatus Field Functions 
            bool hasPrivilegeStatus() const { return this->privilegeStatus_ != nullptr;};
            void deletePrivilegeStatus() { this->privilegeStatus_ = nullptr;};
            inline string getPrivilegeStatus() const { DARABONBA_PTR_GET_DEFAULT(privilegeStatus_, "") };
            inline Account& setPrivilegeStatus(string privilegeStatus) { DARABONBA_PTR_SET_VALUE(privilegeStatus_, privilegeStatus) };


          protected:
            // The username of the account.
            // 
            // > A PolarDB for MySQL cluster does not support privileged accounts.
            shared_ptr<string> accountName_ {};
            // The permissions that are granted to the account. Valid values:
            // 
            // *   **ReadWrite**: read and write permissions
            // *   **ReadOnly**: read-only permissions
            // *   **DMLOnly**: The account is granted the permissions to execute only DML statements on the database.
            // *   **DDLOnly**: The account is granted the permissions to execute only DDL statements on the database.
            // *   **ReadIndex**: The account has the read and index permissions on the database.
            shared_ptr<string> accountPrivilege_ {};
            // The state of the account. Valid values:
            // 
            // *   **Creating**
            // *   **Available**
            // *   **Deleting**
            shared_ptr<string> accountStatus_ {};
            // The authorization state of the account. Valid values:
            // 
            // *   **Empowering**: The system is granting permissions to the account.
            // *   **Empowered**: Permissions are granted to the account.
            // *   **Removing**: The system is revoking permissions from the account.
            shared_ptr<string> privilegeStatus_ {};
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
        && this->characterSetName_ == nullptr && this->DBDescription_ == nullptr && this->DBName_ == nullptr && this->DBStatus_ == nullptr && this->engine_ == nullptr
        && this->masterID_ == nullptr; };
        // accounts Field Functions 
        bool hasAccounts() const { return this->accounts_ != nullptr;};
        void deleteAccounts() { this->accounts_ = nullptr;};
        inline const Database::Accounts & getAccounts() const { DARABONBA_PTR_GET_CONST(accounts_, Database::Accounts) };
        inline Database::Accounts getAccounts() { DARABONBA_PTR_GET(accounts_, Database::Accounts) };
        inline Database& setAccounts(const Database::Accounts & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
        inline Database& setAccounts(Database::Accounts && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


        // characterSetName Field Functions 
        bool hasCharacterSetName() const { return this->characterSetName_ != nullptr;};
        void deleteCharacterSetName() { this->characterSetName_ = nullptr;};
        inline string getCharacterSetName() const { DARABONBA_PTR_GET_DEFAULT(characterSetName_, "") };
        inline Database& setCharacterSetName(string characterSetName) { DARABONBA_PTR_SET_VALUE(characterSetName_, characterSetName) };


        // DBDescription Field Functions 
        bool hasDBDescription() const { return this->DBDescription_ != nullptr;};
        void deleteDBDescription() { this->DBDescription_ = nullptr;};
        inline string getDBDescription() const { DARABONBA_PTR_GET_DEFAULT(DBDescription_, "") };
        inline Database& setDBDescription(string DBDescription) { DARABONBA_PTR_SET_VALUE(DBDescription_, DBDescription) };


        // DBName Field Functions 
        bool hasDBName() const { return this->DBName_ != nullptr;};
        void deleteDBName() { this->DBName_ = nullptr;};
        inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
        inline Database& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


        // DBStatus Field Functions 
        bool hasDBStatus() const { return this->DBStatus_ != nullptr;};
        void deleteDBStatus() { this->DBStatus_ = nullptr;};
        inline string getDBStatus() const { DARABONBA_PTR_GET_DEFAULT(DBStatus_, "") };
        inline Database& setDBStatus(string DBStatus) { DARABONBA_PTR_SET_VALUE(DBStatus_, DBStatus) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline Database& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // masterID Field Functions 
        bool hasMasterID() const { return this->masterID_ != nullptr;};
        void deleteMasterID() { this->masterID_ = nullptr;};
        inline string getMasterID() const { DARABONBA_PTR_GET_DEFAULT(masterID_, "") };
        inline Database& setMasterID(string masterID) { DARABONBA_PTR_SET_VALUE(masterID_, masterID) };


      protected:
        // Details about the accounts.
        // 
        // > A PolarDB for MySQL cluster does not support privileged accounts.
        shared_ptr<Database::Accounts> accounts_ {};
        // The character set that the database uses. For more information, see [Character set tables](https://help.aliyun.com/document_detail/99716.html).
        shared_ptr<string> characterSetName_ {};
        // The description of the database.
        shared_ptr<string> DBDescription_ {};
        // The name of the database.
        shared_ptr<string> DBName_ {};
        // The state of the database. Valid values:
        // 
        // *   **Creating**
        // *   **Running**
        // *   **Deleting**
        shared_ptr<string> DBStatus_ {};
        // The type of the database engine. Valid values:
        // 
        // *   **MySQL**
        // *   **Oracle**
        // *   **PostgreSQL**
        shared_ptr<string> engine_ {};
        // The ID of the primary node in the cluster of Multi-master Cluster (Database/Table) Edition.
        shared_ptr<string> masterID_ {};
      };

      virtual bool empty() const override { return this->database_ == nullptr; };
      // database Field Functions 
      bool hasDatabase() const { return this->database_ != nullptr;};
      void deleteDatabase() { this->database_ = nullptr;};
      inline const vector<Databases::Database> & getDatabase() const { DARABONBA_PTR_GET_CONST(database_, vector<Databases::Database>) };
      inline vector<Databases::Database> getDatabase() { DARABONBA_PTR_GET(database_, vector<Databases::Database>) };
      inline Databases& setDatabase(const vector<Databases::Database> & database) { DARABONBA_PTR_SET_VALUE(database_, database) };
      inline Databases& setDatabase(vector<Databases::Database> && database) { DARABONBA_PTR_SET_RVALUE(database_, database) };


    protected:
      shared_ptr<vector<Databases::Database>> database_ {};
    };

    virtual bool empty() const override { return this->databases_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr; };
    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const DescribeDatabasesResponseBody::Databases & getDatabases() const { DARABONBA_PTR_GET_CONST(databases_, DescribeDatabasesResponseBody::Databases) };
    inline DescribeDatabasesResponseBody::Databases getDatabases() { DARABONBA_PTR_GET(databases_, DescribeDatabasesResponseBody::Databases) };
    inline DescribeDatabasesResponseBody& setDatabases(const DescribeDatabasesResponseBody::Databases & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline DescribeDatabasesResponseBody& setDatabases(DescribeDatabasesResponseBody::Databases && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDatabasesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeDatabasesResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDatabasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about databases.
    shared_ptr<DescribeDatabasesResponseBody::Databases> databases_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
