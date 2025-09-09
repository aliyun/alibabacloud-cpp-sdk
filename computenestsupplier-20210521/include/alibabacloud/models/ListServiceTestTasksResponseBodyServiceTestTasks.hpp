// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICETESTTASKSRESPONSEBODYSERVICETESTTASKS_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICETESTTASKSRESPONSEBODYSERVICETESTTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListServiceTestTasksResponseBodyServiceTestTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceTestTasksResponseBodyServiceTestTasks& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskRegionId, taskRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceTestTasksResponseBodyServiceTestTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskRegionId, taskRegionId_);
    };
    ListServiceTestTasksResponseBodyServiceTestTasks() = default ;
    ListServiceTestTasksResponseBodyServiceTestTasks(const ListServiceTestTasksResponseBodyServiceTestTasks &) = default ;
    ListServiceTestTasksResponseBodyServiceTestTasks(ListServiceTestTasksResponseBodyServiceTestTasks &&) = default ;
    ListServiceTestTasksResponseBodyServiceTestTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceTestTasksResponseBodyServiceTestTasks() = default ;
    ListServiceTestTasksResponseBodyServiceTestTasks& operator=(const ListServiceTestTasksResponseBodyServiceTestTasks &) = default ;
    ListServiceTestTasksResponseBodyServiceTestTasks& operator=(ListServiceTestTasksResponseBodyServiceTestTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->status_ != nullptr && this->taskId_ != nullptr && this->taskName_ != nullptr && this->taskRegionId_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListServiceTestTasksResponseBodyServiceTestTasks& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListServiceTestTasksResponseBodyServiceTestTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListServiceTestTasksResponseBodyServiceTestTasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListServiceTestTasksResponseBodyServiceTestTasks& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskRegionId Field Functions 
    bool hasTaskRegionId() const { return this->taskRegionId_ != nullptr;};
    void deleteTaskRegionId() { this->taskRegionId_ = nullptr;};
    inline string taskRegionId() const { DARABONBA_PTR_GET_DEFAULT(taskRegionId_, "") };
    inline ListServiceTestTasksResponseBodyServiceTestTasks& setTaskRegionId(string taskRegionId) { DARABONBA_PTR_SET_VALUE(taskRegionId_, taskRegionId) };


  protected:
    // The time when the task was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // the status of service task.
    std::shared_ptr<string> status_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The name of the task.
    std::shared_ptr<string> taskName_ = nullptr;
    // The task region id.
    std::shared_ptr<string> taskRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
