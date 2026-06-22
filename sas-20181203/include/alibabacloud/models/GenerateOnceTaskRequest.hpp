// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEONCETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEONCETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GenerateOnceTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateOnceTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateOnceTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    GenerateOnceTaskRequest() = default ;
    GenerateOnceTaskRequest(const GenerateOnceTaskRequest &) = default ;
    GenerateOnceTaskRequest(GenerateOnceTaskRequest &&) = default ;
    GenerateOnceTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateOnceTaskRequest() = default ;
    GenerateOnceTaskRequest& operator=(const GenerateOnceTaskRequest &) = default ;
    GenerateOnceTaskRequest& operator=(GenerateOnceTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->param_ == nullptr
        && this->source_ == nullptr && this->taskName_ == nullptr && this->taskType_ == nullptr; };
    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline string getParam() const { DARABONBA_PTR_GET_DEFAULT(param_, "") };
    inline GenerateOnceTaskRequest& setParam(string param) { DARABONBA_PTR_SET_VALUE(param_, param) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GenerateOnceTaskRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline GenerateOnceTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline GenerateOnceTaskRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // A JSON string that contains additional parameters for the task.
    // 
    // This parameter is required.
    shared_ptr<string> param_ {};
    // The source that initiated the task.
    shared_ptr<string> source_ {};
    // The name of the scan task.
    // 
    // -
    // 
    // -
    // 
    // -
    // 
    // -
    // 
    // -
    // 
    // -
    // 
    // -
    // 
    // -
    // 
    // -
    // 
    // -
    // 
    // This parameter is required.
    shared_ptr<string> taskName_ {};
    // The type of the scan task. Valid values:
    // 
    // - **CLIENT_PROBLEM_CHECK**: a client troubleshooting task
    // 
    // - **CLIENT_DEV_OPS**: a cloud DevOps task
    // 
    // - **ASSET_SECURITY_CHECK**: an asset collection task
    // 
    // - **ASSETS_COLLECTION**: an asset fingerprinting task
    // 
    // - **IMAGE_SCAN**: a container image scan task
    // 
    // - **AI_SECURITY_CHECK**: an AI asset synchronization task
    // 
    // - **IDC_PROBE_SCAN**: an IDC probe scan task
    // 
    // - **ATTACK_SURFACE_SCAN**: an attack surface scan task
    // 
    // - **ASSET_EXPOSURE_SCAN**: an asset exposure scan task
    // 
    // - **VUL_CHECK_TASK**: a vulnerability scan task
    // 
    // This parameter is required.
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
