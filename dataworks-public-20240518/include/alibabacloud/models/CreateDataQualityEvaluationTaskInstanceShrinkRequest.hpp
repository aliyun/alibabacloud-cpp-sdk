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
    virtual bool empty() const override { return this->dataQualityEvaluationTaskId_ == nullptr
        && this->parameters_ == nullptr && this->projectId_ == nullptr && this->runtimeResourceShrink_ == nullptr; };
    // dataQualityEvaluationTaskId Field Functions 
    bool hasDataQualityEvaluationTaskId() const { return this->dataQualityEvaluationTaskId_ != nullptr;};
    void deleteDataQualityEvaluationTaskId() { this->dataQualityEvaluationTaskId_ = nullptr;};
    inline int64_t getDataQualityEvaluationTaskId() const { DARABONBA_PTR_GET_DEFAULT(dataQualityEvaluationTaskId_, 0L) };
    inline CreateDataQualityEvaluationTaskInstanceShrinkRequest& setDataQualityEvaluationTaskId(int64_t dataQualityEvaluationTaskId) { DARABONBA_PTR_SET_VALUE(dataQualityEvaluationTaskId_, dataQualityEvaluationTaskId) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline CreateDataQualityEvaluationTaskInstanceShrinkRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateDataQualityEvaluationTaskInstanceShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runtimeResourceShrink Field Functions 
    bool hasRuntimeResourceShrink() const { return this->runtimeResourceShrink_ != nullptr;};
    void deleteRuntimeResourceShrink() { this->runtimeResourceShrink_ = nullptr;};
    inline string getRuntimeResourceShrink() const { DARABONBA_PTR_GET_DEFAULT(runtimeResourceShrink_, "") };
    inline CreateDataQualityEvaluationTaskInstanceShrinkRequest& setRuntimeResourceShrink(string runtimeResourceShrink) { DARABONBA_PTR_SET_VALUE(runtimeResourceShrink_, runtimeResourceShrink) };


  protected:
    // The ID of the data quality evaluation task.
    // 
    // This parameter is required.
    shared_ptr<int64_t> dataQualityEvaluationTaskId_ {};
    // The execution parameters of the data quality evaluation in the JSON format. The following keys are available:
    // - triggerTime: the millisecond timestamp of the trigger time. This is the base time for the $[yyyymmdd] expression in the data range of data quality monitoring. This key is required.
    // 
    // This parameter is required.
    shared_ptr<string> parameters_ {};
    // The ID of the DataWorks workspace. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace Management page to obtain the ID.
    // 
    // This parameter specifies the DataWorks workspace in which this API operation is performed.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The resource group information. This parameter is required when you run a data quality evaluation on a non-MaxCompute data source.
    shared_ptr<string> runtimeResourceShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
