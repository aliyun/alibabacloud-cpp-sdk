// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETONCETASKRESULTINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETONCETASKRESULTINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetOnceTaskResultInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOnceTaskResultInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, GetOnceTaskResultInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    GetOnceTaskResultInfoRequest() = default ;
    GetOnceTaskResultInfoRequest(const GetOnceTaskResultInfoRequest &) = default ;
    GetOnceTaskResultInfoRequest(GetOnceTaskResultInfoRequest &&) = default ;
    GetOnceTaskResultInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOnceTaskResultInfoRequest() = default ;
    GetOnceTaskResultInfoRequest& operator=(const GetOnceTaskResultInfoRequest &) = default ;
    GetOnceTaskResultInfoRequest& operator=(GetOnceTaskResultInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr
        && this->taskName_ == nullptr && this->taskType_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetOnceTaskResultInfoRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline GetOnceTaskResultInfoRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline GetOnceTaskResultInfoRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The ID of the scan task.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // The name of the task. Valid values:
    // 
    // *   **CLIENT_PROBLEM_CHECK**: a task of the Security Center agent
    // *   **CLIENT_DEV_OPS**: an O\\&M task of Cloud Assistant
    // *   **ASSET_SECURITY_CHECK**: a task of asset information collection
    // 
    // This parameter is required.
    shared_ptr<string> taskName_ {};
    // The type of the task. Valid values:
    // 
    // *   **CLIENT_PROBLEM_CHECK**: a task of the Security Center agent
    // *   **CLIENT_DEV_OPS**: an O\\&M task of Cloud Assistant
    // *   **ASSET_SECURITY_CHECK**: a task of asset information collection
    // 
    // This parameter is required.
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
