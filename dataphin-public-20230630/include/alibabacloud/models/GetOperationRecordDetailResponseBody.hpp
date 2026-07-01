// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPERATIONRECORDDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOPERATIONRECORDDETAILRESPONSEBODY_HPP_
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
  class GetOperationRecordDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOperationRecordDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OperationRecordDetailResponse, operationRecordDetailResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetOperationRecordDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OperationRecordDetailResponse, operationRecordDetailResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetOperationRecordDetailResponseBody() = default ;
    GetOperationRecordDetailResponseBody(const GetOperationRecordDetailResponseBody &) = default ;
    GetOperationRecordDetailResponseBody(GetOperationRecordDetailResponseBody &&) = default ;
    GetOperationRecordDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOperationRecordDetailResponseBody() = default ;
    GetOperationRecordDetailResponseBody& operator=(const GetOperationRecordDetailResponseBody &) = default ;
    GetOperationRecordDetailResponseBody& operator=(GetOperationRecordDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OperationRecordDetailResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OperationRecordDetailResponse& obj) { 
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(LogContent, logContent_);
        DARABONBA_PTR_TO_JSON(OperationId, operationId_);
        DARABONBA_PTR_TO_JSON(Results, results_);
      };
      friend void from_json(const Darabonba::Json& j, OperationRecordDetailResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(LogContent, logContent_);
        DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
        DARABONBA_PTR_FROM_JSON(Results, results_);
      };
      OperationRecordDetailResponse() = default ;
      OperationRecordDetailResponse(const OperationRecordDetailResponse &) = default ;
      OperationRecordDetailResponse(OperationRecordDetailResponse &&) = default ;
      OperationRecordDetailResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OperationRecordDetailResponse() = default ;
      OperationRecordDetailResponse& operator=(const OperationRecordDetailResponse &) = default ;
      OperationRecordDetailResponse& operator=(OperationRecordDetailResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Results : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Results& obj) { 
          DARABONBA_PTR_TO_JSON(Index, index_);
          DARABONBA_PTR_TO_JSON(Result, result_);
          DARABONBA_PTR_TO_JSON(Sql, sql_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, Results& obj) { 
          DARABONBA_PTR_FROM_JSON(Index, index_);
          DARABONBA_PTR_FROM_JSON(Result, result_);
          DARABONBA_PTR_FROM_JSON(Sql, sql_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
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
        virtual bool empty() const override { return this->index_ == nullptr
        && this->result_ == nullptr && this->sql_ == nullptr && this->taskId_ == nullptr && this->title_ == nullptr; };
        // index Field Functions 
        bool hasIndex() const { return this->index_ != nullptr;};
        void deleteIndex() { this->index_ = nullptr;};
        inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
        inline Results& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
        inline Results& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


        // sql Field Functions 
        bool hasSql() const { return this->sql_ != nullptr;};
        void deleteSql() { this->sql_ = nullptr;};
        inline string getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
        inline Results& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline Results& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Results& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // The result index.
        shared_ptr<int32_t> index_ {};
        // The result content.
        shared_ptr<string> result_ {};
        // The result SQL statement.
        shared_ptr<string> sql_ {};
        // The task ID.
        shared_ptr<string> taskId_ {};
        // The result title.
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->fileId_ == nullptr
        && this->logContent_ == nullptr && this->operationId_ == nullptr && this->results_ == nullptr; };
      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
      inline OperationRecordDetailResponse& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // logContent Field Functions 
      bool hasLogContent() const { return this->logContent_ != nullptr;};
      void deleteLogContent() { this->logContent_ = nullptr;};
      inline string getLogContent() const { DARABONBA_PTR_GET_DEFAULT(logContent_, "") };
      inline OperationRecordDetailResponse& setLogContent(string logContent) { DARABONBA_PTR_SET_VALUE(logContent_, logContent) };


      // operationId Field Functions 
      bool hasOperationId() const { return this->operationId_ != nullptr;};
      void deleteOperationId() { this->operationId_ = nullptr;};
      inline string getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
      inline OperationRecordDetailResponse& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


      // results Field Functions 
      bool hasResults() const { return this->results_ != nullptr;};
      void deleteResults() { this->results_ = nullptr;};
      inline const vector<OperationRecordDetailResponse::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<OperationRecordDetailResponse::Results>) };
      inline vector<OperationRecordDetailResponse::Results> getResults() { DARABONBA_PTR_GET(results_, vector<OperationRecordDetailResponse::Results>) };
      inline OperationRecordDetailResponse& setResults(const vector<OperationRecordDetailResponse::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
      inline OperationRecordDetailResponse& setResults(vector<OperationRecordDetailResponse::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    protected:
      // The file ID.
      shared_ptr<int64_t> fileId_ {};
      // The log content.
      shared_ptr<string> logContent_ {};
      // The operation record ID.
      shared_ptr<string> operationId_ {};
      // The list of execution results.
      shared_ptr<vector<OperationRecordDetailResponse::Results>> results_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->operationRecordDetailResponse_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetOperationRecordDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetOperationRecordDetailResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetOperationRecordDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // operationRecordDetailResponse Field Functions 
    bool hasOperationRecordDetailResponse() const { return this->operationRecordDetailResponse_ != nullptr;};
    void deleteOperationRecordDetailResponse() { this->operationRecordDetailResponse_ = nullptr;};
    inline const GetOperationRecordDetailResponseBody::OperationRecordDetailResponse & getOperationRecordDetailResponse() const { DARABONBA_PTR_GET_CONST(operationRecordDetailResponse_, GetOperationRecordDetailResponseBody::OperationRecordDetailResponse) };
    inline GetOperationRecordDetailResponseBody::OperationRecordDetailResponse getOperationRecordDetailResponse() { DARABONBA_PTR_GET(operationRecordDetailResponse_, GetOperationRecordDetailResponseBody::OperationRecordDetailResponse) };
    inline GetOperationRecordDetailResponseBody& setOperationRecordDetailResponse(const GetOperationRecordDetailResponseBody::OperationRecordDetailResponse & operationRecordDetailResponse) { DARABONBA_PTR_SET_VALUE(operationRecordDetailResponse_, operationRecordDetailResponse) };
    inline GetOperationRecordDetailResponseBody& setOperationRecordDetailResponse(GetOperationRecordDetailResponseBody::OperationRecordDetailResponse && operationRecordDetailResponse) { DARABONBA_PTR_SET_RVALUE(operationRecordDetailResponse_, operationRecordDetailResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOperationRecordDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetOperationRecordDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The backend exception details.
    shared_ptr<string> message_ {};
    // The execution record detail response.
    shared_ptr<GetOperationRecordDetailResponseBody::OperationRecordDetailResponse> operationRecordDetailResponse_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
