// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAAGENTACCURACYTESTRESULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAAGENTACCURACYTESTRESULTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListDataAgentAccuracyTestResultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataAgentAccuracyTestResultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataAgentAccuracyTestResultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDataAgentAccuracyTestResultsResponseBody() = default ;
    ListDataAgentAccuracyTestResultsResponseBody(const ListDataAgentAccuracyTestResultsResponseBody &) = default ;
    ListDataAgentAccuracyTestResultsResponseBody(ListDataAgentAccuracyTestResultsResponseBody &&) = default ;
    ListDataAgentAccuracyTestResultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataAgentAccuracyTestResultsResponseBody() = default ;
    ListDataAgentAccuracyTestResultsResponseBody& operator=(const ListDataAgentAccuracyTestResultsResponseBody &) = default ;
    ListDataAgentAccuracyTestResultsResponseBody& operator=(ListDataAgentAccuracyTestResultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccuracyRate, accuracyRate_);
        DARABONBA_PTR_TO_JSON(AccuracyTestTaskId, accuracyTestTaskId_);
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(CorrectCount, correctCount_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalElements, totalElements_);
        DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccuracyRate, accuracyRate_);
        DARABONBA_PTR_FROM_JSON(AccuracyTestTaskId, accuracyTestTaskId_);
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(CorrectCount, correctCount_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalElements, totalElements_);
        DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
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
      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_PTR_TO_JSON(AccuracyTestTaskId, accuracyTestTaskId_);
          DARABONBA_PTR_TO_JSON(AgentResult, agentResult_);
          DARABONBA_PTR_TO_JSON(AnswerResult, answerResult_);
          DARABONBA_PTR_TO_JSON(AnswerSql, answerSql_);
          DARABONBA_PTR_TO_JSON(IsTrue, isTrue_);
          DARABONBA_PTR_TO_JSON(Question, question_);
          DARABONBA_PTR_TO_JSON(Reason, reason_);
          DARABONBA_PTR_TO_JSON(Recommendation, recommendation_);
          DARABONBA_PTR_TO_JSON(ResultId, resultId_);
          DARABONBA_PTR_TO_JSON(SubtaskId, subtaskId_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(AccuracyTestTaskId, accuracyTestTaskId_);
          DARABONBA_PTR_FROM_JSON(AgentResult, agentResult_);
          DARABONBA_PTR_FROM_JSON(AnswerResult, answerResult_);
          DARABONBA_PTR_FROM_JSON(AnswerSql, answerSql_);
          DARABONBA_PTR_FROM_JSON(IsTrue, isTrue_);
          DARABONBA_PTR_FROM_JSON(Question, question_);
          DARABONBA_PTR_FROM_JSON(Reason, reason_);
          DARABONBA_PTR_FROM_JSON(Recommendation, recommendation_);
          DARABONBA_PTR_FROM_JSON(ResultId, resultId_);
          DARABONBA_PTR_FROM_JSON(SubtaskId, subtaskId_);
        };
        Content() = default ;
        Content(const Content &) = default ;
        Content(Content &&) = default ;
        Content(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Content() = default ;
        Content& operator=(const Content &) = default ;
        Content& operator=(Content &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accuracyTestTaskId_ == nullptr
        && this->agentResult_ == nullptr && this->answerResult_ == nullptr && this->answerSql_ == nullptr && this->isTrue_ == nullptr && this->question_ == nullptr
        && this->reason_ == nullptr && this->recommendation_ == nullptr && this->resultId_ == nullptr && this->subtaskId_ == nullptr; };
        // accuracyTestTaskId Field Functions 
        bool hasAccuracyTestTaskId() const { return this->accuracyTestTaskId_ != nullptr;};
        void deleteAccuracyTestTaskId() { this->accuracyTestTaskId_ = nullptr;};
        inline string getAccuracyTestTaskId() const { DARABONBA_PTR_GET_DEFAULT(accuracyTestTaskId_, "") };
        inline Content& setAccuracyTestTaskId(string accuracyTestTaskId) { DARABONBA_PTR_SET_VALUE(accuracyTestTaskId_, accuracyTestTaskId) };


        // agentResult Field Functions 
        bool hasAgentResult() const { return this->agentResult_ != nullptr;};
        void deleteAgentResult() { this->agentResult_ = nullptr;};
        inline string getAgentResult() const { DARABONBA_PTR_GET_DEFAULT(agentResult_, "") };
        inline Content& setAgentResult(string agentResult) { DARABONBA_PTR_SET_VALUE(agentResult_, agentResult) };


        // answerResult Field Functions 
        bool hasAnswerResult() const { return this->answerResult_ != nullptr;};
        void deleteAnswerResult() { this->answerResult_ = nullptr;};
        inline string getAnswerResult() const { DARABONBA_PTR_GET_DEFAULT(answerResult_, "") };
        inline Content& setAnswerResult(string answerResult) { DARABONBA_PTR_SET_VALUE(answerResult_, answerResult) };


        // answerSql Field Functions 
        bool hasAnswerSql() const { return this->answerSql_ != nullptr;};
        void deleteAnswerSql() { this->answerSql_ = nullptr;};
        inline string getAnswerSql() const { DARABONBA_PTR_GET_DEFAULT(answerSql_, "") };
        inline Content& setAnswerSql(string answerSql) { DARABONBA_PTR_SET_VALUE(answerSql_, answerSql) };


        // isTrue Field Functions 
        bool hasIsTrue() const { return this->isTrue_ != nullptr;};
        void deleteIsTrue() { this->isTrue_ = nullptr;};
        inline bool getIsTrue() const { DARABONBA_PTR_GET_DEFAULT(isTrue_, false) };
        inline Content& setIsTrue(bool isTrue) { DARABONBA_PTR_SET_VALUE(isTrue_, isTrue) };


        // question Field Functions 
        bool hasQuestion() const { return this->question_ != nullptr;};
        void deleteQuestion() { this->question_ = nullptr;};
        inline string getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
        inline Content& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline Content& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


        // recommendation Field Functions 
        bool hasRecommendation() const { return this->recommendation_ != nullptr;};
        void deleteRecommendation() { this->recommendation_ = nullptr;};
        inline string getRecommendation() const { DARABONBA_PTR_GET_DEFAULT(recommendation_, "") };
        inline Content& setRecommendation(string recommendation) { DARABONBA_PTR_SET_VALUE(recommendation_, recommendation) };


        // resultId Field Functions 
        bool hasResultId() const { return this->resultId_ != nullptr;};
        void deleteResultId() { this->resultId_ = nullptr;};
        inline string getResultId() const { DARABONBA_PTR_GET_DEFAULT(resultId_, "") };
        inline Content& setResultId(string resultId) { DARABONBA_PTR_SET_VALUE(resultId_, resultId) };


        // subtaskId Field Functions 
        bool hasSubtaskId() const { return this->subtaskId_ != nullptr;};
        void deleteSubtaskId() { this->subtaskId_ = nullptr;};
        inline string getSubtaskId() const { DARABONBA_PTR_GET_DEFAULT(subtaskId_, "") };
        inline Content& setSubtaskId(string subtaskId) { DARABONBA_PTR_SET_VALUE(subtaskId_, subtaskId) };


      protected:
        // The ID of the accuracy test task.
        shared_ptr<string> accuracyTestTaskId_ {};
        // The actual answer returned by the agent.
        shared_ptr<string> agentResult_ {};
        // The expected answer.
        shared_ptr<string> answerResult_ {};
        // The expected SQL statement.
        shared_ptr<string> answerSql_ {};
        // The AI evaluation result.
        shared_ptr<bool> isTrue_ {};
        // The test question.
        shared_ptr<string> question_ {};
        // The error reason.
        shared_ptr<string> reason_ {};
        // The improvement suggestion.
        shared_ptr<string> recommendation_ {};
        // The result ID.
        shared_ptr<string> resultId_ {};
        // The subtask ID.
        shared_ptr<string> subtaskId_ {};
      };

      virtual bool empty() const override { return this->accuracyRate_ == nullptr
        && this->accuracyTestTaskId_ == nullptr && this->content_ == nullptr && this->correctCount_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->totalElements_ == nullptr && this->totalPages_ == nullptr; };
      // accuracyRate Field Functions 
      bool hasAccuracyRate() const { return this->accuracyRate_ != nullptr;};
      void deleteAccuracyRate() { this->accuracyRate_ = nullptr;};
      inline double getAccuracyRate() const { DARABONBA_PTR_GET_DEFAULT(accuracyRate_, 0.0) };
      inline Data& setAccuracyRate(double accuracyRate) { DARABONBA_PTR_SET_VALUE(accuracyRate_, accuracyRate) };


      // accuracyTestTaskId Field Functions 
      bool hasAccuracyTestTaskId() const { return this->accuracyTestTaskId_ != nullptr;};
      void deleteAccuracyTestTaskId() { this->accuracyTestTaskId_ = nullptr;};
      inline string getAccuracyTestTaskId() const { DARABONBA_PTR_GET_DEFAULT(accuracyTestTaskId_, "") };
      inline Data& setAccuracyTestTaskId(string accuracyTestTaskId) { DARABONBA_PTR_SET_VALUE(accuracyTestTaskId_, accuracyTestTaskId) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const vector<Data::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Data::Content>) };
      inline vector<Data::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Data::Content>) };
      inline Data& setContent(const vector<Data::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline Data& setContent(vector<Data::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // correctCount Field Functions 
      bool hasCorrectCount() const { return this->correctCount_ != nullptr;};
      void deleteCorrectCount() { this->correctCount_ = nullptr;};
      inline int64_t getCorrectCount() const { DARABONBA_PTR_GET_DEFAULT(correctCount_, 0L) };
      inline Data& setCorrectCount(int64_t correctCount) { DARABONBA_PTR_SET_VALUE(correctCount_, correctCount) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Data& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalElements Field Functions 
      bool hasTotalElements() const { return this->totalElements_ != nullptr;};
      void deleteTotalElements() { this->totalElements_ = nullptr;};
      inline int32_t getTotalElements() const { DARABONBA_PTR_GET_DEFAULT(totalElements_, 0) };
      inline Data& setTotalElements(int32_t totalElements) { DARABONBA_PTR_SET_VALUE(totalElements_, totalElements) };


      // totalPages Field Functions 
      bool hasTotalPages() const { return this->totalPages_ != nullptr;};
      void deleteTotalPages() { this->totalPages_ = nullptr;};
      inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
      inline Data& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


    protected:
      // The accuracy rate.
      shared_ptr<double> accuracyRate_ {};
      // The ID of the accuracy test task.
      shared_ptr<string> accuracyTestTaskId_ {};
      // The data content.
      shared_ptr<vector<Data::Content>> content_ {};
      // The number of test cases that passed evaluation.
      shared_ptr<int64_t> correctCount_ {};
      // The page number.
      shared_ptr<int64_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int64_t> pageSize_ {};
      // The total number of results.
      shared_ptr<int32_t> totalElements_ {};
      // The total number of pages.
      shared_ptr<int32_t> totalPages_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListDataAgentAccuracyTestResultsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListDataAgentAccuracyTestResultsResponseBody::Data) };
    inline ListDataAgentAccuracyTestResultsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListDataAgentAccuracyTestResultsResponseBody::Data) };
    inline ListDataAgentAccuracyTestResultsResponseBody& setData(const ListDataAgentAccuracyTestResultsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDataAgentAccuracyTestResultsResponseBody& setData(ListDataAgentAccuracyTestResultsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListDataAgentAccuracyTestResultsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDataAgentAccuracyTestResultsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDataAgentAccuracyTestResultsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDataAgentAccuracyTestResultsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataAgentAccuracyTestResultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataAgentAccuracyTestResultsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response struct.
    shared_ptr<ListDataAgentAccuracyTestResultsResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the call failed.
    shared_ptr<string> errorMessage_ {};
    // The maximum number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token.
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // - **true**: The request was successful.
    // - **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
