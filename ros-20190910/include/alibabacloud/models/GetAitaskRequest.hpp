// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAITASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAITASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetAITaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAITaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OutputOption, outputOption_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAITaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OutputOption, outputOption_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetAITaskRequest() = default ;
    GetAITaskRequest(const GetAITaskRequest &) = default ;
    GetAITaskRequest(GetAITaskRequest &&) = default ;
    GetAITaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAITaskRequest() = default ;
    GetAITaskRequest& operator=(const GetAITaskRequest &) = default ;
    GetAITaskRequest& operator=(GetAITaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->outputOption_ != nullptr
        && this->taskId_ != nullptr; };
    // outputOption Field Functions 
    bool hasOutputOption() const { return this->outputOption_ != nullptr;};
    void deleteOutputOption() { this->outputOption_ = nullptr;};
    inline string outputOption() const { DARABONBA_PTR_GET_DEFAULT(outputOption_, "") };
    inline GetAITaskRequest& setOutputOption(string outputOption) { DARABONBA_PTR_SET_VALUE(outputOption_, outputOption) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetAITaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // Specifies whether to return the TaskOutput parameter. The TaskOutput parameter specifies the outputs of the AI task. Valid values:
    // 
    // *   Enabled
    // *   Disabled (default)
    // 
    // >  The value of TaskOutput may be excessively long. If you do not require the outputs of the task, we recommend that you set OutputOption to Disabled to improve the response speed of the API operation.
    std::shared_ptr<string> outputOption_ = nullptr;
    // The ID of the AI task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
