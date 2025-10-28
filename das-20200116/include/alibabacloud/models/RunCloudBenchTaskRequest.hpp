// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCLOUDBENCHTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNCLOUDBENCHTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class RunCloudBenchTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCloudBenchTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, RunCloudBenchTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    RunCloudBenchTaskRequest() = default ;
    RunCloudBenchTaskRequest(const RunCloudBenchTaskRequest &) = default ;
    RunCloudBenchTaskRequest(RunCloudBenchTaskRequest &&) = default ;
    RunCloudBenchTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCloudBenchTaskRequest() = default ;
    RunCloudBenchTaskRequest& operator=(const RunCloudBenchTaskRequest &) = default ;
    RunCloudBenchTaskRequest& operator=(RunCloudBenchTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunCloudBenchTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The stress testing task ID. You can call the [DescribeCloudBenchTasks](https://help.aliyun.com/document_detail/230670.html) operation to query the task ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
