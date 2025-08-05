// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFULLPROCESSLISTRESPONSEBODYFULLPROCESSLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFULLPROCESSLISTRESPONSEBODYFULLPROCESSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeFullProcessListResponseBodyFullProcessList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFullProcessListResponseBodyFullProcessList& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(Exception, exception_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
      DARABONBA_PTR_TO_JSON(ProcessType, processType_);
      DARABONBA_PTR_TO_JSON(RunningSQL, runningSQL_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TaskID, taskID_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFullProcessListResponseBodyFullProcessList& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(Exception, exception_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
      DARABONBA_PTR_FROM_JSON(ProcessType, processType_);
      DARABONBA_PTR_FROM_JSON(RunningSQL, runningSQL_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TaskID, taskID_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    DescribeFullProcessListResponseBodyFullProcessList() = default ;
    DescribeFullProcessListResponseBodyFullProcessList(const DescribeFullProcessListResponseBodyFullProcessList &) = default ;
    DescribeFullProcessListResponseBodyFullProcessList(DescribeFullProcessListResponseBodyFullProcessList &&) = default ;
    DescribeFullProcessListResponseBodyFullProcessList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFullProcessListResponseBodyFullProcessList() = default ;
    DescribeFullProcessListResponseBodyFullProcessList& operator=(const DescribeFullProcessListResponseBodyFullProcessList &) = default ;
    DescribeFullProcessListResponseBodyFullProcessList& operator=(DescribeFullProcessListResponseBodyFullProcessList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->detail_ != nullptr
        && this->exception_ != nullptr && this->processName_ != nullptr && this->processType_ != nullptr && this->runningSQL_ != nullptr && this->state_ != nullptr
        && this->taskID_ != nullptr && this->time_ != nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline DescribeFullProcessListResponseBodyFullProcessList& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // exception Field Functions 
    bool hasException() const { return this->exception_ != nullptr;};
    void deleteException() { this->exception_ = nullptr;};
    inline string exception() const { DARABONBA_PTR_GET_DEFAULT(exception_, "") };
    inline DescribeFullProcessListResponseBodyFullProcessList& setException(string exception) { DARABONBA_PTR_SET_VALUE(exception_, exception) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string processName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline DescribeFullProcessListResponseBodyFullProcessList& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // processType Field Functions 
    bool hasProcessType() const { return this->processType_ != nullptr;};
    void deleteProcessType() { this->processType_ = nullptr;};
    inline string processType() const { DARABONBA_PTR_GET_DEFAULT(processType_, "") };
    inline DescribeFullProcessListResponseBodyFullProcessList& setProcessType(string processType) { DARABONBA_PTR_SET_VALUE(processType_, processType) };


    // runningSQL Field Functions 
    bool hasRunningSQL() const { return this->runningSQL_ != nullptr;};
    void deleteRunningSQL() { this->runningSQL_ = nullptr;};
    inline string runningSQL() const { DARABONBA_PTR_GET_DEFAULT(runningSQL_, "") };
    inline DescribeFullProcessListResponseBodyFullProcessList& setRunningSQL(string runningSQL) { DARABONBA_PTR_SET_VALUE(runningSQL_, runningSQL) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeFullProcessListResponseBodyFullProcessList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // taskID Field Functions 
    bool hasTaskID() const { return this->taskID_ != nullptr;};
    void deleteTaskID() { this->taskID_ = nullptr;};
    inline string taskID() const { DARABONBA_PTR_GET_DEFAULT(taskID_, "") };
    inline DescribeFullProcessListResponseBodyFullProcessList& setTaskID(string taskID) { DARABONBA_PTR_SET_VALUE(taskID_, taskID) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline DescribeFullProcessListResponseBodyFullProcessList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // Details
    std::shared_ptr<string> detail_ = nullptr;
    // The abnormal status of the task. Valid values:**notstarted**. -**checking**. -**failed**. -**finished**.
    std::shared_ptr<string> exception_ = nullptr;
    // The name of the process.
    std::shared_ptr<string> processName_ = nullptr;
    // The type of the process. Valid values:
    // 
    // *   **1**: trusted
    // *   **2**: suspicious
    // *   **3**: malicious
    std::shared_ptr<string> processType_ = nullptr;
    // SQL that is running
    std::shared_ptr<string> runningSQL_ = nullptr;
    // The log status.
    std::shared_ptr<string> state_ = nullptr;
    // The ID of the task.
    std::shared_ptr<string> taskID_ = nullptr;
    // The time when the logs were collected. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<int64_t> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
