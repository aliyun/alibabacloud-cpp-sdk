// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDECODEBLINDWATERMARKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDECODEBLINDWATERMARKRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GetDecodeBlindWatermarkResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDecodeBlindWatermarkResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, GetDecodeBlindWatermarkResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    GetDecodeBlindWatermarkResultRequest() = default ;
    GetDecodeBlindWatermarkResultRequest(const GetDecodeBlindWatermarkResultRequest &) = default ;
    GetDecodeBlindWatermarkResultRequest(GetDecodeBlindWatermarkResultRequest &&) = default ;
    GetDecodeBlindWatermarkResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDecodeBlindWatermarkResultRequest() = default ;
    GetDecodeBlindWatermarkResultRequest& operator=(const GetDecodeBlindWatermarkResultRequest &) = default ;
    GetDecodeBlindWatermarkResultRequest& operator=(GetDecodeBlindWatermarkResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->projectName_ != nullptr
        && this->taskId_ != nullptr && this->taskType_ != nullptr; };
    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetDecodeBlindWatermarkResultRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetDecodeBlindWatermarkResultRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline GetDecodeBlindWatermarkResultRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The name of the project. You can obtain the name of the project from the response of the [CreateProject](https://help.aliyun.com/document_detail/478153.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The ID of the task. You can obtain the ID of the task from the response of the CreateDecodeBlindWatermarkTask operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
    // The type of the task.
    // 
    // *   Set the value to DecodeBlindWatermark.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
