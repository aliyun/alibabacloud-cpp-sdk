// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSENSITIVECOLUMNINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSENSITIVECOLUMNINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSensitiveColumnInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSensitiveColumnInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SensitiveColumnList, sensitiveColumnList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSensitiveColumnInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SensitiveColumnList, sensitiveColumnList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSensitiveColumnInfoResponseBody() = default ;
    ListSensitiveColumnInfoResponseBody(const ListSensitiveColumnInfoResponseBody &) = default ;
    ListSensitiveColumnInfoResponseBody(ListSensitiveColumnInfoResponseBody &&) = default ;
    ListSensitiveColumnInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSensitiveColumnInfoResponseBody() = default ;
    ListSensitiveColumnInfoResponseBody& operator=(const ListSensitiveColumnInfoResponseBody &) = default ;
    ListSensitiveColumnInfoResponseBody& operator=(ListSensitiveColumnInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SensitiveColumnList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SensitiveColumnList& obj) { 
        DARABONBA_PTR_TO_JSON(SensitiveColumn, sensitiveColumn_);
      };
      friend void from_json(const Darabonba::Json& j, SensitiveColumnList& obj) { 
        DARABONBA_PTR_FROM_JSON(SensitiveColumn, sensitiveColumn_);
      };
      SensitiveColumnList() = default ;
      SensitiveColumnList(const SensitiveColumnList &) = default ;
      SensitiveColumnList(SensitiveColumnList &&) = default ;
      SensitiveColumnList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SensitiveColumnList() = default ;
      SensitiveColumnList& operator=(const SensitiveColumnList &) = default ;
      SensitiveColumnList& operator=(SensitiveColumnList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SensitiveColumn : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SensitiveColumn& obj) { 
          DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
          DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
          DARABONBA_PTR_TO_JSON(DefaultDesensitizationRule, defaultDesensitizationRule_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(IsPlain, isPlain_);
          DARABONBA_PTR_TO_JSON(SampleData, sampleData_);
          DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
          DARABONBA_PTR_TO_JSON(SemiDesensitizationRuleList, semiDesensitizationRuleList_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
          DARABONBA_PTR_TO_JSON(UserSensitivityLevel, userSensitivityLevel_);
        };
        friend void from_json(const Darabonba::Json& j, SensitiveColumn& obj) { 
          DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
          DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
          DARABONBA_PTR_FROM_JSON(DefaultDesensitizationRule, defaultDesensitizationRule_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(IsPlain, isPlain_);
          DARABONBA_PTR_FROM_JSON(SampleData, sampleData_);
          DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
          DARABONBA_PTR_FROM_JSON(SemiDesensitizationRuleList, semiDesensitizationRuleList_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
          DARABONBA_PTR_FROM_JSON(UserSensitivityLevel, userSensitivityLevel_);
        };
        SensitiveColumn() = default ;
        SensitiveColumn(const SensitiveColumn &) = default ;
        SensitiveColumn(SensitiveColumn &&) = default ;
        SensitiveColumn(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SensitiveColumn() = default ;
        SensitiveColumn& operator=(const SensitiveColumn &) = default ;
        SensitiveColumn& operator=(SensitiveColumn &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SemiDesensitizationRuleList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SemiDesensitizationRuleList& obj) { 
            DARABONBA_PTR_TO_JSON(SemiDesensitizationRule, semiDesensitizationRule_);
          };
          friend void from_json(const Darabonba::Json& j, SemiDesensitizationRuleList& obj) { 
            DARABONBA_PTR_FROM_JSON(SemiDesensitizationRule, semiDesensitizationRule_);
          };
          SemiDesensitizationRuleList() = default ;
          SemiDesensitizationRuleList(const SemiDesensitizationRuleList &) = default ;
          SemiDesensitizationRuleList(SemiDesensitizationRuleList &&) = default ;
          SemiDesensitizationRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SemiDesensitizationRuleList() = default ;
          SemiDesensitizationRuleList& operator=(const SemiDesensitizationRuleList &) = default ;
          SemiDesensitizationRuleList& operator=(SemiDesensitizationRuleList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SemiDesensitizationRule : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SemiDesensitizationRule& obj) { 
              DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
              DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
            };
            friend void from_json(const Darabonba::Json& j, SemiDesensitizationRule& obj) { 
              DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
              DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
            };
            SemiDesensitizationRule() = default ;
            SemiDesensitizationRule(const SemiDesensitizationRule &) = default ;
            SemiDesensitizationRule(SemiDesensitizationRule &&) = default ;
            SemiDesensitizationRule(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SemiDesensitizationRule() = default ;
            SemiDesensitizationRule& operator=(const SemiDesensitizationRule &) = default ;
            SemiDesensitizationRule& operator=(SemiDesensitizationRule &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->ruleId_ == nullptr
        && this->ruleName_ == nullptr; };
            // ruleId Field Functions 
            bool hasRuleId() const { return this->ruleId_ != nullptr;};
            void deleteRuleId() { this->ruleId_ = nullptr;};
            inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
            inline SemiDesensitizationRule& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


            // ruleName Field Functions 
            bool hasRuleName() const { return this->ruleName_ != nullptr;};
            void deleteRuleName() { this->ruleName_ = nullptr;};
            inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
            inline SemiDesensitizationRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


          protected:
            // The ID of the partial masking algorithm.
            shared_ptr<int64_t> ruleId_ {};
            // The partial masking algorithm name.
            shared_ptr<string> ruleName_ {};
          };

          virtual bool empty() const override { return this->semiDesensitizationRule_ == nullptr; };
          // semiDesensitizationRule Field Functions 
          bool hasSemiDesensitizationRule() const { return this->semiDesensitizationRule_ != nullptr;};
          void deleteSemiDesensitizationRule() { this->semiDesensitizationRule_ = nullptr;};
          inline const vector<SemiDesensitizationRuleList::SemiDesensitizationRule> & getSemiDesensitizationRule() const { DARABONBA_PTR_GET_CONST(semiDesensitizationRule_, vector<SemiDesensitizationRuleList::SemiDesensitizationRule>) };
          inline vector<SemiDesensitizationRuleList::SemiDesensitizationRule> getSemiDesensitizationRule() { DARABONBA_PTR_GET(semiDesensitizationRule_, vector<SemiDesensitizationRuleList::SemiDesensitizationRule>) };
          inline SemiDesensitizationRuleList& setSemiDesensitizationRule(const vector<SemiDesensitizationRuleList::SemiDesensitizationRule> & semiDesensitizationRule) { DARABONBA_PTR_SET_VALUE(semiDesensitizationRule_, semiDesensitizationRule) };
          inline SemiDesensitizationRuleList& setSemiDesensitizationRule(vector<SemiDesensitizationRuleList::SemiDesensitizationRule> && semiDesensitizationRule) { DARABONBA_PTR_SET_RVALUE(semiDesensitizationRule_, semiDesensitizationRule) };


        protected:
          shared_ptr<vector<SemiDesensitizationRuleList::SemiDesensitizationRule>> semiDesensitizationRule_ {};
        };

        class DefaultDesensitizationRule : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DefaultDesensitizationRule& obj) { 
            DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
            DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          };
          friend void from_json(const Darabonba::Json& j, DefaultDesensitizationRule& obj) { 
            DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
            DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          };
          DefaultDesensitizationRule() = default ;
          DefaultDesensitizationRule(const DefaultDesensitizationRule &) = default ;
          DefaultDesensitizationRule(DefaultDesensitizationRule &&) = default ;
          DefaultDesensitizationRule(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DefaultDesensitizationRule() = default ;
          DefaultDesensitizationRule& operator=(const DefaultDesensitizationRule &) = default ;
          DefaultDesensitizationRule& operator=(DefaultDesensitizationRule &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ruleId_ == nullptr
        && this->ruleName_ == nullptr; };
          // ruleId Field Functions 
          bool hasRuleId() const { return this->ruleId_ != nullptr;};
          void deleteRuleId() { this->ruleId_ = nullptr;};
          inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
          inline DefaultDesensitizationRule& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


          // ruleName Field Functions 
          bool hasRuleName() const { return this->ruleName_ != nullptr;};
          void deleteRuleName() { this->ruleName_ = nullptr;};
          inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
          inline DefaultDesensitizationRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        protected:
          // The masking algorithm ID.
          shared_ptr<int64_t> ruleId_ {};
          // The masking algorithm name.
          shared_ptr<string> ruleName_ {};
        };

        virtual bool empty() const override { return this->categoryName_ == nullptr
        && this->columnName_ == nullptr && this->defaultDesensitizationRule_ == nullptr && this->instanceId_ == nullptr && this->isPlain_ == nullptr && this->sampleData_ == nullptr
        && this->schemaName_ == nullptr && this->securityLevel_ == nullptr && this->semiDesensitizationRuleList_ == nullptr && this->tableName_ == nullptr && this->userSensitivityLevel_ == nullptr; };
        // categoryName Field Functions 
        bool hasCategoryName() const { return this->categoryName_ != nullptr;};
        void deleteCategoryName() { this->categoryName_ = nullptr;};
        inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
        inline SensitiveColumn& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


        // columnName Field Functions 
        bool hasColumnName() const { return this->columnName_ != nullptr;};
        void deleteColumnName() { this->columnName_ = nullptr;};
        inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
        inline SensitiveColumn& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


        // defaultDesensitizationRule Field Functions 
        bool hasDefaultDesensitizationRule() const { return this->defaultDesensitizationRule_ != nullptr;};
        void deleteDefaultDesensitizationRule() { this->defaultDesensitizationRule_ = nullptr;};
        inline const SensitiveColumn::DefaultDesensitizationRule & getDefaultDesensitizationRule() const { DARABONBA_PTR_GET_CONST(defaultDesensitizationRule_, SensitiveColumn::DefaultDesensitizationRule) };
        inline SensitiveColumn::DefaultDesensitizationRule getDefaultDesensitizationRule() { DARABONBA_PTR_GET(defaultDesensitizationRule_, SensitiveColumn::DefaultDesensitizationRule) };
        inline SensitiveColumn& setDefaultDesensitizationRule(const SensitiveColumn::DefaultDesensitizationRule & defaultDesensitizationRule) { DARABONBA_PTR_SET_VALUE(defaultDesensitizationRule_, defaultDesensitizationRule) };
        inline SensitiveColumn& setDefaultDesensitizationRule(SensitiveColumn::DefaultDesensitizationRule && defaultDesensitizationRule) { DARABONBA_PTR_SET_RVALUE(defaultDesensitizationRule_, defaultDesensitizationRule) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline int32_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0) };
        inline SensitiveColumn& setInstanceId(int32_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // isPlain Field Functions 
        bool hasIsPlain() const { return this->isPlain_ != nullptr;};
        void deleteIsPlain() { this->isPlain_ = nullptr;};
        inline bool getIsPlain() const { DARABONBA_PTR_GET_DEFAULT(isPlain_, false) };
        inline SensitiveColumn& setIsPlain(bool isPlain) { DARABONBA_PTR_SET_VALUE(isPlain_, isPlain) };


        // sampleData Field Functions 
        bool hasSampleData() const { return this->sampleData_ != nullptr;};
        void deleteSampleData() { this->sampleData_ = nullptr;};
        inline string getSampleData() const { DARABONBA_PTR_GET_DEFAULT(sampleData_, "") };
        inline SensitiveColumn& setSampleData(string sampleData) { DARABONBA_PTR_SET_VALUE(sampleData_, sampleData) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline SensitiveColumn& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


        // securityLevel Field Functions 
        bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
        void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
        inline string getSecurityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, "") };
        inline SensitiveColumn& setSecurityLevel(string securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


        // semiDesensitizationRuleList Field Functions 
        bool hasSemiDesensitizationRuleList() const { return this->semiDesensitizationRuleList_ != nullptr;};
        void deleteSemiDesensitizationRuleList() { this->semiDesensitizationRuleList_ = nullptr;};
        inline const SensitiveColumn::SemiDesensitizationRuleList & getSemiDesensitizationRuleList() const { DARABONBA_PTR_GET_CONST(semiDesensitizationRuleList_, SensitiveColumn::SemiDesensitizationRuleList) };
        inline SensitiveColumn::SemiDesensitizationRuleList getSemiDesensitizationRuleList() { DARABONBA_PTR_GET(semiDesensitizationRuleList_, SensitiveColumn::SemiDesensitizationRuleList) };
        inline SensitiveColumn& setSemiDesensitizationRuleList(const SensitiveColumn::SemiDesensitizationRuleList & semiDesensitizationRuleList) { DARABONBA_PTR_SET_VALUE(semiDesensitizationRuleList_, semiDesensitizationRuleList) };
        inline SensitiveColumn& setSemiDesensitizationRuleList(SensitiveColumn::SemiDesensitizationRuleList && semiDesensitizationRuleList) { DARABONBA_PTR_SET_RVALUE(semiDesensitizationRuleList_, semiDesensitizationRuleList) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline SensitiveColumn& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        // userSensitivityLevel Field Functions 
        bool hasUserSensitivityLevel() const { return this->userSensitivityLevel_ != nullptr;};
        void deleteUserSensitivityLevel() { this->userSensitivityLevel_ = nullptr;};
        inline string getUserSensitivityLevel() const { DARABONBA_PTR_GET_DEFAULT(userSensitivityLevel_, "") };
        inline SensitiveColumn& setUserSensitivityLevel(string userSensitivityLevel) { DARABONBA_PTR_SET_VALUE(userSensitivityLevel_, userSensitivityLevel) };


      protected:
        // The name of the category.
        shared_ptr<string> categoryName_ {};
        // The name of the sensitive field.
        shared_ptr<string> columnName_ {};
        // The information about the default masking algorithm.
        shared_ptr<SensitiveColumn::DefaultDesensitizationRule> defaultDesensitizationRule_ {};
        // The ID of the instance.
        shared_ptr<int32_t> instanceId_ {};
        // Indicates whether the sensitive field is displayed in plaintext.
        shared_ptr<bool> isPlain_ {};
        // The sample data.
        shared_ptr<string> sampleData_ {};
        // The name of the database.
        shared_ptr<string> schemaName_ {};
        // The sensitivity level of the field. Valid values:
        // 
        // *   Low
        // *   Medium
        // *   High
        shared_ptr<string> securityLevel_ {};
        // The list of partial masking algorithms.
        shared_ptr<SensitiveColumn::SemiDesensitizationRuleList> semiDesensitizationRuleList_ {};
        // The name of the table.
        shared_ptr<string> tableName_ {};
        // The user-defined sensitivity level.
        shared_ptr<string> userSensitivityLevel_ {};
      };

      virtual bool empty() const override { return this->sensitiveColumn_ == nullptr; };
      // sensitiveColumn Field Functions 
      bool hasSensitiveColumn() const { return this->sensitiveColumn_ != nullptr;};
      void deleteSensitiveColumn() { this->sensitiveColumn_ = nullptr;};
      inline const vector<SensitiveColumnList::SensitiveColumn> & getSensitiveColumn() const { DARABONBA_PTR_GET_CONST(sensitiveColumn_, vector<SensitiveColumnList::SensitiveColumn>) };
      inline vector<SensitiveColumnList::SensitiveColumn> getSensitiveColumn() { DARABONBA_PTR_GET(sensitiveColumn_, vector<SensitiveColumnList::SensitiveColumn>) };
      inline SensitiveColumnList& setSensitiveColumn(const vector<SensitiveColumnList::SensitiveColumn> & sensitiveColumn) { DARABONBA_PTR_SET_VALUE(sensitiveColumn_, sensitiveColumn) };
      inline SensitiveColumnList& setSensitiveColumn(vector<SensitiveColumnList::SensitiveColumn> && sensitiveColumn) { DARABONBA_PTR_SET_RVALUE(sensitiveColumn_, sensitiveColumn) };


    protected:
      shared_ptr<vector<SensitiveColumnList::SensitiveColumn>> sensitiveColumn_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->sensitiveColumnList_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListSensitiveColumnInfoResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListSensitiveColumnInfoResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSensitiveColumnInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sensitiveColumnList Field Functions 
    bool hasSensitiveColumnList() const { return this->sensitiveColumnList_ != nullptr;};
    void deleteSensitiveColumnList() { this->sensitiveColumnList_ = nullptr;};
    inline const ListSensitiveColumnInfoResponseBody::SensitiveColumnList & getSensitiveColumnList() const { DARABONBA_PTR_GET_CONST(sensitiveColumnList_, ListSensitiveColumnInfoResponseBody::SensitiveColumnList) };
    inline ListSensitiveColumnInfoResponseBody::SensitiveColumnList getSensitiveColumnList() { DARABONBA_PTR_GET(sensitiveColumnList_, ListSensitiveColumnInfoResponseBody::SensitiveColumnList) };
    inline ListSensitiveColumnInfoResponseBody& setSensitiveColumnList(const ListSensitiveColumnInfoResponseBody::SensitiveColumnList & sensitiveColumnList) { DARABONBA_PTR_SET_VALUE(sensitiveColumnList_, sensitiveColumnList) };
    inline ListSensitiveColumnInfoResponseBody& setSensitiveColumnList(ListSensitiveColumnInfoResponseBody::SensitiveColumnList && sensitiveColumnList) { DARABONBA_PTR_SET_RVALUE(sensitiveColumnList_, sensitiveColumnList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSensitiveColumnInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListSensitiveColumnInfoResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The request ID. You can use the request ID to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The details of the sensitive field.
    shared_ptr<ListSensitiveColumnInfoResponseBody::SensitiveColumnList> sensitiveColumnList_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The total number of entries that are returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
