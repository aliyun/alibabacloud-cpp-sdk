// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOLABELCLASSIFICATIONRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOLABELCLASSIFICATIONRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GetVideoLabelClassificationResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoLabelClassificationResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoLabelClassificationResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    GetVideoLabelClassificationResultRequest() = default ;
    GetVideoLabelClassificationResultRequest(const GetVideoLabelClassificationResultRequest &) = default ;
    GetVideoLabelClassificationResultRequest(GetVideoLabelClassificationResultRequest &&) = default ;
    GetVideoLabelClassificationResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoLabelClassificationResultRequest() = default ;
    GetVideoLabelClassificationResultRequest& operator=(const GetVideoLabelClassificationResultRequest &) = default ;
    GetVideoLabelClassificationResultRequest& operator=(GetVideoLabelClassificationResultRequest &&) = default ;
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
    inline GetVideoLabelClassificationResultRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetVideoLabelClassificationResultRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline GetVideoLabelClassificationResultRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The name of the project. For more information, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The task ID, which is obtained from response parameters of [CreateVideoLabelClassificationTask](https://help.aliyun.com/document_detail/478223.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
    // The type of the task. Valid values:
    // 
    // This parameter is required.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
