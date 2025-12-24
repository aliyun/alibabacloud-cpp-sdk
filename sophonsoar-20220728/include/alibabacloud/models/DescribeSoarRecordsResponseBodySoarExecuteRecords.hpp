// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARRECORDSRESPONSEBODYSOAREXECUTERECORDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARRECORDSRESPONSEBODYSOAREXECUTERECORDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSoarRecordsResponseBodySoarExecuteRecordsOutputList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeSoarRecordsResponseBodySoarExecuteRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarRecordsResponseBodySoarExecuteRecords& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(OutputList, outputList_);
      DARABONBA_PTR_TO_JSON(RawEventReq, rawEventReq_);
      DARABONBA_PTR_TO_JSON(RequestUuid, requestUuid_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskflowMd5, taskflowMd5_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_TO_JSON(TriggerUser, triggerUser_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarRecordsResponseBodySoarExecuteRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(OutputList, outputList_);
      DARABONBA_PTR_FROM_JSON(RawEventReq, rawEventReq_);
      DARABONBA_PTR_FROM_JSON(RequestUuid, requestUuid_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskflowMd5, taskflowMd5_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_FROM_JSON(TriggerUser, triggerUser_);
    };
    DescribeSoarRecordsResponseBodySoarExecuteRecords() = default ;
    DescribeSoarRecordsResponseBodySoarExecuteRecords(const DescribeSoarRecordsResponseBodySoarExecuteRecords &) = default ;
    DescribeSoarRecordsResponseBodySoarExecuteRecords(DescribeSoarRecordsResponseBodySoarExecuteRecords &&) = default ;
    DescribeSoarRecordsResponseBodySoarExecuteRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarRecordsResponseBodySoarExecuteRecords() = default ;
    DescribeSoarRecordsResponseBodySoarExecuteRecords& operator=(const DescribeSoarRecordsResponseBodySoarExecuteRecords &) = default ;
    DescribeSoarRecordsResponseBodySoarExecuteRecords& operator=(DescribeSoarRecordsResponseBodySoarExecuteRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->errorMsg_ == nullptr && return this->outputList_ == nullptr && return this->rawEventReq_ == nullptr && return this->requestUuid_ == nullptr && return this->startTime_ == nullptr
        && return this->status_ == nullptr && return this->taskName_ == nullptr && return this->taskflowMd5_ == nullptr && return this->triggerType_ == nullptr && return this->triggerUser_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeSoarRecordsResponseBodySoarExecuteRecords& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline DescribeSoarRecordsResponseBodySoarExecuteRecords& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // outputList Field Functions 
    bool hasOutputList() const { return this->outputList_ != nullptr;};
    void deleteOutputList() { this->outputList_ = nullptr;};
    inline const vector<Models::DescribeSoarRecordsResponseBodySoarExecuteRecordsOutputList> & outputList() const { DARABONBA_PTR_GET_CONST(outputList_, vector<Models::DescribeSoarRecordsResponseBodySoarExecuteRecordsOutputList>) };
    inline vector<Models::DescribeSoarRecordsResponseBodySoarExecuteRecordsOutputList> outputList() { DARABONBA_PTR_GET(outputList_, vector<Models::DescribeSoarRecordsResponseBodySoarExecuteRecordsOutputList>) };
    inline DescribeSoarRecordsResponseBodySoarExecuteRecords& setOutputList(const vector<Models::DescribeSoarRecordsResponseBodySoarExecuteRecordsOutputList> & outputList) { DARABONBA_PTR_SET_VALUE(outputList_, outputList) };
    inline DescribeSoarRecordsResponseBodySoarExecuteRecords& setOutputList(vector<Models::DescribeSoarRecordsResponseBodySoarExecuteRecordsOutputList> && outputList) { DARABONBA_PTR_SET_RVALUE(outputList_, outputList) };


    // rawEventReq Field Functions 
    bool hasRawEventReq() const { return this->rawEventReq_ != nullptr;};
    void deleteRawEventReq() { this->rawEventReq_ = nullptr;};
    inline string rawEventReq() const { DARABONBA_PTR_GET_DEFAULT(rawEventReq_, "") };
    inline DescribeSoarRecordsResponseBodySoarExecuteRecords& setRawEventReq(string rawEventReq) { DARABONBA_PTR_SET_VALUE(rawEventReq_, rawEventReq) };


    // requestUuid Field Functions 
    bool hasRequestUuid() const { return this->requestUuid_ != nullptr;};
    void deleteRequestUuid() { this->requestUuid_ = nullptr;};
    inline string requestUuid() const { DARABONBA_PTR_GET_DEFAULT(requestUuid_, "") };
    inline DescribeSoarRecordsResponseBodySoarExecuteRecords& setRequestUuid(string requestUuid) { DARABONBA_PTR_SET_VALUE(requestUuid_, requestUuid) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeSoarRecordsResponseBodySoarExecuteRecords& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSoarRecordsResponseBodySoarExecuteRecords& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeSoarRecordsResponseBodySoarExecuteRecords& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskflowMd5 Field Functions 
    bool hasTaskflowMd5() const { return this->taskflowMd5_ != nullptr;};
    void deleteTaskflowMd5() { this->taskflowMd5_ = nullptr;};
    inline string taskflowMd5() const { DARABONBA_PTR_GET_DEFAULT(taskflowMd5_, "") };
    inline DescribeSoarRecordsResponseBodySoarExecuteRecords& setTaskflowMd5(string taskflowMd5) { DARABONBA_PTR_SET_VALUE(taskflowMd5_, taskflowMd5) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline DescribeSoarRecordsResponseBodySoarExecuteRecords& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    // triggerUser Field Functions 
    bool hasTriggerUser() const { return this->triggerUser_ != nullptr;};
    void deleteTriggerUser() { this->triggerUser_ = nullptr;};
    inline string triggerUser() const { DARABONBA_PTR_GET_DEFAULT(triggerUser_, "") };
    inline DescribeSoarRecordsResponseBodySoarExecuteRecords& setTriggerUser(string triggerUser) { DARABONBA_PTR_SET_VALUE(triggerUser_, triggerUser) };


  protected:
    // The end time of the component execution, in 13-digit timestamp format.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The error message of the playbook task. This field is empty when the task succeeds.
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<vector<Models::DescribeSoarRecordsResponseBodySoarExecuteRecordsOutputList>> outputList_ = nullptr;
    // The request parameters of the playbook task.
    std::shared_ptr<string> rawEventReq_ = nullptr;
    // The request ID of the playbook task, a unique ID for each task run.
    std::shared_ptr<string> requestUuid_ = nullptr;
    // The start time of the task execution, in 13-digit timestamp format.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The status of the playbook task. Values:
    // 
    // - **success**: Indicates successful execution.
    // - **fail**: Indicates failed execution.
    // - **running**: Indicates the task is running
    std::shared_ptr<string> status_ = nullptr;
    // The name of the playbook task, which is the same as the playbook\\"s UUID.
    std::shared_ptr<string> taskName_ = nullptr;
    // The MD5 value of the playbook configuration.
    std::shared_ptr<string> taskflowMd5_ = nullptr;
    // The type of the playbook task. Values:
    // 
    // - **debug**: Indicates a debugging task.
    // - **manual**: Indicates a manual task.
    // - **siem**: Indicates a task triggered by an event or alert.
    std::shared_ptr<string> triggerType_ = nullptr;
    // The Alibaba Cloud account ID that executes the playbook task.
    std::shared_ptr<string> triggerUser_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
