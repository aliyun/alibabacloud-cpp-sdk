// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAQUALITYSCANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAQUALITYSCANREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateDataQualityScanRequestComputeResource.hpp>
#include <vector>
#include <alibabacloud/models/UpdateDataQualityScanRequestHooks.hpp>
#include <alibabacloud/models/UpdateDataQualityScanRequestParameters.hpp>
#include <alibabacloud/models/UpdateDataQualityScanRequestRuntimeResource.hpp>
#include <alibabacloud/models/UpdateDataQualityScanRequestTrigger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDataQualityScanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataQualityScanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Hooks, hooks_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Trigger, trigger_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataQualityScanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Hooks, hooks_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
    };
    UpdateDataQualityScanRequest() = default ;
    UpdateDataQualityScanRequest(const UpdateDataQualityScanRequest &) = default ;
    UpdateDataQualityScanRequest(UpdateDataQualityScanRequest &&) = default ;
    UpdateDataQualityScanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataQualityScanRequest() = default ;
    UpdateDataQualityScanRequest& operator=(const UpdateDataQualityScanRequest &) = default ;
    UpdateDataQualityScanRequest& operator=(UpdateDataQualityScanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->computeResource_ != nullptr
        && this->description_ != nullptr && this->hooks_ != nullptr && this->id_ != nullptr && this->name_ != nullptr && this->owner_ != nullptr
        && this->parameters_ != nullptr && this->projectId_ != nullptr && this->runtimeResource_ != nullptr && this->spec_ != nullptr && this->trigger_ != nullptr; };
    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline const UpdateDataQualityScanRequestComputeResource & computeResource() const { DARABONBA_PTR_GET_CONST(computeResource_, UpdateDataQualityScanRequestComputeResource) };
    inline UpdateDataQualityScanRequestComputeResource computeResource() { DARABONBA_PTR_GET(computeResource_, UpdateDataQualityScanRequestComputeResource) };
    inline UpdateDataQualityScanRequest& setComputeResource(const UpdateDataQualityScanRequestComputeResource & computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };
    inline UpdateDataQualityScanRequest& setComputeResource(UpdateDataQualityScanRequestComputeResource && computeResource) { DARABONBA_PTR_SET_RVALUE(computeResource_, computeResource) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDataQualityScanRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hooks Field Functions 
    bool hasHooks() const { return this->hooks_ != nullptr;};
    void deleteHooks() { this->hooks_ = nullptr;};
    inline const vector<UpdateDataQualityScanRequestHooks> & hooks() const { DARABONBA_PTR_GET_CONST(hooks_, vector<UpdateDataQualityScanRequestHooks>) };
    inline vector<UpdateDataQualityScanRequestHooks> hooks() { DARABONBA_PTR_GET(hooks_, vector<UpdateDataQualityScanRequestHooks>) };
    inline UpdateDataQualityScanRequest& setHooks(const vector<UpdateDataQualityScanRequestHooks> & hooks) { DARABONBA_PTR_SET_VALUE(hooks_, hooks) };
    inline UpdateDataQualityScanRequest& setHooks(vector<UpdateDataQualityScanRequestHooks> && hooks) { DARABONBA_PTR_SET_RVALUE(hooks_, hooks) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateDataQualityScanRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateDataQualityScanRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline UpdateDataQualityScanRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<UpdateDataQualityScanRequestParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<UpdateDataQualityScanRequestParameters>) };
    inline vector<UpdateDataQualityScanRequestParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<UpdateDataQualityScanRequestParameters>) };
    inline UpdateDataQualityScanRequest& setParameters(const vector<UpdateDataQualityScanRequestParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline UpdateDataQualityScanRequest& setParameters(vector<UpdateDataQualityScanRequestParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateDataQualityScanRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runtimeResource Field Functions 
    bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
    void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
    inline const UpdateDataQualityScanRequestRuntimeResource & runtimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, UpdateDataQualityScanRequestRuntimeResource) };
    inline UpdateDataQualityScanRequestRuntimeResource runtimeResource() { DARABONBA_PTR_GET(runtimeResource_, UpdateDataQualityScanRequestRuntimeResource) };
    inline UpdateDataQualityScanRequest& setRuntimeResource(const UpdateDataQualityScanRequestRuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
    inline UpdateDataQualityScanRequest& setRuntimeResource(UpdateDataQualityScanRequestRuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline UpdateDataQualityScanRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline const UpdateDataQualityScanRequestTrigger & trigger() const { DARABONBA_PTR_GET_CONST(trigger_, UpdateDataQualityScanRequestTrigger) };
    inline UpdateDataQualityScanRequestTrigger trigger() { DARABONBA_PTR_GET(trigger_, UpdateDataQualityScanRequestTrigger) };
    inline UpdateDataQualityScanRequest& setTrigger(const UpdateDataQualityScanRequestTrigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
    inline UpdateDataQualityScanRequest& setTrigger(UpdateDataQualityScanRequestTrigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


  protected:
    // The compute engine used during execution. If it\\"s not specified, the data source connection defined in the Spec will be used.
    std::shared_ptr<UpdateDataQualityScanRequestComputeResource> computeResource_ = nullptr;
    // Description of the data quality monitor.
    std::shared_ptr<string> description_ = nullptr;
    // The hook configuration after the data quality monitor stops.
    std::shared_ptr<vector<UpdateDataQualityScanRequestHooks>> hooks_ = nullptr;
    // The ID of the data quality monitor.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the data quality monitor.
    std::shared_ptr<string> name_ = nullptr;
    // The user ID of the owner of the data quality monitor.
    std::shared_ptr<string> owner_ = nullptr;
    // The definition of execution parameters for the data quality monitor.
    std::shared_ptr<vector<UpdateDataQualityScanRequestParameters>> parameters_ = nullptr;
    // The ID of the DataWorks workspace where the data quality monitor resides. You can obtain the workspace ID by calling the [ListProjects](https://help.aliyun.com/document_detail/2852607.html) operation.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The resource group used during the execution of the data quality monitor.
    std::shared_ptr<UpdateDataQualityScanRequestRuntimeResource> runtimeResource_ = nullptr;
    // The Spec code of the data quality monitoring content. For more information, see [Data quality Spec configuration description](https://help.aliyun.com/document_detail/2963394.html).
    std::shared_ptr<string> spec_ = nullptr;
    // Trigger settings for the data quality monitor.
    std::shared_ptr<UpdateDataQualityScanRequestTrigger> trigger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
