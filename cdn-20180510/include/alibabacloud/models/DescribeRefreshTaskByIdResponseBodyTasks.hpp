// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREFRESHTASKBYIDRESPONSEBODYTASKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREFRESHTASKBYIDRESPONSEBODYTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeRefreshTaskByIdResponseBodyTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRefreshTaskByIdResponseBodyTasks& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ObjectPath, objectPath_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(Process, process_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRefreshTaskByIdResponseBodyTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ObjectPath, objectPath_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(Process, process_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeRefreshTaskByIdResponseBodyTasks() = default ;
    DescribeRefreshTaskByIdResponseBodyTasks(const DescribeRefreshTaskByIdResponseBodyTasks &) = default ;
    DescribeRefreshTaskByIdResponseBodyTasks(DescribeRefreshTaskByIdResponseBodyTasks &&) = default ;
    DescribeRefreshTaskByIdResponseBodyTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRefreshTaskByIdResponseBodyTasks() = default ;
    DescribeRefreshTaskByIdResponseBodyTasks& operator=(const DescribeRefreshTaskByIdResponseBodyTasks &) = default ;
    DescribeRefreshTaskByIdResponseBodyTasks& operator=(DescribeRefreshTaskByIdResponseBodyTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->description_ != nullptr && this->objectPath_ != nullptr && this->objectType_ != nullptr && this->process_ != nullptr && this->status_ != nullptr
        && this->taskId_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeRefreshTaskByIdResponseBodyTasks& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeRefreshTaskByIdResponseBodyTasks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // objectPath Field Functions 
    bool hasObjectPath() const { return this->objectPath_ != nullptr;};
    void deleteObjectPath() { this->objectPath_ = nullptr;};
    inline string objectPath() const { DARABONBA_PTR_GET_DEFAULT(objectPath_, "") };
    inline DescribeRefreshTaskByIdResponseBodyTasks& setObjectPath(string objectPath) { DARABONBA_PTR_SET_VALUE(objectPath_, objectPath) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string objectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline DescribeRefreshTaskByIdResponseBodyTasks& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // process Field Functions 
    bool hasProcess() const { return this->process_ != nullptr;};
    void deleteProcess() { this->process_ = nullptr;};
    inline string process() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
    inline DescribeRefreshTaskByIdResponseBodyTasks& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRefreshTaskByIdResponseBodyTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeRefreshTaskByIdResponseBodyTasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The time when the task was created. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The error returned when the refresh or prefetch task failed. Valid values:
    // 
    // *   **Internal Error**
    // *   **Origin Timeout**
    // *   **Origin Return StatusCode 5XX**
    std::shared_ptr<string> description_ = nullptr;
    // The path of the object refreshed by the refresh task.
    std::shared_ptr<string> objectPath_ = nullptr;
    // The type of the task. Valid values:
    // 
    // *   **file**: refreshes an individual file.
    // *   **directory**: refreshes files in the specified directory.
    // *   **preload**: prefetches an individual file.
    // *   **regex**: refreshes content based on a regular expression.
    std::shared_ptr<string> objectType_ = nullptr;
    // The progress of the task, in percentage.
    std::shared_ptr<string> process_ = nullptr;
    // The status of the task. Valid values:
    // 
    // *   **Complete**
    // *   **Pending**
    // *   **Refreshing**
    // *   **Failed**
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
