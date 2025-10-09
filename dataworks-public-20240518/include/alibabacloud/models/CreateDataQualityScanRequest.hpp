// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAQUALITYSCANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAQUALITYSCANREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDataQualityScanRequestComputeResource.hpp>
#include <vector>
#include <alibabacloud/models/CreateDataQualityScanRequestHooks.hpp>
#include <alibabacloud/models/CreateDataQualityScanRequestParameters.hpp>
#include <alibabacloud/models/CreateDataQualityScanRequestRuntimeResource.hpp>
#include <alibabacloud/models/CreateDataQualityScanRequestTrigger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDataQualityScanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataQualityScanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Hooks, hooks_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Trigger, trigger_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataQualityScanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Hooks, hooks_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
    };
    CreateDataQualityScanRequest() = default ;
    CreateDataQualityScanRequest(const CreateDataQualityScanRequest &) = default ;
    CreateDataQualityScanRequest(CreateDataQualityScanRequest &&) = default ;
    CreateDataQualityScanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataQualityScanRequest() = default ;
    CreateDataQualityScanRequest& operator=(const CreateDataQualityScanRequest &) = default ;
    CreateDataQualityScanRequest& operator=(CreateDataQualityScanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->computeResource_ != nullptr && this->description_ != nullptr && this->hooks_ != nullptr && this->name_ != nullptr && this->owner_ != nullptr
        && this->parameters_ != nullptr && this->projectId_ != nullptr && this->runtimeResource_ != nullptr && this->spec_ != nullptr && this->trigger_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDataQualityScanRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline const CreateDataQualityScanRequestComputeResource & computeResource() const { DARABONBA_PTR_GET_CONST(computeResource_, CreateDataQualityScanRequestComputeResource) };
    inline CreateDataQualityScanRequestComputeResource computeResource() { DARABONBA_PTR_GET(computeResource_, CreateDataQualityScanRequestComputeResource) };
    inline CreateDataQualityScanRequest& setComputeResource(const CreateDataQualityScanRequestComputeResource & computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };
    inline CreateDataQualityScanRequest& setComputeResource(CreateDataQualityScanRequestComputeResource && computeResource) { DARABONBA_PTR_SET_RVALUE(computeResource_, computeResource) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDataQualityScanRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hooks Field Functions 
    bool hasHooks() const { return this->hooks_ != nullptr;};
    void deleteHooks() { this->hooks_ = nullptr;};
    inline const vector<CreateDataQualityScanRequestHooks> & hooks() const { DARABONBA_PTR_GET_CONST(hooks_, vector<CreateDataQualityScanRequestHooks>) };
    inline vector<CreateDataQualityScanRequestHooks> hooks() { DARABONBA_PTR_GET(hooks_, vector<CreateDataQualityScanRequestHooks>) };
    inline CreateDataQualityScanRequest& setHooks(const vector<CreateDataQualityScanRequestHooks> & hooks) { DARABONBA_PTR_SET_VALUE(hooks_, hooks) };
    inline CreateDataQualityScanRequest& setHooks(vector<CreateDataQualityScanRequestHooks> && hooks) { DARABONBA_PTR_SET_RVALUE(hooks_, hooks) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDataQualityScanRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline CreateDataQualityScanRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<CreateDataQualityScanRequestParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<CreateDataQualityScanRequestParameters>) };
    inline vector<CreateDataQualityScanRequestParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<CreateDataQualityScanRequestParameters>) };
    inline CreateDataQualityScanRequest& setParameters(const vector<CreateDataQualityScanRequestParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline CreateDataQualityScanRequest& setParameters(vector<CreateDataQualityScanRequestParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateDataQualityScanRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runtimeResource Field Functions 
    bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
    void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
    inline const CreateDataQualityScanRequestRuntimeResource & runtimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, CreateDataQualityScanRequestRuntimeResource) };
    inline CreateDataQualityScanRequestRuntimeResource runtimeResource() { DARABONBA_PTR_GET(runtimeResource_, CreateDataQualityScanRequestRuntimeResource) };
    inline CreateDataQualityScanRequest& setRuntimeResource(const CreateDataQualityScanRequestRuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
    inline CreateDataQualityScanRequest& setRuntimeResource(CreateDataQualityScanRequestRuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline CreateDataQualityScanRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline const CreateDataQualityScanRequestTrigger & trigger() const { DARABONBA_PTR_GET_CONST(trigger_, CreateDataQualityScanRequestTrigger) };
    inline CreateDataQualityScanRequestTrigger trigger() { DARABONBA_PTR_GET(trigger_, CreateDataQualityScanRequestTrigger) };
    inline CreateDataQualityScanRequest& setTrigger(const CreateDataQualityScanRequestTrigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
    inline CreateDataQualityScanRequest& setTrigger(CreateDataQualityScanRequestTrigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


  protected:
    // The idempotency token.
    // 
    // This parameter is required.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The compute engine used at runtime. If not specified, the data source defined in the Spec is used.
    std::shared_ptr<CreateDataQualityScanRequestComputeResource> computeResource_ = nullptr;
    // The description of the data quality monitor.
    std::shared_ptr<string> description_ = nullptr;
    // The Hook configurations after the data quality monitoring run ends.
    std::shared_ptr<vector<CreateDataQualityScanRequestHooks>> hooks_ = nullptr;
    // The data quality monitoring name.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the user who owns of the data quality monitor.
    std::shared_ptr<string> owner_ = nullptr;
    // The definition of execution parameters for the data quality monitoring.
    std::shared_ptr<vector<CreateDataQualityScanRequestParameters>> parameters_ = nullptr;
    // The DataWorks workspace ID. You can log on to the DataWorks console and go to the workspace configuration page to obtain the workspace ID. This parameter is required to specify the target DataWorks workspace for this API operation.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The resource group used during execution of the data quality monitoring.
    std::shared_ptr<CreateDataQualityScanRequestRuntimeResource> runtimeResource_ = nullptr;
    // Spec code for the content of the data quality monitoring.
    std::shared_ptr<string> spec_ = nullptr;
    // The trigger configurations of the data quality monitoring task.
    std::shared_ptr<CreateDataQualityScanRequestTrigger> trigger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
