// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFULLPROCESSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFULLPROCESSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeFullProcessListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFullProcessListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_ANY_TO_JSON(ConfigList, configList_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(FullProcessList, fullProcessList_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFullProcessListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_ANY_FROM_JSON(ConfigList, configList_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(FullProcessList, fullProcessList_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeFullProcessListResponseBody() = default ;
    DescribeFullProcessListResponseBody(const DescribeFullProcessListResponseBody &) = default ;
    DescribeFullProcessListResponseBody(DescribeFullProcessListResponseBody &&) = default ;
    DescribeFullProcessListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFullProcessListResponseBody() = default ;
    DescribeFullProcessListResponseBody& operator=(const DescribeFullProcessListResponseBody &) = default ;
    DescribeFullProcessListResponseBody& operator=(DescribeFullProcessListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FullProcessList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FullProcessList& obj) { 
        DARABONBA_PTR_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(Exception, exception_);
        DARABONBA_PTR_TO_JSON(ProcessName, processName_);
        DARABONBA_PTR_TO_JSON(ProcessType, processType_);
        DARABONBA_PTR_TO_JSON(RunningSQL, runningSQL_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(TaskID, taskID_);
        DARABONBA_PTR_TO_JSON(Time, time_);
      };
      friend void from_json(const Darabonba::Json& j, FullProcessList& obj) { 
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(Exception, exception_);
        DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
        DARABONBA_PTR_FROM_JSON(ProcessType, processType_);
        DARABONBA_PTR_FROM_JSON(RunningSQL, runningSQL_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(TaskID, taskID_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
      };
      FullProcessList() = default ;
      FullProcessList(const FullProcessList &) = default ;
      FullProcessList(FullProcessList &&) = default ;
      FullProcessList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FullProcessList() = default ;
      FullProcessList& operator=(const FullProcessList &) = default ;
      FullProcessList& operator=(FullProcessList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->detail_ == nullptr
        && this->exception_ == nullptr && this->processName_ == nullptr && this->processType_ == nullptr && this->runningSQL_ == nullptr && this->state_ == nullptr
        && this->taskID_ == nullptr && this->time_ == nullptr; };
      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
      inline FullProcessList& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


      // exception Field Functions 
      bool hasException() const { return this->exception_ != nullptr;};
      void deleteException() { this->exception_ = nullptr;};
      inline string getException() const { DARABONBA_PTR_GET_DEFAULT(exception_, "") };
      inline FullProcessList& setException(string exception) { DARABONBA_PTR_SET_VALUE(exception_, exception) };


      // processName Field Functions 
      bool hasProcessName() const { return this->processName_ != nullptr;};
      void deleteProcessName() { this->processName_ = nullptr;};
      inline string getProcessName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
      inline FullProcessList& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


      // processType Field Functions 
      bool hasProcessType() const { return this->processType_ != nullptr;};
      void deleteProcessType() { this->processType_ = nullptr;};
      inline string getProcessType() const { DARABONBA_PTR_GET_DEFAULT(processType_, "") };
      inline FullProcessList& setProcessType(string processType) { DARABONBA_PTR_SET_VALUE(processType_, processType) };


      // runningSQL Field Functions 
      bool hasRunningSQL() const { return this->runningSQL_ != nullptr;};
      void deleteRunningSQL() { this->runningSQL_ = nullptr;};
      inline string getRunningSQL() const { DARABONBA_PTR_GET_DEFAULT(runningSQL_, "") };
      inline FullProcessList& setRunningSQL(string runningSQL) { DARABONBA_PTR_SET_VALUE(runningSQL_, runningSQL) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline FullProcessList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // taskID Field Functions 
      bool hasTaskID() const { return this->taskID_ != nullptr;};
      void deleteTaskID() { this->taskID_ = nullptr;};
      inline string getTaskID() const { DARABONBA_PTR_GET_DEFAULT(taskID_, "") };
      inline FullProcessList& setTaskID(string taskID) { DARABONBA_PTR_SET_VALUE(taskID_, taskID) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
      inline FullProcessList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    protected:
      // Details
      shared_ptr<string> detail_ {};
      // The abnormal status of the task. Valid values:**notstarted**. -**checking**. -**failed**. -**finished**.
      shared_ptr<string> exception_ {};
      // The name of the process.
      shared_ptr<string> processName_ {};
      // The type of the process. Valid values:
      // 
      // *   **1**: trusted
      // *   **2**: suspicious
      // *   **3**: malicious
      shared_ptr<string> processType_ {};
      // SQL that is running
      shared_ptr<string> runningSQL_ {};
      // The log status.
      shared_ptr<string> state_ {};
      // The ID of the task.
      shared_ptr<string> taskID_ {};
      // The time when the logs were collected. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<int64_t> time_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->configList_ == nullptr && this->dtsJobId_ == nullptr && this->dynamicMessage_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr
        && this->fullProcessList_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeFullProcessListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // configList Field Functions 
    bool hasConfigList() const { return this->configList_ != nullptr;};
    void deleteConfigList() { this->configList_ = nullptr;};
    inline     const Darabonba::Json & getConfigList() const { DARABONBA_GET(configList_) };
    Darabonba::Json & getConfigList() { DARABONBA_GET(configList_) };
    inline DescribeFullProcessListResponseBody& setConfigList(const Darabonba::Json & configList) { DARABONBA_SET_VALUE(configList_, configList) };
    inline DescribeFullProcessListResponseBody& setConfigList(Darabonba::Json && configList) { DARABONBA_SET_RVALUE(configList_, configList) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline DescribeFullProcessListResponseBody& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeFullProcessListResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeFullProcessListResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeFullProcessListResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // fullProcessList Field Functions 
    bool hasFullProcessList() const { return this->fullProcessList_ != nullptr;};
    void deleteFullProcessList() { this->fullProcessList_ = nullptr;};
    inline const vector<DescribeFullProcessListResponseBody::FullProcessList> & getFullProcessList() const { DARABONBA_PTR_GET_CONST(fullProcessList_, vector<DescribeFullProcessListResponseBody::FullProcessList>) };
    inline vector<DescribeFullProcessListResponseBody::FullProcessList> getFullProcessList() { DARABONBA_PTR_GET(fullProcessList_, vector<DescribeFullProcessListResponseBody::FullProcessList>) };
    inline DescribeFullProcessListResponseBody& setFullProcessList(const vector<DescribeFullProcessListResponseBody::FullProcessList> & fullProcessList) { DARABONBA_PTR_SET_VALUE(fullProcessList_, fullProcessList) };
    inline DescribeFullProcessListResponseBody& setFullProcessList(vector<DescribeFullProcessListResponseBody::FullProcessList> && fullProcessList) { DARABONBA_PTR_SET_RVALUE(fullProcessList_, fullProcessList) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeFullProcessListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFullProcessListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeFullProcessListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The throttling configuration. Valid values:
    // 
    // *   **dts.datamove.blaster.qps.max**: The rate at which queries are made to the source database per second.
    // *   **dts.datamove.source.rps.max**: the number of rows that are fully synchronized or migrated per second.
    // *   **dts.datamove.source.bps.max**: the amount of data processed per second for full synchronization or migration. Unit: Byte/s.
    // 
    // > 
    // 
    // *   When you set the **JobCode** parameter to **03**, you need to specify the **EnableLimit** parameter as **true**. Otherwise, the configuration cannot take effect.
    // 
    // *   When you set the **JobCode** parameter to **04** or **07**, you only need to specify the **dts.datamove.source.rps.max** and **dts.datamove.source.bps.max** parameters.
    // *   A value of \\*\\*-1\\*\\* indicates no rate limit.
    Darabonba::Json configList_ {};
    // The ID of the data migration, data synchronization, or change tracking task.
    shared_ptr<string> dtsJobId_ {};
    // The dynamic part in the error message. This parameter is used to replace the \\*\\*%s\\*\\* variable in the **ErrMessage** parameter.
    // 
    // >  The request parameter **DtsJobId** is invalid if **The Value of Input Parameter %s is not valid** is returned for **ErrMessage** and **DtsJobId** is returned for **DynamicMessage**.
    shared_ptr<string> dynamicMessage_ {};
    // The error code returned when the request failed.
    shared_ptr<string> errCode_ {};
    // The error message returned when the request failed.
    shared_ptr<string> errMessage_ {};
    // The details of the GA instances.
    shared_ptr<vector<DescribeFullProcessListResponseBody::FullProcessList>> fullProcessList_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
