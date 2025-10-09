// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAQUALITYEVALUATIONTASKINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAQUALITYEVALUATIONTASKINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDataQualityEvaluationTaskInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataQualityEvaluationTaskInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityEvaluationTaskId, dataQualityEvaluationTaskId_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResourceShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataQualityEvaluationTaskInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityEvaluationTaskId, dataQualityEvaluationTaskId_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResourceShrink_);
    };
    CreateDataQualityEvaluationTaskInstanceShrinkRequest() = default ;
    CreateDataQualityEvaluationTaskInstanceShrinkRequest(const CreateDataQualityEvaluationTaskInstanceShrinkRequest &) = default ;
    CreateDataQualityEvaluationTaskInstanceShrinkRequest(CreateDataQualityEvaluationTaskInstanceShrinkRequest &&) = default ;
    CreateDataQualityEvaluationTaskInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataQualityEvaluationTaskInstanceShrinkRequest() = default ;
    CreateDataQualityEvaluationTaskInstanceShrinkRequest& operator=(const CreateDataQualityEvaluationTaskInstanceShrinkRequest &) = default ;
    CreateDataQualityEvaluationTaskInstanceShrinkRequest& operator=(CreateDataQualityEvaluationTaskInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataQualityEvaluationTaskId_ != nullptr
        && this->parameters_ != nullptr && this->projectId_ != nullptr && this->runtimeResourceShrink_ != nullptr; };
    // dataQualityEvaluationTaskId Field Functions 
    bool hasDataQualityEvaluationTaskId() const { return this->dataQualityEvaluationTaskId_ != nullptr;};
    void deleteDataQualityEvaluationTaskId() { this->dataQualityEvaluationTaskId_ = nullptr;};
    inline int64_t dataQualityEvaluationTaskId() const { DARABONBA_PTR_GET_DEFAULT(dataQualityEvaluationTaskId_, 0L) };
    inline CreateDataQualityEvaluationTaskInstanceShrinkRequest& setDataQualityEvaluationTaskId(int64_t dataQualityEvaluationTaskId) { DARABONBA_PTR_SET_VALUE(dataQualityEvaluationTaskId_, dataQualityEvaluationTaskId) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline CreateDataQualityEvaluationTaskInstanceShrinkRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateDataQualityEvaluationTaskInstanceShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runtimeResourceShrink Field Functions 
    bool hasRuntimeResourceShrink() const { return this->runtimeResourceShrink_ != nullptr;};
    void deleteRuntimeResourceShrink() { this->runtimeResourceShrink_ = nullptr;};
    inline string runtimeResourceShrink() const { DARABONBA_PTR_GET_DEFAULT(runtimeResourceShrink_, "") };
    inline CreateDataQualityEvaluationTaskInstanceShrinkRequest& setRuntimeResourceShrink(string runtimeResourceShrink) { DARABONBA_PTR_SET_VALUE(runtimeResourceShrink_, runtimeResourceShrink) };


  protected:
    // The ID of the data quality monitoring task.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dataQualityEvaluationTaskId_ = nullptr;
    // Data quality verification execution parameters in JSON format. The available keys are as follows:
    // - triggerTime: the millisecond timestamp of the trigger time. The baseline time of the $[yyyymmdd] expression in the data range of data quality monitoring. Required.
    // 
    // This parameter is required.
    std::shared_ptr<string> parameters_ = nullptr;
    // The ID of the DataWorks workspace. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the workspace management page to obtain the ID.
    // 
    // This parameter is used to determine the DataWorks workspaces used for this API call.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // Resource Group information, which must be filled in when running non-MaxCompute data quality verification.
    std::shared_ptr<string> runtimeResourceShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
