// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPERATIONRECORDBYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOPERATIONRECORDBYIDRESPONSEBODY_HPP_
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
  class GetOperationRecordByIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOperationRecordByIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OperationLogDTO, operationLogDTO_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetOperationRecordByIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OperationLogDTO, operationLogDTO_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetOperationRecordByIdResponseBody() = default ;
    GetOperationRecordByIdResponseBody(const GetOperationRecordByIdResponseBody &) = default ;
    GetOperationRecordByIdResponseBody(GetOperationRecordByIdResponseBody &&) = default ;
    GetOperationRecordByIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOperationRecordByIdResponseBody() = default ;
    GetOperationRecordByIdResponseBody& operator=(const GetOperationRecordByIdResponseBody &) = default ;
    GetOperationRecordByIdResponseBody& operator=(GetOperationRecordByIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OperationLogDTO : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OperationLogDTO& obj) { 
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
      friend void from_json(const Darabonba::Json& j, OperationLogDTO& obj) { 
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
      OperationLogDTO() = default ;
      OperationLogDTO(const OperationLogDTO &) = default ;
      OperationLogDTO(OperationLogDTO &&) = default ;
      OperationLogDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OperationLogDTO() = default ;
      OperationLogDTO& operator=(const OperationLogDTO &) = default ;
      OperationLogDTO& operator=(OperationLogDTO &&) = default ;
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
      inline OperationLogDTO& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


      // codeType Field Functions 
      bool hasCodeType() const { return this->codeType_ != nullptr;};
      void deleteCodeType() { this->codeType_ = nullptr;};
      inline int32_t getCodeType() const { DARABONBA_PTR_GET_DEFAULT(codeType_, 0) };
      inline OperationLogDTO& setCodeType(int32_t codeType) { DARABONBA_PTR_SET_VALUE(codeType_, codeType) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline OperationLogDTO& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline OperationLogDTO& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline OperationLogDTO& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // objectType Field Functions 
      bool hasObjectType() const { return this->objectType_ != nullptr;};
      void deleteObjectType() { this->objectType_ = nullptr;};
      inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
      inline OperationLogDTO& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


      // operationId Field Functions 
      bool hasOperationId() const { return this->operationId_ != nullptr;};
      void deleteOperationId() { this->operationId_ = nullptr;};
      inline int64_t getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, 0L) };
      inline OperationLogDTO& setOperationId(int64_t operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline OperationLogDTO& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // relationTables Field Functions 
      bool hasRelationTables() const { return this->relationTables_ != nullptr;};
      void deleteRelationTables() { this->relationTables_ = nullptr;};
      inline const vector<string> & getRelationTables() const { DARABONBA_PTR_GET_CONST(relationTables_, vector<string>) };
      inline vector<string> getRelationTables() { DARABONBA_PTR_GET(relationTables_, vector<string>) };
      inline OperationLogDTO& setRelationTables(const vector<string> & relationTables) { DARABONBA_PTR_SET_VALUE(relationTables_, relationTables) };
      inline OperationLogDTO& setRelationTables(vector<string> && relationTables) { DARABONBA_PTR_SET_RVALUE(relationTables_, relationTables) };


      // runner Field Functions 
      bool hasRunner() const { return this->runner_ != nullptr;};
      void deleteRunner() { this->runner_ = nullptr;};
      inline string getRunner() const { DARABONBA_PTR_GET_DEFAULT(runner_, "") };
      inline OperationLogDTO& setRunner(string runner) { DARABONBA_PTR_SET_VALUE(runner_, runner) };


      // runnerName Field Functions 
      bool hasRunnerName() const { return this->runnerName_ != nullptr;};
      void deleteRunnerName() { this->runnerName_ = nullptr;};
      inline string getRunnerName() const { DARABONBA_PTR_GET_DEFAULT(runnerName_, "") };
      inline OperationLogDTO& setRunnerName(string runnerName) { DARABONBA_PTR_SET_VALUE(runnerName_, runnerName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline OperationLogDTO& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
      inline OperationLogDTO& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> beginTime_ {};
      shared_ptr<int32_t> codeType_ {};
      shared_ptr<int64_t> duration_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> objectType_ {};
      shared_ptr<int64_t> operationId_ {};
      shared_ptr<int64_t> projectId_ {};
      shared_ptr<vector<string>> relationTables_ {};
      shared_ptr<string> runner_ {};
      shared_ptr<string> runnerName_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<int64_t> tenantId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->operationLogDTO_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetOperationRecordByIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetOperationRecordByIdResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetOperationRecordByIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // operationLogDTO Field Functions 
    bool hasOperationLogDTO() const { return this->operationLogDTO_ != nullptr;};
    void deleteOperationLogDTO() { this->operationLogDTO_ = nullptr;};
    inline const GetOperationRecordByIdResponseBody::OperationLogDTO & getOperationLogDTO() const { DARABONBA_PTR_GET_CONST(operationLogDTO_, GetOperationRecordByIdResponseBody::OperationLogDTO) };
    inline GetOperationRecordByIdResponseBody::OperationLogDTO getOperationLogDTO() { DARABONBA_PTR_GET(operationLogDTO_, GetOperationRecordByIdResponseBody::OperationLogDTO) };
    inline GetOperationRecordByIdResponseBody& setOperationLogDTO(const GetOperationRecordByIdResponseBody::OperationLogDTO & operationLogDTO) { DARABONBA_PTR_SET_VALUE(operationLogDTO_, operationLogDTO) };
    inline GetOperationRecordByIdResponseBody& setOperationLogDTO(GetOperationRecordByIdResponseBody::OperationLogDTO && operationLogDTO) { DARABONBA_PTR_SET_RVALUE(operationLogDTO_, operationLogDTO) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOperationRecordByIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetOperationRecordByIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<GetOperationRecordByIdResponseBody::OperationLogDTO> operationLogDTO_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
