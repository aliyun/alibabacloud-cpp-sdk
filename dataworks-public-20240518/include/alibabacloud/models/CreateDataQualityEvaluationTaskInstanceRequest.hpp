// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAQUALITYEVALUATIONTASKINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAQUALITYEVALUATIONTASKINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDataQualityEvaluationTaskInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataQualityEvaluationTaskInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityEvaluationTaskId, dataQualityEvaluationTaskId_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataQualityEvaluationTaskInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityEvaluationTaskId, dataQualityEvaluationTaskId_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
    };
    CreateDataQualityEvaluationTaskInstanceRequest() = default ;
    CreateDataQualityEvaluationTaskInstanceRequest(const CreateDataQualityEvaluationTaskInstanceRequest &) = default ;
    CreateDataQualityEvaluationTaskInstanceRequest(CreateDataQualityEvaluationTaskInstanceRequest &&) = default ;
    CreateDataQualityEvaluationTaskInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataQualityEvaluationTaskInstanceRequest() = default ;
    CreateDataQualityEvaluationTaskInstanceRequest& operator=(const CreateDataQualityEvaluationTaskInstanceRequest &) = default ;
    CreateDataQualityEvaluationTaskInstanceRequest& operator=(CreateDataQualityEvaluationTaskInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuntimeResource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuntimeResource& obj) { 
        DARABONBA_PTR_TO_JSON(Cu, cu_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      };
      friend void from_json(const Darabonba::Json& j, RuntimeResource& obj) { 
        DARABONBA_PTR_FROM_JSON(Cu, cu_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      };
      RuntimeResource() = default ;
      RuntimeResource(const RuntimeResource &) = default ;
      RuntimeResource(RuntimeResource &&) = default ;
      RuntimeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuntimeResource() = default ;
      RuntimeResource& operator=(const RuntimeResource &) = default ;
      RuntimeResource& operator=(RuntimeResource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cu_ == nullptr
        && this->resourceGroupId_ == nullptr; };
      // cu Field Functions 
      bool hasCu() const { return this->cu_ != nullptr;};
      void deleteCu() { this->cu_ = nullptr;};
      inline double getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0.0) };
      inline RuntimeResource& setCu(double cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline RuntimeResource& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    protected:
      // The task runs to configure CU consumption. If Serverless resource groups are used, you must specify this parameter.
      shared_ptr<double> cu_ {};
      // The identifier of the scheduling resource group configured for running the task.
      shared_ptr<string> resourceGroupId_ {};
    };

    virtual bool empty() const override { return this->dataQualityEvaluationTaskId_ == nullptr
        && this->parameters_ == nullptr && this->projectId_ == nullptr && this->runtimeResource_ == nullptr; };
    // dataQualityEvaluationTaskId Field Functions 
    bool hasDataQualityEvaluationTaskId() const { return this->dataQualityEvaluationTaskId_ != nullptr;};
    void deleteDataQualityEvaluationTaskId() { this->dataQualityEvaluationTaskId_ = nullptr;};
    inline int64_t getDataQualityEvaluationTaskId() const { DARABONBA_PTR_GET_DEFAULT(dataQualityEvaluationTaskId_, 0L) };
    inline CreateDataQualityEvaluationTaskInstanceRequest& setDataQualityEvaluationTaskId(int64_t dataQualityEvaluationTaskId) { DARABONBA_PTR_SET_VALUE(dataQualityEvaluationTaskId_, dataQualityEvaluationTaskId) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline CreateDataQualityEvaluationTaskInstanceRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateDataQualityEvaluationTaskInstanceRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runtimeResource Field Functions 
    bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
    void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
    inline const CreateDataQualityEvaluationTaskInstanceRequest::RuntimeResource & getRuntimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, CreateDataQualityEvaluationTaskInstanceRequest::RuntimeResource) };
    inline CreateDataQualityEvaluationTaskInstanceRequest::RuntimeResource getRuntimeResource() { DARABONBA_PTR_GET(runtimeResource_, CreateDataQualityEvaluationTaskInstanceRequest::RuntimeResource) };
    inline CreateDataQualityEvaluationTaskInstanceRequest& setRuntimeResource(const CreateDataQualityEvaluationTaskInstanceRequest::RuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
    inline CreateDataQualityEvaluationTaskInstanceRequest& setRuntimeResource(CreateDataQualityEvaluationTaskInstanceRequest::RuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


  protected:
    // The ID of the data quality monitoring task.
    // 
    // This parameter is required.
    shared_ptr<int64_t> dataQualityEvaluationTaskId_ {};
    // Data quality verification execution parameters in JSON format. The available keys are as follows:
    // - triggerTime: the millisecond timestamp of the trigger time. The baseline time of the $[yyyymmdd] expression in the data range of data quality monitoring. Required.
    // 
    // This parameter is required.
    shared_ptr<string> parameters_ {};
    // The ID of the DataWorks workspace. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the workspace management page to obtain the ID.
    // 
    // This parameter is used to determine the DataWorks workspaces used for this API call.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // Resource Group information, which must be filled in when running non-MaxCompute data quality verification.
    shared_ptr<CreateDataQualityEvaluationTaskInstanceRequest::RuntimeResource> runtimeResource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
