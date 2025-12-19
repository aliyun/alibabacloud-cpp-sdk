// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class CreateTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(Variables, variablesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(Variables, variablesShrink_);
    };
    CreateTaskShrinkRequest() = default ;
    CreateTaskShrinkRequest(const CreateTaskShrinkRequest &) = default ;
    CreateTaskShrinkRequest(CreateTaskShrinkRequest &&) = default ;
    CreateTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskShrinkRequest() = default ;
    CreateTaskShrinkRequest& operator=(const CreateTaskShrinkRequest &) = default ;
    CreateTaskShrinkRequest& operator=(CreateTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->processId_ == nullptr && return this->taskName_ == nullptr && return this->variablesShrink_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateTaskShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline CreateTaskShrinkRequest& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateTaskShrinkRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // variablesShrink Field Functions 
    bool hasVariablesShrink() const { return this->variablesShrink_ != nullptr;};
    void deleteVariablesShrink() { this->variablesShrink_ = nullptr;};
    inline string variablesShrink() const { DARABONBA_PTR_GET_DEFAULT(variablesShrink_, "") };
    inline CreateTaskShrinkRequest& setVariablesShrink(string variablesShrink) { DARABONBA_PTR_SET_VALUE(variablesShrink_, variablesShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> processId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskName_ = nullptr;
    std::shared_ptr<string> variablesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
