// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAIOUTBOUNDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTAIOUTBOUNDTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class StartAiOutboundTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAiOutboundTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, StartAiOutboundTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    StartAiOutboundTaskRequest() = default ;
    StartAiOutboundTaskRequest(const StartAiOutboundTaskRequest &) = default ;
    StartAiOutboundTaskRequest(StartAiOutboundTaskRequest &&) = default ;
    StartAiOutboundTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAiOutboundTaskRequest() = default ;
    StartAiOutboundTaskRequest& operator=(const StartAiOutboundTaskRequest &) = default ;
    StartAiOutboundTaskRequest& operator=(StartAiOutboundTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->taskId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline StartAiOutboundTaskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline StartAiOutboundTaskRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The Artificial Intelligence Cloud Call Service (AICCS) instance ID.  
    // You can obtain it from **Instance Management** in the left-side navigation pane of the [Artificial Intelligence Cloud Call Service console](https://aiccs.console.aliyun.com/overview).
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The job ID.
    // 
    // You can invoke the [CreateAiOutboundTask](https://help.aliyun.com/document_detail/312260.html) API and view the **Data** field in the response, or invoke the [GetAiOutboundTaskList](https://help.aliyun.com/document_detail/2718026.html) API and view the **TaskId** field in the response.
    // 
    // This parameter is required.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
