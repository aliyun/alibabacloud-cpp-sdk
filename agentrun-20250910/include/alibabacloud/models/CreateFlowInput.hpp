// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFLOWINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEFLOWINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EnvironmentConfiguration.hpp>
#include <alibabacloud/models/LoggingConfiguration.hpp>
#include <alibabacloud/models/TracingConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateFlowInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFlowInput& obj) { 
      DARABONBA_PTR_TO_JSON(definition, definition_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(disablePublicNetworkAccess, disablePublicNetworkAccess_);
      DARABONBA_PTR_TO_JSON(environmentConfiguration, environmentConfiguration_);
      DARABONBA_PTR_TO_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_TO_JSON(externalStorageLocation, externalStorageLocation_);
      DARABONBA_PTR_TO_JSON(flowName, flowName_);
      DARABONBA_PTR_TO_JSON(loggingConfiguration, loggingConfiguration_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(tracingConfiguration, tracingConfiguration_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFlowInput& obj) { 
      DARABONBA_PTR_FROM_JSON(definition, definition_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(disablePublicNetworkAccess, disablePublicNetworkAccess_);
      DARABONBA_PTR_FROM_JSON(environmentConfiguration, environmentConfiguration_);
      DARABONBA_PTR_FROM_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_FROM_JSON(externalStorageLocation, externalStorageLocation_);
      DARABONBA_PTR_FROM_JSON(flowName, flowName_);
      DARABONBA_PTR_FROM_JSON(loggingConfiguration, loggingConfiguration_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(tracingConfiguration, tracingConfiguration_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    CreateFlowInput() = default ;
    CreateFlowInput(const CreateFlowInput &) = default ;
    CreateFlowInput(CreateFlowInput &&) = default ;
    CreateFlowInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFlowInput() = default ;
    CreateFlowInput& operator=(const CreateFlowInput &) = default ;
    CreateFlowInput& operator=(CreateFlowInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->definition_ == nullptr
        && this->description_ == nullptr && this->disablePublicNetworkAccess_ == nullptr && this->environmentConfiguration_ == nullptr && this->executionRoleArn_ == nullptr && this->externalStorageLocation_ == nullptr
        && this->flowName_ == nullptr && this->loggingConfiguration_ == nullptr && this->resourceGroupId_ == nullptr && this->tracingConfiguration_ == nullptr && this->workspaceId_ == nullptr; };
    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline string getDefinition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
    inline CreateFlowInput& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateFlowInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disablePublicNetworkAccess Field Functions 
    bool hasDisablePublicNetworkAccess() const { return this->disablePublicNetworkAccess_ != nullptr;};
    void deleteDisablePublicNetworkAccess() { this->disablePublicNetworkAccess_ = nullptr;};
    inline bool getDisablePublicNetworkAccess() const { DARABONBA_PTR_GET_DEFAULT(disablePublicNetworkAccess_, false) };
    inline CreateFlowInput& setDisablePublicNetworkAccess(bool disablePublicNetworkAccess) { DARABONBA_PTR_SET_VALUE(disablePublicNetworkAccess_, disablePublicNetworkAccess) };


    // environmentConfiguration Field Functions 
    bool hasEnvironmentConfiguration() const { return this->environmentConfiguration_ != nullptr;};
    void deleteEnvironmentConfiguration() { this->environmentConfiguration_ = nullptr;};
    inline const EnvironmentConfiguration & getEnvironmentConfiguration() const { DARABONBA_PTR_GET_CONST(environmentConfiguration_, EnvironmentConfiguration) };
    inline EnvironmentConfiguration getEnvironmentConfiguration() { DARABONBA_PTR_GET(environmentConfiguration_, EnvironmentConfiguration) };
    inline CreateFlowInput& setEnvironmentConfiguration(const EnvironmentConfiguration & environmentConfiguration) { DARABONBA_PTR_SET_VALUE(environmentConfiguration_, environmentConfiguration) };
    inline CreateFlowInput& setEnvironmentConfiguration(EnvironmentConfiguration && environmentConfiguration) { DARABONBA_PTR_SET_RVALUE(environmentConfiguration_, environmentConfiguration) };


    // executionRoleArn Field Functions 
    bool hasExecutionRoleArn() const { return this->executionRoleArn_ != nullptr;};
    void deleteExecutionRoleArn() { this->executionRoleArn_ = nullptr;};
    inline string getExecutionRoleArn() const { DARABONBA_PTR_GET_DEFAULT(executionRoleArn_, "") };
    inline CreateFlowInput& setExecutionRoleArn(string executionRoleArn) { DARABONBA_PTR_SET_VALUE(executionRoleArn_, executionRoleArn) };


    // externalStorageLocation Field Functions 
    bool hasExternalStorageLocation() const { return this->externalStorageLocation_ != nullptr;};
    void deleteExternalStorageLocation() { this->externalStorageLocation_ = nullptr;};
    inline string getExternalStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(externalStorageLocation_, "") };
    inline CreateFlowInput& setExternalStorageLocation(string externalStorageLocation) { DARABONBA_PTR_SET_VALUE(externalStorageLocation_, externalStorageLocation) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string getFlowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline CreateFlowInput& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // loggingConfiguration Field Functions 
    bool hasLoggingConfiguration() const { return this->loggingConfiguration_ != nullptr;};
    void deleteLoggingConfiguration() { this->loggingConfiguration_ = nullptr;};
    inline const LoggingConfiguration & getLoggingConfiguration() const { DARABONBA_PTR_GET_CONST(loggingConfiguration_, LoggingConfiguration) };
    inline LoggingConfiguration getLoggingConfiguration() { DARABONBA_PTR_GET(loggingConfiguration_, LoggingConfiguration) };
    inline CreateFlowInput& setLoggingConfiguration(const LoggingConfiguration & loggingConfiguration) { DARABONBA_PTR_SET_VALUE(loggingConfiguration_, loggingConfiguration) };
    inline CreateFlowInput& setLoggingConfiguration(LoggingConfiguration && loggingConfiguration) { DARABONBA_PTR_SET_RVALUE(loggingConfiguration_, loggingConfiguration) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateFlowInput& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tracingConfiguration Field Functions 
    bool hasTracingConfiguration() const { return this->tracingConfiguration_ != nullptr;};
    void deleteTracingConfiguration() { this->tracingConfiguration_ = nullptr;};
    inline const TracingConfiguration & getTracingConfiguration() const { DARABONBA_PTR_GET_CONST(tracingConfiguration_, TracingConfiguration) };
    inline TracingConfiguration getTracingConfiguration() { DARABONBA_PTR_GET(tracingConfiguration_, TracingConfiguration) };
    inline CreateFlowInput& setTracingConfiguration(const TracingConfiguration & tracingConfiguration) { DARABONBA_PTR_SET_VALUE(tracingConfiguration_, tracingConfiguration) };
    inline CreateFlowInput& setTracingConfiguration(TracingConfiguration && tracingConfiguration) { DARABONBA_PTR_SET_RVALUE(tracingConfiguration_, tracingConfiguration) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateFlowInput& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The definition of the workflow in JSON or YAML format.
    shared_ptr<string> definition_ {};
    // The description of the workflow, which explains the purpose and functionality of the workflow.
    shared_ptr<string> description_ {};
    // Specifies whether to disable public network access for the workflow. This value serves as the default policy at the workflow level. If FlowEndpoint is not specified, this value is inherited.
    shared_ptr<bool> disablePublicNetworkAccess_ {};
    // The environment variable configuration of the workflow, which contains a list of named variables.
    shared_ptr<EnvironmentConfiguration> environmentConfiguration_ {};
    // The Alibaba Cloud Resource Name (ARN) of the execution role that grants the workflow permissions to access cloud services.
    shared_ptr<string> executionRoleArn_ {};
    // The external storage location of the workflow, such as an OSS path.
    shared_ptr<string> externalStorageLocation_ {};
    // The unique name of the workflow, which is used to distinguish different workflow instances.
    // 
    // This parameter is required.
    shared_ptr<string> flowName_ {};
    // The logging configuration of the workflow.
    shared_ptr<LoggingConfiguration> loggingConfiguration_ {};
    // The ID of the resource group to which the workflow belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The Tracing Analysis configuration of the workflow.
    shared_ptr<TracingConfiguration> tracingConfiguration_ {};
    // The ID of the workspace to which the workflow belongs. This parameter is used for resource isolation and permission management.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
