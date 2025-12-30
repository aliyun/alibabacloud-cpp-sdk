// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROWPERMISSIONBYUSERIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTROWPERMISSIONBYUSERIDRESPONSEBODY_HPP_
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
  class ListRowPermissionByUserIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRowPermissionByUserIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListRowPermissionByUserIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListRowPermissionByUserIdResponseBody() = default ;
    ListRowPermissionByUserIdResponseBody(const ListRowPermissionByUserIdResponseBody &) = default ;
    ListRowPermissionByUserIdResponseBody(ListRowPermissionByUserIdResponseBody &&) = default ;
    ListRowPermissionByUserIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRowPermissionByUserIdResponseBody() = default ;
    ListRowPermissionByUserIdResponseBody& operator=(const ListRowPermissionByUserIdResponseBody &) = default ;
    ListRowPermissionByUserIdResponseBody& operator=(ListRowPermissionByUserIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageResult() = default ;
      PageResult(const PageResult &) = default ;
      PageResult(PageResult &&) = default ;
      PageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageResult() = default ;
      PageResult& operator=(const PageResult &) = default ;
      PageResult& operator=(PageResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Modifier, modifier_);
          DARABONBA_PTR_TO_JSON(Rules, rules_);
          DARABONBA_PTR_TO_JSON(Tables, tables_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
          DARABONBA_PTR_FROM_JSON(Rules, rules_);
          DARABONBA_PTR_FROM_JSON(Tables, tables_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        };
        Data() = default ;
        Data(const Data &) = default ;
        Data(Data &&) = default ;
        Data(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Data() = default ;
        Data& operator=(const Data &) = default ;
        Data& operator=(Data &&) = default ;
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
          shared_ptr<string> columnName_ {};
          shared_ptr<string> mappingColumnName_ {};
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
            shared_ptr<string> accountType_ {};
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
            shared_ptr<string> mappingColumnName_ {};
            shared_ptr<string> operator_ {};
            shared_ptr<vector<Darabonba::Json>> subConditions_ {};
            shared_ptr<string> type_ {};
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
          shared_ptr<vector<Rules::Expressions>> expressions_ {};
          shared_ptr<bool> isDelete_ {};
          shared_ptr<string> ruleName_ {};
          shared_ptr<string> scopeType_ {};
          shared_ptr<int32_t> status_ {};
          shared_ptr<vector<Rules::UserMappingList>> userMappingList_ {};
        };

        virtual bool empty() const override { return this->creator_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->modifier_ == nullptr && this->rules_ == nullptr && this->tables_ == nullptr
        && this->tenantId_ == nullptr; };
        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline Data& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // modifier Field Functions 
        bool hasModifier() const { return this->modifier_ != nullptr;};
        void deleteModifier() { this->modifier_ = nullptr;};
        inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
        inline Data& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


        // rules Field Functions 
        bool hasRules() const { return this->rules_ != nullptr;};
        void deleteRules() { this->rules_ = nullptr;};
        inline const vector<Data::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Data::Rules>) };
        inline vector<Data::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<Data::Rules>) };
        inline Data& setRules(const vector<Data::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
        inline Data& setRules(vector<Data::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


        // tables Field Functions 
        bool hasTables() const { return this->tables_ != nullptr;};
        void deleteTables() { this->tables_ = nullptr;};
        inline const vector<Data::Tables> & getTables() const { DARABONBA_PTR_GET_CONST(tables_, vector<Data::Tables>) };
        inline vector<Data::Tables> getTables() { DARABONBA_PTR_GET(tables_, vector<Data::Tables>) };
        inline Data& setTables(const vector<Data::Tables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
        inline Data& setTables(vector<Data::Tables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
        inline Data& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      protected:
        shared_ptr<string> creator_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<string> modifier_ {};
        shared_ptr<vector<Data::Rules>> rules_ {};
        shared_ptr<vector<Data::Tables>> tables_ {};
        shared_ptr<int64_t> tenantId_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->totalCount_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<PageResult::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<PageResult::Data>) };
      inline vector<PageResult::Data> getData() { DARABONBA_PTR_GET(data_, vector<PageResult::Data>) };
      inline PageResult& setData(const vector<PageResult::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline PageResult& setData(vector<PageResult::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PageResult::Data>> data_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListRowPermissionByUserIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListRowPermissionByUserIdResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListRowPermissionByUserIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListRowPermissionByUserIdResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListRowPermissionByUserIdResponseBody::PageResult) };
    inline ListRowPermissionByUserIdResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListRowPermissionByUserIdResponseBody::PageResult) };
    inline ListRowPermissionByUserIdResponseBody& setPageResult(const ListRowPermissionByUserIdResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListRowPermissionByUserIdResponseBody& setPageResult(ListRowPermissionByUserIdResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRowPermissionByUserIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListRowPermissionByUserIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListRowPermissionByUserIdResponseBody::PageResult> pageResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
