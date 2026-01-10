// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLREVIEWOPTIMIZEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSQLREVIEWOPTIMIZEDETAILRESPONSEBODY_HPP_
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
  class GetSQLReviewOptimizeDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSQLReviewOptimizeDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(OptimizeDetail, optimizeDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSQLReviewOptimizeDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(OptimizeDetail, optimizeDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSQLReviewOptimizeDetailResponseBody() = default ;
    GetSQLReviewOptimizeDetailResponseBody(const GetSQLReviewOptimizeDetailResponseBody &) = default ;
    GetSQLReviewOptimizeDetailResponseBody(GetSQLReviewOptimizeDetailResponseBody &&) = default ;
    GetSQLReviewOptimizeDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSQLReviewOptimizeDetailResponseBody() = default ;
    GetSQLReviewOptimizeDetailResponseBody& operator=(const GetSQLReviewOptimizeDetailResponseBody &) = default ;
    GetSQLReviewOptimizeDetailResponseBody& operator=(GetSQLReviewOptimizeDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OptimizeDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OptimizeDetail& obj) { 
        DARABONBA_PTR_TO_JSON(DbId, dbId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(QualityResult, qualityResult_);
        DARABONBA_PTR_TO_JSON(QueryKey, queryKey_);
        DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
      };
      friend void from_json(const Darabonba::Json& j, OptimizeDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(DbId, dbId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(QualityResult, qualityResult_);
        DARABONBA_PTR_FROM_JSON(QueryKey, queryKey_);
        DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
      };
      OptimizeDetail() = default ;
      OptimizeDetail(const OptimizeDetail &) = default ;
      OptimizeDetail(OptimizeDetail &&) = default ;
      OptimizeDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OptimizeDetail() = default ;
      OptimizeDetail& operator=(const OptimizeDetail &) = default ;
      OptimizeDetail& operator=(OptimizeDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class QualityResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QualityResult& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(OccurError, occurError_);
          DARABONBA_PTR_TO_JSON(Results, results_);
        };
        friend void from_json(const Darabonba::Json& j, QualityResult& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(OccurError, occurError_);
          DARABONBA_PTR_FROM_JSON(Results, results_);
        };
        QualityResult() = default ;
        QualityResult(const QualityResult &) = default ;
        QualityResult(QualityResult &&) = default ;
        QualityResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QualityResult() = default ;
        QualityResult& operator=(const QualityResult &) = default ;
        QualityResult& operator=(QualityResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Results : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Results& obj) { 
            DARABONBA_PTR_TO_JSON(Comments, comments_);
            DARABONBA_PTR_TO_JSON(Feedback, feedback_);
            DARABONBA_PTR_TO_JSON(Messages, messages_);
            DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
            DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
            DARABONBA_PTR_TO_JSON(Scripts, scripts_);
          };
          friend void from_json(const Darabonba::Json& j, Results& obj) { 
            DARABONBA_PTR_FROM_JSON(Comments, comments_);
            DARABONBA_PTR_FROM_JSON(Feedback, feedback_);
            DARABONBA_PTR_FROM_JSON(Messages, messages_);
            DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
            DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
            DARABONBA_PTR_FROM_JSON(Scripts, scripts_);
          };
          Results() = default ;
          Results(const Results &) = default ;
          Results(Results &&) = default ;
          Results(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Results() = default ;
          Results& operator=(const Results &) = default ;
          Results& operator=(Results &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Scripts : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Scripts& obj) { 
              DARABONBA_PTR_TO_JSON(Content, content_);
              DARABONBA_PTR_TO_JSON(OpType, opType_);
              DARABONBA_PTR_TO_JSON(TableName, tableName_);
            };
            friend void from_json(const Darabonba::Json& j, Scripts& obj) { 
              DARABONBA_PTR_FROM_JSON(Content, content_);
              DARABONBA_PTR_FROM_JSON(OpType, opType_);
              DARABONBA_PTR_FROM_JSON(TableName, tableName_);
            };
            Scripts() = default ;
            Scripts(const Scripts &) = default ;
            Scripts(Scripts &&) = default ;
            Scripts(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Scripts() = default ;
            Scripts& operator=(const Scripts &) = default ;
            Scripts& operator=(Scripts &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->content_ == nullptr
        && this->opType_ == nullptr && this->tableName_ == nullptr; };
            // content Field Functions 
            bool hasContent() const { return this->content_ != nullptr;};
            void deleteContent() { this->content_ = nullptr;};
            inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
            inline Scripts& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


            // opType Field Functions 
            bool hasOpType() const { return this->opType_ != nullptr;};
            void deleteOpType() { this->opType_ = nullptr;};
            inline string getOpType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
            inline Scripts& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


            // tableName Field Functions 
            bool hasTableName() const { return this->tableName_ != nullptr;};
            void deleteTableName() { this->tableName_ = nullptr;};
            inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
            inline Scripts& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


          protected:
            // The content of the SQL script.
            shared_ptr<string> content_ {};
            // The purpose of the SQL script. The value is set to AddIndex.
            shared_ptr<string> opType_ {};
            // The name of the table.
            shared_ptr<string> tableName_ {};
          };

          virtual bool empty() const override { return this->comments_ == nullptr
        && this->feedback_ == nullptr && this->messages_ == nullptr && this->ruleName_ == nullptr && this->ruleType_ == nullptr && this->scripts_ == nullptr; };
          // comments Field Functions 
          bool hasComments() const { return this->comments_ != nullptr;};
          void deleteComments() { this->comments_ = nullptr;};
          inline string getComments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
          inline Results& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


          // feedback Field Functions 
          bool hasFeedback() const { return this->feedback_ != nullptr;};
          void deleteFeedback() { this->feedback_ = nullptr;};
          inline string getFeedback() const { DARABONBA_PTR_GET_DEFAULT(feedback_, "") };
          inline Results& setFeedback(string feedback) { DARABONBA_PTR_SET_VALUE(feedback_, feedback) };


          // messages Field Functions 
          bool hasMessages() const { return this->messages_ != nullptr;};
          void deleteMessages() { this->messages_ = nullptr;};
          inline const vector<string> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<string>) };
          inline vector<string> getMessages() { DARABONBA_PTR_GET(messages_, vector<string>) };
          inline Results& setMessages(const vector<string> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
          inline Results& setMessages(vector<string> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


          // ruleName Field Functions 
          bool hasRuleName() const { return this->ruleName_ != nullptr;};
          void deleteRuleName() { this->ruleName_ = nullptr;};
          inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
          inline Results& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


          // ruleType Field Functions 
          bool hasRuleType() const { return this->ruleType_ != nullptr;};
          void deleteRuleType() { this->ruleType_ = nullptr;};
          inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
          inline Results& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


          // scripts Field Functions 
          bool hasScripts() const { return this->scripts_ != nullptr;};
          void deleteScripts() { this->scripts_ = nullptr;};
          inline const vector<Results::Scripts> & getScripts() const { DARABONBA_PTR_GET_CONST(scripts_, vector<Results::Scripts>) };
          inline vector<Results::Scripts> getScripts() { DARABONBA_PTR_GET(scripts_, vector<Results::Scripts>) };
          inline Results& setScripts(const vector<Results::Scripts> & scripts) { DARABONBA_PTR_SET_VALUE(scripts_, scripts) };
          inline Results& setScripts(vector<Results::Scripts> && scripts) { DARABONBA_PTR_SET_RVALUE(scripts_, scripts) };


        protected:
          // The comment that is specified when you create the SQL review rule. For more information, see [SQL review optimization](https://help.aliyun.com/document_detail/194114.html).
          shared_ptr<string> comments_ {};
          // The optimization suggestion for the SQL statement. Valid values:
          // 
          // *   **MUST_IMPROVE**: The SQL statement must be improved.
          // *   **POTENTIAL_ISSUE**: The SQL statement contains potential issues.
          // *   **SUGGEST_IMPROVE**: We recommend that you improve the SQL statement.
          // *   **USEDMSTOOLKIT**: We recommend that you change schemas without locking tables.
          // *   **USEDMSDML_UNLOCK**: We recommend that you change data without locking tables.
          // *   **TABLEINDEXSUGGEST**: We recommend that you use SQL statements that use indexes.
          shared_ptr<string> feedback_ {};
          // The review results.
          shared_ptr<vector<string>> messages_ {};
          // The name of the rule. For more information, see [SQL review optimization](https://help.aliyun.com/document_detail/194114.html).
          shared_ptr<string> ruleName_ {};
          // The type of the SQL review rule. Valid values:
          // 
          // *   **REVIEW**: a rule that is used to review SQL statements based on standards.
          // *   **OPTIMIZE**: a rule that is used to provide optimization suggestions.
          shared_ptr<string> ruleType_ {};
          // The SQL script for data changes.
          shared_ptr<vector<Results::Scripts>> scripts_ {};
        };

        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->occurError_ == nullptr && this->results_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline QualityResult& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // occurError Field Functions 
        bool hasOccurError() const { return this->occurError_ != nullptr;};
        void deleteOccurError() { this->occurError_ = nullptr;};
        inline bool getOccurError() const { DARABONBA_PTR_GET_DEFAULT(occurError_, false) };
        inline QualityResult& setOccurError(bool occurError) { DARABONBA_PTR_SET_VALUE(occurError_, occurError) };


        // results Field Functions 
        bool hasResults() const { return this->results_ != nullptr;};
        void deleteResults() { this->results_ = nullptr;};
        inline const vector<QualityResult::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<QualityResult::Results>) };
        inline vector<QualityResult::Results> getResults() { DARABONBA_PTR_GET(results_, vector<QualityResult::Results>) };
        inline QualityResult& setResults(const vector<QualityResult::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
        inline QualityResult& setResults(vector<QualityResult::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


      protected:
        // The error message returned.
        shared_ptr<string> errorMessage_ {};
        // Indicates whether an error occurs. Valid values:
        // 
        // *   **true**: An error occurs.
        // *   **false**: No error occurs.
        shared_ptr<bool> occurError_ {};
        // The review results based on rules.
        shared_ptr<vector<QualityResult::Results>> results_ {};
      };

      virtual bool empty() const override { return this->dbId_ == nullptr
        && this->instanceId_ == nullptr && this->qualityResult_ == nullptr && this->queryKey_ == nullptr && this->sqlType_ == nullptr; };
      // dbId Field Functions 
      bool hasDbId() const { return this->dbId_ != nullptr;};
      void deleteDbId() { this->dbId_ = nullptr;};
      inline int32_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
      inline OptimizeDetail& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline int32_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0) };
      inline OptimizeDetail& setInstanceId(int32_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // qualityResult Field Functions 
      bool hasQualityResult() const { return this->qualityResult_ != nullptr;};
      void deleteQualityResult() { this->qualityResult_ = nullptr;};
      inline const OptimizeDetail::QualityResult & getQualityResult() const { DARABONBA_PTR_GET_CONST(qualityResult_, OptimizeDetail::QualityResult) };
      inline OptimizeDetail::QualityResult getQualityResult() { DARABONBA_PTR_GET(qualityResult_, OptimizeDetail::QualityResult) };
      inline OptimizeDetail& setQualityResult(const OptimizeDetail::QualityResult & qualityResult) { DARABONBA_PTR_SET_VALUE(qualityResult_, qualityResult) };
      inline OptimizeDetail& setQualityResult(OptimizeDetail::QualityResult && qualityResult) { DARABONBA_PTR_SET_RVALUE(qualityResult_, qualityResult) };


      // queryKey Field Functions 
      bool hasQueryKey() const { return this->queryKey_ != nullptr;};
      void deleteQueryKey() { this->queryKey_ = nullptr;};
      inline string getQueryKey() const { DARABONBA_PTR_GET_DEFAULT(queryKey_, "") };
      inline OptimizeDetail& setQueryKey(string queryKey) { DARABONBA_PTR_SET_VALUE(queryKey_, queryKey) };


      // sqlType Field Functions 
      bool hasSqlType() const { return this->sqlType_ != nullptr;};
      void deleteSqlType() { this->sqlType_ = nullptr;};
      inline string getSqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
      inline OptimizeDetail& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


    protected:
      // The ID of the database.
      shared_ptr<int32_t> dbId_ {};
      // The ID of the instance to which the database belongs.
      shared_ptr<int32_t> instanceId_ {};
      // The quality of the SQL statement.
      shared_ptr<OptimizeDetail::QualityResult> qualityResult_ {};
      // The key that is used to query the details of optimization suggestions.
      shared_ptr<string> queryKey_ {};
      // The type of the SQL statement. Valid values: DELETE, UPDATE, and ALTER_TABLE.
      shared_ptr<string> sqlType_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->optimizeDetail_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetSQLReviewOptimizeDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetSQLReviewOptimizeDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // optimizeDetail Field Functions 
    bool hasOptimizeDetail() const { return this->optimizeDetail_ != nullptr;};
    void deleteOptimizeDetail() { this->optimizeDetail_ = nullptr;};
    inline const GetSQLReviewOptimizeDetailResponseBody::OptimizeDetail & getOptimizeDetail() const { DARABONBA_PTR_GET_CONST(optimizeDetail_, GetSQLReviewOptimizeDetailResponseBody::OptimizeDetail) };
    inline GetSQLReviewOptimizeDetailResponseBody::OptimizeDetail getOptimizeDetail() { DARABONBA_PTR_GET(optimizeDetail_, GetSQLReviewOptimizeDetailResponseBody::OptimizeDetail) };
    inline GetSQLReviewOptimizeDetailResponseBody& setOptimizeDetail(const GetSQLReviewOptimizeDetailResponseBody::OptimizeDetail & optimizeDetail) { DARABONBA_PTR_SET_VALUE(optimizeDetail_, optimizeDetail) };
    inline GetSQLReviewOptimizeDetailResponseBody& setOptimizeDetail(GetSQLReviewOptimizeDetailResponseBody::OptimizeDetail && optimizeDetail) { DARABONBA_PTR_SET_RVALUE(optimizeDetail_, optimizeDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSQLReviewOptimizeDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSQLReviewOptimizeDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned.
    shared_ptr<string> errorCode_ {};
    // The error message returned.
    shared_ptr<string> errorMessage_ {};
    // The details of optimization suggestions for SQL statements.
    shared_ptr<GetSQLReviewOptimizeDetailResponseBody::OptimizeDetail> optimizeDetail_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
