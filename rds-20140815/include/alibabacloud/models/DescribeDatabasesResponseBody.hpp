// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATABASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATABASESRESPONSEBODY_HPP_
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
  class DescribeDatabasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatabasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Databases, databases_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatabasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Databases, databases_);
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
          DARABONBA_PTR_TO_JSON(AdvancedInfo, advancedInfo_);
          DARABONBA_PTR_TO_JSON(BasicInfo, basicInfo_);
          DARABONBA_PTR_TO_JSON(CharacterSetName, characterSetName_);
          DARABONBA_PTR_TO_JSON(Collate, collate_);
          DARABONBA_PTR_TO_JSON(ConnLimit, connLimit_);
          DARABONBA_PTR_TO_JSON(Ctype, ctype_);
          DARABONBA_PTR_TO_JSON(DBDescription, DBDescription_);
          DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_TO_JSON(DBName, DBName_);
          DARABONBA_PTR_TO_JSON(DBStatus, DBStatus_);
          DARABONBA_PTR_TO_JSON(DuckDBEnabled, duckDBEnabled_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
          DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
          DARABONBA_PTR_TO_JSON(RuntimeInfo, runtimeInfo_);
          DARABONBA_PTR_TO_JSON(Tablespace, tablespace_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, Database& obj) { 
          DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
          DARABONBA_PTR_FROM_JSON(AdvancedInfo, advancedInfo_);
          DARABONBA_PTR_FROM_JSON(BasicInfo, basicInfo_);
          DARABONBA_PTR_FROM_JSON(CharacterSetName, characterSetName_);
          DARABONBA_PTR_FROM_JSON(Collate, collate_);
          DARABONBA_PTR_FROM_JSON(ConnLimit, connLimit_);
          DARABONBA_PTR_FROM_JSON(Ctype, ctype_);
          DARABONBA_PTR_FROM_JSON(DBDescription, DBDescription_);
          DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_FROM_JSON(DBName, DBName_);
          DARABONBA_PTR_FROM_JSON(DBStatus, DBStatus_);
          DARABONBA_PTR_FROM_JSON(DuckDBEnabled, duckDBEnabled_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
          DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
          DARABONBA_PTR_FROM_JSON(RuntimeInfo, runtimeInfo_);
          DARABONBA_PTR_FROM_JSON(Tablespace, tablespace_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
        class RuntimeInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RuntimeInfo& obj) { 
            DARABONBA_PTR_TO_JSON(RuntimeDbProperty, runtimeDbProperty_);
          };
          friend void from_json(const Darabonba::Json& j, RuntimeInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(RuntimeDbProperty, runtimeDbProperty_);
          };
          RuntimeInfo() = default ;
          RuntimeInfo(const RuntimeInfo &) = default ;
          RuntimeInfo(RuntimeInfo &&) = default ;
          RuntimeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RuntimeInfo() = default ;
          RuntimeInfo& operator=(const RuntimeInfo &) = default ;
          RuntimeInfo& operator=(RuntimeInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->runtimeDbProperty_ == nullptr; };
          // runtimeDbProperty Field Functions 
          bool hasRuntimeDbProperty() const { return this->runtimeDbProperty_ != nullptr;};
          void deleteRuntimeDbProperty() { this->runtimeDbProperty_ = nullptr;};
          inline const vector<Darabonba::Json> & getRuntimeDbProperty() const { DARABONBA_PTR_GET_CONST(runtimeDbProperty_, vector<Darabonba::Json>) };
          inline vector<Darabonba::Json> getRuntimeDbProperty() { DARABONBA_PTR_GET(runtimeDbProperty_, vector<Darabonba::Json>) };
          inline RuntimeInfo& setRuntimeDbProperty(const vector<Darabonba::Json> & runtimeDbProperty) { DARABONBA_PTR_SET_VALUE(runtimeDbProperty_, runtimeDbProperty) };
          inline RuntimeInfo& setRuntimeDbProperty(vector<Darabonba::Json> && runtimeDbProperty) { DARABONBA_PTR_SET_RVALUE(runtimeDbProperty_, runtimeDbProperty) };


        protected:
          shared_ptr<vector<Darabonba::Json>> runtimeDbProperty_ {};
        };

        class BasicInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BasicInfo& obj) { 
            DARABONBA_PTR_TO_JSON(BasicDbProperty, basicDbProperty_);
          };
          friend void from_json(const Darabonba::Json& j, BasicInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(BasicDbProperty, basicDbProperty_);
          };
          BasicInfo() = default ;
          BasicInfo(const BasicInfo &) = default ;
          BasicInfo(BasicInfo &&) = default ;
          BasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BasicInfo() = default ;
          BasicInfo& operator=(const BasicInfo &) = default ;
          BasicInfo& operator=(BasicInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->basicDbProperty_ == nullptr; };
          // basicDbProperty Field Functions 
          bool hasBasicDbProperty() const { return this->basicDbProperty_ != nullptr;};
          void deleteBasicDbProperty() { this->basicDbProperty_ = nullptr;};
          inline const vector<Darabonba::Json> & getBasicDbProperty() const { DARABONBA_PTR_GET_CONST(basicDbProperty_, vector<Darabonba::Json>) };
          inline vector<Darabonba::Json> getBasicDbProperty() { DARABONBA_PTR_GET(basicDbProperty_, vector<Darabonba::Json>) };
          inline BasicInfo& setBasicDbProperty(const vector<Darabonba::Json> & basicDbProperty) { DARABONBA_PTR_SET_VALUE(basicDbProperty_, basicDbProperty) };
          inline BasicInfo& setBasicDbProperty(vector<Darabonba::Json> && basicDbProperty) { DARABONBA_PTR_SET_RVALUE(basicDbProperty_, basicDbProperty) };


        protected:
          shared_ptr<vector<Darabonba::Json>> basicDbProperty_ {};
        };

        class AdvancedInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AdvancedInfo& obj) { 
            DARABONBA_PTR_TO_JSON(AdvancedDbProperty, advancedDbProperty_);
          };
          friend void from_json(const Darabonba::Json& j, AdvancedInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(AdvancedDbProperty, advancedDbProperty_);
          };
          AdvancedInfo() = default ;
          AdvancedInfo(const AdvancedInfo &) = default ;
          AdvancedInfo(AdvancedInfo &&) = default ;
          AdvancedInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AdvancedInfo() = default ;
          AdvancedInfo& operator=(const AdvancedInfo &) = default ;
          AdvancedInfo& operator=(AdvancedInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->advancedDbProperty_ == nullptr; };
          // advancedDbProperty Field Functions 
          bool hasAdvancedDbProperty() const { return this->advancedDbProperty_ != nullptr;};
          void deleteAdvancedDbProperty() { this->advancedDbProperty_ = nullptr;};
          inline const vector<Darabonba::Json> & getAdvancedDbProperty() const { DARABONBA_PTR_GET_CONST(advancedDbProperty_, vector<Darabonba::Json>) };
          inline vector<Darabonba::Json> getAdvancedDbProperty() { DARABONBA_PTR_GET(advancedDbProperty_, vector<Darabonba::Json>) };
          inline AdvancedInfo& setAdvancedDbProperty(const vector<Darabonba::Json> & advancedDbProperty) { DARABONBA_PTR_SET_VALUE(advancedDbProperty_, advancedDbProperty) };
          inline AdvancedInfo& setAdvancedDbProperty(vector<Darabonba::Json> && advancedDbProperty) { DARABONBA_PTR_SET_RVALUE(advancedDbProperty_, advancedDbProperty) };


        protected:
          shared_ptr<vector<Darabonba::Json>> advancedDbProperty_ {};
        };

        class Accounts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Accounts& obj) { 
            DARABONBA_PTR_TO_JSON(AccountPrivilegeInfo, accountPrivilegeInfo_);
          };
          friend void from_json(const Darabonba::Json& j, Accounts& obj) { 
            DARABONBA_PTR_FROM_JSON(AccountPrivilegeInfo, accountPrivilegeInfo_);
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
          class AccountPrivilegeInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AccountPrivilegeInfo& obj) { 
              DARABONBA_PTR_TO_JSON(Account, account_);
              DARABONBA_PTR_TO_JSON(AccountPrivilege, accountPrivilege_);
              DARABONBA_PTR_TO_JSON(AccountPrivilegeDetail, accountPrivilegeDetail_);
            };
            friend void from_json(const Darabonba::Json& j, AccountPrivilegeInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(Account, account_);
              DARABONBA_PTR_FROM_JSON(AccountPrivilege, accountPrivilege_);
              DARABONBA_PTR_FROM_JSON(AccountPrivilegeDetail, accountPrivilegeDetail_);
            };
            AccountPrivilegeInfo() = default ;
            AccountPrivilegeInfo(const AccountPrivilegeInfo &) = default ;
            AccountPrivilegeInfo(AccountPrivilegeInfo &&) = default ;
            AccountPrivilegeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AccountPrivilegeInfo() = default ;
            AccountPrivilegeInfo& operator=(const AccountPrivilegeInfo &) = default ;
            AccountPrivilegeInfo& operator=(AccountPrivilegeInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->account_ == nullptr
        && this->accountPrivilege_ == nullptr && this->accountPrivilegeDetail_ == nullptr; };
            // account Field Functions 
            bool hasAccount() const { return this->account_ != nullptr;};
            void deleteAccount() { this->account_ = nullptr;};
            inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
            inline AccountPrivilegeInfo& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


            // accountPrivilege Field Functions 
            bool hasAccountPrivilege() const { return this->accountPrivilege_ != nullptr;};
            void deleteAccountPrivilege() { this->accountPrivilege_ = nullptr;};
            inline string getAccountPrivilege() const { DARABONBA_PTR_GET_DEFAULT(accountPrivilege_, "") };
            inline AccountPrivilegeInfo& setAccountPrivilege(string accountPrivilege) { DARABONBA_PTR_SET_VALUE(accountPrivilege_, accountPrivilege) };


            // accountPrivilegeDetail Field Functions 
            bool hasAccountPrivilegeDetail() const { return this->accountPrivilegeDetail_ != nullptr;};
            void deleteAccountPrivilegeDetail() { this->accountPrivilegeDetail_ = nullptr;};
            inline string getAccountPrivilegeDetail() const { DARABONBA_PTR_GET_DEFAULT(accountPrivilegeDetail_, "") };
            inline AccountPrivilegeInfo& setAccountPrivilegeDetail(string accountPrivilegeDetail) { DARABONBA_PTR_SET_VALUE(accountPrivilegeDetail_, accountPrivilegeDetail) };


          protected:
            // The account username.
            shared_ptr<string> account_ {};
            // The permissions that the account has on the database. Valid values:
            // 
            // *   **ReadWrite**: read and write permissions
            // *   **ReadOnly**: read-only permissions
            // *   **DMLOnly**: DML-only permissions
            // *   **DDLOnly**: DDL-only permissions
            shared_ptr<string> accountPrivilege_ {};
            // The permission that the account has on the database.
            shared_ptr<string> accountPrivilegeDetail_ {};
          };

          virtual bool empty() const override { return this->accountPrivilegeInfo_ == nullptr; };
          // accountPrivilegeInfo Field Functions 
          bool hasAccountPrivilegeInfo() const { return this->accountPrivilegeInfo_ != nullptr;};
          void deleteAccountPrivilegeInfo() { this->accountPrivilegeInfo_ = nullptr;};
          inline const vector<Accounts::AccountPrivilegeInfo> & getAccountPrivilegeInfo() const { DARABONBA_PTR_GET_CONST(accountPrivilegeInfo_, vector<Accounts::AccountPrivilegeInfo>) };
          inline vector<Accounts::AccountPrivilegeInfo> getAccountPrivilegeInfo() { DARABONBA_PTR_GET(accountPrivilegeInfo_, vector<Accounts::AccountPrivilegeInfo>) };
          inline Accounts& setAccountPrivilegeInfo(const vector<Accounts::AccountPrivilegeInfo> & accountPrivilegeInfo) { DARABONBA_PTR_SET_VALUE(accountPrivilegeInfo_, accountPrivilegeInfo) };
          inline Accounts& setAccountPrivilegeInfo(vector<Accounts::AccountPrivilegeInfo> && accountPrivilegeInfo) { DARABONBA_PTR_SET_RVALUE(accountPrivilegeInfo_, accountPrivilegeInfo) };


        protected:
          shared_ptr<vector<Accounts::AccountPrivilegeInfo>> accountPrivilegeInfo_ {};
        };

        virtual bool empty() const override { return this->accounts_ == nullptr
        && this->advancedInfo_ == nullptr && this->basicInfo_ == nullptr && this->characterSetName_ == nullptr && this->collate_ == nullptr && this->connLimit_ == nullptr
        && this->ctype_ == nullptr && this->DBDescription_ == nullptr && this->DBInstanceId_ == nullptr && this->DBName_ == nullptr && this->DBStatus_ == nullptr
        && this->duckDBEnabled_ == nullptr && this->engine_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->runtimeInfo_ == nullptr
        && this->tablespace_ == nullptr && this->totalCount_ == nullptr; };
        // accounts Field Functions 
        bool hasAccounts() const { return this->accounts_ != nullptr;};
        void deleteAccounts() { this->accounts_ = nullptr;};
        inline const Database::Accounts & getAccounts() const { DARABONBA_PTR_GET_CONST(accounts_, Database::Accounts) };
        inline Database::Accounts getAccounts() { DARABONBA_PTR_GET(accounts_, Database::Accounts) };
        inline Database& setAccounts(const Database::Accounts & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
        inline Database& setAccounts(Database::Accounts && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


        // advancedInfo Field Functions 
        bool hasAdvancedInfo() const { return this->advancedInfo_ != nullptr;};
        void deleteAdvancedInfo() { this->advancedInfo_ = nullptr;};
        inline const Database::AdvancedInfo & getAdvancedInfo() const { DARABONBA_PTR_GET_CONST(advancedInfo_, Database::AdvancedInfo) };
        inline Database::AdvancedInfo getAdvancedInfo() { DARABONBA_PTR_GET(advancedInfo_, Database::AdvancedInfo) };
        inline Database& setAdvancedInfo(const Database::AdvancedInfo & advancedInfo) { DARABONBA_PTR_SET_VALUE(advancedInfo_, advancedInfo) };
        inline Database& setAdvancedInfo(Database::AdvancedInfo && advancedInfo) { DARABONBA_PTR_SET_RVALUE(advancedInfo_, advancedInfo) };


        // basicInfo Field Functions 
        bool hasBasicInfo() const { return this->basicInfo_ != nullptr;};
        void deleteBasicInfo() { this->basicInfo_ = nullptr;};
        inline const Database::BasicInfo & getBasicInfo() const { DARABONBA_PTR_GET_CONST(basicInfo_, Database::BasicInfo) };
        inline Database::BasicInfo getBasicInfo() { DARABONBA_PTR_GET(basicInfo_, Database::BasicInfo) };
        inline Database& setBasicInfo(const Database::BasicInfo & basicInfo) { DARABONBA_PTR_SET_VALUE(basicInfo_, basicInfo) };
        inline Database& setBasicInfo(Database::BasicInfo && basicInfo) { DARABONBA_PTR_SET_RVALUE(basicInfo_, basicInfo) };


        // characterSetName Field Functions 
        bool hasCharacterSetName() const { return this->characterSetName_ != nullptr;};
        void deleteCharacterSetName() { this->characterSetName_ = nullptr;};
        inline string getCharacterSetName() const { DARABONBA_PTR_GET_DEFAULT(characterSetName_, "") };
        inline Database& setCharacterSetName(string characterSetName) { DARABONBA_PTR_SET_VALUE(characterSetName_, characterSetName) };


        // collate Field Functions 
        bool hasCollate() const { return this->collate_ != nullptr;};
        void deleteCollate() { this->collate_ = nullptr;};
        inline string getCollate() const { DARABONBA_PTR_GET_DEFAULT(collate_, "") };
        inline Database& setCollate(string collate) { DARABONBA_PTR_SET_VALUE(collate_, collate) };


        // connLimit Field Functions 
        bool hasConnLimit() const { return this->connLimit_ != nullptr;};
        void deleteConnLimit() { this->connLimit_ = nullptr;};
        inline string getConnLimit() const { DARABONBA_PTR_GET_DEFAULT(connLimit_, "") };
        inline Database& setConnLimit(string connLimit) { DARABONBA_PTR_SET_VALUE(connLimit_, connLimit) };


        // ctype Field Functions 
        bool hasCtype() const { return this->ctype_ != nullptr;};
        void deleteCtype() { this->ctype_ = nullptr;};
        inline string getCtype() const { DARABONBA_PTR_GET_DEFAULT(ctype_, "") };
        inline Database& setCtype(string ctype) { DARABONBA_PTR_SET_VALUE(ctype_, ctype) };


        // DBDescription Field Functions 
        bool hasDBDescription() const { return this->DBDescription_ != nullptr;};
        void deleteDBDescription() { this->DBDescription_ = nullptr;};
        inline string getDBDescription() const { DARABONBA_PTR_GET_DEFAULT(DBDescription_, "") };
        inline Database& setDBDescription(string DBDescription) { DARABONBA_PTR_SET_VALUE(DBDescription_, DBDescription) };


        // DBInstanceId Field Functions 
        bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
        void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
        inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
        inline Database& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


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


        // duckDBEnabled Field Functions 
        bool hasDuckDBEnabled() const { return this->duckDBEnabled_ != nullptr;};
        void deleteDuckDBEnabled() { this->duckDBEnabled_ = nullptr;};
        inline bool getDuckDBEnabled() const { DARABONBA_PTR_GET_DEFAULT(duckDBEnabled_, false) };
        inline Database& setDuckDBEnabled(bool duckDBEnabled) { DARABONBA_PTR_SET_VALUE(duckDBEnabled_, duckDBEnabled) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline Database& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // pageNumber Field Functions 
        bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
        void deletePageNumber() { this->pageNumber_ = nullptr;};
        inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
        inline Database& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


        // pageSize Field Functions 
        bool hasPageSize() const { return this->pageSize_ != nullptr;};
        void deletePageSize() { this->pageSize_ = nullptr;};
        inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
        inline Database& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


        // runtimeInfo Field Functions 
        bool hasRuntimeInfo() const { return this->runtimeInfo_ != nullptr;};
        void deleteRuntimeInfo() { this->runtimeInfo_ = nullptr;};
        inline const Database::RuntimeInfo & getRuntimeInfo() const { DARABONBA_PTR_GET_CONST(runtimeInfo_, Database::RuntimeInfo) };
        inline Database::RuntimeInfo getRuntimeInfo() { DARABONBA_PTR_GET(runtimeInfo_, Database::RuntimeInfo) };
        inline Database& setRuntimeInfo(const Database::RuntimeInfo & runtimeInfo) { DARABONBA_PTR_SET_VALUE(runtimeInfo_, runtimeInfo) };
        inline Database& setRuntimeInfo(Database::RuntimeInfo && runtimeInfo) { DARABONBA_PTR_SET_RVALUE(runtimeInfo_, runtimeInfo) };


        // tablespace Field Functions 
        bool hasTablespace() const { return this->tablespace_ != nullptr;};
        void deleteTablespace() { this->tablespace_ = nullptr;};
        inline string getTablespace() const { DARABONBA_PTR_GET_DEFAULT(tablespace_, "") };
        inline Database& setTablespace(string tablespace) { DARABONBA_PTR_SET_VALUE(tablespace_, tablespace) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
        inline Database& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        // The information about the account. Each account has specific permissions on the database.
        shared_ptr<Database::Accounts> accounts_ {};
        // The advanced information about the database.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<Database::AdvancedInfo> advancedInfo_ {};
        // The basic information about the database.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<Database::BasicInfo> basicInfo_ {};
        // The name of the character set.
        shared_ptr<string> characterSetName_ {};
        // The collation of the character set. The example value C indicates localization.
        // 
        // >  This parameter is returned only for instances that run PostgreSQL.
        shared_ptr<string> collate_ {};
        // The limit on the number of concurrent requests. The value -1 indicates that the number of concurrent requests is unlimited.
        // 
        // >  This parameter is returned only for instances that run PostgreSQL.
        shared_ptr<string> connLimit_ {};
        // The type of the character set.
        // 
        // >  This parameter is returned only for instances that run PostgreSQL.
        shared_ptr<string> ctype_ {};
        // The description of the database.
        shared_ptr<string> DBDescription_ {};
        // The ID of the instance to which the database belongs.
        shared_ptr<string> DBInstanceId_ {};
        // The database name.
        shared_ptr<string> DBName_ {};
        // The database status. Valid values:
        // 
        // *   **Creating**
        // *   **Running**
        // *   **Deleting**
        // *   **Cold**
        shared_ptr<string> DBStatus_ {};
        shared_ptr<bool> duckDBEnabled_ {};
        // The database engine of the instance.
        shared_ptr<string> engine_ {};
        // The page number of the page to return.
        shared_ptr<int32_t> pageNumber_ {};
        // The number of entries per page.
        shared_ptr<int32_t> pageSize_ {};
        // The runtime information about the database.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<Database::RuntimeInfo> runtimeInfo_ {};
        // The database tablespace.
        // 
        // >  This parameter is returned only for instances that run PostgreSQL.
        shared_ptr<string> tablespace_ {};
        // The total number of entries returned.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<int32_t> totalCount_ {};
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
        && this->requestId_ == nullptr; };
    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const DescribeDatabasesResponseBody::Databases & getDatabases() const { DARABONBA_PTR_GET_CONST(databases_, DescribeDatabasesResponseBody::Databases) };
    inline DescribeDatabasesResponseBody::Databases getDatabases() { DARABONBA_PTR_GET(databases_, DescribeDatabasesResponseBody::Databases) };
    inline DescribeDatabasesResponseBody& setDatabases(const DescribeDatabasesResponseBody::Databases & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline DescribeDatabasesResponseBody& setDatabases(DescribeDatabasesResponseBody::Databases && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDatabasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the databases.
    shared_ptr<DescribeDatabasesResponseBody::Databases> databases_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
