// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTREAMOPSRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTREAMOPSRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetStreamOpsRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStreamOpsRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetStreamOpsRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetStreamOpsRecordResponseBody() = default ;
    GetStreamOpsRecordResponseBody(const GetStreamOpsRecordResponseBody &) = default ;
    GetStreamOpsRecordResponseBody(GetStreamOpsRecordResponseBody &&) = default ;
    GetStreamOpsRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStreamOpsRecordResponseBody() = default ;
    GetStreamOpsRecordResponseBody& operator=(const GetStreamOpsRecordResponseBody &) = default ;
    GetStreamOpsRecordResponseBody& operator=(GetStreamOpsRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DeploymentId, deploymentId_);
        DARABONBA_PTR_TO_JSON(DeploymentInstanceId, deploymentInstanceId_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(LogContent, logContent_);
        DARABONBA_PTR_TO_JSON(Operate, operate_);
        DARABONBA_PTR_TO_JSON(OpsRecordId, opsRecordId_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DeploymentId, deploymentId_);
        DARABONBA_PTR_FROM_JSON(DeploymentInstanceId, deploymentInstanceId_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(LogContent, logContent_);
        DARABONBA_PTR_FROM_JSON(Operate, operate_);
        DARABONBA_PTR_FROM_JSON(OpsRecordId, opsRecordId_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
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
      virtual bool empty() const override { return this->deploymentId_ == nullptr
        && this->deploymentInstanceId_ == nullptr && this->endTime_ == nullptr && this->logContent_ == nullptr && this->operate_ == nullptr && this->opsRecordId_ == nullptr
        && this->startTime_ == nullptr; };
      // deploymentId Field Functions 
      bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
      void deleteDeploymentId() { this->deploymentId_ = nullptr;};
      inline string getDeploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, "") };
      inline Data& setDeploymentId(string deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


      // deploymentInstanceId Field Functions 
      bool hasDeploymentInstanceId() const { return this->deploymentInstanceId_ != nullptr;};
      void deleteDeploymentInstanceId() { this->deploymentInstanceId_ = nullptr;};
      inline string getDeploymentInstanceId() const { DARABONBA_PTR_GET_DEFAULT(deploymentInstanceId_, "") };
      inline Data& setDeploymentInstanceId(string deploymentInstanceId) { DARABONBA_PTR_SET_VALUE(deploymentInstanceId_, deploymentInstanceId) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Data& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // logContent Field Functions 
      bool hasLogContent() const { return this->logContent_ != nullptr;};
      void deleteLogContent() { this->logContent_ = nullptr;};
      inline string getLogContent() const { DARABONBA_PTR_GET_DEFAULT(logContent_, "") };
      inline Data& setLogContent(string logContent) { DARABONBA_PTR_SET_VALUE(logContent_, logContent) };


      // operate Field Functions 
      bool hasOperate() const { return this->operate_ != nullptr;};
      void deleteOperate() { this->operate_ = nullptr;};
      inline string getOperate() const { DARABONBA_PTR_GET_DEFAULT(operate_, "") };
      inline Data& setOperate(string operate) { DARABONBA_PTR_SET_VALUE(operate_, operate) };


      // opsRecordId Field Functions 
      bool hasOpsRecordId() const { return this->opsRecordId_ != nullptr;};
      void deleteOpsRecordId() { this->opsRecordId_ = nullptr;};
      inline string getOpsRecordId() const { DARABONBA_PTR_GET_DEFAULT(opsRecordId_, "") };
      inline Data& setOpsRecordId(string opsRecordId) { DARABONBA_PTR_SET_VALUE(opsRecordId_, opsRecordId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The deployment ID of the task. This ID is used to identify the deployment and is different from the specific running instance ID deploymentInstanceId.
      shared_ptr<string> deploymentId_ {};
      // The deployment instance ID associated with this operation. This ID corresponds to the DeploymentInstanceId request parameter in the log and TaskManager query operations.
      shared_ptr<string> deploymentInstanceId_ {};
      // The end time of the operation. The time is in the yyyy-MM-dd HH:mm:ss format. If the operation has not ended, this parameter may be null.
      shared_ptr<string> endTime_ {};
      // The operation logs. In the ListStreamOpsRecords operation, this parameter may be a log storage identity. After you invoke the GetStreamOpsRecord operation, the log content or operation information is returned.
      shared_ptr<string> logContent_ {};
      // The operation type. Valid values: START, PAUSE, RESUME, and STOP. This parameter does not indicate the running status of the task.
      shared_ptr<string> operate_ {};
      // The ID of the operation record. This ID corresponds to the OpsRecordId request parameter in the GetStreamOpsRecord operation.
      shared_ptr<string> opsRecordId_ {};
      // The start time of the operation. The time is in the yyyy-MM-dd HH:mm:ss format.
      shared_ptr<string> startTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetStreamOpsRecordResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetStreamOpsRecordResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetStreamOpsRecordResponseBody::Data) };
    inline GetStreamOpsRecordResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetStreamOpsRecordResponseBody::Data) };
    inline GetStreamOpsRecordResponseBody& setData(const GetStreamOpsRecordResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetStreamOpsRecordResponseBody& setData(GetStreamOpsRecordResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetStreamOpsRecordResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetStreamOpsRecordResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStreamOpsRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetStreamOpsRecordResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The start or stop operation record of the real-time task. You can call the GetStreamOpsRecord operation to query the log content by using the log storage identifier in the list.
    shared_ptr<GetStreamOpsRecordResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The details of the backend response exception.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
