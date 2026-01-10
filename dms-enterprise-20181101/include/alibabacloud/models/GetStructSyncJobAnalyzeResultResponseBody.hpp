// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTRUCTSYNCJOBANALYZERESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTRUCTSYNCJOBANALYZERESULTRESPONSEBODY_HPP_
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
  class GetStructSyncJobAnalyzeResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStructSyncJobAnalyzeResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StructSyncJobAnalyzeResult, structSyncJobAnalyzeResult_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetStructSyncJobAnalyzeResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StructSyncJobAnalyzeResult, structSyncJobAnalyzeResult_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetStructSyncJobAnalyzeResultResponseBody() = default ;
    GetStructSyncJobAnalyzeResultResponseBody(const GetStructSyncJobAnalyzeResultResponseBody &) = default ;
    GetStructSyncJobAnalyzeResultResponseBody(GetStructSyncJobAnalyzeResultResponseBody &&) = default ;
    GetStructSyncJobAnalyzeResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStructSyncJobAnalyzeResultResponseBody() = default ;
    GetStructSyncJobAnalyzeResultResponseBody& operator=(const GetStructSyncJobAnalyzeResultResponseBody &) = default ;
    GetStructSyncJobAnalyzeResultResponseBody& operator=(GetStructSyncJobAnalyzeResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StructSyncJobAnalyzeResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StructSyncJobAnalyzeResult& obj) { 
        DARABONBA_PTR_TO_JSON(ResultList, resultList_);
        DARABONBA_PTR_TO_JSON(SummaryList, summaryList_);
      };
      friend void from_json(const Darabonba::Json& j, StructSyncJobAnalyzeResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ResultList, resultList_);
        DARABONBA_PTR_FROM_JSON(SummaryList, summaryList_);
      };
      StructSyncJobAnalyzeResult() = default ;
      StructSyncJobAnalyzeResult(const StructSyncJobAnalyzeResult &) = default ;
      StructSyncJobAnalyzeResult(StructSyncJobAnalyzeResult &&) = default ;
      StructSyncJobAnalyzeResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StructSyncJobAnalyzeResult() = default ;
      StructSyncJobAnalyzeResult& operator=(const StructSyncJobAnalyzeResult &) = default ;
      StructSyncJobAnalyzeResult& operator=(StructSyncJobAnalyzeResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SummaryList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SummaryList& obj) { 
          DARABONBA_PTR_TO_JSON(CompareType, compareType_);
          DARABONBA_PTR_TO_JSON(Count, count_);
        };
        friend void from_json(const Darabonba::Json& j, SummaryList& obj) { 
          DARABONBA_PTR_FROM_JSON(CompareType, compareType_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
        };
        SummaryList() = default ;
        SummaryList(const SummaryList &) = default ;
        SummaryList(SummaryList &&) = default ;
        SummaryList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SummaryList() = default ;
        SummaryList& operator=(const SummaryList &) = default ;
        SummaryList& operator=(SummaryList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->compareType_ == nullptr
        && this->count_ == nullptr; };
        // compareType Field Functions 
        bool hasCompareType() const { return this->compareType_ != nullptr;};
        void deleteCompareType() { this->compareType_ = nullptr;};
        inline string getCompareType() const { DARABONBA_PTR_GET_DEFAULT(compareType_, "") };
        inline SummaryList& setCompareType(string compareType) { DARABONBA_PTR_SET_VALUE(compareType_, compareType) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline SummaryList& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      protected:
        // The type of the comparison. Valid values:
        // 
        // *   **CREATE_TABLE**: compares the created tables.
        // *   **ALTER_TABLE**: compares the modified tables.
        // *   **EQUAL_TABLE**: compares the identical tables.
        // *   **PASS_TABLE**: compares the tables that are skipped during schema synchronization.
        // *   **NOT_COMPARE**: does not compare tables.
        shared_ptr<string> compareType_ {};
        // The number of tables.
        shared_ptr<int64_t> count_ {};
      };

      class ResultList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResultList& obj) { 
          DARABONBA_PTR_TO_JSON(Script, script_);
          DARABONBA_PTR_TO_JSON(SourceTableName, sourceTableName_);
          DARABONBA_PTR_TO_JSON(TargetTableName, targetTableName_);
        };
        friend void from_json(const Darabonba::Json& j, ResultList& obj) { 
          DARABONBA_PTR_FROM_JSON(Script, script_);
          DARABONBA_PTR_FROM_JSON(SourceTableName, sourceTableName_);
          DARABONBA_PTR_FROM_JSON(TargetTableName, targetTableName_);
        };
        ResultList() = default ;
        ResultList(const ResultList &) = default ;
        ResultList(ResultList &&) = default ;
        ResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResultList() = default ;
        ResultList& operator=(const ResultList &) = default ;
        ResultList& operator=(ResultList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->script_ == nullptr
        && this->sourceTableName_ == nullptr && this->targetTableName_ == nullptr; };
        // script Field Functions 
        bool hasScript() const { return this->script_ != nullptr;};
        void deleteScript() { this->script_ = nullptr;};
        inline string getScript() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
        inline ResultList& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


        // sourceTableName Field Functions 
        bool hasSourceTableName() const { return this->sourceTableName_ != nullptr;};
        void deleteSourceTableName() { this->sourceTableName_ = nullptr;};
        inline string getSourceTableName() const { DARABONBA_PTR_GET_DEFAULT(sourceTableName_, "") };
        inline ResultList& setSourceTableName(string sourceTableName) { DARABONBA_PTR_SET_VALUE(sourceTableName_, sourceTableName) };


        // targetTableName Field Functions 
        bool hasTargetTableName() const { return this->targetTableName_ != nullptr;};
        void deleteTargetTableName() { this->targetTableName_ = nullptr;};
        inline string getTargetTableName() const { DARABONBA_PTR_GET_DEFAULT(targetTableName_, "") };
        inline ResultList& setTargetTableName(string targetTableName) { DARABONBA_PTR_SET_VALUE(targetTableName_, targetTableName) };


      protected:
        // The SQL script.
        shared_ptr<string> script_ {};
        // The name of the source table.
        shared_ptr<string> sourceTableName_ {};
        // The name of the destination table.
        shared_ptr<string> targetTableName_ {};
      };

      virtual bool empty() const override { return this->resultList_ == nullptr
        && this->summaryList_ == nullptr; };
      // resultList Field Functions 
      bool hasResultList() const { return this->resultList_ != nullptr;};
      void deleteResultList() { this->resultList_ = nullptr;};
      inline const vector<StructSyncJobAnalyzeResult::ResultList> & getResultList() const { DARABONBA_PTR_GET_CONST(resultList_, vector<StructSyncJobAnalyzeResult::ResultList>) };
      inline vector<StructSyncJobAnalyzeResult::ResultList> getResultList() { DARABONBA_PTR_GET(resultList_, vector<StructSyncJobAnalyzeResult::ResultList>) };
      inline StructSyncJobAnalyzeResult& setResultList(const vector<StructSyncJobAnalyzeResult::ResultList> & resultList) { DARABONBA_PTR_SET_VALUE(resultList_, resultList) };
      inline StructSyncJobAnalyzeResult& setResultList(vector<StructSyncJobAnalyzeResult::ResultList> && resultList) { DARABONBA_PTR_SET_RVALUE(resultList_, resultList) };


      // summaryList Field Functions 
      bool hasSummaryList() const { return this->summaryList_ != nullptr;};
      void deleteSummaryList() { this->summaryList_ = nullptr;};
      inline const vector<StructSyncJobAnalyzeResult::SummaryList> & getSummaryList() const { DARABONBA_PTR_GET_CONST(summaryList_, vector<StructSyncJobAnalyzeResult::SummaryList>) };
      inline vector<StructSyncJobAnalyzeResult::SummaryList> getSummaryList() { DARABONBA_PTR_GET(summaryList_, vector<StructSyncJobAnalyzeResult::SummaryList>) };
      inline StructSyncJobAnalyzeResult& setSummaryList(const vector<StructSyncJobAnalyzeResult::SummaryList> & summaryList) { DARABONBA_PTR_SET_VALUE(summaryList_, summaryList) };
      inline StructSyncJobAnalyzeResult& setSummaryList(vector<StructSyncJobAnalyzeResult::SummaryList> && summaryList) { DARABONBA_PTR_SET_RVALUE(summaryList_, summaryList) };


    protected:
      // The details of the analysis results.
      shared_ptr<vector<StructSyncJobAnalyzeResult::ResultList>> resultList_ {};
      // The statistics on the analysis results.
      shared_ptr<vector<StructSyncJobAnalyzeResult::SummaryList>> summaryList_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->structSyncJobAnalyzeResult_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetStructSyncJobAnalyzeResultResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetStructSyncJobAnalyzeResultResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStructSyncJobAnalyzeResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // structSyncJobAnalyzeResult Field Functions 
    bool hasStructSyncJobAnalyzeResult() const { return this->structSyncJobAnalyzeResult_ != nullptr;};
    void deleteStructSyncJobAnalyzeResult() { this->structSyncJobAnalyzeResult_ = nullptr;};
    inline const GetStructSyncJobAnalyzeResultResponseBody::StructSyncJobAnalyzeResult & getStructSyncJobAnalyzeResult() const { DARABONBA_PTR_GET_CONST(structSyncJobAnalyzeResult_, GetStructSyncJobAnalyzeResultResponseBody::StructSyncJobAnalyzeResult) };
    inline GetStructSyncJobAnalyzeResultResponseBody::StructSyncJobAnalyzeResult getStructSyncJobAnalyzeResult() { DARABONBA_PTR_GET(structSyncJobAnalyzeResult_, GetStructSyncJobAnalyzeResultResponseBody::StructSyncJobAnalyzeResult) };
    inline GetStructSyncJobAnalyzeResultResponseBody& setStructSyncJobAnalyzeResult(const GetStructSyncJobAnalyzeResultResponseBody::StructSyncJobAnalyzeResult & structSyncJobAnalyzeResult) { DARABONBA_PTR_SET_VALUE(structSyncJobAnalyzeResult_, structSyncJobAnalyzeResult) };
    inline GetStructSyncJobAnalyzeResultResponseBody& setStructSyncJobAnalyzeResult(GetStructSyncJobAnalyzeResultResponseBody::StructSyncJobAnalyzeResult && structSyncJobAnalyzeResult) { DARABONBA_PTR_SET_RVALUE(structSyncJobAnalyzeResult_, structSyncJobAnalyzeResult) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetStructSyncJobAnalyzeResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The analysis result of the schema synchronization task.
    shared_ptr<GetStructSyncJobAnalyzeResultResponseBody::StructSyncJobAnalyzeResult> structSyncJobAnalyzeResult_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
