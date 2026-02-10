// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELONCETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELONCETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CancelOnceTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelOnceTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelOnceTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    CancelOnceTaskRequest() = default ;
    CancelOnceTaskRequest(const CancelOnceTaskRequest &) = default ;
    CancelOnceTaskRequest(CancelOnceTaskRequest &&) = default ;
    CancelOnceTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelOnceTaskRequest() = default ;
    CancelOnceTaskRequest& operator=(const CancelOnceTaskRequest &) = default ;
    CancelOnceTaskRequest& operator=(CancelOnceTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CancelOnceTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The ID of the task.
    // 
    // >  You can call the [GenerateOnceTask](~~GenerateOnceTask~~) operation to query the IDs of tasks.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
