// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONRECORDRESPONSEBODY_HPP_
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
  class ListOperationRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OperationLogListResponse, operationLogListResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OperationLogListResponse, operationLogListResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListOperationRecordResponseBody() = default ;
    ListOperationRecordResponseBody(const ListOperationRecordResponseBody &) = default ;
    ListOperationRecordResponseBody(ListOperationRecordResponseBody &&) = default ;
    ListOperationRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationRecordResponseBody() = default ;
    ListOperationRecordResponseBody& operator=(const ListOperationRecordResponseBody &) = default ;
    ListOperationRecordResponseBody& operator=(ListOperationRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OperationLogListResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OperationLogListResponse& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(ResultData, resultData_);
      };
      friend void from_json(const Darabonba::Json& j, OperationLogListResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(ResultData, resultData_);
      };
      OperationLogListResponse() = default ;
      OperationLogListResponse(const OperationLogListResponse &) = default ;
      OperationLogListResponse(OperationLogListResponse &&) = default ;
      OperationLogListResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OperationLogListResponse() = default ;
      OperationLogListResponse& operator=(const OperationLogListResponse &) = default ;
      OperationLogListResponse& operator=(OperationLogListResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResultData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResultData& obj) { 
          DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
          DARABONBA_PTR_TO_JSON(CodeType, codeType_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
          DARABONBA_PTR_TO_JSON(OperationId, operationId_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(RelationTables, relationTables_);
          DARABONBA_PTR_TO_JSON(Runner, runner_);
          DARABONBA_PTR_TO_JSON(RunnerName, runnerName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        };
        friend void from_json(const Darabonba::Json& j, ResultData& obj) { 
          DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
          DARABONBA_PTR_FROM_JSON(CodeType, codeType_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
          DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(RelationTables, relationTables_);
          DARABONBA_PTR_FROM_JSON(Runner, runner_);
          DARABONBA_PTR_FROM_JSON(RunnerName, runnerName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        };
        ResultData() = default ;
        ResultData(const ResultData &) = default ;
        ResultData(ResultData &&) = default ;
        ResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResultData() = default ;
        ResultData& operator=(const ResultData &) = default ;
        ResultData& operator=(ResultData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->codeType_ == nullptr && this->duration_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->objectType_ == nullptr
        && this->operationId_ == nullptr && this->projectId_ == nullptr && this->relationTables_ == nullptr && this->runner_ == nullptr && this->runnerName_ == nullptr
        && this->status_ == nullptr && this->tenantId_ == nullptr; };
        // beginTime Field Functions 
        bool hasBeginTime() const { return this->beginTime_ != nullptr;};
        void deleteBeginTime() { this->beginTime_ = nullptr;};
        inline string getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
        inline ResultData& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


        // codeType Field Functions 
        bool hasCodeType() const { return this->codeType_ != nullptr;};
        void deleteCodeType() { this->codeType_ = nullptr;};
        inline int32_t getCodeType() const { DARABONBA_PTR_GET_DEFAULT(codeType_, 0) };
        inline ResultData& setCodeType(int32_t codeType) { DARABONBA_PTR_SET_VALUE(codeType_, codeType) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
        inline ResultData& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ResultData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ResultData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // objectType Field Functions 
        bool hasObjectType() const { return this->objectType_ != nullptr;};
        void deleteObjectType() { this->objectType_ = nullptr;};
        inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
        inline ResultData& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


        // operationId Field Functions 
        bool hasOperationId() const { return this->operationId_ != nullptr;};
        void deleteOperationId() { this->operationId_ = nullptr;};
        inline int64_t getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, 0L) };
        inline ResultData& setOperationId(int64_t operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline ResultData& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // relationTables Field Functions 
        bool hasRelationTables() const { return this->relationTables_ != nullptr;};
        void deleteRelationTables() { this->relationTables_ = nullptr;};
        inline const vector<string> & getRelationTables() const { DARABONBA_PTR_GET_CONST(relationTables_, vector<string>) };
        inline vector<string> getRelationTables() { DARABONBA_PTR_GET(relationTables_, vector<string>) };
        inline ResultData& setRelationTables(const vector<string> & relationTables) { DARABONBA_PTR_SET_VALUE(relationTables_, relationTables) };
        inline ResultData& setRelationTables(vector<string> && relationTables) { DARABONBA_PTR_SET_RVALUE(relationTables_, relationTables) };


        // runner Field Functions 
        bool hasRunner() const { return this->runner_ != nullptr;};
        void deleteRunner() { this->runner_ = nullptr;};
        inline string getRunner() const { DARABONBA_PTR_GET_DEFAULT(runner_, "") };
        inline ResultData& setRunner(string runner) { DARABONBA_PTR_SET_VALUE(runner_, runner) };


        // runnerName Field Functions 
        bool hasRunnerName() const { return this->runnerName_ != nullptr;};
        void deleteRunnerName() { this->runnerName_ = nullptr;};
        inline string getRunnerName() const { DARABONBA_PTR_GET_DEFAULT(runnerName_, "") };
        inline ResultData& setRunnerName(string runnerName) { DARABONBA_PTR_SET_VALUE(runnerName_, runnerName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline ResultData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
        inline ResultData& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      protected:
        // The start time.
        shared_ptr<string> beginTime_ {};
        // The code type.
        shared_ptr<int32_t> codeType_ {};
        // The execution duration, in milliseconds.
        shared_ptr<int64_t> duration_ {};
        // The record ID.
        shared_ptr<int64_t> id_ {};
        // The name.
        shared_ptr<string> name_ {};
        // The object type.
        shared_ptr<string> objectType_ {};
        // The operation record ID.
        shared_ptr<int64_t> operationId_ {};
        // The project ID.
        shared_ptr<int64_t> projectId_ {};
        // The list of related tables.
        shared_ptr<vector<string>> relationTables_ {};
        // The ID of the executor.
        shared_ptr<string> runner_ {};
        // The name of the executor.
        shared_ptr<string> runnerName_ {};
        // The task status.
        shared_ptr<int32_t> status_ {};
        // The tenant ID.
        shared_ptr<int64_t> tenantId_ {};
      };

      virtual bool empty() const override { return this->count_ == nullptr
        && this->resultData_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline OperationLogListResponse& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // resultData Field Functions 
      bool hasResultData() const { return this->resultData_ != nullptr;};
      void deleteResultData() { this->resultData_ = nullptr;};
      inline const vector<OperationLogListResponse::ResultData> & getResultData() const { DARABONBA_PTR_GET_CONST(resultData_, vector<OperationLogListResponse::ResultData>) };
      inline vector<OperationLogListResponse::ResultData> getResultData() { DARABONBA_PTR_GET(resultData_, vector<OperationLogListResponse::ResultData>) };
      inline OperationLogListResponse& setResultData(const vector<OperationLogListResponse::ResultData> & resultData) { DARABONBA_PTR_SET_VALUE(resultData_, resultData) };
      inline OperationLogListResponse& setResultData(vector<OperationLogListResponse::ResultData> && resultData) { DARABONBA_PTR_SET_RVALUE(resultData_, resultData) };


    protected:
      // The total number of records.
      shared_ptr<int32_t> count_ {};
      // The list of operation logs.
      shared_ptr<vector<OperationLogListResponse::ResultData>> resultData_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->operationLogListResponse_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListOperationRecordResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListOperationRecordResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListOperationRecordResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // operationLogListResponse Field Functions 
    bool hasOperationLogListResponse() const { return this->operationLogListResponse_ != nullptr;};
    void deleteOperationLogListResponse() { this->operationLogListResponse_ = nullptr;};
    inline const ListOperationRecordResponseBody::OperationLogListResponse & getOperationLogListResponse() const { DARABONBA_PTR_GET_CONST(operationLogListResponse_, ListOperationRecordResponseBody::OperationLogListResponse) };
    inline ListOperationRecordResponseBody::OperationLogListResponse getOperationLogListResponse() { DARABONBA_PTR_GET(operationLogListResponse_, ListOperationRecordResponseBody::OperationLogListResponse) };
    inline ListOperationRecordResponseBody& setOperationLogListResponse(const ListOperationRecordResponseBody::OperationLogListResponse & operationLogListResponse) { DARABONBA_PTR_SET_VALUE(operationLogListResponse_, operationLogListResponse) };
    inline ListOperationRecordResponseBody& setOperationLogListResponse(ListOperationRecordResponseBody::OperationLogListResponse && operationLogListResponse) { DARABONBA_PTR_SET_RVALUE(operationLogListResponse_, operationLogListResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOperationRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListOperationRecordResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The backend exception details.
    shared_ptr<string> message_ {};
    // The operation log list response.
    shared_ptr<ListOperationRecordResponseBody::OperationLogListResponse> operationLogListResponse_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
