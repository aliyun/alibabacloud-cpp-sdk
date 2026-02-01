// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetAgentTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(task_id, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(task_id, taskId_);
    };
    GetAgentTaskRequest() = default ;
    GetAgentTaskRequest(const GetAgentTaskRequest &) = default ;
    GetAgentTaskRequest(GetAgentTaskRequest &&) = default ;
    GetAgentTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentTaskRequest() = default ;
    GetAgentTaskRequest& operator=(const GetAgentTaskRequest &) = default ;
    GetAgentTaskRequest& operator=(GetAgentTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetAgentTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
