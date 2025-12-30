// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROWPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEROWPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateRowPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRowPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateRowPermissionCommand, createRowPermissionCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRowPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateRowPermissionCommand, createRowPermissionCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreateRowPermissionRequest() = default ;
    CreateRowPermissionRequest(const CreateRowPermissionRequest &) = default ;
    CreateRowPermissionRequest(CreateRowPermissionRequest &&) = default ;
    CreateRowPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRowPermissionRequest() = default ;
    CreateRowPermissionRequest& operator=(const CreateRowPermissionRequest &) = default ;
    CreateRowPermissionRequest& operator=(CreateRowPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateRowPermissionCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateRowPermissionCommand& obj) { 
        DARABONBA_PTR_TO_JSON(MappingColumns, mappingColumns_);
        DARABONBA_PTR_TO_JSON(RowPermissionDesc, rowPermissionDesc_);
        DARABONBA_PTR_TO_JSON(RowPermissionName, rowPermissionName_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
        DARABONBA_PTR_TO_JSON(Tables, tables_);
      };
      friend void from_json(const Darabonba::Json& j, CreateRowPermissionCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(MappingColumns, mappingColumns_);
        DARABONBA_PTR_FROM_JSON(RowPermissionDesc, rowPermissionDesc_);
        DARABONBA_PTR_FROM_JSON(RowPermissionName, rowPermissionName_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
        DARABONBA_PTR_FROM_JSON(Tables, tables_);
      };
      CreateRowPermissionCommand() = default ;
      CreateRowPermissionCommand(const CreateRowPermissionCommand &) = default ;
      CreateRowPermissionCommand(CreateRowPermissionCommand &&) = default ;
      CreateRowPermissionCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateRowPermissionCommand() = default ;
      CreateRowPermissionCommand& operator=(const CreateRowPermissionCommand &) = default ;
      CreateRowPermissionCommand& operator=(CreateRowPermissionCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tables : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tables& obj) { 
          DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
          DARABONBA_PTR_TO_JSON(MappingColumnName, mappingColumnName_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        };
        friend void from_json(const Darabonba::Json& j, Tables& obj) { 
          DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
          DARABONBA_PTR_FROM_JSON(MappingColumnName, mappingColumnName_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        };
        Tables() = default ;
        Tables(const Tables &) = default ;
        Tables(Tables &&) = default ;
        Tables(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tables() = default ;
        Tables& operator=(const Tables &) = default ;
        Tables& operator=(Tables &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->columnName_ == nullptr
        && this->mappingColumnName_ == nullptr && this->resourceId_ == nullptr; };
        // columnName Field Functions 
        bool hasColumnName() const { return this->columnName_ != nullptr;};
        void deleteColumnName() { this->columnName_ = nullptr;};
        inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
        inline Tables& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


        // mappingColumnName Field Functions 
        bool hasMappingColumnName() const { return this->mappingColumnName_ != nullptr;};
        void deleteMappingColumnName() { this->mappingColumnName_ = nullptr;};
        inline string getMappingColumnName() const { DARABONBA_PTR_GET_DEFAULT(mappingColumnName_, "") };
        inline Tables& setMappingColumnName(string mappingColumnName) { DARABONBA_PTR_SET_VALUE(mappingColumnName_, mappingColumnName) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline Tables& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      protected:
        // This parameter is required.
        shared_ptr<string> columnName_ {};
        // This parameter is required.
        shared_ptr<string> mappingColumnName_ {};
        // This parameter is required.
        shared_ptr<string> resourceId_ {};
      };

      class Rules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rules& obj) { 
          DARABONBA_PTR_TO_JSON(Expressions, expressions_);
          DARABONBA_PTR_TO_JSON(IsDelete, isDelete_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UserMappingList, userMappingList_);
        };
        friend void from_json(const Darabonba::Json& j, Rules& obj) { 
          DARABONBA_PTR_FROM_JSON(Expressions, expressions_);
          DARABONBA_PTR_FROM_JSON(IsDelete, isDelete_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UserMappingList, userMappingList_);
        };
        Rules() = default ;
        Rules(const Rules &) = default ;
        Rules(Rules &&) = default ;
        Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Rules() = default ;
        Rules& operator=(const Rules &) = default ;
        Rules& operator=(Rules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class UserMappingList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const UserMappingList& obj) { 
            DARABONBA_PTR_TO_JSON(AccountType, accountType_);
            DARABONBA_PTR_TO_JSON(Accounts, accounts_);
          };
          friend void from_json(const Darabonba::Json& j, UserMappingList& obj) { 
            DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
            DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
          };
          UserMappingList() = default ;
          UserMappingList(const UserMappingList &) = default ;
          UserMappingList(UserMappingList &&) = default ;
          UserMappingList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~UserMappingList() = default ;
          UserMappingList& operator=(const UserMappingList &) = default ;
          UserMappingList& operator=(UserMappingList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Accounts : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Accounts& obj) { 
              DARABONBA_PTR_TO_JSON(AccountId, accountId_);
            };
            friend void from_json(const Darabonba::Json& j, Accounts& obj) { 
              DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
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
            virtual bool empty() const override { return this->accountId_ == nullptr; };
            // accountId Field Functions 
            bool hasAccountId() const { return this->accountId_ != nullptr;};
            void deleteAccountId() { this->accountId_ = nullptr;};
            inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
            inline Accounts& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


          protected:
            // This parameter is required.
            shared_ptr<string> accountId_ {};
          };

          virtual bool empty() const override { return this->accountType_ == nullptr
        && this->accounts_ == nullptr; };
          // accountType Field Functions 
          bool hasAccountType() const { return this->accountType_ != nullptr;};
          void deleteAccountType() { this->accountType_ = nullptr;};
          inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
          inline UserMappingList& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


          // accounts Field Functions 
          bool hasAccounts() const { return this->accounts_ != nullptr;};
          void deleteAccounts() { this->accounts_ = nullptr;};
          inline const vector<UserMappingList::Accounts> & getAccounts() const { DARABONBA_PTR_GET_CONST(accounts_, vector<UserMappingList::Accounts>) };
          inline vector<UserMappingList::Accounts> getAccounts() { DARABONBA_PTR_GET(accounts_, vector<UserMappingList::Accounts>) };
          inline UserMappingList& setAccounts(const vector<UserMappingList::Accounts> & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
          inline UserMappingList& setAccounts(vector<UserMappingList::Accounts> && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


        protected:
          // This parameter is required.
          shared_ptr<string> accountType_ {};
          // This parameter is required.
          shared_ptr<vector<UserMappingList::Accounts>> accounts_ {};
        };

        class Expressions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Expressions& obj) { 
            DARABONBA_PTR_TO_JSON(MappingColumnName, mappingColumnName_);
            DARABONBA_PTR_TO_JSON(Operator, operator_);
            DARABONBA_PTR_TO_JSON(SubConditions, subConditions_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Values, values_);
          };
          friend void from_json(const Darabonba::Json& j, Expressions& obj) { 
            DARABONBA_PTR_FROM_JSON(MappingColumnName, mappingColumnName_);
            DARABONBA_PTR_FROM_JSON(Operator, operator_);
            DARABONBA_PTR_FROM_JSON(SubConditions, subConditions_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Values, values_);
          };
          Expressions() = default ;
          Expressions(const Expressions &) = default ;
          Expressions(Expressions &&) = default ;
          Expressions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Expressions() = default ;
          Expressions& operator=(const Expressions &) = default ;
          Expressions& operator=(Expressions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->mappingColumnName_ == nullptr
        && this->operator_ == nullptr && this->subConditions_ == nullptr && this->type_ == nullptr && this->values_ == nullptr; };
          // mappingColumnName Field Functions 
          bool hasMappingColumnName() const { return this->mappingColumnName_ != nullptr;};
          void deleteMappingColumnName() { this->mappingColumnName_ = nullptr;};
          inline string getMappingColumnName() const { DARABONBA_PTR_GET_DEFAULT(mappingColumnName_, "") };
          inline Expressions& setMappingColumnName(string mappingColumnName) { DARABONBA_PTR_SET_VALUE(mappingColumnName_, mappingColumnName) };


          // operator Field Functions 
          bool hasOperator() const { return this->operator_ != nullptr;};
          void deleteOperator() { this->operator_ = nullptr;};
          inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
          inline Expressions& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


          // subConditions Field Functions 
          bool hasSubConditions() const { return this->subConditions_ != nullptr;};
          void deleteSubConditions() { this->subConditions_ = nullptr;};
          inline const vector<Darabonba::Json> & getSubConditions() const { DARABONBA_PTR_GET_CONST(subConditions_, vector<Darabonba::Json>) };
          inline vector<Darabonba::Json> getSubConditions() { DARABONBA_PTR_GET(subConditions_, vector<Darabonba::Json>) };
          inline Expressions& setSubConditions(const vector<Darabonba::Json> & subConditions) { DARABONBA_PTR_SET_VALUE(subConditions_, subConditions) };
          inline Expressions& setSubConditions(vector<Darabonba::Json> && subConditions) { DARABONBA_PTR_SET_RVALUE(subConditions_, subConditions) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Expressions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // values Field Functions 
          bool hasValues() const { return this->values_ != nullptr;};
          void deleteValues() { this->values_ = nullptr;};
          inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
          inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
          inline Expressions& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
          inline Expressions& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


        protected:
          // This parameter is required.
          shared_ptr<string> mappingColumnName_ {};
          // This parameter is required.
          shared_ptr<string> operator_ {};
          // This parameter is required.
          shared_ptr<vector<Darabonba::Json>> subConditions_ {};
          // This parameter is required.
          shared_ptr<string> type_ {};
          // This parameter is required.
          shared_ptr<vector<string>> values_ {};
        };

        virtual bool empty() const override { return this->expressions_ == nullptr
        && this->isDelete_ == nullptr && this->ruleName_ == nullptr && this->scopeType_ == nullptr && this->status_ == nullptr && this->userMappingList_ == nullptr; };
        // expressions Field Functions 
        bool hasExpressions() const { return this->expressions_ != nullptr;};
        void deleteExpressions() { this->expressions_ = nullptr;};
        inline const vector<Rules::Expressions> & getExpressions() const { DARABONBA_PTR_GET_CONST(expressions_, vector<Rules::Expressions>) };
        inline vector<Rules::Expressions> getExpressions() { DARABONBA_PTR_GET(expressions_, vector<Rules::Expressions>) };
        inline Rules& setExpressions(const vector<Rules::Expressions> & expressions) { DARABONBA_PTR_SET_VALUE(expressions_, expressions) };
        inline Rules& setExpressions(vector<Rules::Expressions> && expressions) { DARABONBA_PTR_SET_RVALUE(expressions_, expressions) };


        // isDelete Field Functions 
        bool hasIsDelete() const { return this->isDelete_ != nullptr;};
        void deleteIsDelete() { this->isDelete_ = nullptr;};
        inline bool getIsDelete() const { DARABONBA_PTR_GET_DEFAULT(isDelete_, false) };
        inline Rules& setIsDelete(bool isDelete) { DARABONBA_PTR_SET_VALUE(isDelete_, isDelete) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline Rules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // scopeType Field Functions 
        bool hasScopeType() const { return this->scopeType_ != nullptr;};
        void deleteScopeType() { this->scopeType_ = nullptr;};
        inline string getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
        inline Rules& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline Rules& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // userMappingList Field Functions 
        bool hasUserMappingList() const { return this->userMappingList_ != nullptr;};
        void deleteUserMappingList() { this->userMappingList_ = nullptr;};
        inline const vector<Rules::UserMappingList> & getUserMappingList() const { DARABONBA_PTR_GET_CONST(userMappingList_, vector<Rules::UserMappingList>) };
        inline vector<Rules::UserMappingList> getUserMappingList() { DARABONBA_PTR_GET(userMappingList_, vector<Rules::UserMappingList>) };
        inline Rules& setUserMappingList(const vector<Rules::UserMappingList> & userMappingList) { DARABONBA_PTR_SET_VALUE(userMappingList_, userMappingList) };
        inline Rules& setUserMappingList(vector<Rules::UserMappingList> && userMappingList) { DARABONBA_PTR_SET_RVALUE(userMappingList_, userMappingList) };


      protected:
        // This parameter is required.
        shared_ptr<vector<Rules::Expressions>> expressions_ {};
        shared_ptr<bool> isDelete_ {};
        // This parameter is required.
        shared_ptr<string> ruleName_ {};
        // This parameter is required.
        shared_ptr<string> scopeType_ {};
        // This parameter is required.
        shared_ptr<int32_t> status_ {};
        shared_ptr<vector<Rules::UserMappingList>> userMappingList_ {};
      };

      class MappingColumns : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MappingColumns& obj) { 
          DARABONBA_PTR_TO_JSON(ColumnDesc, columnDesc_);
          DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
          DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
        };
        friend void from_json(const Darabonba::Json& j, MappingColumns& obj) { 
          DARABONBA_PTR_FROM_JSON(ColumnDesc, columnDesc_);
          DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
          DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
        };
        MappingColumns() = default ;
        MappingColumns(const MappingColumns &) = default ;
        MappingColumns(MappingColumns &&) = default ;
        MappingColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MappingColumns() = default ;
        MappingColumns& operator=(const MappingColumns &) = default ;
        MappingColumns& operator=(MappingColumns &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->columnDesc_ == nullptr
        && this->columnName_ == nullptr && this->columnType_ == nullptr; };
        // columnDesc Field Functions 
        bool hasColumnDesc() const { return this->columnDesc_ != nullptr;};
        void deleteColumnDesc() { this->columnDesc_ = nullptr;};
        inline string getColumnDesc() const { DARABONBA_PTR_GET_DEFAULT(columnDesc_, "") };
        inline MappingColumns& setColumnDesc(string columnDesc) { DARABONBA_PTR_SET_VALUE(columnDesc_, columnDesc) };


        // columnName Field Functions 
        bool hasColumnName() const { return this->columnName_ != nullptr;};
        void deleteColumnName() { this->columnName_ = nullptr;};
        inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
        inline MappingColumns& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


        // columnType Field Functions 
        bool hasColumnType() const { return this->columnType_ != nullptr;};
        void deleteColumnType() { this->columnType_ = nullptr;};
        inline string getColumnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
        inline MappingColumns& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


      protected:
        shared_ptr<string> columnDesc_ {};
        // This parameter is required.
        shared_ptr<string> columnName_ {};
        // This parameter is required.
        shared_ptr<string> columnType_ {};
      };

      virtual bool empty() const override { return this->mappingColumns_ == nullptr
        && this->rowPermissionDesc_ == nullptr && this->rowPermissionName_ == nullptr && this->rules_ == nullptr && this->tables_ == nullptr; };
      // mappingColumns Field Functions 
      bool hasMappingColumns() const { return this->mappingColumns_ != nullptr;};
      void deleteMappingColumns() { this->mappingColumns_ = nullptr;};
      inline const vector<CreateRowPermissionCommand::MappingColumns> & getMappingColumns() const { DARABONBA_PTR_GET_CONST(mappingColumns_, vector<CreateRowPermissionCommand::MappingColumns>) };
      inline vector<CreateRowPermissionCommand::MappingColumns> getMappingColumns() { DARABONBA_PTR_GET(mappingColumns_, vector<CreateRowPermissionCommand::MappingColumns>) };
      inline CreateRowPermissionCommand& setMappingColumns(const vector<CreateRowPermissionCommand::MappingColumns> & mappingColumns) { DARABONBA_PTR_SET_VALUE(mappingColumns_, mappingColumns) };
      inline CreateRowPermissionCommand& setMappingColumns(vector<CreateRowPermissionCommand::MappingColumns> && mappingColumns) { DARABONBA_PTR_SET_RVALUE(mappingColumns_, mappingColumns) };


      // rowPermissionDesc Field Functions 
      bool hasRowPermissionDesc() const { return this->rowPermissionDesc_ != nullptr;};
      void deleteRowPermissionDesc() { this->rowPermissionDesc_ = nullptr;};
      inline string getRowPermissionDesc() const { DARABONBA_PTR_GET_DEFAULT(rowPermissionDesc_, "") };
      inline CreateRowPermissionCommand& setRowPermissionDesc(string rowPermissionDesc) { DARABONBA_PTR_SET_VALUE(rowPermissionDesc_, rowPermissionDesc) };


      // rowPermissionName Field Functions 
      bool hasRowPermissionName() const { return this->rowPermissionName_ != nullptr;};
      void deleteRowPermissionName() { this->rowPermissionName_ = nullptr;};
      inline string getRowPermissionName() const { DARABONBA_PTR_GET_DEFAULT(rowPermissionName_, "") };
      inline CreateRowPermissionCommand& setRowPermissionName(string rowPermissionName) { DARABONBA_PTR_SET_VALUE(rowPermissionName_, rowPermissionName) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<CreateRowPermissionCommand::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<CreateRowPermissionCommand::Rules>) };
      inline vector<CreateRowPermissionCommand::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<CreateRowPermissionCommand::Rules>) };
      inline CreateRowPermissionCommand& setRules(const vector<CreateRowPermissionCommand::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline CreateRowPermissionCommand& setRules(vector<CreateRowPermissionCommand::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


      // tables Field Functions 
      bool hasTables() const { return this->tables_ != nullptr;};
      void deleteTables() { this->tables_ = nullptr;};
      inline const vector<CreateRowPermissionCommand::Tables> & getTables() const { DARABONBA_PTR_GET_CONST(tables_, vector<CreateRowPermissionCommand::Tables>) };
      inline vector<CreateRowPermissionCommand::Tables> getTables() { DARABONBA_PTR_GET(tables_, vector<CreateRowPermissionCommand::Tables>) };
      inline CreateRowPermissionCommand& setTables(const vector<CreateRowPermissionCommand::Tables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
      inline CreateRowPermissionCommand& setTables(vector<CreateRowPermissionCommand::Tables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    protected:
      // This parameter is required.
      shared_ptr<vector<CreateRowPermissionCommand::MappingColumns>> mappingColumns_ {};
      shared_ptr<string> rowPermissionDesc_ {};
      // This parameter is required.
      shared_ptr<string> rowPermissionName_ {};
      shared_ptr<vector<CreateRowPermissionCommand::Rules>> rules_ {};
      shared_ptr<vector<CreateRowPermissionCommand::Tables>> tables_ {};
    };

    virtual bool empty() const override { return this->createRowPermissionCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // createRowPermissionCommand Field Functions 
    bool hasCreateRowPermissionCommand() const { return this->createRowPermissionCommand_ != nullptr;};
    void deleteCreateRowPermissionCommand() { this->createRowPermissionCommand_ = nullptr;};
    inline const CreateRowPermissionRequest::CreateRowPermissionCommand & getCreateRowPermissionCommand() const { DARABONBA_PTR_GET_CONST(createRowPermissionCommand_, CreateRowPermissionRequest::CreateRowPermissionCommand) };
    inline CreateRowPermissionRequest::CreateRowPermissionCommand getCreateRowPermissionCommand() { DARABONBA_PTR_GET(createRowPermissionCommand_, CreateRowPermissionRequest::CreateRowPermissionCommand) };
    inline CreateRowPermissionRequest& setCreateRowPermissionCommand(const CreateRowPermissionRequest::CreateRowPermissionCommand & createRowPermissionCommand) { DARABONBA_PTR_SET_VALUE(createRowPermissionCommand_, createRowPermissionCommand) };
    inline CreateRowPermissionRequest& setCreateRowPermissionCommand(CreateRowPermissionRequest::CreateRowPermissionCommand && createRowPermissionCommand) { DARABONBA_PTR_SET_RVALUE(createRowPermissionCommand_, createRowPermissionCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateRowPermissionRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<CreateRowPermissionRequest::CreateRowPermissionCommand> createRowPermissionCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
