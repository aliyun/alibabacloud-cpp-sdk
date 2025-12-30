// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPERATIONSUBMITSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOPERATIONSUBMITSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetOperationSubmitStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOperationSubmitStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OperationSubmitJob, operationSubmitJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetOperationSubmitStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OperationSubmitJob, operationSubmitJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetOperationSubmitStatusResponseBody() = default ;
    GetOperationSubmitStatusResponseBody(const GetOperationSubmitStatusResponseBody &) = default ;
    GetOperationSubmitStatusResponseBody(GetOperationSubmitStatusResponseBody &&) = default ;
    GetOperationSubmitStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOperationSubmitStatusResponseBody() = default ;
    GetOperationSubmitStatusResponseBody& operator=(const GetOperationSubmitStatusResponseBody &) = default ;
    GetOperationSubmitStatusResponseBody& operator=(GetOperationSubmitStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OperationSubmitJob : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OperationSubmitJob& obj) { 
        DARABONBA_PTR_TO_JSON(ExternalBizId, externalBizId_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Operation, operation_);
        DARABONBA_PTR_TO_JSON(OperationStatus, operationStatus_);
        DARABONBA_PTR_TO_JSON(Operator, operator_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
      };
      friend void from_json(const Darabonba::Json& j, OperationSubmitJob& obj) { 
        DARABONBA_PTR_FROM_JSON(ExternalBizId, externalBizId_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Operation, operation_);
        DARABONBA_PTR_FROM_JSON(OperationStatus, operationStatus_);
        DARABONBA_PTR_FROM_JSON(Operator, operator_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
      };
      OperationSubmitJob() = default ;
      OperationSubmitJob(const OperationSubmitJob &) = default ;
      OperationSubmitJob(OperationSubmitJob &&) = default ;
      OperationSubmitJob(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OperationSubmitJob() = default ;
      OperationSubmitJob& operator=(const OperationSubmitJob &) = default ;
      OperationSubmitJob& operator=(OperationSubmitJob &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->externalBizId_ == nullptr
        && this->jobId_ == nullptr && this->operation_ == nullptr && this->operationStatus_ == nullptr && this->operator_ == nullptr && this->progress_ == nullptr; };
      // externalBizId Field Functions 
      bool hasExternalBizId() const { return this->externalBizId_ != nullptr;};
      void deleteExternalBizId() { this->externalBizId_ = nullptr;};
      inline string getExternalBizId() const { DARABONBA_PTR_GET_DEFAULT(externalBizId_, "") };
      inline OperationSubmitJob& setExternalBizId(string externalBizId) { DARABONBA_PTR_SET_VALUE(externalBizId_, externalBizId) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline OperationSubmitJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // operation Field Functions 
      bool hasOperation() const { return this->operation_ != nullptr;};
      void deleteOperation() { this->operation_ = nullptr;};
      inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
      inline OperationSubmitJob& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


      // operationStatus Field Functions 
      bool hasOperationStatus() const { return this->operationStatus_ != nullptr;};
      void deleteOperationStatus() { this->operationStatus_ = nullptr;};
      inline string getOperationStatus() const { DARABONBA_PTR_GET_DEFAULT(operationStatus_, "") };
      inline OperationSubmitJob& setOperationStatus(string operationStatus) { DARABONBA_PTR_SET_VALUE(operationStatus_, operationStatus) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline OperationSubmitJob& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
      inline OperationSubmitJob& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    protected:
      shared_ptr<string> externalBizId_ {};
      shared_ptr<string> jobId_ {};
      shared_ptr<string> operation_ {};
      shared_ptr<string> operationStatus_ {};
      shared_ptr<string> operator_ {};
      shared_ptr<string> progress_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->operationSubmitJob_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetOperationSubmitStatusResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetOperationSubmitStatusResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetOperationSubmitStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // operationSubmitJob Field Functions 
    bool hasOperationSubmitJob() const { return this->operationSubmitJob_ != nullptr;};
    void deleteOperationSubmitJob() { this->operationSubmitJob_ = nullptr;};
    inline const GetOperationSubmitStatusResponseBody::OperationSubmitJob & getOperationSubmitJob() const { DARABONBA_PTR_GET_CONST(operationSubmitJob_, GetOperationSubmitStatusResponseBody::OperationSubmitJob) };
    inline GetOperationSubmitStatusResponseBody::OperationSubmitJob getOperationSubmitJob() { DARABONBA_PTR_GET(operationSubmitJob_, GetOperationSubmitStatusResponseBody::OperationSubmitJob) };
    inline GetOperationSubmitStatusResponseBody& setOperationSubmitJob(const GetOperationSubmitStatusResponseBody::OperationSubmitJob & operationSubmitJob) { DARABONBA_PTR_SET_VALUE(operationSubmitJob_, operationSubmitJob) };
    inline GetOperationSubmitStatusResponseBody& setOperationSubmitJob(GetOperationSubmitStatusResponseBody::OperationSubmitJob && operationSubmitJob) { DARABONBA_PTR_SET_RVALUE(operationSubmitJob_, operationSubmitJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOperationSubmitStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetOperationSubmitStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<GetOperationSubmitStatusResponseBody::OperationSubmitJob> operationSubmitJob_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
