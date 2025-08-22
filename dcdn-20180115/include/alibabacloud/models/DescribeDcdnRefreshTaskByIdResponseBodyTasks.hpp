// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNREFRESHTASKBYIDRESPONSEBODYTASKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNREFRESHTASKBYIDRESPONSEBODYTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnRefreshTaskByIdResponseBodyTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnRefreshTaskByIdResponseBodyTasks& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ObjectPath, objectPath_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(Process, process_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnRefreshTaskByIdResponseBodyTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ObjectPath, objectPath_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(Process, process_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeDcdnRefreshTaskByIdResponseBodyTasks() = default ;
    DescribeDcdnRefreshTaskByIdResponseBodyTasks(const DescribeDcdnRefreshTaskByIdResponseBodyTasks &) = default ;
    DescribeDcdnRefreshTaskByIdResponseBodyTasks(DescribeDcdnRefreshTaskByIdResponseBodyTasks &&) = default ;
    DescribeDcdnRefreshTaskByIdResponseBodyTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnRefreshTaskByIdResponseBodyTasks() = default ;
    DescribeDcdnRefreshTaskByIdResponseBodyTasks& operator=(const DescribeDcdnRefreshTaskByIdResponseBodyTasks &) = default ;
    DescribeDcdnRefreshTaskByIdResponseBodyTasks& operator=(DescribeDcdnRefreshTaskByIdResponseBodyTasks &&) = default ;
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
    inline DescribeDcdnRefreshTaskByIdResponseBodyTasks& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDcdnRefreshTaskByIdResponseBodyTasks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // objectPath Field Functions 
    bool hasObjectPath() const { return this->objectPath_ != nullptr;};
    void deleteObjectPath() { this->objectPath_ = nullptr;};
    inline string objectPath() const { DARABONBA_PTR_GET_DEFAULT(objectPath_, "") };
    inline DescribeDcdnRefreshTaskByIdResponseBodyTasks& setObjectPath(string objectPath) { DARABONBA_PTR_SET_VALUE(objectPath_, objectPath) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string objectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline DescribeDcdnRefreshTaskByIdResponseBodyTasks& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // process Field Functions 
    bool hasProcess() const { return this->process_ != nullptr;};
    void deleteProcess() { this->process_ = nullptr;};
    inline string process() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
    inline DescribeDcdnRefreshTaskByIdResponseBodyTasks& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDcdnRefreshTaskByIdResponseBodyTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeDcdnRefreshTaskByIdResponseBodyTasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The time when the task was created. The time follows the ISO8601 standard in the YYYY-MM-DDThh:mmZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The error returned when the refresh or prefetch task failed. Valid values:
    // 
    // *   **Internal Error**: An internal error occurred.
    // *   **Origin Timeout**: The response from the origin server timed out.
    // *   **Origin Return StatusCode 5XX**: The origin server returned a 5XX error.
    std::shared_ptr<string> description_ = nullptr;
    // The path of the refresh or prefetch object.
    std::shared_ptr<string> objectPath_ = nullptr;
    // The type of the refresh or prefetch task. Valid values:
    // 
    // *   **file**: refreshes an individual file.
    // *   **directory**: refreshes files under the specified directory.
    // *   **preload**: prefetches an individual file.
    std::shared_ptr<string> objectType_ = nullptr;
    // The progress of the task, in percentage.
    std::shared_ptr<string> process_ = nullptr;
    // The task status. Valid values:
    // 
    // *   **Complete**: The task is complete.
    // *   **Pending**: The task is pending.
    // *   **Refreshing**: The task is running.
    // *   **Failed**: The task failed.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
