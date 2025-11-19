// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODREFRESHTASKSRESPONSEBODYTASKSTASK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODREFRESHTASKSRESPONSEBODYTASKSTASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodRefreshTasksResponseBodyTasksTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodRefreshTasksResponseBodyTasksTask& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ObjectPath, objectPath_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(Process, process_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodRefreshTasksResponseBodyTasksTask& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ObjectPath, objectPath_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(Process, process_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeVodRefreshTasksResponseBodyTasksTask() = default ;
    DescribeVodRefreshTasksResponseBodyTasksTask(const DescribeVodRefreshTasksResponseBodyTasksTask &) = default ;
    DescribeVodRefreshTasksResponseBodyTasksTask(DescribeVodRefreshTasksResponseBodyTasksTask &&) = default ;
    DescribeVodRefreshTasksResponseBodyTasksTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodRefreshTasksResponseBodyTasksTask() = default ;
    DescribeVodRefreshTasksResponseBodyTasksTask& operator=(const DescribeVodRefreshTasksResponseBodyTasksTask &) = default ;
    DescribeVodRefreshTasksResponseBodyTasksTask& operator=(DescribeVodRefreshTasksResponseBodyTasksTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->description_ == nullptr && return this->objectPath_ == nullptr && return this->objectType_ == nullptr && return this->process_ == nullptr && return this->status_ == nullptr
        && return this->taskId_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeVodRefreshTasksResponseBodyTasksTask& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVodRefreshTasksResponseBodyTasksTask& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // objectPath Field Functions 
    bool hasObjectPath() const { return this->objectPath_ != nullptr;};
    void deleteObjectPath() { this->objectPath_ = nullptr;};
    inline string objectPath() const { DARABONBA_PTR_GET_DEFAULT(objectPath_, "") };
    inline DescribeVodRefreshTasksResponseBodyTasksTask& setObjectPath(string objectPath) { DARABONBA_PTR_SET_VALUE(objectPath_, objectPath) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string objectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline DescribeVodRefreshTasksResponseBodyTasksTask& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // process Field Functions 
    bool hasProcess() const { return this->process_ != nullptr;};
    void deleteProcess() { this->process_ = nullptr;};
    inline string process() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
    inline DescribeVodRefreshTasksResponseBodyTasksTask& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVodRefreshTasksResponseBodyTasksTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeVodRefreshTasksResponseBodyTasksTask& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The time when the task was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The type of error returned when the refresh or prefetch task failed. Valid values: Valid values:
    // 
    // *   **Internal Error**: An internal error occurred.
    // *   **Origin Timeout**: The response from the origin server timed out.
    // *   **Origin Return StatusCode 5XX**: The origin server returned an HTTP status code 5xx.
    std::shared_ptr<string> description_ = nullptr;
    // The URL of the object refreshed.
    std::shared_ptr<string> objectPath_ = nullptr;
    // The type of the task. Default value: file. Valid values:
    // 
    // *   **file**: refreshes one or more files.
    // *   **directory**: refreshes files in the specified directory.
    // *   **preload**: prefetches one or more files.
    std::shared_ptr<string> objectType_ = nullptr;
    // The progress of the task in percentage.
    std::shared_ptr<string> process_ = nullptr;
    // The status of the task. Valid values:
    // 
    // *   **Complete**: The task is complete.
    // *   **Refreshing**: The task is in progress.
    // *   **Failed**: The task failed.
    // *   **Pending**: The task is pending.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
