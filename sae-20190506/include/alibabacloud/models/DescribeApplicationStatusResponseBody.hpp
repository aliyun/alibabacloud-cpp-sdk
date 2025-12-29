// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribeApplicationStatusResponseBody() = default ;
    DescribeApplicationStatusResponseBody(const DescribeApplicationStatusResponseBody &) = default ;
    DescribeApplicationStatusResponseBody(DescribeApplicationStatusResponseBody &&) = default ;
    DescribeApplicationStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationStatusResponseBody() = default ;
    DescribeApplicationStatusResponseBody& operator=(const DescribeApplicationStatusResponseBody &) = default ;
    DescribeApplicationStatusResponseBody& operator=(DescribeApplicationStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(ArmsAdvancedEnabled, armsAdvancedEnabled_);
        DARABONBA_PTR_TO_JSON(ArmsApmInfo, armsApmInfo_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CurrentStatus, currentStatus_);
        DARABONBA_PTR_TO_JSON(EnableAgent, enableAgent_);
        DARABONBA_PTR_TO_JSON(FileSizeLimit, fileSizeLimit_);
        DARABONBA_PTR_TO_JSON(LastChangeOrderId, lastChangeOrderId_);
        DARABONBA_PTR_TO_JSON(LastChangeOrderRunning, lastChangeOrderRunning_);
        DARABONBA_PTR_TO_JSON(LastChangeOrderStatus, lastChangeOrderStatus_);
        DARABONBA_PTR_TO_JSON(RunningInstances, runningInstances_);
        DARABONBA_PTR_TO_JSON(SubStatus, subStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(ArmsAdvancedEnabled, armsAdvancedEnabled_);
        DARABONBA_PTR_FROM_JSON(ArmsApmInfo, armsApmInfo_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CurrentStatus, currentStatus_);
        DARABONBA_PTR_FROM_JSON(EnableAgent, enableAgent_);
        DARABONBA_PTR_FROM_JSON(FileSizeLimit, fileSizeLimit_);
        DARABONBA_PTR_FROM_JSON(LastChangeOrderId, lastChangeOrderId_);
        DARABONBA_PTR_FROM_JSON(LastChangeOrderRunning, lastChangeOrderRunning_);
        DARABONBA_PTR_FROM_JSON(LastChangeOrderStatus, lastChangeOrderStatus_);
        DARABONBA_PTR_FROM_JSON(RunningInstances, runningInstances_);
        DARABONBA_PTR_FROM_JSON(SubStatus, subStatus_);
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
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->armsAdvancedEnabled_ == nullptr && this->armsApmInfo_ == nullptr && this->createTime_ == nullptr && this->currentStatus_ == nullptr && this->enableAgent_ == nullptr
        && this->fileSizeLimit_ == nullptr && this->lastChangeOrderId_ == nullptr && this->lastChangeOrderRunning_ == nullptr && this->lastChangeOrderStatus_ == nullptr && this->runningInstances_ == nullptr
        && this->subStatus_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // armsAdvancedEnabled Field Functions 
      bool hasArmsAdvancedEnabled() const { return this->armsAdvancedEnabled_ != nullptr;};
      void deleteArmsAdvancedEnabled() { this->armsAdvancedEnabled_ = nullptr;};
      inline string getArmsAdvancedEnabled() const { DARABONBA_PTR_GET_DEFAULT(armsAdvancedEnabled_, "") };
      inline Data& setArmsAdvancedEnabled(string armsAdvancedEnabled) { DARABONBA_PTR_SET_VALUE(armsAdvancedEnabled_, armsAdvancedEnabled) };


      // armsApmInfo Field Functions 
      bool hasArmsApmInfo() const { return this->armsApmInfo_ != nullptr;};
      void deleteArmsApmInfo() { this->armsApmInfo_ = nullptr;};
      inline string getArmsApmInfo() const { DARABONBA_PTR_GET_DEFAULT(armsApmInfo_, "") };
      inline Data& setArmsApmInfo(string armsApmInfo) { DARABONBA_PTR_SET_VALUE(armsApmInfo_, armsApmInfo) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // currentStatus Field Functions 
      bool hasCurrentStatus() const { return this->currentStatus_ != nullptr;};
      void deleteCurrentStatus() { this->currentStatus_ = nullptr;};
      inline string getCurrentStatus() const { DARABONBA_PTR_GET_DEFAULT(currentStatus_, "") };
      inline Data& setCurrentStatus(string currentStatus) { DARABONBA_PTR_SET_VALUE(currentStatus_, currentStatus) };


      // enableAgent Field Functions 
      bool hasEnableAgent() const { return this->enableAgent_ != nullptr;};
      void deleteEnableAgent() { this->enableAgent_ = nullptr;};
      inline bool getEnableAgent() const { DARABONBA_PTR_GET_DEFAULT(enableAgent_, false) };
      inline Data& setEnableAgent(bool enableAgent) { DARABONBA_PTR_SET_VALUE(enableAgent_, enableAgent) };


      // fileSizeLimit Field Functions 
      bool hasFileSizeLimit() const { return this->fileSizeLimit_ != nullptr;};
      void deleteFileSizeLimit() { this->fileSizeLimit_ = nullptr;};
      inline int64_t getFileSizeLimit() const { DARABONBA_PTR_GET_DEFAULT(fileSizeLimit_, 0L) };
      inline Data& setFileSizeLimit(int64_t fileSizeLimit) { DARABONBA_PTR_SET_VALUE(fileSizeLimit_, fileSizeLimit) };


      // lastChangeOrderId Field Functions 
      bool hasLastChangeOrderId() const { return this->lastChangeOrderId_ != nullptr;};
      void deleteLastChangeOrderId() { this->lastChangeOrderId_ = nullptr;};
      inline string getLastChangeOrderId() const { DARABONBA_PTR_GET_DEFAULT(lastChangeOrderId_, "") };
      inline Data& setLastChangeOrderId(string lastChangeOrderId) { DARABONBA_PTR_SET_VALUE(lastChangeOrderId_, lastChangeOrderId) };


      // lastChangeOrderRunning Field Functions 
      bool hasLastChangeOrderRunning() const { return this->lastChangeOrderRunning_ != nullptr;};
      void deleteLastChangeOrderRunning() { this->lastChangeOrderRunning_ = nullptr;};
      inline bool getLastChangeOrderRunning() const { DARABONBA_PTR_GET_DEFAULT(lastChangeOrderRunning_, false) };
      inline Data& setLastChangeOrderRunning(bool lastChangeOrderRunning) { DARABONBA_PTR_SET_VALUE(lastChangeOrderRunning_, lastChangeOrderRunning) };


      // lastChangeOrderStatus Field Functions 
      bool hasLastChangeOrderStatus() const { return this->lastChangeOrderStatus_ != nullptr;};
      void deleteLastChangeOrderStatus() { this->lastChangeOrderStatus_ = nullptr;};
      inline string getLastChangeOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(lastChangeOrderStatus_, "") };
      inline Data& setLastChangeOrderStatus(string lastChangeOrderStatus) { DARABONBA_PTR_SET_VALUE(lastChangeOrderStatus_, lastChangeOrderStatus) };


      // runningInstances Field Functions 
      bool hasRunningInstances() const { return this->runningInstances_ != nullptr;};
      void deleteRunningInstances() { this->runningInstances_ = nullptr;};
      inline int32_t getRunningInstances() const { DARABONBA_PTR_GET_DEFAULT(runningInstances_, 0) };
      inline Data& setRunningInstances(int32_t runningInstances) { DARABONBA_PTR_SET_VALUE(runningInstances_, runningInstances) };


      // subStatus Field Functions 
      bool hasSubStatus() const { return this->subStatus_ != nullptr;};
      void deleteSubStatus() { this->subStatus_ = nullptr;};
      inline string getSubStatus() const { DARABONBA_PTR_GET_DEFAULT(subStatus_, "") };
      inline Data& setSubStatus(string subStatus) { DARABONBA_PTR_SET_VALUE(subStatus_, subStatus) };


    protected:
      // The ID of the application.
      shared_ptr<string> appId_ {};
      // Indicates whether Application Real-Time Monitoring Service (ARMS) advanced monitoring is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<string> armsAdvancedEnabled_ {};
      // The metadata of the application in ARMS.
      shared_ptr<string> armsApmInfo_ {};
      // The time when the application was created.
      shared_ptr<string> createTime_ {};
      // The current status of the application. Valid values:
      // 
      // *   **RUNNING**
      // *   **STOPPED**
      // *   **UNKNOWN**
      shared_ptr<string> currentStatus_ {};
      // Indicates whether SAE agent is enabled.
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> enableAgent_ {};
      // The file size limit. Unit: KB. Valid values: 0 to 10240.
      shared_ptr<int64_t> fileSizeLimit_ {};
      // The ID of the latest change order that is executed. If no change orders are executed or if change orders expire, this parameter is left empty.
      shared_ptr<string> lastChangeOrderId_ {};
      // Indicates whether the latest change order is being executed. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> lastChangeOrderRunning_ {};
      // The status of the latest change order. Valid values:
      // 
      // *   **READY**: The change order is ready.
      // *   **RUNNING**: The change order is being executed.
      // *   **SUCCESS**: The change order was executed.
      // *   **FAIL**: The change order failed to be executed.
      // *   **ABORT**: The change order is stopped.
      // *   **WAIT_BATCH_CONFIRM**: The change order is pending execution. You must manually confirm the release batch.
      // *   **AUTO_BATCH_WAIT**: The change order is pending execution. SAE will automatically confirm the release batch.
      // *   **SYSTEM_FAIL**: A system exception occurred.
      // *   **WAIT_APPROVAL**: The change order is pending approval.
      // *   **APPROVED**: The change order is approved and is pending execution.
      shared_ptr<string> lastChangeOrderStatus_ {};
      // The number of running instances of the application.
      shared_ptr<int32_t> runningInstances_ {};
      // The substatus of the change order. This parameter indicates whether an exception occurred while the change order was being executed. Valid values:
      // 
      // *   **NORMAL**
      // *   **RUNNING_BUT_HAS_ERROR**: For example, if an error occurs during a phased release, you must manually roll back the application. In this case, the change order cannot be completed because the change order is still being executed.
      shared_ptr<string> subStatus_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeApplicationStatusResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeApplicationStatusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeApplicationStatusResponseBody::Data) };
    inline DescribeApplicationStatusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeApplicationStatusResponseBody::Data) };
    inline DescribeApplicationStatusResponseBody& setData(const DescribeApplicationStatusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeApplicationStatusResponseBody& setData(DescribeApplicationStatusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeApplicationStatusResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeApplicationStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeApplicationStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeApplicationStatusResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: The call was successful.
    // *   **3xx**: The call was redirected.
    // *   **4xx**: The call failed.
    // *   **5xx**: A server error occurred.
    shared_ptr<string> code_ {};
    // The returned result.
    shared_ptr<DescribeApplicationStatusResponseBody::Data> data_ {};
    // The error code. Valid values:
    // 
    // *   If the call is successful, the **ErrorCode** parameter is not returned.
    // *   If the call fails, the **ErrorCode** parameter is returned. For more information, see the **Error codes** section in this topic.
    shared_ptr<string> errorCode_ {};
    // The returned message. Valid values:
    // 
    // *   success: If the call is successful, **success** is returned.
    // *   An error code: If the call fails, an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the status of the application was queried. Valid values:
    // 
    // *   **true**: The status was queried.
    // *   **false**: The status failed to be queried.
    shared_ptr<bool> success_ {};
    // The trace ID that is used to query the details of the request.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
