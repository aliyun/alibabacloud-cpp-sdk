// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNTHETICTASKLISTRESPONSEBODYPAGEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSYNTHETICTASKLISTRESPONSEBODYPAGEINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSyntheticTaskListResponseBodyPageInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyntheticTaskListResponseBodyPageInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(MonitorNumber, monitorNumber_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(TaskTypeName, taskTypeName_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(Usable, usable_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyntheticTaskListResponseBodyPageInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(MonitorNumber, monitorNumber_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(TaskTypeName, taskTypeName_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(Usable, usable_);
    };
    GetSyntheticTaskListResponseBodyPageInfoList() = default ;
    GetSyntheticTaskListResponseBodyPageInfoList(const GetSyntheticTaskListResponseBodyPageInfoList &) = default ;
    GetSyntheticTaskListResponseBodyPageInfoList(GetSyntheticTaskListResponseBodyPageInfoList &&) = default ;
    GetSyntheticTaskListResponseBodyPageInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyntheticTaskListResponseBodyPageInfoList() = default ;
    GetSyntheticTaskListResponseBodyPageInfoList& operator=(const GetSyntheticTaskListResponseBodyPageInfoList &) = default ;
    GetSyntheticTaskListResponseBodyPageInfoList& operator=(GetSyntheticTaskListResponseBodyPageInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->monitorNumber_ != nullptr && this->taskId_ != nullptr && this->taskName_ != nullptr && this->taskStatus_ != nullptr && this->taskType_ != nullptr
        && this->taskTypeName_ != nullptr && this->url_ != nullptr && this->usable_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetSyntheticTaskListResponseBodyPageInfoList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // monitorNumber Field Functions 
    bool hasMonitorNumber() const { return this->monitorNumber_ != nullptr;};
    void deleteMonitorNumber() { this->monitorNumber_ = nullptr;};
    inline int64_t monitorNumber() const { DARABONBA_PTR_GET_DEFAULT(monitorNumber_, 0L) };
    inline GetSyntheticTaskListResponseBodyPageInfoList& setMonitorNumber(int64_t monitorNumber) { DARABONBA_PTR_SET_VALUE(monitorNumber_, monitorNumber) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetSyntheticTaskListResponseBodyPageInfoList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline GetSyntheticTaskListResponseBodyPageInfoList& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetSyntheticTaskListResponseBodyPageInfoList& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline int64_t taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0L) };
    inline GetSyntheticTaskListResponseBodyPageInfoList& setTaskType(int64_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // taskTypeName Field Functions 
    bool hasTaskTypeName() const { return this->taskTypeName_ != nullptr;};
    void deleteTaskTypeName() { this->taskTypeName_ = nullptr;};
    inline string taskTypeName() const { DARABONBA_PTR_GET_DEFAULT(taskTypeName_, "") };
    inline GetSyntheticTaskListResponseBodyPageInfoList& setTaskTypeName(string taskTypeName) { DARABONBA_PTR_SET_VALUE(taskTypeName_, taskTypeName) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetSyntheticTaskListResponseBodyPageInfoList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // usable Field Functions 
    bool hasUsable() const { return this->usable_ != nullptr;};
    void deleteUsable() { this->usable_ = nullptr;};
    inline float usable() const { DARABONBA_PTR_GET_DEFAULT(usable_, 0.0) };
    inline GetSyntheticTaskListResponseBodyPageInfoList& setUsable(float usable) { DARABONBA_PTR_SET_VALUE(usable_, usable) };


  protected:
    // The time when the task was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The number of detection points.
    std::shared_ptr<int64_t> monitorNumber_ = nullptr;
    // The ID of the synthetic monitoring task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The task name.
    std::shared_ptr<string> taskName_ = nullptr;
    // The status of the task. Valid values:
    // 
    // *   **0**: The task is stopped.
    // *   **1**: The task is started.
    // *   **9**: The task is ended.
    std::shared_ptr<string> taskStatus_ = nullptr;
    // The type of the task. Valid values:
    // 
    // 1.  3: web page performance - IE
    // 2.  34: web page performance - Chrome
    // 3.  0: network quality
    // 4.  40: file download
    // 5.  7: API performance
    std::shared_ptr<int64_t> taskType_ = nullptr;
    // The name of the task type.
    std::shared_ptr<string> taskTypeName_ = nullptr;
    // The URL for synthetic monitoring.
    std::shared_ptr<string> url_ = nullptr;
    // The availability. Only the data of the last day is counted. If no data is available for the last day, an empty value is returned.
    std::shared_ptr<float> usable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
