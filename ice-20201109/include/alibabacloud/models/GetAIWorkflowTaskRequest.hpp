// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIWORKFLOWTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAIWORKFLOWTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetAIWorkflowTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIWorkflowTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIWorkflowTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetAIWorkflowTaskRequest() = default ;
    GetAIWorkflowTaskRequest(const GetAIWorkflowTaskRequest &) = default ;
    GetAIWorkflowTaskRequest(GetAIWorkflowTaskRequest &&) = default ;
    GetAIWorkflowTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIWorkflowTaskRequest() = default ;
    GetAIWorkflowTaskRequest& operator=(const GetAIWorkflowTaskRequest &) = default ;
    GetAIWorkflowTaskRequest& operator=(GetAIWorkflowTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetAIWorkflowTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The ID of the workflow task.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
